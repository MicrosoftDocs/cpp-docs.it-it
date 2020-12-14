---
description: 'Altre informazioni su: costanti del tipo di dati'
title: Costanti del tipo di dati
ms.date: 06/25/2018
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
- LLONG_MIN
- LLONG_MAX
- ULLONG_MAX
- _I8_MIN
- _I8_MAX
- _UI8_MAX
- _I16_MIN
- _I16_MAX
- _UI16_MAX
- _I32_MIN
- _I32_MAX
- _UI32_MAX
- _I64_MIN
- _I64_MAX
- _UI64_MAX
- _I128_MIN
- _I128_MAX
- _UI128_MAX
- SIZE_MAX
- RSIZE_MAX
- LDBL_DIG
- LDBL_EPSILON
- LDBL_HAS_SUBNORM
- LDBL_MANT_DIG
- LDBL_MAX
- LDBL_MAX_10_EXP
- LDBL_MAX_EXP
- LDBL_MIN
- LDBL_MIN_10_EXP
- LDBL_MIN_EXP
- _LDBL_RADIX
- LDBL_TRUE_MIN
- DECIMAL_DIG
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
- LLONG_MIN constant
- LLONG_MAX constant
- ULLONG_MAX constant
- _I8_MIN constant
- _I8_MAX constant
- _UI8_MAX constant
- _I16_MIN constant
- _I16_MAX constant
- _UI16_MAX constant
- _I32_MIN constant
- _I32_MAX constant
- _UI32_MAX constant
- _I64_MIN constant
- _I64_MAX constant
- _UI64_MAX constant
- _I128_MIN constant
- _I128_MAX constant
- _UI128_MAX constant
- SIZE_MAX constant
- RSIZE_MAX constant
ms.assetid: c0f1c405-0465-41d5-b5ff-e81cdb6f1622
ms.openlocfilehash: eb1c16cb730ea40a60a5929867fa8a36b17190ec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258837"
---
# <a name="data-type-constants"></a>Costanti del tipo di dati

Le costanti dei tipi di dati sono gli intervalli di valori dipendenti dall'implementazione consentiti per i tipi di dati integrali e a virgola mobile.

## <a name="integral-type-constants"></a>Costanti del tipo di dati integrale

Queste costanti specificano gli intervalli per i tipi di dati integrali. Per usare queste costanti, includere l'intestazione limits.h nel file di origine:

```C
#include <limits.h>
```

> [!NOTE]
> L' [`/J`](../build/reference/j-default-char-type-is-unsigned.md) opzione del compilatore modifica il **`char`** tipo predefinito da **`signed char`** a **`unsigned char`** .

