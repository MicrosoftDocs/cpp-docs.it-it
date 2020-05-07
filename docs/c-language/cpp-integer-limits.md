---
title: Limiti di interi C e C++
ms.date: 10/21/2019
helpviewer_keywords:
- limits, integer
- limits, integer constants
- integer limits
ms.assetid: 0c23cbd6-29fb-4d9c-b689-5984e19748de
ms.openlocfilehash: 6940f36e37ec58ca8fe23c9062928cbf90b125bd
ms.sourcegitcommit: ea9d78dbb93bf3f8841dde93dbc12bd66f6f32ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/22/2019
ms.locfileid: "72778380"
---
# <a name="c-and-c-integer-limits"></a>Limiti di interi C e C++

**Specifico di Microsoft**

Nella tabella seguente sono elencati i limiti per i tipi integer in C e C++. Questi limiti sono definiti nel file `<limits.h>`di intestazione standard C. L'intestazione `<limits>` della libreria standard C++ `<climits>`include, che `<limits.h>`include.

Microsoft C consente inoltre la dichiarazione di variabili Integer ridimensionate, che sono tipi integrali di dimensioni 8, 16, 32 o 64 bit. Per ulteriori informazioni sugli Integer ridimensionati in C, vedere [tipi Integer ridimensionati](../c-language/c-sized-integer-types.md).

## <a name="limits-on-integer-constants"></a>Limiti su costanti Integer

|**Costante**|Significato|valore|
|------------------|-------------|-----------|
|**CHAR_BIT**|Numero di bit nella variabile minore che non sia un campo di bit.|8|
|**SCHAR_MIN**|Valore minimo per una variabile di tipo **char con segno**.|-128|
|**SCHAR_MAX**|Valore massimo per una variabile di tipo **char con segno**.|127|
|**UCHAR_MAX**|Valore massimo per una variabile di tipo **unsigned char**.|255 (0xff)|
|**CHAR_MIN**|Valore minimo per una variabile di tipo **char**.|-128; 0 se si usa l'opzione /J|
|**CHAR_MAX**|Valore massimo per una variabile di tipo **char**.|127; 255 se si utilizza l'opzione /J|
|**MB_LEN_MAX**|Numero massimo di byte in una costante multicarattere.|5|
|**SHRT_MIN**|Valore minimo per una variabile di tipo **short**.|-32768|
|**SHRT_MAX**|Valore massimo per una variabile di tipo **short**.|32767|
|**USHRT_MAX**|Valore massimo per una variabile di tipo **short senza segno**.|65535 (0xffff)|
|**INT_MIN**|Valore minimo per una variabile di tipo **int**.|-2147483647 - 1|
|**INT_MAX**|Valore massimo per una variabile di tipo **int**.|2147483647|
|**UINT_MAX**|Valore massimo per una variabile di tipo **unsigned int**.|4294967295 (0xffffffff)|
|**LONG_MIN**|Valore minimo per una variabile di tipo **long**.|-2147483647 - 1|
|**LONG_MAX**|Valore massimo per una variabile di tipo **long**.|2147483647|
|**ULONG_MAX**|Valore massimo per una variabile di tipo **unsigned long**.|4294967295 (0xffffffff)|
|**LLONG_MIN**|Valore minimo per una variabile di tipo **Long Long**.|-9.223.372.036.854.775.807-1|
|**LLONG_MAX**|Valore massimo per una variabile di tipo **Long Long**.|9,223,372,036,854,775,807|
|**ULLONG_MAX**|Valore massimo per una variabile di tipo **unsigned long long**.|18.446.744.073.709.551.615 (0xFFFFFFFFFFFFFFFF)|

Se un valore è superiore al massimo valore rappresentabile con il tipo Integer, il compilatore Microsoft genera un errore.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Costanti Integer C](../c-language/c-integer-constants.md)
