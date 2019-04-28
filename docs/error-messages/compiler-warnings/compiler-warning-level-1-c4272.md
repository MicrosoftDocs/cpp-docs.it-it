---
title: Avviso del compilatore (livello 1) C4272
ms.date: 11/04/2016
f1_keywords:
- C4272
helpviewer_keywords:
- C4272
ms.assetid: 0d6c1de4-2eef-42c4-b861-c221f8b495ef
ms.openlocfilehash: 26e136aa395729d520f4a71a06b6dc212cf21f8b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208311"
---
# <a name="compiler-warning-level-1-c4272"></a>Avviso del compilatore (livello 1) C4272

'function': è contrassegnato come declspec; specificare la convenzione di chiamata nativa quando si importa una funzione.

È possibile esportare una funzione contrassegnata con il [clrcall](../../cpp/clrcall.md) convenzione di chiamata e il compilatore genera questo avviso se si prova a importare una funzione contrassegnata come `__clrcall`.

L'esempio seguente genera l'errore C4272:

```
// C4272.cpp
// compile with: /c /W1 /clr
__declspec(dllimport) void __clrcall Test();   // C4272
__declspec(dllimport) void Test2();   // OK
```