---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4630'
title: Avviso del compilatore (livello 1) C4630
ms.date: 11/04/2016
f1_keywords:
- C4630
helpviewer_keywords:
- C4630
ms.assetid: d8926376-7acc-4fc7-8438-6f0de3468870
ms.openlocfilehash: 49a73dcd3ce11fefa1d4275e57ad98092c242d8d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318910"
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
