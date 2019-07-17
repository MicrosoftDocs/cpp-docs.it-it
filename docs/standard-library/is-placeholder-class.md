---
title: Classe is_placeholder
ms.date: 11/04/2016
f1_keywords:
- functional/std::is_placeholder
helpviewer_keywords:
- is_placeholder class
ms.assetid: 2b21a792-96d1-4bb8-b911-0db796510835
ms.openlocfilehash: 9fa7d4aaade6244fe26f89f3a667598d39471a47
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245165"
---
# <a name="isplaceholder-class"></a>Classe is_placeholder

Verifica se il tipo è un segnaposto.

## <a name="syntax"></a>Sintassi

struct is_placeholder {static const int value;};

## <a name="remarks"></a>Note

Il valore costante `value` è 0 se il tipo `Ty` non è un segnaposto; in caso contrario, il relativo valore corrisponde alla posizione dell'argomento della chiamata di funzione a cui è associato. Usarlo per determinare il valore `N` per l'ennesimo segnaposto `_N`.

## <a name="example"></a>Esempio

```cpp
// std__functional__is_placeholder.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

using namespace std::placeholders;

template<class Expr>
void test_for_placeholder(const Expr&)
{
    std::cout << std::is_placeholder<Expr>::value << std::endl;
}

int main()
{
    test_for_placeholder(3.0);
    test_for_placeholder(_3);

    return (0);
}
```

```Output
0
3
```
