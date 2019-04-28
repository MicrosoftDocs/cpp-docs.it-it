---
title: Compilatore Warning (level 1) C4114
ms.date: 11/04/2016
f1_keywords:
- C4114
helpviewer_keywords:
- C4114
ms.assetid: 3983e1c6-e8bb-46dc-8894-e1827db48797
ms.openlocfilehash: 41e951e7c4a8b23ddbec14c5421f66702e70c937
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62300258"
---
# <a name="compiler-warning-level-1-c4114"></a>Compilatore Warning (level 1) C4114

stesso qualificatore di tipo utilizzato più di una volta

Una definizione o dichiarazione di tipo Usa un qualificatore di tipo (**const**, **volatile**, **firmato**, oppure **unsigned**) più volte. In questo modo un avviso con le estensioni Microsoft (/Ze) e un errore in compatibilità ANSI (/Za).

L'esempio seguente genera l'errore C4114:

```
// C4114.cpp
// compile with: /W1 /c
volatile volatile int i;   // C4114
```

L'esempio seguente genera l'errore C4114:

```
// C4114_b.cpp
// compile with: /W1 /c
static const int const * ii;   // C4114
static const int * const iii;   // OK
```
