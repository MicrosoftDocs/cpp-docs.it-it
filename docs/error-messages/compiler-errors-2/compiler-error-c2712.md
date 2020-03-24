---
title: Errore del compilatore C2712
ms.date: 11/04/2016
f1_keywords:
- C2712
helpviewer_keywords:
- C2712
ms.assetid: f7d4ffcc-7ed2-459b-8067-a728ce647071
ms.openlocfilehash: a25c59fa5c9ba0102666f6c8922a61b063e7627a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202306"
---
# <a name="compiler-error-c2712"></a>Errore del compilatore C2712

> impossibile utilizzare __try in funzioni che richiedono la rimozione di oggetti

## <a name="remarks"></a>Osservazioni

L'errore C2712 può verificarsi se si utilizza [/EHsc](../../build/reference/eh-exception-handling-model.md)e una funzione con gestione delle eccezioni strutturata dispone anche di oggetti che richiedono la rimozione (distruzione).

Possibili soluzioni:

- Spostare il codice che richiede SEH in un'altra funzione

- Riscrivere le funzioni che usano SEH per evitare l'uso di variabili e parametri locali contenenti distruttori. Non usare SEH nei costruttori o nei distruttori

- Compilare senza /EHsc

L'errore C2712 può verificarsi anche se si chiama un metodo dichiarato usando la parola chiave [__event](../../cpp/event.md) . Poiché l'evento può essere usato in un ambiente a thread multipli, il compilatore genera codice che impedisce la manipolazione dell'oggetto evento sottostante e quindi racchiude il codice generato in un' [istruzione try-finally](../../cpp/try-finally-statement.md)SEH. Di conseguenza, l'errore C2712 si verificherà se si chiama il metodo dell'evento e si passa per valore un argomento il cui tipo contiene un distruttore. Una soluzione in questo caso consiste nel passare l'argomento come riferimento costante.

C2712 può anche verificarsi se si esegue la compilazione con **/CLR: pure** e si dichiara una matrice statica di puntatori a funzioni in un blocco `__try`. Un membro statico richiede al compilatore di usare l'inizializzazione dinamica in **/CLR: pure**, C++ che implica la gestione delle eccezioni. La gestione delle eccezioni C++ non è però consentita in un blocco `__try`.

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2712 e mostra come risolverlo.

```cpp
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
