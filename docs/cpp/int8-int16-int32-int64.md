---
title: __int8, __int16, __int32, __int64 | Microsoft Docs
ms.custom: ''
ms.date: 10/09/2018
ms.technology:
- cpp-language
ms.topic: language-reference
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
dev_langs:
- C++
helpviewer_keywords:
- __int16 keyword [C++]
- integer data type [C++], integer types in C++
- __int32 keyword [C++]
- integer types [C++]
- __int8 keyword [C++]
- __int64 keyword [C++]
ms.assetid: 8e384602-2578-4980-8cc8-da63842356b2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b639e7a65bbe206d029a5ba28109170cb0f6a610
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49163543"
---
# <a name="int8-int16-int32-int64"></a>__int8, __int16, __int32, __int64

**Sezione specifica Microsoft**

Le funzionalità di Microsoft C/C++ supportano i tipi Integer ridimensionati. È possibile dichiarare 8, 16, 32- o le variabili integer a 64 bit usando la **int**<em>n</em> identificatore di tipo in cui *n* è 8, 16, 32 o 64.

Nell'esempio seguente viene dichiarata una variabile per ognuno dei quattro tipi Integer ridimensionati:

```cpp
__int8 nSmall;      // Declares 8-bit integer
__int16 nMedium;    // Declares 16-bit integer
__int32 nLarge;     // Declares 32-bit integer
__int64 nHuge;      // Declares 64-bit integer
```

I tipi **__int8**, **__int16**, e **__int32** sono sinonimi per i tipi ANSI che hanno la stessa dimensione e sono utili per la scrittura di codice portabile che si comporta in modo identico in più piattaforme. Il **__int8** tipo di dati è sinonimo del tipo **char**, **__int16** è sinonimo del tipo **breve**, e **__int32**  è sinonimo del tipo **int**. Il **__int64** il tipo è sinonimo del tipo **long long**.

Per garantire la compatibilità con versioni precedenti **_int8**, **_int16**, **_int32**, e **_int64** sono sinonimi per **__int8** , **__int16**, **__int32**, e **__int64** a meno che l'opzione del compilatore [/Za \(disabilitare la lingua le estensioni)](../build/reference/za-ze-disable-language-extensions.md) è specificato.

## <a name="example"></a>Esempio

L'esempio seguente mostra che un int*xx* parametro verrà alzata di livello **int**:

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
[Tipi fondamentali](../cpp/fundamental-types-cpp.md)<br/>
[Intervalli dei tipi di dati](../cpp/data-type-ranges.md)<br/>
