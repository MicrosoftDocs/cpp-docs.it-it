---
title: Avviso del compilatore (livello 4) C4214
ms.date: 11/04/2016
f1_keywords:
- C4214
helpviewer_keywords:
- C4214
ms.assetid: 9b8db279-1f12-4a6b-a923-2db22acd1947
ms.openlocfilehash: 31711d3709b7c2ae3658d760f538ea9e841d33a6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50655728"
---
# <a name="compiler-warning-level-4-c4214"></a>Avviso del compilatore (livello 4) C4214

utilizzata estensione non standard: tipi di campo diversi da int di bit

Con le estensioni Microsoft predefinito (/Ze), i membri di struttura di campo di bit possono essere di qualsiasi tipo integer.

## <a name="example"></a>Esempio

```
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

Tali campi di bit non sono validi in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).