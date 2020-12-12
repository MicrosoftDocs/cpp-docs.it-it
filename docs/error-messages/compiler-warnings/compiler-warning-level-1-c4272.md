---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4272'
title: Avviso del compilatore (livello 1) C4272
ms.date: 11/04/2016
f1_keywords:
- C4272
helpviewer_keywords:
- C4272
ms.assetid: 0d6c1de4-2eef-42c4-b861-c221f8b495ef
ms.openlocfilehash: a44e3a4121c1d01b15af47b0b4eefb1f982423bd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266117"
---
# <a name="compiler-warning-level-1-c4272"></a>Avviso del compilatore (livello 1) C4272

' Function ': è contrassegnato come __declspec (dllimport); è necessario specificare la convenzione di chiamata nativa durante l'importazione di una funzione.

È un errore esportare una funzione contrassegnata con la convenzione di chiamata [__clrcall](../../cpp/clrcall.md) e il compilatore genera questo avviso se si tenta di importare una funzione contrassegnata come `__clrcall` .

L'esempio seguente genera l'C4272:

```cpp
// C4272.cpp
// compile with: /c /W1 /clr
__declspec(dllimport) void __clrcall Test();   // C4272
__declspec(dllimport) void Test2();   // OK
```
