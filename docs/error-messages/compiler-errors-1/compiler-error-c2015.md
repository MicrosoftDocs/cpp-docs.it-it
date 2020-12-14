---
description: 'Altre informazioni su: errore del compilatore C2015'
title: Errore del compilatore C2015
ms.date: 11/04/2016
f1_keywords:
- C2015
helpviewer_keywords:
- C2015
ms.assetid: 8f40af0a-3a5a-4d6a-8ed7-125966e6bfed
ms.openlocfilehash: 0c27dbf8f7383ebd6424e9482fd1ce8cc0839a39
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220955"
---
# <a name="compiler-error-c2015"></a>Errore del compilatore C2015

troppi caratteri nella costante

Una costante carattere contiene più di due caratteri. Il limite è un carattere per le costanti carattere standard e due caratteri per le costanti carattere lungo.

Una sequenza di escape, ad esempio \t, viene convertita in un singolo carattere.

## <a name="examples"></a>Esempio

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
