---
title: Costanti del tipo di dati | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- FLT_MIN
- SHRT_MAX
- CHAR_MIN
- MB_LEN_MAX
- DBL_EPSILON
- SHRT_MIN
- _FLT_RADIX
- FLT_DIG
- FLT_MAX_10_EXP
- FLT_MANT_DIG
- DBL_MAX_EXP
- SCHAR_MIN
- SCHAR_MAX
- DBL_MIN
- FLT_MIN_10_EXP
- _DBL_ROUNDS
- USHRT_MAX
- FLT_MAX_EXP
- LONG_MAX
- DBL_MAX
- DBL_DIG
- FLT_MIN_EXP
- INT_MIN
- DBL_MIN_10_EXP
- CHAR_BIT
- INT_MAX
- ULONG_MAX
- DBL_MIN_EXP
- LONG_MIN
- _FLT_ROUNDS
- DBL_MANT_DIG
- _DBL_RADIX
- CHAR_MAX
- FLT_MAX
- DBL_MAX_10_EXP
- UCHAR_MAX
- FLT_EPSILON
- UINT_MAX
dev_langs:
- C++
helpviewer_keywords:
- DBL_MAX_EXP constant
- _DBL_RADIX constant
- FLT_MIN_EXP constant
- DBL_EPSILON constant
- INT_MIN constant
- FLT_EPSILON constant
- DBL_MANT_DIG constant
- _FLT_RADIX constant
- DBL_MIN constant
- USHRT_MAX constant
- FLT_MAX_10_EXP constant
- _FLT_ROUNDS constant
- data type constants [C++]
- _DBL_ROUNDS constant
- CHAR_MAX constant
- FLT_MAX_EXP constant
- FLT_MIN constant
- CHAR_MIN constant
- FLT_MIN_10_EXP constant
- DBL_MIN_EXP constant
- SCHAR_MAX constant
- FLT_RADIX constant
- CHAR_BIT constant
- UCHAR_MAX constant
- DBL_RADIX constant
- FLT_ROUNDS constant
- LONG_MIN constant
- SHRT_MAX constant
- LONG_MAX constant
- DBL_MAX_10_EXP constant
- DBL_MIN_10_EXP constant
- INT_MAX constant
- constants [C++], data type
- ULONG_MAX constant
- FLT_DIG constant
- MB_LEN_MAX constant
- DBL_DIG constant
- SHRT_MIN constant
- DBL_MAX constant
- DBL_ROUNDS constant
- FLT_MAX constant
- UINT_MAX constant
- FLT_MANT_DIG constant
- SCHAR_MIN constant
ms.assetid: c0f1c405-0465-41d5-b5ff-e81cdb6f1622
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: a33c5071549695c11ba4820679d5d7059b7f5a5c
ms.lasthandoff: 04/01/2017

---
# <a name="data-type-constants"></a>Costanti del tipo di dati
Le costanti dei tipi di dati sono gli intervalli di valori dipendenti dall'implementazione consentiti per i tipi di dati integrali. Le costanti elencate di seguito specificano gli intervalli per i tipi di dati integrali e sono definite in LIMITS.H.  
  
> [!NOTE]
>  L'opzione del compilatore /J modifica il tipo `char` predefinito in `unsigned`.  
  
|Costante|Valore|Significato|  
|--------------|-----------|-------------|  
|**SCHAR_MAX**|127|Valore massimo di `char` con segno|  
|**SCHAR_MIN**|-128|Valore minimo di `char` con segno|  
|**UCHAR_MAX**|255 (0xff)|Valore massimo di `unsigned char`|  
|**CHAR_BIT**|8|Numero di bit in `char`|  
|**USHRT_MAX**|65535 (0xffff)|Valore massimo di **short senza segno**|  
|**SHRT_MAX**|32767|Valore massimo di **short** (con segno)|  
|**SHRT_MIN**|-32768|Valore minimo di **short** (con segno)|  
|**UINT_MAX**|4294967295 (0xffffffff)|Valore massimo di `unsigned int`|  
|**ULONG_MAX**|4294967295 (0xffffffff)|Valore massimo di `unsigned long`|  
|**INT_MAX**|2147483647|Valore massimo di `int` (con segno)|  
|**INT_MIN**|-2147483647-1|Valore minimo di `int` (con segno)|  
|**LONG_MAX**|2147483647|Valore massimo di **long** (con segno)|  
|**LONG_MIN**|-2147483647-1|Valore minimo di **long** (con segno)|  
|**CHAR_MAX**|127 (255 se si usa l'opzione /J)|Valore massimo di `char`|  
|**CHAR_MIN**|-128 (0 se si usa l'opzione /J)|Valore minimo di `char`|  
|**MB_LEN_MAX**|2|Numero massimo di byte in multibyte `char`|  
|**_I64_MAX**|9223372036854775807|Valore massimo di __**int64** (con segno)|  
|**_I64_MIN**|-9223372036854775807-1|Valore minimo di __**int64** (con segno)|  
|**_UI64_MAX**|0xffffffffffffffff|Valore massimo di __**int64** (senza segno)|  
  
 Le costanti elencate di seguito specificano l'intervallo e altre caratteristiche dei tipi di dati **double** e **float** e sono definite in FLOAT.H:  
  
|Costante|Valore|Descrizione|  
|--------------|-----------|-----------------|  
|**DBL_DIG**|15|# di cifre decimali di precisione|  
|**DBL_EPSILON**|2.2204460492503131e-016|Il più piccolo in modo che 1.0+**DBL_EPSILON** !=1.0|  
|**DBL_MANT_DIG**|53|# di bit nella mantissa|  
|**DBL_MAX**|1.7976931348623158e+308|Valore massimo|  
|**DBL_MAX_10_EXP**|308|Esponente decimale massimo|  
|**DBL_MAX_EXP**|1024|Esponente binario massimo|  
|**DBL_MIN**|2.2250738585072014e-308|Valore positivo minimo|  
|**DBL_MIN_10_EXP**|(-307)|Esponente decimale minimo|  
|**DBL_MIN_EXP**|(-1021)|Esponente binario minimo|  
|**_DBL_RADIX**|2|Base dell'esponente|  
|**_DBL_ROUNDS**|1|Arrotondamento di addizione: vicino|  
|**FLT_DIG**|6|Numero di cifre decimali di precisione|  
|**FLT_EPSILON**|1.192092896e-07F|Il più piccolo in modo che 1.0+**FLT_EPSILON** !=1.0|  
|**FLT_MANT_DIG**|24|Numero di bit nella mantissa|  
|**FLT_MAX**|3.402823466e+38F|Valore massimo|  
|**FLT_MAX_10_EXP**|38|Esponente decimale massimo|  
|**FLT_MAX_EXP**|128|Esponente binario massimo|  
|**FLT_MIN**|1.175494351e-38F|Valore positivo minimo|  
|**FLT_MIN_10_EXP**|(-37)|Esponente decimale minimo|  
|**FLT_MIN_EXP**|(-125)|Esponente binario minimo|  
|**FLT_RADIX**|2|Base dell'esponente|  
|**FLT_ROUNDS**|1|Arrotondamento di addizione: vicino|  
  
## <a name="see-also"></a>Vedere anche  
 [Costanti globali](../c-runtime-library/global-constants.md)
