---
title: Errore del compilatore C2373
ms.date: 11/04/2016
f1_keywords:
- C2373
helpviewer_keywords:
- C2373
ms.assetid: 7a08bf0b-852d-48be-ba75-70df9f4b5951
ms.openlocfilehash: 967bdec10e0e1c04083770d52da930837d8eeb7e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50570365"
---
# <a name="compiler-error-c2373"></a>Errore del compilatore C2373

'identifier': ridefinizione. Modificatori di tipo differenti

L'identificatore è già definito con un modificatore di tipo diverso.

L'esempio seguente genera l'errore C2373:

```
// C2373.h
void __clrcall func( void );
const int i = 20;
```

E quindi:

```
// C2373.cpp
// compile with: /c
#include "C2373.h"
extern void __cdecl func( void );   // C2373
extern void __clrcall func( void );   // OK

extern int i;   // C2373
extern const int i;   // OK
```