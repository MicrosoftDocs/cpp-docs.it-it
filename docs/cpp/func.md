---
description: 'Altre informazioni su: __Func__'
title: __func__
ms.date: 10/19/2017
f1_keywords:
- __func__
ms.assetid: a5299b8d-f0ee-4af2-91dd-8fb165e68798
ms.openlocfilehash: 6e075d0f566bb8c3eb72e62a30a36ef80528647b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337706"
---
# <a name="__func__"></a>__func__

**(C++ 11)** L'identificatore predefinito &#95;&#95;Func&#95;&#95; viene definito in modo implicito come stringa che contiene il nome non qualificato e non decorato della funzione contenitore. &#95;&#95;Func&#95;&#95; è richiesto dallo standard C++ e non è un'estensione Microsoft.

## <a name="syntax"></a>Sintassi

```cpp
__func__
```

## <a name="return-value"></a>Valore restituito

Restituisce una matrice di caratteri const con terminazione null contenente il nome della funzione.

## <a name="example"></a>Esempio

```cpp
#include <string>
#include <iostream>

namespace Test
{
    struct Foo
    {
        static void DoSomething(int i, std::string s)
        {
           std::cout << __func__ << std::endl; // Output: DoSomething
        }
    };
}

int main()
{
    Test::Foo::DoSomething(42, "Hello");

    return 0;
}
```

## <a name="requirements"></a>Requisiti

C++11
