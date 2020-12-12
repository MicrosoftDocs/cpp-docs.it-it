---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4232'
title: Avviso del compilatore (livello 4) C4232
ms.date: 11/04/2016
f1_keywords:
- C4232
helpviewer_keywords:
- C4232
ms.assetid: f92028a5-4ddd-43c1-97f5-4f724e5e14af
ms.openlocfilehash: 272fdcbc856ef5e86a8ff043b5aeab98a36413a8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97291415"
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
