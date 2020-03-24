---
title: Avviso del compilatore (livello 4) C4232
ms.date: 11/04/2016
f1_keywords:
- C4232
helpviewer_keywords:
- C4232
ms.assetid: f92028a5-4ddd-43c1-97f5-4f724e5e14af
ms.openlocfilehash: c0e79dfa4564960a5660f0932b142b436370ac05
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80173920"
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
