---
title: Errore del compilatore C3745
ms.date: 11/04/2016
f1_keywords:
- C3745
helpviewer_keywords:
- C3745
ms.assetid: 1e64aec5-7e53-47e5-bc7d-3905230cfc66
ms.openlocfilehash: e7e6bde7ce07edf7a75f38c37f3e4cbb3c6c3486
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74752457"
---
# <a name="compiler-error-c3745"></a>Errore del compilatore C3745

' Function ': solo un evento può essere ' raised '

Alla parola chiave [__raise](../../cpp/raise.md) può essere passata solo una funzione definita con la parola chiave [__event](../../cpp/event.md) .

L'esempio seguente genera l'C3745:

```cpp
// C3745.cpp
struct E {
   __event void func();
   void func(int) {
   }

   void func2() {
   }

   void bar() {
      __raise func();
      __raise func(1);   // C3745
      __raise func2();   // C3745
   }
};

int main() {
   E e;
   __raise e.func();
   __raise e.func(1);   // C3745
   __raise e.func2();   // C3745
}
```
