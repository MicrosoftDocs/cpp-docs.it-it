---
title: Errore del compilatore C3182
ms.date: 11/04/2016
f1_keywords:
- C3182
helpviewer_keywords:
- C3182
ms.assetid: f3681266-308e-4990-a979-8eef8920e186
ms.openlocfilehash: c6b183eb30dd0e617e69ab9aac58bea5cb721591
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761660"
---
# <a name="compiler-error-c3182"></a>Errore del compilatore C3182

' Class ': la dichiarazione using o la dichiarazione di accesso di un membro non è valida all'interno di un oggetto gestito o WinRTtype

Una Dichiarazione [using](../../cpp/using-declaration.md) non è valida all'interno di tutte le forme di classi gestite.

L'esempio seguente genera l'errore C3182 e mostra come risolverlo.

```cpp
// C3182a.cpp
// compile with: /clr /c
ref struct B {
   void mf(int) {
   }
};

ref struct D : B {
   using B::mf;   // C3182, delete to resolve
   void mf(char) {
   }
};
```
