---
description: 'Altre informazioni su: common_type Class'
title: Classe common_type
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::common_type
helpviewer_keywords:
- common_type class
- common_type
ms.assetid: 02bc4e7b-c63d-49de-9f8a-511d3a5c1e7f
ms.openlocfilehash: 7dc41b443f6ec93c9d07ba8e3871346fae09d94f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97233916"
---
# <a name="common_type-class"></a>Classe common_type

Determina il tipo comune di uno o più tipi.

## <a name="syntax"></a>Sintassi

```cpp
template <class... T>
struct common_type;

template <class T>
struct common_type<T> {
    typedef typename decay<T>::type type;
};

template <class T, class U>
struct common_type<T, U> {
    typedef typename decay<decltype(true declval<T>() :
    declval<U>())>::type type;
};

template <class T, class U, class... V>
struct common_type<T, U, V...> {
    typedef typename common_type<typename common_type<T, U>::type, V...>::type type;
};
```

### <a name="parameters"></a>Parametri

Elenco di [tipi completi](../c-language/incomplete-types.md) o void.

## <a name="remarks"></a>Commenti

Il membro `type` è il tipo comune in cui possono essere convertiti tutti i tipi nell'elenco di parametri.

## <a name="example"></a>Esempio

Il seguente programma illustra alcuni scenari di corretto utilizzo e verifica i risultati.

```cpp
// Compile using cl.exe /EHsc
// common_type sample
#include <iostream>
#include <type_traits>

struct Base {};
struct Derived : Base {};

int main()
{
    typedef std::common_type<unsigned char, short, int>::type NumericType;
    typedef std::common_type<float, double>::type FloatType;
    typedef std::common_type<const int, volatile int>::type ModifiedIntType;
    typedef std::common_type<Base, Derived>::type ClassType;

    std::cout << std::boolalpha;
    std::cout << "Test for typedefs of common_type int" << std::endl;
    std::cout << "NumericType: "     << std::is_same<int, NumericType>::value << std::endl;
    std::cout << "FloatType: "       << std::is_same<int, FloatType>::value << std::endl;
    std::cout << "ModifiedIntType: " << std::is_same<int, ModifiedIntType>::value << std::endl;
    std::cout << "ClassType: "       << std::is_same<int, ClassType>::value << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "Test for typedefs of common_type double" << std::endl;
    std::cout << "NumericType: "     << std::is_same<double, NumericType>::value << std::endl;
    std::cout << "FloatType: "       << std::is_same<double, FloatType>::value << std::endl;
    std::cout << "ModifiedIntType: " << std::is_same<double, ModifiedIntType>::value << std::endl;
    std::cout << "ClassType: "       << std::is_same<double, ClassType>::value << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "Test for typedefs of common_type Base" << std::endl;
    std::cout << "NumericType: "     << std::is_same<Base, NumericType>::value << std::endl;
    std::cout << "FloatType: "       << std::is_same<Base, FloatType>::value << std::endl;
    std::cout << "ModifiedIntType: " << std::is_same<Base, ModifiedIntType>::value << std::endl;
    std::cout << "ClassType: "       << std::is_same<Base, ClassType>::value << std::endl;

    return 0;
}
```

## <a name="output"></a>Output

```Output
Test for typedefs of common_type int
NumericType: true
FloatType: false
ModifiedIntType: true
ClassType: false
---------------------------
Test for typedefs of common_type double
NumericType: false
FloatType: true
ModifiedIntType: false
ClassType: false
---------------------------
Test for typedefs of common_type Base
NumericType: false
FloatType: false
ModifiedIntType: false
ClassType: true
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
