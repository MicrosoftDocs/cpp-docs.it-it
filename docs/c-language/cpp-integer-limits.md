---
title: Limiti per i tipi Integer in C++ | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- limits, integer
- limits, integer constants
- integer limits
ms.assetid: 0c23cbd6-29fb-4d9c-b689-5984e19748de
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
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
ms.translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: c1d45ba449173c5cc2bf3fbed663a7d987c22e1c
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="c-integer-limits"></a>Limiti per i tipi Integer in C++
**Sezione specifica Microsoft**  
  
 I limiti per i tipi Integer sono elencati nella tabella seguente. Tali limiti sono definiti anche nel file di intestazione standard. LIMITS.H. Microsoft C consente inoltre di dichiarare variabili Integer ridimensionate, che sono tipi integrali di dimensioni di 8, 16 o 32 bit. Per altre informazioni sui tipi Integer ridimensionati, vedere [Tipi Integer ridimensionati](../c-language/c-sized-integer-types.md).  
  
### <a name="limits-on-integer-constants"></a>Limiti su costanti Integer  
  
|**Costante**|Significato|Valore|  
|------------------|-------------|-----------|  
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
|**INT_MIN**|Valore minimo per una variabile di tipo `int`|-2147483647 - 1|  
|**INT_MAX**|Valore massimo per una variabile di tipo `int`|2147483647|  
|**UINT_MAX**|Valore massimo per una variabile di tipo `unsigned int`|4294967295 (0xffffffff)|  
|**LONG_MIN**|Valore minimo per una variabile di tipo **long**.|-2147483647 - 1|  
|**LONG_MAX**|Valore massimo per una variabile di tipo **long**.|2147483647|  
|**ULONG_MAX**|Valore massimo per una variabile di tipo `unsigned long`|4294967295 (0xffffffff)|  
  
 Se un valore è superiore al massimo valore rappresentabile con il tipo Integer, il compilatore Microsoft genera un errore.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Costanti Integer C](../c-language/c-integer-constants.md)
