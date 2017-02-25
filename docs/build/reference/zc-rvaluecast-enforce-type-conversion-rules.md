---
title: "/Zc:rvalueCast (Applicare regole di conversione dei tipi) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "rvaluecast"
  - "/Zc:rvalueCast"
  - "VC.Project.VCCLCompilerTool.EnforceTypeConversionRules"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc (opzioni del compilatore) (C++)"
  - "Applicare regole di conversione dei tipi"
  - "rvaluecast"
  - "Zc (opzioni del compilatore) (C++)"
  - "-Zc (opzioni del compilatore) (C++)"
ms.assetid: 7825277d-e565-4c48-b0fb-76ac0b0c6e38
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /Zc:rvalueCast (Applicare regole di conversione dei tipi)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando è specificata l'opzione **\/Zc:rvalueCast**, il compilatore identifica correttamente un tipo di riferimento Rvalue come risultato di un'operazione cast conforme con lo standard C\+\+11.  Quando l'opzione non è specificata, il comportamento è uguale a quello in Visual Studio 2012.  Per impostazione predefinita, l'opzione **\/Zc:rvalueCast** è disattivata.  Per assicurare la conformità ed eliminare gli errori nell'uso dei cast, è consigliabile usare **\/Zc:rvalueCast**.  
  
## Sintassi  
  
```  
/Zc:rvalueCast[-]  
```  
  
## Note  
 Se l'opzione **\/Zc:rvalueCast** è specificata, il compilatore seguirà la sezione 5.4 dello standard C\+\+11 e considererà come tipi Rvalue solo le espressioni cast che hanno come risultato tipi non corrispondenti a riferimenti ed espressioni che hanno come risultato riferimenti Rvalue a tipi non funzione.  Per impostazione predefinita o se è specificata l'opzione **\/Zc:rvalueCast\-**, il compilatore non sarà conforme e considererà come Rvalue tutte le espressioni cast che hanno come risultato riferimenti Rvalue.  
  
 Usare **\/Zc:rvalueCast** se si passa un'espressione cast come argomento per una funzione che accetta un tipo di riferimento Rvalue.  Il comportamento predefinito provoca un errore [C2664](../../error-messages/compiler-errors-2/compiler-error-c2664.md) del compilatore quando il compilatore determina in modo errato il tipo dell'espressione cast.  Questo esempio mostra un errore del compilatore nel codice corretto quando l'opzione \/Zc:rvalueCast non è specificata:  
  
```cpp  
// Test of /Zc:rvalueCast  
// compile by using:  
// cl /c /Zc:rvalueCast- make_thing.cpp  
// cl /c /Zc:rvalueCast make_thing.cpp  
  
#include <utility>  
  
template <typename T>   
struct Thing {  
   // Construct a Thing by using two rvalue reference parameters  
   Thing(T&& t1, T&& t2)  
      : thing1(t1), thing2(t2) {}  
  
   T& thing1;  
   T& thing2;  
};  
  
// Create a Thing, using move semantics if possible  
template <typename T>  
Thing<T> make_thing(T&& t1, T&& t2)  
{  
   return (Thing<T>(std::forward<T>(t1), std::forward<T>(t2)));  
}  
  
struct Test1 {  
   long a;  
   long b;  
  
   Thing<long> test() {   
      // Use identity casts to create rvalues as arguments  
      return make_thing(static_cast<long>(a), static_cast<long>(b));   
   }  
};  
  
```  
  
 È possibile che il comportamento predefinito del compilatore non segnali l'errore C2102 quando appropriato.  In questo esempio il compilatore non segnala un errore se l'indirizzo di un Rvalue creato da un cast di identità è accettato quando non si specifica l'opzione **\/Zc:rvalueCast**:  
  
```cpp  
int main() {  
   int a = 1;  
   int *p = &a;   // Okay, take address of lvalue   
                  // Identity cast creates rvalue from lvalue;    
   p = &(int)a;   // problem: should cause C2102: '&' requires l-value  
}  
```  
  
 Per altre informazioni sui problemi di conformità in Visual C\+\+, vedere [Comportamento non standard](../../cpp/nonstandard-behavior.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Modificare la proprietà **Opzioni aggiuntive** in modo da includere **\/Zc:rvalueCast**, quindi fare clic su **OK**.  
  
## Vedere anche  
 [\/Zc \(Conformità\)](../../build/reference/zc-conformance.md)