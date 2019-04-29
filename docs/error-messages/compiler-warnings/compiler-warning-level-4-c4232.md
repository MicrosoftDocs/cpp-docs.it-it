---
title: Avviso del compilatore (livello 4) C4232
ms.date: 11/04/2016
f1_keywords:
- C4232
helpviewer_keywords:
- C4232
ms.assetid: f92028a5-4ddd-43c1-97f5-4f724e5e14af
ms.openlocfilehash: dee087b73bf032a68daf0527ea584efcc7579361
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401085"
---
# <a name="compiler-warning-level-4-c4232"></a>Avviso del compilatore (livello 4) C4232

utilizzata estensione non standard: 'identifier': indirizzo di dllimport 'dllimport' non è statico, identità non garantita

In estensioni Microsoft (/Ze), è possibile assegnare un valore non statico come l'indirizzo di una funzione dichiarata con la **dllimport** modificatore. In compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), ciò causa un errore.

L'esempio seguente genera l'errore C4232:

```
// C4232.c
// compile with: /W4 /Ze /c
int __declspec(dllimport) f();
int (*pfunc)() = &f;   // C4232
```