|Costante|Valore|Description|
|--------------|-----------|-------------|
|**CHAR_BIT**|8|Numero di bit in un oggetto **`char`**|
|**SCHAR_MIN**|(-128)|**`signed char`** Valore minimo|
|**SCHAR_MAX**|127|**`signed char`** Valore massimo|
|**UCHAR_MAX**|255 (0xff)|**`unsigned char`** Valore massimo|
|**CHAR_MIN**|(-128) (0 se è stata **`/J`** usata l'opzione)|**`char`** Valore minimo|
|**CHAR_MAX**|127 (opzione 255 if **`/J`** utilizzata)|**`char`** Valore massimo|
|**MB_LEN_MAX**|5|Numero massimo di byte in multibyte **`char`**|
|**SHRT_MIN**|-32768|**`signed short`** Valore minimo|
|**SHRT_MAX**|32767|**`signed short`** Valore massimo|
|**USHRT_MAX**|65535 (0xffff)|**`unsigned short`** Valore massimo|
|**INT_MIN**|(-2147483647 - 1)|**`signed int`** Valore minimo|
|**INT_MAX**|2147483647|**`signed int`** Valore massimo|
|**UINT_MAX**|4294967295 (0xffffffff)|**`unsigned int`** Valore massimo|
|**LONG_MIN**|(-2147483647L - 1)|**`signed long`** Valore minimo|
|**LONG_MAX**|2147483647L|**`signed long`** Valore massimo|
|**ULONG_MAX**|4294967295UL (0xfffffffful)|**`unsigned long`** Valore massimo|
|**LLONG_MIN**|(-9223372036854775807LL - 1)|**`signed long long`** Valore minimo o **`__int64`**|
|**LLONG_MAX**|9223372036854775807LL|**`signed long long`** Valore massimo o **`__int64`**|
|**ULLONG_MAX**|0xffffffffffffffffull|**`unsigned long long`** Valore massimo|
|**_I8_MIN**|(-127i8 - 1)|Valore minimo signed a 8 bit|
|**_I8_MAX**|127i8|Valore massimo signed a 8 bit|
|**_UI8_MAX**|0xffui8|Valore massimo unsigned a 8 bit|
|**_I16_MIN**|(-32767i16 - 1)|Valore minimo signed a 16 bit|
|**_I16_MAX**|32767i16|Valore massimo signed a 16 bit|
|**_UI16_MAX**|0xffffui16|Valore massimo unsigned a 16 bit|
|**_I32_MIN**|(-2147483647i32 - 1)|Valore minimo signed a 32 bit|
|**_I32_MAX**|2147483647i32|Valore massimo signed a 32 bit|
|**_UI32_MAX**|0xffffffffui32|Valore massimo unsigned a 32 bit|
|**_I64_MIN**|(-9223372036854775807 - 1)|Valore minimo signed a 64 bit|
|**_I64_MAX**|9223372036854775807|Valore massimo signed a 64 bit|
|**_UI64_MAX**|0xffffffffffffffffui64|Valore massimo unsigned a 64 bit|
|**_I128_MIN**|(-170141183460469231731687303715884105727i128 - 1)|Valore minimo signed a 128 bit|
|**_I128_MAX**|170141183460469231731687303715884105727i128|Valore massimo signed a 128 bit|
|**_UI128_MAX**|0xffffffffffffffffffffffffffffffffui128|Valore massimo unsigned a 128 bit|
|**SIZE_MAX**|uguale a **_UI64_MAX** se è stato definito **_WIN64** oppure **UINT_MAX**|Dimensioni massime integer nativi|
|**RSIZE_MAX**|uguale a (**SIZE_MAX** >> 1)|Dimensioni massime integer della libreria protetta|

## <a name="floating-point-type-constants"></a>Costanti del tipo di dati a virgola mobile

Le costanti seguenti forniscono l'intervallo e altre caratteristiche dei tipi di **`long double`** **`double`** dati, e **`float`** . Per usare queste costanti, includere l'intestazione float.h nel file di origine:

```C
#include <float.h>
```

|Costante|Valore|Description|
|--------------|-----------|-----------------|
|**DBL_DECIMAL_DIG**|17|N. di cifre decimali di approssimazione di arrotondamento|
|**DBL_DIG**|15|N. di cifre decimali di precisione|
|**DBL_EPSILON**|2.2204460492503131e-016|Il più piccolo in modo che 1.0 + **DBL_EPSILON** != 1.0|
|**DBL_HAS_SUBNORM**|1|Il tipo supporta i numeri subnormali (denormalizzati)|
|**DBL_MANT_DIG**|53|N. di bit nel significando (mantissa)|
|**DBL_MAX**|1,7976931348623158e+308|Valore massimo|
|**DBL_MAX_10_EXP**|308|Esponente decimale massimo|
|**DBL_MAX_EXP**|1024|Esponente binario massimo|
|**DBL_MIN**|2,2250738585072014e-308|Valore positivo normalizzato minimo|
|**DBL_MIN_10_EXP**|(-307)|Esponente decimale minimo|
|**DBL_MIN_EXP**|(-1021)|Esponente binario minimo|
|**_DBL_RADIX**|2|Base dell'esponente|
|**DBL_TRUE_MIN**|4.9406564584124654e-324|Valore subnormale positivo minimo|
|**FLT_DECIMAL_DIG**|9|Numero di cifre decimali di approssimazione di arrotondamento|
|**FLT_DIG**|6|Numero di cifre decimali di precisione|
|**FLT_EPSILON**|1.192092896e-07F|Il più piccolo in modo che 1.0 + **FLT_EPSILON** != 1.0|
|**FLT_HAS_SUBNORM**|1|Il tipo supporta i numeri subnormali (denormalizzati)|
|**FLT_MANT_DIG**|24|Numero di bit nel significando (mantissa)|
|**FLT_MAX**|3.402823466e+38F|Valore massimo|
|**FLT_MAX_10_EXP**|38|Esponente decimale massimo|
|**FLT_MAX_EXP**|128|Esponente binario massimo|
|**FLT_MIN**|1.175494351e-38F|Valore positivo normalizzato minimo|
|**FLT_MIN_10_EXP**|(-37)|Esponente decimale minimo|
|**FLT_MIN_EXP**|(-125)|Esponente binario minimo|
|**FLT_RADIX**|2|Base dell'esponente|
|**FLT_TRUE_MIN**|1.401298464e-45F|Valore subnormale positivo minimo|
|**LDBL_DIG**|15|N. di cifre decimali di precisione|
|**LDBL_EPSILON**|2.2204460492503131e-016|Il più piccolo in modo che 1.0 + **LDBL_EPSILON** != 1.0|
|**LDBL_HAS_SUBNORM**|1|Il tipo supporta i numeri subnormali (denormalizzati)|
|**LDBL_MANT_DIG**|53|N. di bit nel significando (mantissa)|
|**LDBL_MAX**|1,7976931348623158e+308|Valore massimo|
|**LDBL_MAX_10_EXP**|308|Esponente decimale massimo|
|**LDBL_MAX_EXP**|1024|Esponente binario massimo|
|**LDBL_MIN**|2,2250738585072014e-308|Valore positivo normalizzato minimo|
|**LDBL_MIN_10_EXP**|(-307)|Esponente decimale minimo|
|**LDBL_MIN_EXP**|(-1021)|Esponente binario minimo|
|**_LDBL_RADIX**|2|Base dell'esponente|
|**LDBL_TRUE_MIN**|4.9406564584124654e-324|Valore subnormale positivo minimo|
|**DECIMAL_DIG**|uguale a **DBL_DECIMAL_DIG**|Cifre decimali (double) predefinite di approssimazione di arrotondamento|

## <a name="see-also"></a>Vedi anche

[Costanti globali](../c-runtime-library/global-constants.md)
