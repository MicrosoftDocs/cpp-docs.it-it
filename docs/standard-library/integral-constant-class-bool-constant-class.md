---
title: Classe integral_constant, classe bool_constant
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::integral_constant
- XTR1COMMON/std::integral_constant
- type_traits/std::bool_constant
- XTR1COMMON/std::bool_constant
helpviewer_keywords:
- std::integral_constant [C++]
- std::bool_constant [C++]
ms.assetid: 11c002c6-4d31-4042-9341-f2543f43e108
ms.openlocfilehash: f7b9217560bc94c536a7c819276266fd16fa4b07
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51520335"
---
# <a name="integralconstant-class-boolconstant-class"></a>Classe integral_constant, classe bool_constant

Crea una costante integrale da un tipo e da un valore.

## <a name="syntax"></a>Sintassi

```cpp
template<class T, T v>
struct integral_constant {
   static constexpr T value = v;
   typedef T value_type;
   typedef integral_constant<T, v> type;
   constexpr operator value_type() const noexcept;
   constexpr value_type operator()() const noexcept;
   };
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo della costante.

*v*<br/>
Il valore della costante.

## <a name="remarks"></a>Note

La classe modello `integral_constant`, quando è specializzata con un tipo integrale *T* e un valore *v* di quel tipo, rappresenta un oggetto che contiene una costante del tipo integrale con il valore specificato. Il membro denominato `type` è un alias per il tipo di specializzazione del modello generato e il membro `value` contiene il valore *v* usato per creare la specializzazione.

Il `bool_constant` classe modello è una specializzazione parziale esplicita di `integral_constant` che usa **bool** come il *T* argomento.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__integral_constant.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

int main()
    {
    std::cout << "integral_constant<int, 5> == "
        << std::integral_constant<int, 5>::value << std::endl;
    std::cout << "integral_constant<bool, false> == " << std::boolalpha
        << std::integral_constant<bool, false>::value << std::endl;

    return (0);
    }
```

```Output
integral_constant<int, 5> == 5
integral_constant<bool, false> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[false_type](../standard-library/type-traits-typedefs.md#false_type)<br/>
[true_type](../standard-library/type-traits-typedefs.md#true_type)<br/>
