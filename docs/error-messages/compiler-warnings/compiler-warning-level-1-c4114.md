---
title: Compilatore Warning (level 1) C4114 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4114
dev_langs:
- C++
helpviewer_keywords:
- C4114
ms.assetid: 3983e1c6-e8bb-46dc-8894-e1827db48797
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a8d67148c2b9fb22c90013905eb246bf8d3bdf75
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46067572"
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
