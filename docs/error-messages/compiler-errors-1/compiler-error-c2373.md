---
description: 'Altre informazioni su: errore del compilatore C2373'
title: Errore del compilatore C2373
ms.date: 11/04/2016
f1_keywords:
- C2373
helpviewer_keywords:
- C2373
ms.assetid: 7a08bf0b-852d-48be-ba75-70df9f4b5951
ms.openlocfilehash: 53646a0440576b1d7a5c185102e54af9f9a83e8f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174832"
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

```cpp
// C2373.cpp
// compile with: /c
#include "C2373.h"
extern void __cdecl func( void );   // C2373
extern void __clrcall func( void );   // OK

extern int i;   // C2373
extern const int i;   // OK
```
