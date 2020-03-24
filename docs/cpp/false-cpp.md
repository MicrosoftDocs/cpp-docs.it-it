---
title: false (C++)
ms.date: 11/04/2016
f1_keywords:
- false_cpp
helpviewer_keywords:
- false keyword [C++]
ms.assetid: cc13aec5-1f02-4d38-8dbf-5473ea2b354f
ms.openlocfilehash: f363e309b91e44472447d040aa36752750afec6f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188935"
---
# <a name="false-c"></a>false (C++)

La parola chiave è uno dei due valori per una variabile di tipo [bool](../cpp/bool-cpp.md) o un'espressione condizionale (un'espressione condizionale è ora un'espressione booleana **true** ). Se ad esempio `i` è una variabile di tipo **bool**, l'istruzione `i = false;` assegna **false** a `i`.

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
