---
title: Avviso del compilatore (livello 1) C4835
ms.date: 11/04/2016
f1_keywords:
- C4835
helpviewer_keywords:
- C4835
ms.assetid: d2e44c62-7b0e-4a45-943d-97903e27ed9d
ms.openlocfilehash: e59c8a7c9cdd9b892155a7d8ee8c8259324c2045
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052312"
---
# <a name="compiler-warning-level-1-c4835"></a>Avviso del compilatore (livello 1) C4835

' variable ': l'inizializzatore per i dati esportati non verrà eseguito finché il codice gestito non viene eseguito per la prima volta nell'assembly host

Quando si accede ai dati tra componenti gestiti, è consigliabile non utilizzare meccanismi di importazione C++ ed esportazione nativi. Dichiarare invece i membri dati all'interno di un tipo gestito e fare riferimento ai metadati con `#using` nel client. Per altre informazioni, vedere [Direttiva #using](../../preprocessor/hash-using-directive-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4835.

```cpp
// C4835.cpp
// compile with: /W1 /clr /LD
int f() { return 1; }
int n = 9;

__declspec(dllexport) int m = f();   // C4835
__declspec(dllexport) int *p = &n;   // C4835
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato il componente compilato nell'esempio precedente, che mostra che il valore delle variabili non è quello previsto.

```cpp
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