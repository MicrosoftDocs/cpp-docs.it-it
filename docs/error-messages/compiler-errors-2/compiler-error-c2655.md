---
description: 'Altre informazioni su: errore del compilatore C2655'
title: Errore del compilatore C2655
ms.date: 11/04/2016
f1_keywords:
- C2655
helpviewer_keywords:
- C2655
ms.assetid: beaefa6e-51b3-4df9-9150-960f3fbf40e0
ms.openlocfilehash: 113de213ab53892447666824c48510f7c9654d4e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286111"
---
# <a name="compiler-error-c2655"></a>Errore del compilatore C2655

' Identifier ': definizione o ridichiarazione non valida nell'ambito corrente

Un identificatore può essere ridichiarato solo in ambito globale.

L'esempio seguente genera l'C2655:

```cpp
// C2655.cpp
class A {};
class B {
public:
   static int i;
};

int B::i;  // OK

int main() {
   A B::i;  // C2655
}
```
