---
title: Avviso del compilatore (livello 4) C4232
ms.date: 11/04/2016
f1_keywords:
- C4232
helpviewer_keywords:
- C4232
ms.assetid: f92028a5-4ddd-43c1-97f5-4f724e5e14af
ms.openlocfilehash: 9d328b1b5e4c3875f29b48eab77cd6f6d49d447f
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541887"
---
# <a name="compiler-warning-level-4-c4232"></a>Avviso del compilatore (livello 4) C4232

utilizzata estensione non standard:' Identifier ': l'indirizzo di dllimport ' dllimport ' non è statico, Identity non è garantito

In Microsoft Extensions (/Ze) è possibile assegnare un valore non statico come indirizzo di una funzione dichiarata con il modificatore **dllimport** . In compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)), viene generato un errore.

L'esempio seguente genera l'C4232:

```c
// C4232.c
// compile with: /W4 /Ze /c
int __declspec(dllimport) f();
int (*pfunc)() = &f;   // C4232
```