---
description: 'Altre informazioni su: true (C++)'
title: true (C++)
ms.date: 11/04/2016
f1_keywords:
- true_cpp
helpviewer_keywords:
- true keyword [C++]
ms.assetid: 96be2a70-51c3-4250-9752-874d25a5a11e
ms.openlocfilehash: 6f3a9a183a30057ab3a013dad6e03458e6532658
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186454"
---
# <a name="true-c"></a>true (C++)

## <a name="syntax"></a>Sintassi

```
bool-identifier = true ;
bool-expression logical-operator true ;
```

## <a name="remarks"></a>Osservazioni

Questa parola chiave è uno dei due valori per una variabile di tipo [bool](../cpp/bool-cpp.md) o un'espressione condizionale (un'espressione condizionale è ora un'espressione booleana true). Se `i` è di tipo **`bool`** , l'istruzione `i = true;` assegna **`true`** a `i` .

## <a name="example"></a>Esempio

```cpp
// bool_true.cpp
#include <stdio.h>
int main()
{
    bool bb = true;
    printf_s("%d\n", bb);
    bb = false;
    printf_s("%d\n", bb);
}
```

```Output
1
0
```

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)
