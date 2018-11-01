---
title: Avviso del compilatore (livello 4) C4204
ms.date: 11/04/2016
f1_keywords:
- C4204
helpviewer_keywords:
- C4204
ms.assetid: 298d2880-6737-448e-b711-15572d540200
ms.openlocfilehash: e16cb9fb59ee6ec24bb9b68dad1be9432d9eee3f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50573004"
---
# <a name="compiler-warning-level-4-c4204"></a>Avviso del compilatore (livello 4) C4204

utilizzata estensione non standard: inizializzatore di aggregazione non costante

Con le estensioni Microsoft (/Ze), è possibile inizializzare tipi di aggregazione (matrici, strutture, unioni e classi) con i valori che non sono costanti.

## <a name="example"></a>Esempio

```
// C4204.c
// compile with: /W4
int func1()
{
   return 0;
}
struct S1
{
   int i;
};

int main()
{
   struct S1 s1 = { func1() };   // C4204
   return s1.i;
}
```

Tale inizializzazione non sono valide in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).