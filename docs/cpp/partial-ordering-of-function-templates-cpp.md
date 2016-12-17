---
title: "Ordinamento parziale di modelli di funzione (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ordinamento parziale di modelli di funzione"
ms.assetid: 0c17347d-0e80-47ad-b5ac-046462d9dc73
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Ordinamento parziale di modelli di funzione (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Possono essere disponibili più modelli di funzioni corrispondente all'elenco di argomenti di una chiamata di funzione.  In C\+\+ viene definito un ordinamento parziale dei modelli di funzione per specificare la funzione che deve essere chiamata.  L'ordinamento è parziale perché possono essere presenti alcuni modelli considerati ugualmente specializzati.  
  
 Il compilatore sceglie la funzione del modello più specializzato disponibile tra le possibili corrispondenze.  Ad esempio, se un modello di funzione accetta un tipo **T** ed è disponibile un altro modello di funzione che accetta **T\***, la versione **T\*** è più specializzata ed è preferibile rispetto alla versione generica **T** ogni volta che l'argomento è un tipo puntatore, anche se entrambe sarebbero corrispondenze consentite.  
  
 Utilizzare la procedura seguente per determinare se un candidato di modello di funzione è più specializzato:  
  
1.  Considerare due modelli di funzione, T1 e T2.  
  
2.  Sostituire i parametri in T1 con un tipo univoco ipotetico X.  
  
3.  Con l'elenco di parametri in T1, vedere se T2 è un modello valido per tale elenco di parametri.  Ignorare tutte le conversioni implicite.  
  
4.  Ripetere la stessa procedura con T1 e T2 all'inverso.  
  
5.  Se un modello è un elenco di argomenti di modello valido per l'altro modello, ma non è vero il contrario, tale modello è considerato meno specializzato dell'altro.  Se entrambi i modelli utilizzati nel passaggio precedente costituiscono argomenti validi l'uno per l'altro, verranno considerati ugualmente specializzati e il tentativo di utilizzarli provocherà una chiamata ambigua.  
  
6.  Utilizzare le regole seguenti:  
  
    1.  Una specializzazione di modello per un tipo specifico è più specializzata di una che accetta un argomento di tipo generico.  
  
    2.  Un modello che accetta solo **T\*** è più specializzato di uno che accetta solo **T**, poiché un tipo ipotetico **X\*** è un argomento valido per un argomento di modello **T**, ma **X** non è un argomento valido per un argomento di modello **T\***.  
  
    3.  **const T** è più specializzato di **T**, poiché **const X** è un argomento valido per un argomento di modello **T**, ma **X** non è un argomento valido per un argomento di modello **const T**.  
  
    4.  **const T\*** è più specializzato di **T\***, poiché **const X\*** è un argomento valido per un argomento di modello **T\***, ma **X\*** non è un argomento valido per un argomento di modello **const T\***.  
  
7.  L'esempio seguente funziona in Visual C\+\+ .NET 2003 come specificato nello standard:  
  
```  
// partial_ordering_of_function_templates.cpp  
// compile with: /EHsc  
#include <iostream>  
  
extern "C" int printf(const char*,...);  
template <class T> void f(T) {  
   printf_s("Less specialized function called\n");  
}  
  
template <class T> void f(T*) {  
   printf_s("More specialized function called\n");  
}  
  
template <class T> void f(const T*) {  
   printf_s("Even more specialized function for const T*\n");  
}  
  
int main() {  
   int i =0;  
   const int j = 0;  
   int *pi = &i;  
   const int *cpi = &j;  
  
   f(i);   // Calls less specialized function.  
   f(pi);  // Calls more specialized function.  
   f(cpi); // Calls even more specialized function.  
   // Without partial ordering, these calls would be ambiguous.  
}  
```  
  
### Output  
  
```  
Less specialized function called  
More specialized function called  
Even more specialized function for const T*  
```  
  
## Vedere anche  
 [Modelli di funzioni](../cpp/function-templates.md)