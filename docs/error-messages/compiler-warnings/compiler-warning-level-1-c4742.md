---
title: Avviso del compilatore (livello 1) C4742
ms.date: 11/04/2016
f1_keywords:
- C4742
helpviewer_keywords:
- C4742
ms.assetid: e520881d-1eeb-48b1-9df0-8017ee8ba076
ms.openlocfilehash: 00ac67fec3aafa5a259b5222bd6bb8654210fa61
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62390425"
---
# <a name="compiler-warning-level-1-c4742"></a>Avviso del compilatore (livello 1) C4742

'var' ha un diverso allineamento in "file1" e "file2": numero e il numero

Una variabile esterna che è stato fatto riferimento o definizione in due file ha un diverso allineamento in tali file. Questo avviso viene generato quando il compilatore rileva che `__alignof` per la variabile nella *file1* differisce dalla `__alignof` per la variabile nella *file2*. Ciò può essere causato con tipi incompatibili durante la dichiarazione di variabile in diversi file, o non corrispondenti `#pragma pack` in file diversi.

Per risolvere questo problema, usare la stessa definizione di tipo o usare nomi diversi per le variabili.

Per altre informazioni, vedere [pack](../../preprocessor/pack.md) e [operatore alignof](../../cpp/alignof-operator.md).

## <a name="example"></a>Esempio

Questo è il primo file che definisce il tipo.

```
// C4742a.c
// compile with: /c
struct X {
   char x, y, z, w;
} global;
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4742.

```
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