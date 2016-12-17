---
title: "__assume | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__assume"
  - "__assume_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__assume keyword [C++]"
ms.assetid: d8565123-b132-44b1-8235-5a8c8bff85a7
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __assume
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Passa un hint all'utilità di ottimizzazione.  
  
## Sintassi  
  
```  
__assume(    expression )  
```  
  
#### Parametri  
 `expression`  
 Espressione che si presuppone restituisca true.  
  
## Note  
 L'utilità di ottimizzazione presuppone che la condizione rappresentata dal parametro `expression` sia true nel punto in cui viene visualizzata la parola chiave e rimanga true finché `expression` non viene modificato, ad esempio da un'assegnazione a una variabile.  L'uso selettivo degli hint passati all'utilità di ottimizzazione da `__assume` possono migliorare l'ottimizzazione.  
  
 Se l'istruzione `__assume` viene scritta come contraddizione \(un'espressione che restituisce sempre false\), verrà sempre considerata come `__assume(0)`.  Se il codice non si comporta come previsto, verificare che il parametro `expression` definito sia valido e true, come descritto in precedenza.  Per altre informazioni sul comportamento previsto di `__assume(0)`, vedere quanto descritto più avanti.  
  
> [!WARNING]
>  Un programma non deve contenere un'istruzione `__assume` non valida in un percorso raggiungibile.  Se il compilatore può raggiungere un'istruzione `__assume` non valida, il programma potrebbe causare un comportamento imprevedibile e potenzialmente pericoloso.  
  
 `__assume` non è una funzione intrinseca originale.  Non deve essere dichiarata come funzione e non può essere usata in una direttiva `#pragma intrinsic`.  Anche se non viene generato alcun codice, viene interessato il codice generato dall'utilità di ottimizzazione.  
  
 Usare `__assume` in [ASSERT](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) solo quando l'asserzione non è recuperabile.  Non usare `__assume` in un'asserzione per cui si dispone di un codice di recupero da errori successivi perché il compilatore potrebbe ottimizzare il codice di gestione degli errori.  
  
 L'istruzione `__assume(0)` è un caso speciale.  Usare `__assume(0)` per indicare un percorso del codice che non può essere raggiunto.  L'esempio seguente illustra come usare `__assume(0)` per indicare che il caso predefinito di un'istruzione switch non può essere raggiunto.  Viene illustrato l'uso più comune di `__assume(0)`.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`__assume`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
## Esempio  
  
```  
// compiler_intrinsics__assume.cpp  
#ifdef DEBUG  
# define ASSERT(e)    ( ((e) || assert(__FILE__, __LINE__) )  
#else  
# define ASSERT(e)    ( __assume(e) )  
#endif  
  
void func1(int i)  
{  
}  
  
int main(int p)  
{  
   switch(p){  
      case 1:  
         func1(1);  
         break;  
      case 2:  
         func1(-1);  
         break;  
      default:  
         __assume(0);  
            // This tells the optimizer that the default  
            // cannot be reached. As so, it does not have to generate  
            // the extra code to check that 'p' has a value   
            // not represented by a case arm. This makes the switch   
            // run faster.  
   }  
}  
```  
  
 L'uso di `__assume(0)` indica all'utilità di ottimizzazione che il caso predefinito non può essere raggiunto.  L'esempio illustra che il programmatore conosce che gli unici input possibili per `p` sono 1 o 2.  Se viene passato un altro valore per `p`, il programma diventa non valido e causa un comportamento imprevedibile.  
  
 A causa dell'istruzione `__assume(0)`, il compilatore non genera il codice per testare se `p` ha un valore che non è rappresentato in un'istruzione case.  Per funzionare, l'istruzione `__assume(0)` deve essere la prima istruzione nel corpo del caso predefinito.  
  
 Poiché il compilatore genera il codice in base a `__assume`, tale codice potrebbe non funzionare correttamente se l'espressione all'interno dell'istruzione `__assume` è false al runtime.  Se non si è certi che l'espressione sarà sempre true al runtime, è possibile usare la funzione `assert` per proteggere il codice.  
  
```  
#define ASSERT(e)    ( ((e) || assert(__FILE__, __LINE__)), __assume(e) )  
```  
  
 Purtroppo, l'uso della funzione `assert` impedisce al compilatore di eseguire l'ottimizzazione del caso predefinito descritto precedentemente in questo documento.  In alternativa, è possibile usare una macro separata, come illustrato di seguito.  
  
```  
#ifdef DEBUG  
# define NODEFAULT   ASSERT(0)  
#else  
# define NODEFAULT   __assume(0)  
#endif  
  
   default:  
      NODEFAULT;  
```  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)