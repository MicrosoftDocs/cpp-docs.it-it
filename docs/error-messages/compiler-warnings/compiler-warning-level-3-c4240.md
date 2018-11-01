---
title: Avviso del compilatore (livello 3) C4240
ms.date: 11/04/2016
f1_keywords:
- C4240
helpviewer_keywords:
- C4240
ms.assetid: a2657cdb-18e1-493f-882b-4e10c0bca71d
ms.openlocfilehash: fe5306cc7909138fea0159553b53c2adc6a46dc0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50498241"
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