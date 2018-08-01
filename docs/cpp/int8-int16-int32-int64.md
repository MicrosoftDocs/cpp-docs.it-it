---
title: __int8, __int16, __int32, __int64 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __int8_cpp
- __int16_cpp
- __int32_cpp
- __int64_cpp
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
ms.openlocfilehash: c1be48b2e6972ca3a291ab57dbcb1976e6a56d87
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39401380"
---
# <a name="int8-int16-int32-int64"></a>__int8, __int16, __int32, __int64
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Le funzionalità di Microsoft C/C++ supportano i tipi Integer ridimensionati. È possibile dichiarare 8, 16, 32- o le variabili integer a 64 bit usando la **int * * * n* identificatore di tipo in cui *n* è 8, 16, 32 o 64.  
  
 Nell'esempio seguente viene dichiarata una variabile per ognuno dei quattro tipi Integer ridimensionati:  
  
```cpp 
__int8 nSmall;      // Declares 8-bit integer  
__int16 nMedium;    // Declares 16-bit integer  
__int32 nLarge;     // Declares 32-bit integer  
__int64 nHuge;      // Declares 64-bit integer  
```  
  
 I tipi **__int8**, **__int16**, e **__int32** sono sinonimi per i tipi ANSI che hanno la stessa dimensione e sono utili per la scrittura di codice portabile che si comporta in modo identico in più piattaforme. Il **__int8** tipo di dati è sinonimo del tipo **char**, **__int16** è sinonimo del tipo **breve**, e **__int32**  è sinonimo del tipo **int**. Il **__int64** il tipo è sinonimo del tipo **long long**.  
  
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
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Tipi fondamentali](../cpp/fundamental-types-cpp.md)   
 [Intervalli dei tipi di dati](../cpp/data-type-ranges.md)