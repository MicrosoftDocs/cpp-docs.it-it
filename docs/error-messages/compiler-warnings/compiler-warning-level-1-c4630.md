---
title: Avviso del compilatore (livello 1) C4630
ms.date: 11/04/2016
f1_keywords:
- C4630
helpviewer_keywords:
- C4630
ms.assetid: d8926376-7acc-4fc7-8438-6f0de3468870
ms.openlocfilehash: 3a533afe141a465fb034ba7d90b22a8206bf0910
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230623"
---
# <a name="compiler-warning-level-1-c4630"></a>Avviso del compilatore (livello 1) C4630

' symbol ': identificatore di classe di archiviazione ' extern ' non valido nella definizione del membro

Un membro dati o una funzione membro è definito come **`extern`** . I membri non possono essere esterni, sebbene possano essere presenti interi oggetti. Il compilatore ignora la **`extern`** parola chiave. L'esempio seguente genera l'C4630:

```cpp
// C4630.cpp
// compile with: /W1 /LD
class A {
   void func();
};

extern void A::func() {   // C4630, remove 'extern' to resolve
}
```
