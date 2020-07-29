---
title: __int8, __int16, __int32, __int64
ms.date: 10/09/2018
f1_keywords:
- __int8_cpp
- __int16_cpp
- __int32_cpp
- __int64_cpp
- __int8
- __int16
- __int32
- __int64
- _int8
- _int16
- _int32
- _int64
helpviewer_keywords:
- __int16 keyword [C++]
- integer data type [C++], integer types in C++
- __int32 keyword [C++]
- integer types [C++]
- __int8 keyword [C++]
- __int64 keyword [C++]
ms.assetid: 8e384602-2578-4980-8cc8-da63842356b2
ms.openlocfilehash: 7888a282fffbaa2a23783c3875e02838fd0b1826
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227400"
---
# <a name="__int8-__int16-__int32-__int64"></a>__int8, __int16, __int32, __int64

**Specifiche di Microsoft**

Le funzionalità di Microsoft C/C++ supportano i tipi Integer ridimensionati. È possibile dichiarare variabili Integer a 8, 16, 32 o 64 bit usando l' **`__intN`** identificatore di tipo, dove ***`N`*** è 8, 16, 32 o 64.

Nell'esempio seguente viene dichiarata una variabile per ognuno dei quattro tipi Integer ridimensionati:

```cpp
__int8 nSmall;      // Declares 8-bit integer
__int16 nMedium;    // Declares 16-bit integer
__int32 nLarge;     // Declares 32-bit integer
__int64 nHuge;      // Declares 64-bit integer
```

I tipi **`__int8`** , **`__int16`** e **`__int32`** sono sinonimi per i tipi ANSI con la stessa dimensione e sono utili per la scrittura di codice portabile che si comporta in modo identico in più piattaforme. Il tipo **`__int8`** di dati è sinonimo del tipo **`char`** , **`__int16`** è sinonimo del tipo **`short`** ed **`__int32`** è sinonimo del tipo **`int`** . Il **`__int64`** tipo è sinonimo del tipo **`long long`** .

Per compatibilità con le versioni precedenti,,, **`_int8`** **`_int16`** **`_int32`** e **`_int64`** sono sinonimi per **`__int8`** , **`__int16`** , e, **`__int32`** **`__int64`** a meno che non sia specificata l'opzione del compilatore [ `/Za` \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato che un `__intN` parametro verrà promosso a **`int`** :

```cpp
// sized_int_types.cpp

#include <stdio.h>

void func(int i) {
    printf_s("%s\n", __FUNCTION__);
}

int main()
{
    __int8 i8 = 100;
    func(i8);   // no void func(__int8 i8) function
                // __int8 will be promoted to int
}
```

```Output
func
```

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Tipi incorporati](../cpp/fundamental-types-cpp.md)<br/>
[Intervalli dei tipi di dati](../cpp/data-type-ranges.md)<br/>
