---
description: 'Altre informazioni su: errore del compilatore C2374'
title: Errore del compilatore C2374
ms.date: 11/04/2016
f1_keywords:
- C2374
helpviewer_keywords:
- C2374
ms.assetid: 73b51965-e91c-4e21-9732-f71c1449d22e
ms.openlocfilehash: 3833e9e6d20aac4630de32f3622689adad3c8511
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174793"
---
# <a name="compiler-error-c2374"></a>Errore del compilatore C2374

'identifier': ridefinizione. Inizializzazione multipla

L'identificatore viene inizializzato più volte.

L'esempio seguente genera l'errore C2374:

```cpp
// C2374.cpp
// compile with: /c
int i = 0;
int i = 1;   // C2374
int j = 1;   // OK
```
