---
title: "__int8, __int16, __int32, __int64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__int8_cpp"
  - "__int64"
  - "__int8"
  - "__int16"
  - "__int16_cpp"
  - "__int64_cpp"
  - "__int32_cpp"
  - "__int32"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__int16 (parola chiave) [C++]"
  - "__int32 (parola chiave) [C++]"
  - "__int64 (parola chiave) [C++]"
  - "__int8 (parola chiave) [C++]"
  - "tipo di dati Integer, tipi Integer in C++"
  - "tipi Integer [C++]"
ms.assetid: 8e384602-2578-4980-8cc8-da63842356b2
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# __int8, __int16, __int32, __int64
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Le funzionalità di Microsoft C\/C\+\+ supportano i tipi Integer ridimensionati.  È possibile dichiarare variabili Integer a 8, 16, 32 o 64 bit, usando l'identificatore di tipo **\_\_int***n*, dove *n* è 8, 16, 32 o 64.  
  
 Nell'esempio seguente viene dichiarata una variabile per ognuno dei quattro tipi Integer ridimensionati:  
  
```  
__int8 nSmall;      // Declares 8-bit integer  
__int16 nMedium;    // Declares 16-bit integer  
__int32 nLarge;     // Declares 32-bit integer  
__int64 nHuge;      // Declares 64-bit integer  
```  
  
 I tipi `__int8`, `__int16` e `__int32` sono sinonimi per i tipi ANSI che hanno la stessa dimensione e sono utili per la scrittura di codice portabile che si comporta in modo identico su più piattaforme.  Il tipo di dati `__int8` è sinonimo del tipo `char`, `__int16` è sinonimo del tipo **short** e `__int32` è sinonimo del tipo `int`.  Non è disponibile alcun equivalente ANSI per il tipo `__int64`.  
  
## Esempio  
 Nell'esempio seguente viene illustrato che un parametro \_\_int*xx* verrà trasformato in `int`:  
  
```  
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
  
  **func**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Tipi fondamentali](../cpp/fundamental-types-cpp.md)   
 [Intervalli dei tipi di dati](../cpp/data-type-ranges.md)