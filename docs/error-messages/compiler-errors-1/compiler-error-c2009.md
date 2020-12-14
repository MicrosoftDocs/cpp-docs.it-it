---
description: 'Altre informazioni su: errore del compilatore c2009'
title: Errore del compilatore c2009
ms.date: 11/04/2016
f1_keywords:
- C2009
helpviewer_keywords:
- C2009
ms.assetid: fe9d94ed-20a5-4d83-b9c4-60ee69d2f30a
ms.openlocfilehash: e7cc3078a8e404635dda531533bd3b1c629a0155
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97221052"
---
# <a name="compiler-error-c2009"></a>Errore del compilatore c2009

riutilizzo di 'identifier' come parametro formale della macro

L'elenco di parametri formali di una definizione di macro USA più volte l'identificatore. Gli identificatori nell'elenco di parametri della macro devono essere univoci.

## <a name="examples"></a>Esempio

L'esempio seguente genera l'c2009:

```cpp
// C2009.cpp
#include <stdio.h>

#define macro1(a,a) (a*a)   // C2009

int main()
{
    printf_s("%d\n", macro1(2));
}
```

Possibile soluzione:

```cpp
// C2009b.cpp
#include <stdio.h>

#define macro2(a)   (a*a)
#define macro3(a,b) (a*b)

int main()
{
    printf_s("%d\n", macro2(2));
    printf_s("%d\n", macro3(2,4));
}
```
