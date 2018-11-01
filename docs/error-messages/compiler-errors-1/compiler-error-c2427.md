---
title: Errore del compilatore C2427
ms.date: 11/04/2016
f1_keywords:
- C2427
helpviewer_keywords:
- C2427
ms.assetid: a7d421af-6180-40b4-b7a6-9f3bc7dfaaf9
ms.openlocfilehash: b794b90a476f7712c80e7617ec3c0696afb290ec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50609849"
---
# <a name="compiler-error-c2427"></a>Errore del compilatore C2427

'class': Impossibile definire la classe in questo ambito

È stato effettuato un tentativo per definire una classe annidata, ma la classe annidata è un membro di una classe base, non la classe principale che la contiene.

L'esempio seguente genera l'errore C2427:

```
// C2427.cpp
// compile with: /c
template <class T>
struct S {
   struct Inner;
};

struct Y : S<int> {};

struct Y::Inner {};   // C2427

// OK
template<typename T>
struct S<T>::Inner {};
```