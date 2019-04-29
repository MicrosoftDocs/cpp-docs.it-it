---
title: Avviso del compilatore (livello 4) C4221
ms.date: 11/04/2016
f1_keywords:
- C4221
helpviewer_keywords:
- C4221
ms.assetid: 8532bd68-54dc-4526-8597-f61dcb0a0129
ms.openlocfilehash: f552a5d76d1a778cdf72cbe079138f609350ffb1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401098"
---
# <a name="compiler-warning-level-4-c4221"></a>Avviso del compilatore (livello 4) C4221

utilizzata estensione non standard: 'identifier': non può essere inizializzato con l'indirizzo della variabile automatica

Con le estensioni Microsoft predefinito (/Ze), è possibile inizializzare un tipo di aggregazione (**matrice**, `struct`, o **union**) con l'indirizzo di una variabile locale (automatica).

## <a name="example"></a>Esempio

```
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

Tale inizializzazione non sono valide in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).