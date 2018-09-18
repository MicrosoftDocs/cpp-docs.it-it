---
title: Compilatore avviso (livello 4) C4221 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4221
dev_langs:
- C++
helpviewer_keywords:
- C4221
ms.assetid: 8532bd68-54dc-4526-8597-f61dcb0a0129
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 18b0804c8b7cb2d059e45fa504334687a796fbe1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46056417"
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