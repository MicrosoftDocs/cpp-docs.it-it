---
title: Avviso del compilatore (livello 1) C4742
ms.date: 11/04/2016
f1_keywords:
- C4742
helpviewer_keywords:
- C4742
ms.assetid: e520881d-1eeb-48b1-9df0-8017ee8ba076
ms.openlocfilehash: 11663a9b8672e2f91feb59e275181dbe645484e9
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74051302"
---
# <a name="compiler-warning-level-1-c4742"></a>Avviso del compilatore (livello 1) C4742

' var ' ha un allineamento diverso in ' file1' è file2': numero e numero

Una variabile esterna a cui si fa riferimento o che è stata definita in due file presenta un allineamento diverso in tali file. Questo avviso viene generato quando il compilatore rileva che `__alignof` per la variabile in *file1* differisce da `__alignof` per la variabile in *file2*. Questa situazione può essere causata dall'utilizzo di tipi incompatibili quando si dichiara una variabile in file diversi o utilizzando `#pragma pack` non corrispondenti in file diversi.

Per risolvere il problema, usare la stessa definizione di tipo o usare nomi diversi per le variabili.

Per ulteriori informazioni, vedere operatore [Pack](../../preprocessor/pack.md) e [__alignof](../../cpp/alignof-operator.md).

## <a name="example"></a>Esempio

Si tratta del primo file che definisce il tipo.

```c
// C4742a.c
// compile with: /c
struct X {
   char x, y, z, w;
} global;
```

## <a name="example"></a>Esempio

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