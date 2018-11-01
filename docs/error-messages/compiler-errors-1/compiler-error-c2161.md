---
title: Errore del compilatore C2161
ms.date: 11/04/2016
f1_keywords:
- C2161
helpviewer_keywords:
- C2161
ms.assetid: d6798821-13bb-4e60-924f-85f7bf955387
ms.openlocfilehash: 366e848d566dbcbf9414565de604aa722f758456
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50519431"
---
# <a name="compiler-error-c2161"></a>Errore del compilatore C2161

'##' non può apparire alla fine della definizione di una macro

Una definizione di macro è terminata con un operatore di concatenamento dei token (##).

L'esempio seguente genera l'errore C2161:

```
// C2161.cpp
// compile with: /c
#define mac(a,b) a   // OK
#define mac(a,b) a##   // C2161
```