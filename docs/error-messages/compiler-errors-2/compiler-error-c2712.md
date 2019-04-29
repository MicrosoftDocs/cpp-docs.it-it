---
title: Errore del compilatore C2712
ms.date: 11/04/2016
f1_keywords:
- C2712
helpviewer_keywords:
- C2712
ms.assetid: f7d4ffcc-7ed2-459b-8067-a728ce647071
ms.openlocfilehash: 19b9c5a54bf405114bd4d596c2a2cc4708aadcc9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62386791"
---
# <a name="compiler-error-c2712"></a>Errore del compilatore C2712

> impossibile utilizzare __try in funzioni che richiedono la rimozione di oggetti

## <a name="remarks"></a>Note

L'errore C2712 può verificarsi se si usa [/EHsc](../../build/reference/eh-exception-handling-model.md), e dispone di una funzione con la gestione delle eccezioni strutturata anche oggetti che richiedono una rimozione (eliminazione).

Possibili soluzioni:

- Spostare il codice che richiede SEH in un'altra funzione

- Riscrivere le funzioni che usano SEH per evitare l'uso di variabili e parametri locali contenenti distruttori. Non usare SEH nei costruttori o nei distruttori

- Compilare senza /EHsc

L'errore C2712 può verificarsi anche se si chiama un metodo dichiarato usando la [event](../../cpp/event.md) (parola chiave). Poiché l'evento può essere utilizzato in un ambiente multithreading, il compilatore genera codice che impedisce la manipolazione dell'oggetto evento sottostante e quindi include il codice generato in una gestione delle eccezioni Strutturata [istruzione try-finally](../../cpp/try-finally-statement.md). Di conseguenza, l'errore C2712 si verificherà se si chiama il metodo dell'evento e si passa per valore un argomento il cui tipo contiene un distruttore. Una soluzione in questo caso consiste nel passare l'argomento come riferimento costante.

L'errore C2712 può verificarsi anche se si esegue la compilazione con **/clr: pure** e si dichiara una matrice statica di puntatori a funzioni in un `__try` blocco. Un membro statico richiede al compilatore di usare l'inizializzazione dinamica sotto **/clr: pure**, che implica la gestione delle eccezioni C++. La gestione delle eccezioni C++ non è però consentita in un blocco `__try`.

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

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