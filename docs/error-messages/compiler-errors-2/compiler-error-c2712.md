---
title: Errore del compilatore C2712 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2712
dev_langs:
- C++
helpviewer_keywords:
- C2712
ms.assetid: f7d4ffcc-7ed2-459b-8067-a728ce647071
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c26c5d7a24c022cacf4c20687b2d8c58f7e9e342
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2712"></a>Errore del compilatore C2712
impossibile utilizzare __try in funzioni che richiedono la rimozione di oggetti  
  
 L'errore C2712 può verificarsi se utilizza [/EHsc](../../build/reference/eh-exception-handling-model.md), e dispone di una funzione con gestione delle eccezioni strutturata anche oggetti che richiedono una rimozione (eliminazione).  
  
 Possibili soluzioni:  
  
-   Spostare il codice che richiede SEH in un'altra funzione  
  
-   Riscrivere le funzioni che usano SEH per evitare l'uso di variabili e parametri locali contenenti distruttori. Non usare SEH nei costruttori o nei distruttori  
  
-   Compilare senza /EHsc  
  
 L'errore C2712 può verificarsi anche se si chiama un metodo dichiarato usando la [event](../../cpp/event.md) (parola chiave). Poiché l'evento può essere utilizzato in un ambiente con multithreading, il compilatore genera codice che impedisce la manipolazione dell'oggetto evento sottostante e quindi include il codice generato in un'istruzione SEH [istruzione try-finally](../../cpp/try-finally-statement.md). Di conseguenza, l'errore C2712 si verificherà se si chiama il metodo dell'evento e si passa per valore un argomento il cui tipo contiene un distruttore. Una soluzione in questo caso consiste nel passare l'argomento come riferimento costante.  
  
## <a name="example"></a>Esempio  
 Errore C2712 può verificarsi anche se si compila con **/clr: pure** e dichiarare una matrice statica di puntatori a funzioni in un `__try` blocco. Un membro statico richiede al compilatore di usare l'inizializzazione dinamica in **/clr: pure**, che implica la gestione delle eccezioni C++. La gestione delle eccezioni C++ non è però consentita in un blocco `__try`.  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 L'esempio seguente genera l'errore C2712 e mostra come risolverlo.  
  
```  
// C2712.cpp  
// compile with: /clr:pure /c  
struct S1 {  
   static int smf();  
   void fnc();  
};  
  
void S1::fnc() {  
   __try {  
      static int (*array_1[])() = {smf,};   // C2712  
  
      // OK  
      static int (*array_2[2])();  
      array_2[0] = smf;  
    }  
    __except(0) {}  
}  
```