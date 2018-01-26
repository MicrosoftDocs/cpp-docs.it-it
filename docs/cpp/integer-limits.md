---
title: Limiti per tipi integer | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- integral limits
- limits, integer
- limits.h header file
- integer limits
ms.assetid: 6922bdbf-0f49-443b-bc03-ee182e4cbd57
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a302a3b5b4542274f037d622c7be24f7c0dbb13a
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="integer-limits"></a>Limiti per tipi Integer
**Sezione specifica Microsoft**  
  
 I limiti per i tipi Integer sono elencati nella tabella seguente. Questi limiti sono definiti anche nel file di intestazione standard \<Limits. h >.  
  
### <a name="limits-on-integer-constants"></a>Limiti su costanti Integer  
  
|Costante|Significato|Valore|  
|--------------|-------------|-----------|  
|**CHAR_BIT**|Numero di bit nella variabile minore che non sia un campo di bit.|8|  
|**SCHAR_MIN**|Valore minimo per una variabile di tipo **char con segno**.|-128|  
|**SCHAR_MAX**|Valore massimo per una variabile di tipo **char con segno**.|127|  
|**UCHAR_MAX**|Valore massimo per una variabile di tipo `unsigned char`|255 (0xff)|  
|**CHAR_MIN**|Valore minimo per una variabile di tipo `char`|-128; 0 se si usa l'opzione /J|  
|**CHAR_MAX**|Valore massimo per una variabile di tipo `char`|127; 255 se si utilizza l'opzione /J|  
|**MB_LEN_MAX**|Numero massimo di byte in una costante multicarattere.|5|  
|**SHRT_MIN**|Valore minimo per una variabile di tipo **short**.|-32768|  
|**SHRT_MAX**|Valore massimo per una variabile di tipo **short**.|32767|  
|**USHRT_MAX**|Valore massimo per una variabile di tipo **short senza segno**.|65535 (0xffff)|  
|**INT_MIN**|Valore minimo per una variabile di tipo `int`|-2147483648|  
|**INT_MAX**|Valore massimo per una variabile di tipo `int`|2147483647|  
|**UINT_MAX**|Valore massimo per una variabile di tipo `unsigned int`|4294967295 (0xffffffff)|  
|**LONG_MIN**|Valore minimo per una variabile di tipo **long**.|-2147483648|  
|**LONG_MAX**|Valore massimo per una variabile di tipo **long**.|2147483647|  
|**ULONG_MAX**|Valore massimo per una variabile di tipo `unsigned long`|4294967295 (0xffffffff)|  
|**_I64_MIN**|Valore minimo per una variabile di tipo `__int64`|-9223372036854775808|  
|**_I64_MAX**|Valore massimo per una variabile di tipo `__int64`|9223372036854775807|  
|**_UI64_MAX**|Valore massimo per una variabile di tipo **unsigned int64**|18446744073709551615 (0xffffffffffffffff)|  
  
 Se un valore è superiore al massimo valore rappresentabile con il tipo Integer, il compilatore Microsoft genera un errore.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Limiti sulle costanti a virgola mobile](../cpp/floating-limits.md)