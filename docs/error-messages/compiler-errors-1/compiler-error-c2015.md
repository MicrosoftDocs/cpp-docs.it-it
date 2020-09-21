---
title: Errore del compilatore C2015
ms.date: 11/04/2016
f1_keywords:
- C2015
helpviewer_keywords:
- C2015
ms.assetid: 8f40af0a-3a5a-4d6a-8ed7-125966e6bfed
ms.openlocfilehash: 5453009e1c2bd091ed3507f3c43bd7fcecd33abc
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90743100"
---
# <a name="compiler-error-c2015"></a>Errore del compilatore C2015

troppi caratteri nella costante

Una costante carattere contiene più di due caratteri. Il limite è un carattere per le costanti carattere standard e due caratteri per le costanti carattere lungo.

Una sequenza di escape, ad esempio \t, viene convertita in un singolo carattere.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'C2015:

```cpp
// C2015.cpp
// compile with: /c

char test1 = 'error';   // C2015
char test2 = 'e';   // OK
```

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
