---
title: Errore del compilatore C3254
ms.date: 11/04/2016
f1_keywords:
- C3254
helpviewer_keywords:
- C3254
ms.assetid: 93427b10-fa72-4e43-80d1-1a6e122f9f40
ms.openlocfilehash: 6b9ff41fb4f45d9570869ca90e3c6091cc03a58a
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754251"
---
# <a name="compiler-error-c3254"></a>Errore del compilatore C3254

' Explicit override ': la classe contiene un override esplicito ' override ' ma non deriva da un'interfaccia che contiene la dichiarazione di funzione

Quando si [esegue l'override esplicito](../../cpp/explicit-overrides-cpp.md) di un metodo, la classe che contiene l'override deve derivare, direttamente o indirettamente, dal tipo che contiene la funzione di cui si esegue l'override.

L'esempio seguente genera l'C3254:

```cpp
// C3254.cpp
__interface I
{
   void f();
};

__interface I1 : I
{
};

struct A /* : I1 */
{
   void I1::f()
   {   // C3254, uncomment : I1 to resolve this C3254
   }
};

int main()
{
}
```
