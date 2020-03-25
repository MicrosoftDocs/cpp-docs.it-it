---
title: Avviso del compilatore (livello 1) C4218
ms.date: 11/04/2016
f1_keywords:
- C4218
helpviewer_keywords:
- C4218
ms.assetid: d6c3cd90-4518-49e9-ae86-4ba9e2761d98
ms.openlocfilehash: f7553b30a17f50f559351353552fd656fceb8657
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199797"
---
# <a name="compiler-warning-level-1-c4218"></a>Avviso del compilatore (livello 1) C4218

utilizzata estensione non standard: è necessario specificare almeno una classe di archiviazione o un tipo

Con le estensioni Microsoft predefinite (/Ze), è possibile dichiarare una variabile senza specificare un tipo o una classe di archiviazione. Il tipo predefinito è `int`.

## <a name="example"></a>Esempio

```cpp
// C4218.c
// compile with: /W4
i;  // C4218

int main()
{
}
```

Queste dichiarazioni non sono valide in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).
