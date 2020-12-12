---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4214'
title: Avviso del compilatore (livello 4) C4214
ms.date: 11/04/2016
f1_keywords:
- C4214
helpviewer_keywords:
- C4214
ms.assetid: 9b8db279-1f12-4a6b-a923-2db22acd1947
ms.openlocfilehash: afc3f425f0d37b3fb3063d18cb514336271a30ae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297304"
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
