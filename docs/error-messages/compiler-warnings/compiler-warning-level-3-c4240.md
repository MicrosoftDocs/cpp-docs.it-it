---
title: Avviso del compilatore (livello 3) C4240
ms.date: 11/04/2016
f1_keywords:
- C4240
helpviewer_keywords:
- C4240
ms.assetid: a2657cdb-18e1-493f-882b-4e10c0bca71d
ms.openlocfilehash: 9e4d33bd0151e4355903c7d10b667ced405a2471
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161568"
---
# <a name="compiler-warning-level-3-c4240"></a>Avviso del compilatore (livello 3) C4240

utilizzata estensione non standard: l'accesso a' nomeclasse ' è ora definito come ' identificatore di accesso ', in precedenza è stato definito come ' identificatore di accesso '

In compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)) non è possibile modificare l'accesso a una classe annidata. In default Microsoft Extensions (/Ze) è possibile, con questo avviso.

## <a name="example"></a>Esempio

```cpp
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
