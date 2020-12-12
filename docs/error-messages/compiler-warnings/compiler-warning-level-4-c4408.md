---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4408'
title: Avviso del compilatore (livello 4) C4408
ms.date: 11/04/2016
f1_keywords:
- C4408
helpviewer_keywords:
- C4408
ms.assetid: 8488a186-ed1d-425c-aaeb-c72472c1da68
ms.openlocfilehash: 94764cd23c8bf4af757afa7bd8a084f61c5f24a0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251479"
---
# <a name="compiler-warning-level-4-c4408"></a>Avviso del compilatore (livello 4) C4408

anonymousstruct o Union non ha dichiarato alcun membro dati

Una struct o unione anonima deve avere almeno un membro dati.

L'esempio seguente genera l'errore C4408:

```cpp
// C4408.cpp
// compile with: /W4 /LD
static union
{
   // int i;
};
// a named union can have no data members
// } MyUnion;
```
