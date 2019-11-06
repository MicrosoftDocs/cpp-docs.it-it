---
title: Avviso del compilatore (livello 1) C4218
ms.date: 11/04/2016
f1_keywords:
- C4218
helpviewer_keywords:
- C4218
ms.assetid: d6c3cd90-4518-49e9-ae86-4ba9e2761d98
ms.openlocfilehash: f1db3eabc3b614019676dc4494e83104c62fe579
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73627312"
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