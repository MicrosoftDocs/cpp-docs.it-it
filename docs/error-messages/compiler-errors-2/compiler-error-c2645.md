---
title: Errore del compilatore C2645
ms.date: 11/04/2016
f1_keywords:
- C2645
helpviewer_keywords:
- C2645
ms.assetid: 6609c2fa-c3b2-4a6b-8e8d-58fb52f67175
ms.openlocfilehash: fa50cf4105c6ceb4f1104e0625ec6492e2d0461a
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758229"
---
# <a name="compiler-error-c2645"></a>Errore del compilatore C2645

Nessun nome completo per il puntatore al membro (trovato ':: *')

La dichiarazione di un puntatore a un membro non specifica una classe.

L'esempio seguente genera l'C2645:

```cpp
// C2645.cpp
class A {};
int main() {
   int B::* bp;   // C2645 B not defined
   int A::* ap;   // OK
}
```
