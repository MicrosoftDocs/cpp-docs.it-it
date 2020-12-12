---
description: 'Altre informazioni su: errore del compilatore C2537'
title: Errore del compilatore C2537
ms.date: 11/04/2016
f1_keywords:
- C2537
helpviewer_keywords:
- C2537
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
ms.openlocfilehash: 46603ded270b4702d4b7d4de97352547c5f503f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302036"
---
# <a name="compiler-error-c2537"></a>Errore del compilatore C2537

' specifier ': specifica di collegamento non valida

Cause possibili:

1. L'identificatore di collegamento non è supportato. È supportato solo l'identificatore di collegamento "C".

1. Il collegamento "C" è specificato per più di una funzione in un set di funzioni in overload. ma questa operazione non è consentita.

L'esempio seguente genera l'C2537:

```cpp
// C2537.cpp
// compile with: /c
extern "c" void func();   // C2537
extern "C" void func2();   // OK
```
