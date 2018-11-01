---
title: Errore del compilatore C2015
ms.date: 11/04/2016
f1_keywords:
- C2015
helpviewer_keywords:
- C2015
ms.assetid: 8f40af0a-3a5a-4d6a-8ed7-125966e6bfed
ms.openlocfilehash: d761dfde26cce9c99ccd4c3e6fd86ae1d6e16ddc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50573277"
---
# <a name="compiler-error-c2015"></a>Errore del compilatore C2015

Troppi caratteri nella costante

Una costante carattere contiene più di due caratteri. Il limite è un singolo carattere per le costanti carattere standard e due caratteri per le costanti di tipo carattere long.

Una sequenza di escape, ad esempio, \t viene convertita in un singolo carattere.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2015:

```
// C2015.cpp
// compile with: /c

char test1 = 'error';   // C2015
char test2 = 'e';   // OK
```

## <a name="example"></a>Esempio

C2015 può verificarsi anche quando si usa un'estensione Microsoft, le costanti carattere vengono convertite in numeri interi.  L'esempio seguente genera l'errore C2015:

```
// C2015b.cpp
#include <stdio.h>

int main()
{
    int a = 'abcde';   // C2015

    int b = 'a';   // 'a' = ascii 0x61
    printf_s("%x\n", b);
}
```