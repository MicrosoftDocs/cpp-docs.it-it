---
title: Avviso del compilatore (livello 4) C4232
ms.date: 11/04/2016
f1_keywords:
- C4232
helpviewer_keywords:
- C4232
ms.assetid: f92028a5-4ddd-43c1-97f5-4f724e5e14af
ms.openlocfilehash: 6081acc4a64394c9122650da8b7f4147f724e5de
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219924"
---
# <a name="compiler-warning-level-4-c4232"></a>Avviso del compilatore (livello 4) C4232

utilizzata estensione non standard:' Identifier ': l'indirizzo di dllimport ' dllimport ' non è statico, Identity non è garantito

In Microsoft Extensions (/Ze) è possibile assegnare un valore non statico come indirizzo di una funzione dichiarata con il **`dllimport`** modificatore. In compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)), viene generato un errore.

L'esempio seguente genera l'C4232:

```c
// C4232.c
// compile with: /W4 /Ze /c
int __declspec(dllimport) f();
int (*pfunc)() = &f;   // C4232
```
