---
title: Avviso del compilatore (livello 4) C4211
ms.date: 11/04/2016
f1_keywords:
- C4211
helpviewer_keywords:
- C4211
ms.assetid: 3eea3455-6faa-4cdb-8730-73db7026bd1f
ms.openlocfilehash: f1e85591d8ec989d806eb43a6be99bdb1dc62fb4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50659329"
---
# <a name="compiler-warning-level-4-c4211"></a>Avviso del compilatore (livello 4) C4211

utilizzata estensione non standard: ridefinito extern in statico

Con le estensioni Microsoft predefinito (/Ze), è possibile ridefinire un `extern` identificatore **statici**.

## <a name="example"></a>Esempio

```
// C4211.c
// compile with: /W4
extern int i;
static int i;   // C4211

int main()
{
}
```

Tali ridefinizioni non sono validi in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).

## <a name="see-also"></a>Vedere anche

