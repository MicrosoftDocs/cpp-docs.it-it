---
title: Avviso del compilatore (livello 1) C4835
ms.date: 11/04/2016
f1_keywords:
- C4835
helpviewer_keywords:
- C4835
ms.assetid: d2e44c62-7b0e-4a45-943d-97903e27ed9d
ms.openlocfilehash: 0427a97a9e368a19a40a8d1a552f7713e36f831e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62380851"
---
# <a name="compiler-warning-level-1-c4835"></a>Avviso del compilatore (livello 1) C4835

'variable': l'inizializzatore di dati esportati non verrà eseguita fino a quando non viene eseguito per primo codice gestito nell'assembly su host

Quando si accede a dati tra i componenti gestiti, è consigliabile non usare l'importazione in C++ nativo e meccanismi di esportazione. In alternativa, dichiarare i membri di dati all'interno di un tipo gestito e fare riferimento ai metadati con `#using` nel client. Per altre informazioni, vedere [Direttiva #using](../../preprocessor/hash-using-directive-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4835.

```
// C4835.cpp
// compile with: /W1 /clr /LD
int f() { return 1; }
int n = 9;

__declspec(dllexport) int m = f();   // C4835
__declspec(dllexport) int *p = &n;   // C4835
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato il componente creato nell'esempio precedente, che mostra che il valore delle variabili non risulta come previsto.

```
// C4835_b.cpp
// compile with: /clr C4835.lib
#include <stdio.h>
__declspec(dllimport) int m;
__declspec(dllimport) int *p;

int main() {
   printf("%d\n", m);
   printf("%d\n", p);
}
```

```Output
0
268456008
```