---
title: Avviso del compilatore (livello 4) C4214
ms.date: 11/04/2016
f1_keywords:
- C4214
helpviewer_keywords:
- C4214
ms.assetid: 9b8db279-1f12-4a6b-a923-2db22acd1947
ms.openlocfilehash: 85f37810708eff43574129f42dd8444fe7dc37c2
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541909"
---
# <a name="compiler-warning-level-4-c4214"></a>Avviso del compilatore (livello 4) C4214

utilizzata estensione non standard: tipi di campi di bit diversi da int

Con le estensioni Microsoft predefinite (/Ze), i membri della struttura bit possono essere di qualsiasi tipo Integer.

## <a name="example"></a>Esempio

```c
// C4214.c
// compile with: /W4
struct bitfields
{
   unsigned short j:4;  // C4214
};

int main()
{
}
```

Tali campi di bit non sono validi in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).