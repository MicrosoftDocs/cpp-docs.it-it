---
title: Avviso del compilatore (livello 4) C4221
ms.date: 11/04/2016
f1_keywords:
- C4221
helpviewer_keywords:
- C4221
ms.assetid: 8532bd68-54dc-4526-8597-f61dcb0a0129
ms.openlocfilehash: fa948865685af4cbd6a865cfbf1d8546b29ab280
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161139"
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
