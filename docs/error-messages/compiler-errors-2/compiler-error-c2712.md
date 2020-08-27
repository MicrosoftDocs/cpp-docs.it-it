---
title: Errore del compilatore C2712
description: Descrive l'errore del compilatore Microsoft C/C++ C2712.
ms.date: 08/25/2020
f1_keywords:
- C2712
helpviewer_keywords:
- C2712
ms.assetid: f7d4ffcc-7ed2-459b-8067-a728ce647071
ms.openlocfilehash: 2f0b883607241473a429919e06de9e975fa2e3c1
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898695"
---
# <a name="compiler-error-c2712"></a>Errore del compilatore C2712

> non è possibile usare `__try` in funzioni che richiedono la rimozione di oggetti

## <a name="remarks"></a>Osservazioni

L'errore C2712 può verificarsi se si usa [`/EHsc`](../../build/reference/eh-exception-handling-model.md) e una funzione con gestione delle eccezioni strutturata include anche oggetti che richiedono la rimozione (distruzione).

Soluzioni possibili:

- Spostare il codice che richiede SEH in un'altra funzione

- Riscrivere le funzioni che usano SEH per evitare l'uso di variabili e parametri locali contenenti distruttori. Non usare SEH nei costruttori o nei distruttori

- Compilare senza /EHsc

L'errore C2712 può verificarsi anche se si chiama un metodo dichiarato tramite la [`__event`](../../cpp/event.md) parola chiave. Poiché l'evento può essere utilizzato in un ambiente a thread multipli, il compilatore genera codice che impedisce la manipolazione dell'oggetto evento sottostante e quindi racchiude il codice generato in un' [ `try-finally` istruzione](../../cpp/try-finally-statement.md)SEH. Di conseguenza, l'errore C2712 si verificherà se si chiama il metodo dell'evento e si passa per valore un argomento il cui tipo contiene un distruttore. Una soluzione in questo caso consiste nel passare l'argomento come riferimento costante.

C2712 può anche verificarsi se si compila con **`/clr:pure`** e si dichiara una matrice statica di puntatori a funzioni in un **`__try`** blocco. Un membro statico richiede al compilatore di usare l'inizializzazione dinamica in **`/clr:pure`** , che implica la gestione delle eccezioni C++. Tuttavia, la gestione delle eccezioni C++ non è consentita in un **`__try`** blocco.

Le **`/clr:pure`** **`/clr:safe`** Opzioni del compilatore e sono deprecate in visual studio 2015 e non sono supportate in visual studio 2017.

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
