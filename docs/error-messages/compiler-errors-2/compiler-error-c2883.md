---
description: 'Altre informazioni su: errore del compilatore C2883'
title: Errore del compilatore C2883
ms.date: 11/04/2016
f1_keywords:
- C2883
helpviewer_keywords:
- C2883
ms.assetid: 5c6d689d-ed42-41ad-b5c0-e9c2e0b8c356
ms.openlocfilehash: 2ff905f5f1ca8fea4f175799e576e4538bbab164
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332338"
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
