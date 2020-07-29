---
title: Errore del compilatore C2640
ms.date: 11/04/2016
f1_keywords:
- C2640
helpviewer_keywords:
- C2640
ms.assetid: e4d137ab-ed1d-457c-9eec-b70d97f1b0b4
ms.openlocfilehash: eb712379ff3ce25a435f4810f5552bc97f635cdd
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212683"
---
# <a name="compiler-error-c2640"></a>Errore del compilatore C2640

' Identifier ': modificatore __based non valido per riferimento

Il **`__based`** modificatore può essere usato solo sui puntatori.

L'esempio seguente genera l'C2640:

```cpp
// C2640.cpp
void f(int i) {
    void *vp;
    int _based(vp) &vr = I;  // C2640
}
```
