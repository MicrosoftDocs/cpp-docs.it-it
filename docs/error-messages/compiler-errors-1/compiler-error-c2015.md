---
title: Errore del compilatore C2015
ms.date: 11/04/2016
f1_keywords:
- C2015
helpviewer_keywords:
- C2015
ms.assetid: 8f40af0a-3a5a-4d6a-8ed7-125966e6bfed
ms.openlocfilehash: 83b78336d74037b9f9f52da8327479f506db1ffc
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74751070"
---
# <a name="compiler-error-c2015"></a>Errore del compilatore C2015

troppi caratteri nella costante

Una costante carattere contiene più di due caratteri. Il limite è un carattere per le costanti carattere standard e due caratteri per le costanti carattere lungo.

Una sequenza di escape, ad esempio \t, viene convertita in un singolo carattere.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2015:

```cpp
// C2015.cpp
// compile with: /c

char test1 = 'error';   // C2015
char test2 = 'e';   // OK
```

## <a name="example"></a>Esempio

C2015 può verificarsi anche quando si usa un'estensione Microsoft, le costanti carattere vengono convertite in numeri interi.  L'esempio seguente genera l'C2015:

```cpp
// C2015b.cpp
#include <stdio.h>

int main()
{
    int a = 'abcde';   // C2015

    int b = 'a';   // 'a' = ascii 0x61
    printf_s("%x\n", b);
}
```
