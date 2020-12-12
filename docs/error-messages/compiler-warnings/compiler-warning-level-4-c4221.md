---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4221'
title: Avviso del compilatore (livello 4) C4221
ms.date: 11/04/2016
f1_keywords:
- C4221
helpviewer_keywords:
- C4221
ms.assetid: 8532bd68-54dc-4526-8597-f61dcb0a0129
ms.openlocfilehash: 4632b075dfb6a7c1895415a253c70f5b4fd4f278
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164276"
---
# <a name="compiler-warning-level-4-c4221"></a>Avviso del compilatore (livello 4) C4221

utilizzata estensione non standard:' Identifier ': Impossibile inizializzare utilizzando l'indirizzo della variabile automatica

Con le estensioni Microsoft predefinite (/Ze), è possibile inizializzare un tipo di aggregazione (**Array**, **`struct`** o **`union`** ) con l'indirizzo di una variabile locale (automatica).

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
