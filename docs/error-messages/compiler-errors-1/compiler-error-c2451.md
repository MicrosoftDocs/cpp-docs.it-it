---
title: Errore del compilatore C2451 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2451
dev_langs:
- C++
helpviewer_keywords:
- C2451
ms.assetid: a64c93a5-ab8d-4d39-ae57-9ee7ef803036
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f8fcf5291e664b63047801563cd3fc7118fa0ba5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051633"
---
# <a name="compiler-error-c2451"></a>Errore del compilatore C2451

espressioni condizionali di tipo 'type' non sono valida

L'espressione condizionale restituisce un tipo integer.

L'esempio seguente genera l'errore C2451:

```
// C2451.cpp
class B {};

int main () {
   B b1;
   int i = 0;
   if (b1)   // C2451
   // try the following line instead
   // if (i)
      ;
}
```