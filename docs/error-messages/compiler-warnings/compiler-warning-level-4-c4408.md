---
title: Avviso del compilatore (livello 4) C4408
ms.date: 11/04/2016
f1_keywords:
- C4408
helpviewer_keywords:
- C4408
ms.assetid: 8488a186-ed1d-425c-aaeb-c72472c1da68
ms.openlocfilehash: 3c7613d42bbd0ac7fa58a0b95ba68efb60d9f50a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62391569"
---
# <a name="compiler-warning-level-4-c4408"></a>Avviso del compilatore (livello 4) C4408

anonymousstruct o un'unione non ha dichiarato alcun membro dati

Una struct o unione anonima deve avere almeno un membro dati.

L'esempio seguente genera l'errore C4408:

```
// C4408.cpp
// compile with: /W4 /LD
static union
{
   // int i;
};
// a named union can have no data members
// } MyUnion;
```