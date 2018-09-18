---
title: Compilatore avviso (livello 3) C4240 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4240
dev_langs:
- C++
helpviewer_keywords:
- C4240
ms.assetid: a2657cdb-18e1-493f-882b-4e10c0bca71d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d2f3c059e63bcca9bbde9e863cc17c9e240e4f78
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46057015"
---
# <a name="compiler-warning-level-3-c4240"></a>Avviso del compilatore (livello 3) C4240

utilizzata estensione non standard: accesso a 'classname' ora definito come 'identificatore di accesso,' era precedentemente è stato definito come 'identificatore di accesso'

In compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), non è possibile modificare l'accesso a una classe annidata. Nelle estensioni di Microsoft (/Ze) impostazione predefinita, è possibile, da questo avviso.

## <a name="example"></a>Esempio

```
// C4240.cpp
// compile with: /W3
class X
{
private:
   class N;
public:
   class N
   {   // C4240
   };
};

int main()
{
}
```