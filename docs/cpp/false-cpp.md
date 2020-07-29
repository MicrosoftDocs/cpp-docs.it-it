---
title: false (C++)
ms.date: 11/04/2016
f1_keywords:
- false_cpp
helpviewer_keywords:
- false keyword [C++]
ms.assetid: cc13aec5-1f02-4d38-8dbf-5473ea2b354f
ms.openlocfilehash: d6162bdde3dea0d245a0c83c1d52b06003fee16c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227491"
---
# <a name="false-c"></a>false (C++)

La parola chiave è uno dei due valori per una variabile di tipo [bool](../cpp/bool-cpp.md) o un'espressione condizionale (un'espressione condizionale è ora un' **`true`** espressione booleana). Se, ad esempio, `i` è una variabile di tipo **`bool`** , l' `i = false;` istruzione assegna **`false`** a `i` .

## <a name="example"></a>Esempio

```cpp
// bool_false.cpp
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
