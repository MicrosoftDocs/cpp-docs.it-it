---
title: Errore del compilatore C2712 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2712
dev_langs:
- C++
helpviewer_keywords:
- C2712
ms.assetid: f7d4ffcc-7ed2-459b-8067-a728ce647071
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 89b7d0ad3c7e175db1525c2f3fb8407240ce943c
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2712"></a>Errore del compilatore C2712
impossibile utilizzare __try in funzioni che richiedono la rimozione di oggetti  
  
 Errore C2712 può verificarsi se utilizza [/EHsc](../../build/reference/eh-exception-handling-model.md), e dispone di una funzione con la gestione delle eccezioni strutturata anche oggetti che richiedono la rimozione (distruzione).  
  
 Possibili soluzioni:  
  
-   Spostare il codice che richiede SEH in un'altra funzione  
  
-   Riscrivere le funzioni che usano SEH per evitare l'uso di variabili e parametri locali contenenti distruttori. Non usare SEH nei costruttori o nei distruttori  
  
-   Compilare senza /EHsc  
  
 Errore C2712 può verificarsi anche se si chiama un metodo dichiarato utilizzando il [event](../../cpp/event.md) (parola chiave). Poiché l'evento può essere utilizzato in un ambiente con multithreading, il compilatore genera codice che impedisce la manipolazione dell'oggetto evento sottostante e quindi racchiude il codice generato in un'istruzione SEH [istruzione try-finally](../../cpp/try-finally-statement.md). Di conseguenza, l'errore C2712 si verificherà se si chiama il metodo dell'evento e si passa per valore un argomento il cui tipo contiene un distruttore. Una soluzione in questo caso consiste nel passare l'argomento come riferimento costante.  
  
## <a name="example"></a>Esempio  
 C2712 può verificarsi anche se si compila con **/clr: pure** e dichiarare una matrice statica dei puntatori a funzioni in un `__try` blocco. Un membro statico richiede al compilatore di utilizzare l'inizializzazione dinamica in **/clr: pure**, che implica la gestione delle eccezioni C++. La gestione delle eccezioni C++ non è però consentita in un blocco `__try`.  
  
 Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015.  
  
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
