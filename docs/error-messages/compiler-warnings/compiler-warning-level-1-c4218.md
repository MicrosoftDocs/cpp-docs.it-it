---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4218'
title: Avviso del compilatore (livello 1) C4218
ms.date: 11/04/2016
f1_keywords:
- C4218
helpviewer_keywords:
- C4218
ms.assetid: d6c3cd90-4518-49e9-ae86-4ba9e2761d98
ms.openlocfilehash: 76fc53a5b290a55c73fe036e2fc02b7a1afedd23
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266416"
---
# <a name="compiler-warning-level-1-c4218"></a>Avviso del compilatore (livello 1) C4218

utilizzata estensione non standard: è necessario specificare almeno una classe di archiviazione o un tipo

Con le estensioni Microsoft predefinite (/Ze), è possibile dichiarare una variabile senza specificare un tipo o una classe di archiviazione. Il tipo predefinito è **`int`** .

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
