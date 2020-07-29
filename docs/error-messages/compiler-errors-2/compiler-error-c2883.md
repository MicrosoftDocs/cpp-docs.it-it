---
title: Errore del compilatore C2883
ms.date: 11/04/2016
f1_keywords:
- C2883
helpviewer_keywords:
- C2883
ms.assetid: 5c6d689d-ed42-41ad-b5c0-e9c2e0b8c356
ms.openlocfilehash: fcd97a2f362e50ec856e53da2603c29e07595670
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233470"
---
# <a name="compiler-error-c2883"></a>Errore del compilatore C2883

' name ': la dichiarazione di funzione è in conflitto con ' Identifier ' introdotta dalla dichiarazione using

Si è tentato di definire una funzione più di una volta. La prima definizione è stata eseguita da uno spazio dei nomi con una **`using`** dichiarazione. Il secondo è una definizione locale.

L'esempio seguente genera l'C2883:

```cpp
// C2883.cpp
namespace A {
   void z(int);
}

int main() {
   using A::z;
   void z(int);   // C2883  z is already defined
}
```
