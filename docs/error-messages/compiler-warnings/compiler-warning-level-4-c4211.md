---
title: Avviso del compilatore (livello 4) C4211
ms.date: 11/04/2016
f1_keywords:
- C4211
helpviewer_keywords:
- C4211
ms.assetid: 3eea3455-6faa-4cdb-8730-73db7026bd1f
ms.openlocfilehash: df19f90e17d6737a2639eb1245da197881e35c96
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218104"
---
# <a name="compiler-warning-level-4-c4211"></a>Avviso del compilatore (livello 4) C4211

utilizzata estensione non standard: ridefinito extern in static

Con le estensioni Microsoft predefinite (/Ze), è possibile ridefinire un **`extern`** identificatore come **`static`** .

## <a name="example"></a>Esempio

```c
// C4211.c
// compile with: /W4
extern int i;
static int i;   // C4211

int main()
{
}
```

Tali ridefinizioni non sono valide in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).
