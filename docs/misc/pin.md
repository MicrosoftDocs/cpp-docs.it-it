---
title: "__pin | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__pin"
  - "__pin_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "puntatori di blocco, parola chiave PIN"
  - "tipi non gestiti"
  - "__pin (parola chiave)"
ms.assetid: 8b55c792-5654-4669-bb0e-a52100f4cabe
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __pin
**Nota** Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Vedere [pin\_ptr \(C\+\+\/CLI\)](../windows/pin-ptr-cpp-cli.md) per informazioni sull'utilizzo della funzionalità equivalente nella nuova sintassi.  
  
 Impedisce lo spostamento di un oggetto o di un oggetto incorporato di una classe gestita da parte di Common Language Runtime durante un'operazione di Garbage Collection.  
  
## Sintassi  
  
```  
  
__pin   
identifier  
  
```  
  
## Note  
 La parola chiave `__pin` dichiara un puntatore a un oggetto o a un oggetto incorporato di una classe gestita e impedisce lo spostamento di tale oggetto da parte di Common Language Runtime durante un'operazione di Garbage Collection. Ciò si rivela utile quando si passa l'indirizzo di una classe gestita a una funzione non gestita poiché l'indirizzo non cambierà in modo imprevisto durante la risoluzione della chiamata della funzione non gestita.  
  
 Un puntatore di blocco rimane valido nel relativo ambito lessicale. Non appena il puntatore di blocco diventa esterno all'ambito, l'oggetto non viene più considerato bloccato, a meno che esistano altri puntatori di blocco che puntano all'oggetto o all'interno di tale oggetto.  
  
 In MSIL non esiste il concetto di "ambito blocco": tutte le variabili locali risiedono nell'ambito della funzione. Per comunicare al sistema che il blocco non è più attivo, il compilatore genera codice che assegna il valore NULL al puntatore di blocco. Si tratta inoltre di operazioni che è possibile eseguire manualmente, se è necessario sbloccare l'oggetto senza lasciare il blocco.  
  
 Non convertire il puntatore di blocco in un puntatore non gestito e continuare a utilizzare questo puntatore non gestito dopo che l'oggetto non è più bloccato, ovvero dopo che il puntatore di blocco diventa esterno all'ambito. A differenza dei puntatori gc, i puntatori di blocco possono essere convertiti in puntatori nogc non gestiti. Tuttavia, l'utente è tenuto a mantenere il blocco durante l'utilizzo del puntatore non gestito.  
  
 L'utilizzo di un puntatore bloccato per ottenere l'indirizzo di una variabile, quindi l'utilizzo di tale indirizzo dopo che il puntatore diventa esterno all'ambito non è consigliabile.  
  
```  
// keyword_pin_scope_bad.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
__gc struct X {  
   int x;  
};  
  
int* Get_x( X* pX ) {  
   int __pin* px = &pX -> x;  
   return px;   // BE CAREFUL px goes of scope,   
                // so object pointed by it is no longer pinned,  
                // making the return value unsafe.  
}  
```  
  
 Nel seguente esempio viene illustrato il comportamento corretto.  
  
```  
// keyword_pin_scope_good.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
__gc struct X {  
   int x;  
};  
  
int Get_x( X* pX ) {  
   int __pin* px = &pX -> x;  
   return *px;   // OK, value obtained from px before px out of scope  
}  
```  
  
## Esempio  
 Nell'esempio seguente, l'oggetto a cui fa riferimento `pG` viene bloccato fino a quando non diventa esterno all'ambito:  
  
```  
// keyword__pin.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
#include <iostream>  
  
__gc class G {   
public:   
   int i;   
   G() {i = 0;};  
};  
  
class H {  
public:  
   // unmanaged function  
   void incr(int * i) {  
      (*i)++;   
      std::cout << *i << std::endl;  
   };  
};  
  
int main() {  
   G __pin * pG = new G;  // pG is a pinning pointer  
   H * h = new H;  
   // pointer to managed data passed as actual parameter of unmanaged   
   // function call  
   h->incr(& pG -> i);   
}  
```  
  
## Output  
  
```  
1  
```