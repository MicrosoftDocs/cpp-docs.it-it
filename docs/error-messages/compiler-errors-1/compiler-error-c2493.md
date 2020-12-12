---
description: 'Altre informazioni su: errore del compilatore C2493'
title: Errore del compilatore C2493
ms.date: 11/04/2016
f1_keywords:
- C2493
helpviewer_keywords:
- C2493
ms.assetid: 68316cd5-682b-49c3-b6ea-23c4e5d296cf
ms.openlocfilehash: 5b9f98fc2f21eadedd8316e60b249a387a0e80dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283673"
---
# <a name="compiler-error-c2493"></a>Errore del compilatore C2493

forma non valida di __based

Un' **`__based`** espressione deve essere basata su un puntatore.

L'esempio seguente genera l'C2493:

```cpp
// C2493.cpp
// compile with: /c
char mybase;
int __based(mybase) ptr;   // C2493

// OK
char * mybase;
int __based(mybase) * ptr;
```
