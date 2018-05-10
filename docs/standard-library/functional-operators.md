---
title: Operatori &lt;functional&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- functional/std::operator!=
- functional/std::operator==
dev_langs:
- C++
helpviewer_keywords:
- functional operators
ms.assetid: d4b3c760-f3e2-4b65-bdaa-d42e8dd6f5e1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6e84ed8ed97a529d67c6d136fd8464cd13c8a502
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="ltfunctionalgt-operators"></a>Operatori &lt;functional&gt;

|||
|-|-|
|[operator!=](#op_neq)|[operator==](#op_eq_eq)|

## <a name="op_eq_eq"></a>  operator==

Verifica se l'oggetto chiamabile è vuoto.

```cpp
template <class Fty>
bool operator==(const function<Fty>& f, null_ptr_type npc);

template <class Fty>
bool operator==(null_ptr_type npc, const function<Fty>& f);
```

### <a name="parameters"></a>Parametri

`Fty` Il tipo di funzione per eseguire il wrapping.

`f` L'oggetto della funzione

`npc` Un puntatore null.

### <a name="remarks"></a>Note

Gli operatori accettano entrambi un argomento che è un riferimento a un oggetto `function` e un argomento che è una costante puntatore Null. Entrambi restituiscono true solo se l'oggetto `function` è vuoto.

### <a name="example"></a>Esempio

```cpp
// std__functional__operator_eq.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val)
{
    return (-val);
}

int main()
{
    std::function<int(int)> fn0;
    std::cout << std::boolalpha << "empty == "
        << (fn0 == 0) << std::endl;

    std::function<int(int)> fn1(neg);
    std::cout << std::boolalpha << "empty == "
        << (fn1 == 0) << std::endl;

    return (0);
}

```

```Output
empty == true
empty == false
```

## <a name="op_neq"></a>  operator!=

Verifica se l'oggetto chiamabile non è vuoto.

```cpp
template <class Fty>
bool operator!=(const function<Fty>& f, null_ptr_type npc);

template <class Fty>
bool operator!=(null_ptr_type npc, const function<Fty>& f);
```

### <a name="parameters"></a>Parametri

`Fty` Il tipo di funzione per eseguire il wrapping.

`f` L'oggetto della funzione

`npc` Un puntatore null.

### <a name="remarks"></a>Note

Gli operatori accettano entrambi un argomento che è un riferimento a un oggetto `function` e un argomento che è una costante puntatore Null. Tutte e due restituiscono true solo se l'oggetto `function` non è vuoto.

### <a name="example"></a>Esempio

```cpp
// std__functional__operator_ne.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val)
    {
    return (-val);
    }

int main()
    {
    std::function<int (int)> fn0;
    std::cout << std::boolalpha << "not empty == "
        << (fn0 != 0) << std::endl;

    std::function<int (int)> fn1(neg);
    std::cout << std::boolalpha << "not empty == "
        << (fn1 != 0) << std::endl;

    return (0);
    }

```

```Output
not empty == false
not empty == true
```

## <a name="see-also"></a>Vedere anche

[\<functional>](../standard-library/functional.md)<br/>
