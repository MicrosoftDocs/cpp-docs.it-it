---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4211'
title: Avviso del compilatore (livello 4) C4211
ms.date: 11/04/2016
f1_keywords:
- C4211
helpviewer_keywords:
- C4211
ms.assetid: 3eea3455-6faa-4cdb-8730-73db7026bd1f
ms.openlocfilehash: bbd6469dc98d95342538bf3a9065b4647619d69a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314737"
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
