---
title: Limiti per tipi Integer
ms.date: 01/29/2018
helpviewer_keywords:
- integral limits
- limits, integer
- limits.h header file
- integer limits
ms.assetid: 6922bdbf-0f49-443b-bc03-ee182e4cbd57
ms.openlocfilehash: a113dd687e6f135af950f461e024b9fd9feaf1b5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213385"
---
# <a name="integer-limits"></a>Limiti per tipi Integer

**Specifiche di Microsoft**

I limiti per i tipi Integer sono elencati nella tabella seguente. Le macro del preprocessore per questi limiti vengono definite anche quando si include il file di intestazione standard \<climits> .

## <a name="limits-on-integer-constants"></a>Limiti su costanti Integer

| Costante | Significato | valore |
|--|--|--|
| `CHAR_BIT` | Numero di bit nella variabile minore che non sia un campo di bit. | 8 |
| `SCHAR_MIN` | Valore minimo per una variabile di tipo **`signed char`** . | -128 |
| `SCHAR_MAX` | Valore massimo per una variabile di tipo **`signed char`** . | 127 |
| `UCHAR_MAX` | Valore massimo per una variabile di tipo **`unsigned char`** . | 255 (0xff) |
| `CHAR_MIN` | Valore minimo per una variabile di tipo **`char`** . | -128; 0 se è stata **`/J`** usata l'opzione |
| `CHAR_MAX` | Valore massimo per una variabile di tipo **`char`** . | 127; 255 **`/J`** opzione if utilizzata |
| `MB_LEN_MAX` | Numero massimo di byte in una costante multicarattere. | 5 |
| `SHRT_MIN` | Valore minimo per una variabile di tipo **`short`** . | -32768 |
| `SHRT_MAX` | Valore massimo per una variabile di tipo **`short`** . | 32767 |
| `USHRT_MAX` | Valore massimo per una variabile di tipo **`unsigned short`** . | 65535 (0xffff) |
| `INT_MIN` | Valore minimo per una variabile di tipo **`int`** . | -2147483648 |
| `INT_MAX` | Valore massimo per una variabile di tipo **`int`** . | 2147483647 |
| `UINT_MAX` | Valore massimo per una variabile di tipo **`unsigned int`** . | 4294967295 (0xffffffff) |
| `LONG_MIN` | Valore minimo per una variabile di tipo **`long`** . | -2147483648 |
| `LONG_MAX` | Valore massimo per una variabile di tipo **`long`** . | 2147483647 |
| `ULONG_MAX` | Valore massimo per una variabile di tipo **`unsigned long`** . | 4294967295 (0xffffffff) |
| `LLONG_MIN` | Valore minimo per una variabile di tipo**`long long`** | -9223372036854775808 |
| `LLONG_MAX` | Valore massimo per una variabile di tipo**`long long`** | 9223372036854775807 |
| `ULLONG_MAX` | Valore massimo per una variabile di tipo**`unsigned long long`** | 18446744073709551615 (0xffffffffffffffff) |

Se un valore è superiore al massimo valore rappresentabile con il tipo Integer, il compilatore Microsoft genera un errore.

## <a name="see-also"></a>Vedere anche

[Limiti a virgola mobile](../cpp/floating-limits.md)
