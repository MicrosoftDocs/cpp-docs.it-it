---
description: 'Altre informazioni su: errore irreversibile C1016'
title: Errore irreversibile C1016
ms.date: 11/04/2016
f1_keywords:
- C1016
helpviewer_keywords:
- C1016
ms.assetid: 33f45c3e-2d8f-43ad-a445-c412d1d54ce1
ms.openlocfilehash: e0f9a887c42c7006a31124446021ebee54225984
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262412"
---
# <a name="fatal-error-c1016"></a>Errore irreversibile C1016

\#ifdef previsto un identificatore # ifndef previsto un identificatore

La direttiva di compilazione condizionale ([#ifdef](../../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md) o `#ifndef`) non ha alcun identificatore da valutare. Per risolvere l'errore, specificare un identificatore.

L'esempio seguente genera l'errore C1016:

```cpp
// C1016.cpp
#ifdef   // C1016
#define FC1016
#endif

int main() {}
```

Possibile soluzione:

```cpp
// C1016b.cpp
#ifdef X
#define FC1016
#endif

int main() {}
```
