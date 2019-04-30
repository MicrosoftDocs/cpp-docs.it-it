---
title: Errore del compilatore C2537
ms.date: 11/04/2016
f1_keywords:
- C2537
helpviewer_keywords:
- C2537
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
ms.openlocfilehash: 437727b334087aef496dbb0a1f3f1c8cf2b45458
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345595"
---
# <a name="compiler-error-c2537"></a>Errore del compilatore C2537

'identificatore': le specifiche di collegamento non valido

Possibili cause:

1. L'identificatore di collegamento non è supportato. È supportata solo l'identificatore di collegamento "C".

1. Collegamento "C" è specificato più di una funzione in un set di funzioni in overload. ma questa operazione non è consentita.

L'esempio seguente genera l'errore C2537:

```
// C2537.cpp
// compile with: /c
extern "c" void func();   // C2537
extern "C" void func2();   // OK
```