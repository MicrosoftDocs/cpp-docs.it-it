---
title: Classe is_placeholder | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- functional/std::is_placeholder
dev_langs:
- C++
helpviewer_keywords:
- is_placeholder class
ms.assetid: 2b21a792-96d1-4bb8-b911-0db796510835
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b577803f766d8f5cafa054e84b5b7ec0f152480b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33852240"
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

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Oggetto _1](../standard-library/1-object.md)<br/>
