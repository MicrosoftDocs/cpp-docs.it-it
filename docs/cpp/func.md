---
title: __Func__ | Documenti Microsoft
ms.custom: ''
ms.date: 10/19/2017
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __func__
dev_langs:
- C++
ms.assetid: a5299b8d-f0ee-4af2-91dd-8fb165e68798
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3d78a249fe5b111c17c29895edcdc3fa5ba2f27a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32413595"
---
# <a name="func"></a>__func__

**(C++11)**  L'identificatore predefinito &#95; &#95;func&#95; &#95; è definito in modo implicito come una stringa che contiene il nome non qualificato e non decorato della funzione contenitore. &#95;&#95;Func&#95; &#95; è indicato nello standard C++ e non è un'estensione Microsoft.

## <a name="syntax"></a>Sintassi

```cpp
__func__
```

## <a name="return-value"></a>Valore restituito

Restituisce una terminazione null const char una matrice di caratteri che contiene il nome della funzione.

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