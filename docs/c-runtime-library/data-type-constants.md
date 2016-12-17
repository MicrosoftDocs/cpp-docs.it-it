---
title: "Costanti del tipo di dati | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "FLT_MIN"
  - "SHRT_MAX"
  - "CHAR_MIN"
  - "MB_LEN_MAX"
  - "DBL_EPSILON"
  - "SHRT_MIN"
  - "_FLT_RADIX"
  - "FLT_DIG"
  - "FLT_MAX_10_EXP"
  - "FLT_MANT_DIG"
  - "DBL_MAX_EXP"
  - "SCHAR_MIN"
  - "SCHAR_MAX"
  - "DBL_MIN"
  - "FLT_MIN_10_EXP"
  - "_DBL_ROUNDS"
  - "USHRT_MAX"
  - "FLT_MAX_EXP"
  - "LONG_MAX"
  - "DBL_MAX"
  - "DBL_DIG"
  - "FLT_MIN_EXP"
  - "INT_MIN"
  - "DBL_MIN_10_EXP"
  - "CHAR_BIT"
  - "INT_MAX"
  - "ULONG_MAX"
  - "DBL_MIN_EXP"
  - "LONG_MIN"
  - "_FLT_ROUNDS"
  - "DBL_MANT_DIG"
  - "_DBL_RADIX"
  - "CHAR_MAX"
  - "FLT_MAX"
  - "DBL_MAX_10_EXP"
  - "UCHAR_MAX"
  - "FLT_EPSILON"
  - "UINT_MAX"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_DBL_RADIX (costante)"
  - "_DBL_ROUNDS (costante)"
  - "_FLT_RADIX (costante)"
  - "_FLT_ROUNDS (costante)"
  - "CHAR_BIT (costante)"
  - "CHAR_MAX (costante)"
  - "CHAR_MIN (costante)"
  - "costanti [C++], tipi di dati"
  - "costanti del tipo di dati [C++]"
  - "DBL_DIG (costante)"
  - "DBL_EPSILON (costante)"
  - "DBL_MANT_DIG (costante)"
  - "DBL_MAX (costante)"
  - "DBL_MAX_10_EXP (costante)"
  - "DBL_MAX_EXP (costante)"
  - "DBL_MIN (costante)"
  - "DBL_MIN_10_EXP (costante)"
  - "DBL_MIN_EXP (costante)"
  - "DBL_RADIX (costante)"
  - "DBL_ROUNDS (costante)"
  - "FLT_DIG (costante)"
  - "FLT_EPSILON (costante)"
  - "FLT_MANT_DIG (costante)"
  - "FLT_MAX (costante)"
  - "FLT_MAX_10_EXP (costante)"
  - "FLT_MAX_EXP (costante)"
  - "FLT_MIN (costante)"
  - "FLT_MIN_10_EXP (costante)"
  - "FLT_MIN_EXP (costante)"
  - "FLT_RADIX (costante)"
  - "FLT_ROUNDS (costante)"
  - "INT_MAX (costante)"
  - "INT_MIN (costante)"
  - "LONG_MAX (costante)"
  - "LONG_MIN (costante)"
  - "MB_LEN_MAX (costante)"
  - "SCHAR_MAX (costante)"
  - "SCHAR_MIN (costante)"
  - "SHRT_MAX (costante)"
  - "SHRT_MIN (costante)"
  - "UCHAR_MAX (costante)"
  - "UINT_MAX (costante)"
  - "ULONG_MAX (costante)"
  - "USHRT_MAX (costante)"
ms.assetid: c0f1c405-0465-41d5-b5ff-e81cdb6f1622
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Costanti del tipo di dati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le costanti dei tipi di dati sono gli intervalli di valori implementazione\-dipendenti valutati per i tipi di dati integrali.  Le costanti elencate di seguito forniscono intervalli per i tipi di dati integrali e sono definite in LIMITS.H.  
  
> [!NOTE]
>  L'opzione del compilatore \/J modifica il tipo `char` predefinito in `unsigned`.  
  
