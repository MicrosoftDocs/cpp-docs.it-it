---
title: alignof e alignas (C++)
ms.date: 11/04/2016
ms.assetid: 1d18aa8a-9621-4fb5-86e5-4cc86d5187f4
ms.openlocfilehash: 825df25494497e13d29212f7f951be8247b6f136
ms.sourcegitcommit: 185b8ee6dd4e10045df730c5b957b9729813da2d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/14/2018
ms.locfileid: "53411923"
---
# <a name="alignof-and-alignas-c"></a>alignof e alignas (C++)

Il **alignas** identificatore di tipo è un modo standard di C++ portabile, per specificare l'allineamento personalizzato di variabili e tipi definiti dall'utente. Il **alignof** operatore in modo analogo è un modo standard, portabile per ottenere l'allineamento di una variabile o un tipo specificato.

## <a name="example"></a>Esempio

È possibile usare **alignas** in una classe, struct o unione, oppure su singoli membri. Quando più **alignas** identificatori vengono rilevati, il compilatore sceglierà quello più rigoroso, (quello con il valore più grande).

```cpp
// alignas_alignof.cpp
// compile with: cl /EHsc alignas_alignof.cpp
#include <iostream>

struct alignas(16) Bar
{
    int i;       // 4 bytes
    int n;      // 4 bytes
    alignas(4) char arr[3];
    short s;          // 2 bytes
};

int main()
{
    std::cout << alignof(Bar) << std::endl; // output: 16
}
```

## <a name="see-also"></a>Vedere anche

[Allineamento](../cpp/alignment-cpp-declarations.md)
