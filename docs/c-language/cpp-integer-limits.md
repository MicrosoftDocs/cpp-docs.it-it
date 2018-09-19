---
title: Limiti per i tipi Integer in C++ | Microsoft Docs
ms.custom: ''
ms.date: 01/29/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- limits, integer
- limits, integer constants
- integer limits
ms.assetid: 0c23cbd6-29fb-4d9c-b689-5984e19748de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 02a4194d69bf07d27777ad30cf9ed0e5794c04c2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46136283"
---
# <a name="c-integer-limits"></a>Limiti per i tipi Integer in C++

**Sezione specifica Microsoft**

I limiti per i tipi Integer sono elencati nella tabella seguente. Tali limiti sono definiti anche nel file di intestazione standard. LIMITS.H. Microsoft C consente inoltre di dichiarare variabili Integer ridimensionate, che sono tipi integrali di dimensioni di 8, 16 o 32 bit. Per altre informazioni sui tipi Integer ridimensionati, vedere [Tipi Integer ridimensionati](../c-language/c-sized-integer-types.md).

## <a name="limits-on-integer-constants"></a>Limiti su costanti Integer

|**Costante**|Significato|Valore|
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

Se un valore è superiore al massimo valore rappresentabile con il tipo Integer, il compilatore Microsoft genera un errore.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Costanti Integer C](../c-language/c-integer-constants.md)
