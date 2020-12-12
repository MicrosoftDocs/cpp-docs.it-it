---
description: 'Altre informazioni su: limiti di interi C e C++'
title: Limiti di interi C e C++
ms.date: 10/21/2019
helpviewer_keywords:
- limits, integer
- limits, integer constants
- integer limits
ms.assetid: 0c23cbd6-29fb-4d9c-b689-5984e19748de
ms.openlocfilehash: c9d15e5366acb482f688e1c5020c43ee83e4e802
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97292975"
---
# <a name="c-and-c-integer-limits"></a>Limiti di interi C e C++

**Specifico di Microsoft**

Nella tabella seguente sono elencati i limiti per i tipi integer in C e C++. Questi limiti sono definiti nel file di intestazione standard C `<limits.h>` . L'intestazione della libreria standard C++ `<limits>` include `<climits>` , che include `<limits.h>` .

Microsoft C consente inoltre la dichiarazione di variabili Integer ridimensionate, che sono tipi integrali di dimensioni 8, 16, 32 o 64 bit. Per ulteriori informazioni sugli Integer ridimensionati in C, vedere [tipi Integer ridimensionati](../c-language/c-sized-integer-types.md).

## <a name="limits-on-integer-constants"></a>Limiti su costanti Integer

|**Constant**|Significato|Valore|
|------------------|-------------|-----------|
|**CHAR_BIT**|Numero di bit nella variabile minore che non sia un campo di bit.|8|
|**SCHAR_MIN**|Valore minimo per una variabile di tipo **`signed char`** .|-128|
|**SCHAR_MAX**|Valore massimo per una variabile di tipo **`signed char`** .|127|
|**UCHAR_MAX**|Valore massimo per una variabile di tipo **`unsigned char`** .|255 (0xff)|
|**CHAR_MIN**|Valore minimo per una variabile di tipo **`char`** .|-128; 0 se si usa l'opzione /J|
|**CHAR_MAX**|Valore massimo per una variabile di tipo **`char`** .|127; 255 se si utilizza l'opzione /J|
|**MB_LEN_MAX**|Numero massimo di byte in una costante multicarattere.|5|
|**SHRT_MIN**|Valore minimo per una variabile di tipo **`short`** .|-32768|
|**SHRT_MAX**|Valore massimo per una variabile di tipo **`short`** .|32767|
|**USHRT_MAX**|Valore massimo per una variabile di tipo **`unsigned short`** .|65535 (0xffff)|
|**INT_MIN**|Valore minimo per una variabile di tipo **`int`** .|-2147483647 - 1|
|**INT_MAX**|Valore massimo per una variabile di tipo **`int`** .|2147483647|
|**UINT_MAX**|Valore massimo per una variabile di tipo **`unsigned int`** .|4294967295 (0xffffffff)|
|**LONG_MIN**|Valore minimo per una variabile di tipo **`long`** .|-2147483647 - 1|
|**LONG_MAX**|Valore massimo per una variabile di tipo **`long`** .|2147483647|
|**ULONG_MAX**|Valore massimo per una variabile di tipo **`unsigned long`** .|4294967295 (0xffffffff)|
|**LLONG_MIN**|Valore minimo per una variabile di tipo **`long long`** .|-9.223.372.036.854.775.807-1|
|**LLONG_MAX**|Valore massimo per una variabile di tipo **`long long`** .|9,223,372,036,854,775,807|
|**ULLONG_MAX**|Valore massimo per una variabile di tipo **`unsigned long long`** .|18.446.744.073.709.551.615 (0xFFFFFFFFFFFFFFFF)|

Se un valore è superiore al massimo valore rappresentabile con il tipo Integer, il compilatore Microsoft genera un errore.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Costanti Integer C](../c-language/c-integer-constants.md)
