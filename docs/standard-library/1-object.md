---
title: Oggetto _1
ms.date: 11/04/2016
f1_keywords:
- _1
- std::_1
- functional/std::_1
helpviewer_keywords:
- _1 object
ms.assetid: 30c3c480-ff31-4708-94be-7d0d65f243c9
ms.openlocfilehash: 248bb4733849b231ee4ff9180dd04e288412af3b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50666365"
---
# <a name="1-object"></a>Oggetto _1

Segnaposto per gli argomenti sostituibili.

## <a name="syntax"></a>Sintassi

```cpp
namespace placeholders {
    extern unspecified _1,
    _2, ... _M
} // namespace placeholders (within std)
```

## <a name="remarks"></a>Note

Gli oggetti `_1, _2, ... _M` sono segnaposto che designa il primo, secondo e così via argomento Mth rispettivamente in una chiamata di funzione a un oggetto restituito da [associare](../standard-library/functional-functions.md#bind). Usare `_N` per specificare il punto in cui inserire l'argomento Nth quando viene valutata l'espressione bind.

In questa implementazione il valore di `M` è 20.

## <a name="example"></a>Esempio

```cpp
// std__functional_placeholder.cpp
// compile with: /EHsc
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std::placeholders;

void square(double x)
    {
    std::cout << x << "^2 == " << x * x << std::endl;
    }

void product(double x, double y)
    {
    std::cout << x << "*" << y << " == " << x * y << std::endl;
    }

int main()
    {
    double arg[] = {1, 2, 3};

    std::for_each(&arg[0], &arg[3], square);
    std::cout << std::endl;

    std::for_each(&arg[0], &arg[3], std::bind(product, _1, 2));
    std::cout << std::endl;

    std::for_each(&arg[0], &arg[3], std::bind(square, _1));

    return (0);
    }

```

```Output
1^2 == 1
2^2 == 4
3^2 == 9

1*2 == 2
2*2 == 4
3*2 == 6

1^2 == 1
2^2 == 4
3^2 == 9
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[bind](../standard-library/functional-functions.md#bind)<br/>
[Classe is_placeholder](../standard-library/is-placeholder-class.md)<br/>
