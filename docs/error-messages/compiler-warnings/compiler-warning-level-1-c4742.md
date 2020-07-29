---
title: Avviso del compilatore (livello 1) C4742
ms.date: 07/22/2020
f1_keywords:
- C4742
helpviewer_keywords:
- C4742
ms.assetid: e520881d-1eeb-48b1-9df0-8017ee8ba076
ms.openlocfilehash: e6ecd082a9f6d690414761d11d3a0adf101f87c2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233236"
---
# <a name="compiler-warning-level-1-c4742"></a>Avviso del compilatore (livello 1) C4742

> '*Variable*' ha un allineamento diverso in '*file1*' è*file2*': *number1* e *number2*

Una variabile esterna a cui si fa riferimento o che è stata definita in due file presenta un allineamento diverso in tali file.

## <a name="remarks"></a>Osservazioni

Questo avviso viene generato quando il compilatore rileva che **`alignof`** per la variabile in *file1* differisce da **`alignof`** per la variabile in *file2*. Questa situazione può essere causata dall'utilizzo di tipi incompatibili quando si dichiara una variabile in file diversi o tramite la mancata corrispondenza `#pragma pack` in file diversi.

Per risolvere il problema, usare la stessa definizione di tipo o usare nomi diversi per le variabili.

Per ulteriori informazioni, vedere [`pack`](../../preprocessor/pack.md) [ `alignof` operatore](../../cpp/alignof-operator.md)and.

## <a name="example"></a>Esempio

Si tratta del primo file che definisce il tipo.

```c
// C4742a.c
// compile with: /c
struct X {
   char x, y, z, w;
} global;
```

L'esempio seguente genera l'C4742.

```c
// C4742b.c
// compile with: C4742a.c /W1 /GL
// C4742 expected
extern struct X {
   int a;
} global;

int main() {
   global.a = 0;
}
```
