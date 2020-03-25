---
title: Avviso del compilatore (livello 1) C4630
ms.date: 11/04/2016
f1_keywords:
- C4630
helpviewer_keywords:
- C4630
ms.assetid: d8926376-7acc-4fc7-8438-6f0de3468870
ms.openlocfilehash: 414388fc1b9c6a7425d45e2ba92546960cadf404
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199615"
---
# <a name="compiler-warning-level-1-c4630"></a>Avviso del compilatore (livello 1) C4630

' symbol ': identificatore di classe di archiviazione ' extern ' non valido nella definizione del membro

Un membro dati o una funzione membro è definito come `extern`. I membri non possono essere esterni, sebbene possano essere presenti interi oggetti. Il compilatore ignora la parola chiave `extern`. L'esempio seguente genera l'C4630:

```cpp
// C4630.cpp
// compile with: /W1 /LD
class A {
   void func();
};

extern void A::func() {   // C4630, remove 'extern' to resolve
}
```
