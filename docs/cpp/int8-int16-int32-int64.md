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
ms.openlocfilehash: 4e793f23581f7dc62a39fcd8c5c504fb5a2ccbc9
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301470"
---
# <a name="__int8-__int16-__int32-__int64"></a>__int8, __int16, __int32, __int64

**Sezione specifica Microsoft**

Le funzionalità di Microsoft C/C++ supportano i tipi Integer ridimensionati. È possibile dichiarare variabili Integer a 8, 16, 32 o 64 bit usando l'identificatore di tipo **__int**<em>n</em> , dove *n* è 8, 16, 32 o 64.

Nell'esempio seguente viene dichiarata una variabile per ognuno dei quattro tipi Integer ridimensionati:

```cpp
__int8 nSmall;      // Declares 8-bit integer
__int16 nMedium;    // Declares 16-bit integer
__int32 nLarge;     // Declares 32-bit integer
__int64 nHuge;      // Declares 64-bit integer
```

I tipi **__int8**, **__int16**e **__int32** sono sinonimi per i tipi ANSI con la stessa dimensione e sono utili per la scrittura di codice portabile che si comporta in modo identico in più piattaforme. Il tipo di dati **__int8** è sinonimo del tipo **char**, **__int16** è sinonimo del tipo **short**e **__int32** è sinonimo del tipo **int**. Il tipo di **__int64** è sinonimo del tipo **Long Long**.

Per compatibilità con le versioni precedenti, **_int8**, **_int16**, **_int32**e **_int64** sono sinonimi **per __int8**, **__int16**, **__int32**e **__int64** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato che un parametro __int*XX* verrà promosso a **int**:

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Tipi incorporati](../cpp/fundamental-types-cpp.md)<br/>
[Intervalli dei tipi di dati](../cpp/data-type-ranges.md)<br/>
