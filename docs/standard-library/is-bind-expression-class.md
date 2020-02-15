---
title: Classe is_bind_expression
ms.date: 11/04/2016
f1_keywords:
- functional/std::is_bind_expression
helpviewer_keywords:
- is_bind_expression class
ms.assetid: 0715f9e9-2239-4778-a1cf-2c21f49dfd47
ms.openlocfilehash: 9d83ff978ccbaec5e66509ac94f22cf29bc20866
ms.sourcegitcommit: 8414cd91297dea88c480e208c7b5301db9972f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2020
ms.locfileid: "77258082"
---
# <a name="is_bind_expression-class"></a>Classe is_bind_expression

Verifica se il tipo viene generato chiamando `bind`.

## <a name="syntax"></a>Sintassi

```cpp
template<class Ty>
struct is_bind_expression {
   static const bool value;
};
```

## <a name="remarks"></a>Osservazioni

Il membro costante `value` è true se `Ty` è un tipo restituito da una chiamata a `bind`; in caso contrario, è false.

## <a name="example"></a>Esempio

```cpp
// std__functional__is_bind_expression.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

void square(double x)
{
    std::cout << x << "^2 == " << x * x << std::endl;
}

template<class Expr>
void test_for_bind(const Expr&)
{
    std::cout << std::is_bind_expression<Expr>::value << std::endl;
}

int main()
{
    test_for_bind(3.0 * 3.0);
    test_for_bind(std::bind(square, 3));

    return (0);
}
```

```Output
0
1
```
