---
title: Errore del compilatore C2537
ms.date: 11/04/2016
f1_keywords:
- C2537
helpviewer_keywords:
- C2537
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
ms.openlocfilehash: 0dfe9f88fcdfda1325150d480670777a4d42d896
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758632"
---
# <a name="compiler-error-c2537"></a>Errore del compilatore C2537

' specifier ': specifica di collegamento non valida

Cause possibili:

1. L'identificatore di collegamento non è supportato. È supportato solo l'identificatore di collegamento "C".

1. Il collegamento "C" è specificato per più di una funzione in un set di funzioni in overload. Ciò non è consentito.

L'esempio seguente genera l'C2537:

```cpp
// C2537.cpp
// compile with: /c
extern "c" void func();   // C2537
extern "C" void func2();   // OK
```
