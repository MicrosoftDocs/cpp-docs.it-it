---
title: Errore del compilatore C2427
ms.date: 11/04/2016
f1_keywords:
- C2427
helpviewer_keywords:
- C2427
ms.assetid: a7d421af-6180-40b4-b7a6-9f3bc7dfaaf9
ms.openlocfilehash: d92f3bce54a4558702d2a6d3870323eb0edd5d4d
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74744615"
---
# <a name="compiler-error-c2427"></a>Errore del compilatore C2427

' Class ': Impossibile definire la classe in questo ambito

È stato effettuato un tentativo di definire una classe annidata, ma la classe annidata è un membro di una classe di base, non della classe più contenitore.

L'esempio seguente genera l'C2427:

```cpp
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
