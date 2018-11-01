---
title: Errore del compilatore C2124
ms.date: 11/04/2016
f1_keywords:
- C2124
helpviewer_keywords:
- C2124
ms.assetid: 93392aaa-5582-4d68-8cc5-bd9c62a0ae7e
ms.openlocfilehash: 82bc4447aaf27190c013edf48a20a56c57a646c9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50611666"
---
# <a name="compiler-error-c2124"></a>Errore del compilatore C2124

divisione o mod per 0

Un'espressione costante ha un denominatore pari a zero. Per risolvere l'errore, non dividere per zero.

L'esempio seguente genera l'errore C2124:

```
// C2124.cpp
int main() {
  int i = 1 / 0;   // C2124  do not divide by zero
  int i2 = 12 / 2;   // OK
}
```