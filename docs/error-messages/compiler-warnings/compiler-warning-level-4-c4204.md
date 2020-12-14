---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4204'
title: Avviso del compilatore (livello 4) C4204
ms.date: 11/04/2016
f1_keywords:
- C4204
helpviewer_keywords:
- C4204
ms.assetid: 298d2880-6737-448e-b711-15572d540200
ms.openlocfilehash: edb802e1aa958e28d0a41f3cc64f5ddf058db909
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314789"
---
# <a name="compiler-warning-level-4-c4204"></a>Avviso del compilatore (livello 4) C4204

utilizzata estensione non standard: inizializzatore di aggregazione non costante

Con le estensioni Microsoft (/Ze) è possibile inizializzare i tipi aggregati (matrici, strutture, unioni e classi) con valori che non sono costanti.

## <a name="example"></a>Esempio

```c
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

Tali inizializzazioni non sono valide in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).
