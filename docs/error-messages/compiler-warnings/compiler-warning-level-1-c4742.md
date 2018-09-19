---
title: Compilatore avviso (livello 1) C4742 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4742
dev_langs:
- C++
helpviewer_keywords:
- C4742
ms.assetid: e520881d-1eeb-48b1-9df0-8017ee8ba076
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 622a1b1cd62024da58191ce1312c391dd39e0d28
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46088592"
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