|Costante|Valore|Significato|  
|--------------|------------|-----------------|  
|**SCHAR\_MAX**|127|Il massimo valore signed di `char`|  
|**SCHAR\_MIN**|–128|Il minimo valore signed di `char`|  
|**UCHAR\_MAX**|255 \(0xff\)|Il massimo valore di `unsigned char`|  
|**CHAR\_BIT**|8|Numero di bit in un `char`|  
|**USHRT\_MAX**|65535 \(0xffff\)|Valore massimo di **unsigned short**|  
|**SHRT\_MAX**|32767|Valore \(signed\) massimo di **short**|  
|**SHRT\_MIN**|–32768|Valore \(signed\) minimo di **short**|  
|**UINT\_MAX**|4294967295 \(0xffffffff\)|Valore massimo di `unsigned int`|  
|**ULONG\_MAX**|4294967295 \(0xffffffff\)|Valore massimo di `unsigned long`|  
|**INT\_MAX**|2147483647|Valore massimo \(signed\) di `int`|  
|**INT\_MIN**|–2147483647–1|Valore minimo \(signed\) di `int`|  
|**LONG\_MAX**|2147483647|Valore \(signed\) massimo di **long**|  
|**LONG\_MIN**|–2147483647–1|Valore \(signed\) minimo di **long**|  
|**CHAR\_MAX**|127 \(255 se viene usata l'opzione \/J\)|Valore massimo di `char`|  
|**CHAR\_MIN**|–128 \(0 se viene usata l'opzione \/J\)|Valore minimo di `char`|  
|**MB\_LEN\_MAX**|2|Numero massimo di byte di `char` in multibyte|  
|**\_I64\_MAX**|9223372036854775807|Valore \(signed\) massimo di \_\_**int64**|  
|**\_I64\_MIN**|\-9223372036854775807\-1|Valore \(signed\) minimo di \_\_**int64**|  
|**\_UI64\_MAX**|0xffffffffffffffff|Valore \(unsigned\) massimo di \_\_**int64**|  
  
 Le costanti seguenti forniscono l'intervallo e altre caratteristiche dei tipi di dati di **float** e di **double** e sono definite in FLOAT.H:  
  
|Costante|Valore|Descrizione|  
|--------------|------------|-----------------|  
|**DBL\_DIG**|15|\# di cifre decimali di precisione|  
|**DBL\_EPSILON**|2.2204460492503131e\-016|Il più piccolo in modo che 1.0\+**DBL\_EPSILON** \!\= 1.0|  
|**DBL\_MANT\_DIG**|53|\# di bit nella mantissa|  
|**DBL\_MAX**|1.7976931348623158e\+308|Valore massimo|  
|**DBL\_MAX\_10\_EXP**|308|Esponente decimale massimo|  
|**DBL\_MAX\_EXP**|1024|Esponente binario massimo|  
|**DBL\_MIN**|2.2250738585072014e\-308|Valore positivo minimo|  
|**DBL\_MIN\_10\_EXP**|\(\-307\)|Esponente decimale minimo|  
|**DBL\_MIN\_EXP**|\(–1021\)|Esponente binario minimo|  
|**\_DBL\_RADIX**|2|Base dell'esponente|  
|**\_DBL\_ROUNDS**|1|Arrotondamento di addizione: vicino|  
|**FLT\_DIG**|6|Numero di cifre decimali di precisione|  
|**FLT\_EPSILON**|1.192092896e\-07F|Il più piccolo in modo che 1.0\+**FLT\_EPSILON** \!\= 1.0|  
|**FLT\_MANT\_DIG**|24|Numero di bit nella mantissa|  
|**FLT\_MAX**|3.402823466e\+38F|Valore massimo|  
|**FLT\_MAX\_10\_EXP**|38|Esponente decimale massimo|  
|**FLT\_MAX\_EXP**|128|Esponente binario massimo|  
|**FLT\_MIN**|1.175494351e\-38F|Valore positivo minimo|  
|**FLT\_MIN\_10\_EXP**|\(–37\)|Esponente decimale minimo|  
|**FLT\_MIN\_EXP**|\(–125\)|Esponente binario minimo|  
|**FLT\_RADIX**|2|Base dell'esponente|  
|**FLT\_ROUNDS**|1|Arrotondamento di addizione: vicino|  
  
## Vedere anche  
 [Costanti globali](../c-runtime-library/global-constants.md)