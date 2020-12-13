---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4240'
title: Avviso del compilatore (livello 3) C4240
ms.date: 11/04/2016
f1_keywords:
- C4240
helpviewer_keywords:
- C4240
ms.assetid: a2657cdb-18e1-493f-882b-4e10c0bca71d
ms.openlocfilehash: 95e704b6ad91ff77c4def0b4fa1fe8fad002e5ae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344198"
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
