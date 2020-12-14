---
description: 'Altre informazioni su: errore del compilatore C3182'
title: Errore del compilatore C3182
ms.date: 11/04/2016
f1_keywords:
- C3182
helpviewer_keywords:
- C3182
ms.assetid: f3681266-308e-4990-a979-8eef8920e186
ms.openlocfilehash: d4cf5d86a553a597636c09f72ff3a068e2a6b9b2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242028"
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
