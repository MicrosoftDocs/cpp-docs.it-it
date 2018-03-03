---
title: Mobile limiti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- ranges, floating-point constants
- floating-point constants, limits
- float.h header file
- limits, floating-point constants
- floating-point numbers [C++]
- floating limits
ms.assetid: fc718652-1f4c-4ed8-af60-0e769637459c
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6406d3d2d81fa3025a024606da68d61b5dcefdb7
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="floating-limits"></a>Limiti sulle costanti a virgola mobile
**Sezione specifica Microsoft**  
  
 La tabella seguente elenca i limiti sui valori delle costanti a virgola mobile. Questi limiti sono definiti anche nel file di intestazione standard \<float. h >.  
  
### <a name="limits-on-floating-point-constants"></a>Limiti sulle costanti a virgola mobile  
  
|Costante|Significato|Valore|  
|--------------|-------------|-----------|  
|FLT_DIG DBL_DIG LDBL_DIG|Numero di cifre, q, tali che un numero a virgola mobile con q cifre decimali possa essere arrotondato in una rappresentazione a virgola mobile e viceversa senza perdita di precisione.|6 15 15|  
|FLT_EPSILON DBL_EPSILON LDBL_EPSILON|Minor numero positivo x tale che x + 1 non sia uguale a 1.|1.192092896e-07F 2.2204460492503131e-016 2.2204460492503131e-016|  
|FLT_GUARD||0|  
|FLT_MANT_DIG DBL_MANT_DIG LDBL_MANT_DIG|Numero di cifre nella radice specificato da FLT_RADIX nel significando a virgola mobile. La radice è 2. di conseguenza questi valori specificano i bit.|24 53 53|  
|FLT_MAX DBL_MAX LDBL_MAX|Massimo numero a virgola mobile rappresentabile.|3,402823466e+38F 1,7976931348623158e+308 1,7976931348623158e+308|  
|FLT_MAX_10_EXP DBL_MAX_10_EXP LDBL_MAX_10_EXP|Massimo numero intero tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|38 308 308|  
|FLT_MAX_EXP DBL_MAX_EXP LDBL_MAX_EXP|Massimo numero intero tale che FLT_RADIX elevato a tale numero sia un numero a virgola mobile rappresentabile.|128 1024 1024|  
|FLT_MIN DBL_MIN LDBL_MIN|Valore positivo minimo.|1.175494351e-38F 2.2250738585072014e-308 2.2250738585072014e-308|  
|FLT_MIN_10_EXP DBL_MIN_10_EXP LDBL_MIN_10_EXP|Minimo numero negativo tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|-37<br /><br /> -307<br /><br /> -307|  
|FLT_MIN_EXP DBL_MIN_EXP LDBL_MIN_EXP|Minimo numero negativo tale che FLT_RADIX elevato a tale numero sia un numero a virgola mobile rappresentabile.|-125<br /><br /> -1021<br /><br /> -1021|  
|FLT_NORMALIZE||0|  
|FLT_RADIX _DBL_RADIX _LDBL_RADIX|Base della rappresentazione dell'esponente.|2 2 2|  
|FLT_ROUNDS _DBL_ROUNDS _LDBL_ROUNDS|Modalità di arrotondamento per addizione a virgola mobile.|1 (vicino) 1 (vicino) 1 (vicino)|  
  
> [!NOTE]
>  Le informazioni contenute nella tabella possono variare nelle versioni future del prodotto.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [limiti per tipi Integer](../cpp/integer-limits.md)