---
description: 'Altre informazioni su: errore del compilatore C2082'
title: Errore del compilatore C2082
ms.date: 11/04/2016
f1_keywords:
- C2082
helpviewer_keywords:
- C2082
ms.assetid: 87a6d442-157c-46e8-9bff-8388f8338ae0
ms.openlocfilehash: 957699338d253ee2438060b27a0089a654fc4f9c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316622"
---
# <a name="compiler-error-c2082"></a>Errore del compilatore C2082

ridefinizione del parametro formale 'identifier'

Un parametro formale in una funzione è dichiarato di nuovo all'interno del corpo della funzione. Per risolvere l'errore, rimuovere la ridefinizione.

L'esempio seguente genera l'errore C2082:

```cpp
// C2082.cpp
void func(int i) {
   int i;   // C2082
   int ii;   // OK
}
```
