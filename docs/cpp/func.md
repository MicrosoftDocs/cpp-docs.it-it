---
title: __func__
ms.date: 10/19/2017
f1_keywords:
- __func__
ms.assetid: a5299b8d-f0ee-4af2-91dd-8fb165e68798
ms.openlocfilehash: eecd3efea6239c92a8bc81c0ed13a9563e5b87d2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438584"
---
# <a name="func"></a>__func__

**(C++11)**  L'identificatore predefinito &#95; &#95;func&#95; &#95; è definito in modo implicito come una stringa che contiene il nome non qualificato e senza Adorner della funzione contenitore. &#95;&#95;Func&#95; &#95; è indicato nello standard C++ e non è un'estensione Microsoft.

## <a name="syntax"></a>Sintassi

```cpp
__func__
```

## <a name="return-value"></a>Valore restituito

Restituisce una terminazione null const char matrice di caratteri che contiene il nome della funzione.

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