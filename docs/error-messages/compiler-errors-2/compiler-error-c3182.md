---
title: Errore del compilatore C3182
ms.date: 11/04/2016
f1_keywords:
- C3182
helpviewer_keywords:
- C3182
ms.assetid: f3681266-308e-4990-a979-8eef8920e186
ms.openlocfilehash: 6866c7bbcee0a4097e490b344c79a6eec7f94570
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62382414"
---
# <a name="compiler-error-c3182"></a>Errore del compilatore C3182

'class': una dichiarazione di accesso o dichiarazione using di membro non valida all'interno di un oggetto gestito o WinRTtype

Oggetto [usando](../../cpp/using-declaration.md) dichiarazione è valida all'interno di tutte le forme di classi gestite.

L'esempio seguente genera l'errore C3182 e mostra come risolverlo.

```
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
