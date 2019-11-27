---
title: Avviso del compilatore (livello 4) C4221
ms.date: 11/04/2016
f1_keywords:
- C4221
helpviewer_keywords:
- C4221
ms.assetid: 8532bd68-54dc-4526-8597-f61dcb0a0129
ms.openlocfilehash: fa87c240472df2926753781f0f14cbd69752de00
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541932"
---
# <a name="compiler-warning-level-4-c4221"></a>Avviso del compilatore (livello 4) C4221

utilizzata estensione non standard:' Identifier ': Impossibile inizializzare utilizzando l'indirizzo della variabile automatica

Con le estensioni Microsoft predefinite (/Ze), è possibile inizializzare un tipo di aggregazione (**Array**, `struct`o **Union**) con l'indirizzo di una variabile locale (automatica).

## <a name="example"></a>Esempio

```c
// C4221.c
// compile with: /W4
struct S
{
   int *i;
};

void func()
{
   int j;
   struct S s1 = { &j };   // C4221
}

int main()
{
}
```

Tali inizializzazioni non sono valide in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).