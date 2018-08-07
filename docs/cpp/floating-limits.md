---
title: Mobile limiti | Microsoft Docs
ms.custom: ''
ms.date: 08/03/2018
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 85a31aea113514651fc3e81ac147b5ea2974920c
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39604294"
---
# <a name="floating-limits"></a>Limiti sulle costanti a virgola mobile

**Sezione specifica Microsoft**

La tabella seguente elenca i limiti sui valori delle costanti a virgola mobile. Questi limiti sono definiti anche nel file di intestazione standard \<float. h >.  

## <a name="limits-on-floating-point-constants"></a>Limiti sulle costanti a virgola mobile

|Costante|Significato|Valore|
|--------------|-------------|-----------|
|`FLT_DIG`<br/>`DBL_DIG`<br/>`LDBL_DIG`|Numero di cifre, q, tali che un numero a virgola mobile con q cifre decimali possa essere arrotondato in una rappresentazione a virgola mobile e viceversa senza perdita di precisione.|6<br/>15<br/>15|
|`FLT_EPSILON`<br/>`DBL_EPSILON`<br/>`LDBL_EPSILON`|Minor numero positivo x tale che x + 1 non sia uguale a 1.|1.192092896e-07F<br/>2.2204460492503131e-016<br/>2.2204460492503131e-016|
|`FLT_GUARD`||0|
|`FLT_MANT_DIG`<br/>`DBL_MANT_DIG`<br/>`LDBL_MANT_DIG`|Numero di cifre nella radice specificato da `FLT_RADIX` nel significando a virgola mobile. La radice è 2. di conseguenza questi valori specificano i bit.|24<br/>53<br/>53|
|`FLT_MAX`<br/>`DBL_MAX`<br/>`LDBL_MAX`|Massimo numero a virgola mobile rappresentabile.|3.402823466e+38F<br/>1.7976931348623158e+308<br/>1.7976931348623158e+308|
|`FLT_MAX_10_EXP`<br/>`DBL_MAX_10_EXP`<br/>`LDBL_MAX_10_EXP`|Massimo numero intero tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|38<br/>308<br/>308|
|`FLT_MAX_EXP`<br/>`DBL_MAX_EXP`<br/>`LDBL_MAX_EXP`|Massimo numero intero tale che `FLT_RADIX` elevato a tale numero sia un numero a virgola mobile rappresentabile.|128<br/>1024<br/>1024|
|`FLT_MIN`<br/>`DBL_MIN`<br/>`LDBL_MIN`|Valore positivo minimo.|1.175494351e-38F<br/>2.2250738585072014e-308<br/>2.2250738585072014e-308|
|`FLT_MIN_10_EXP`<br/>`DBL_MIN_10_EXP`<br/>`LDBL_MIN_10_EXP`|Minimo numero negativo tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|-37<br/>-307<br/>-307|
|`FLT_MIN_EXP`<br/>`DBL_MIN_EXP`<br/>`LDBL_MIN_EXP`|Minimo numero negativo tale che `FLT_RADIX` elevato a tale numero sia un numero a virgola mobile rappresentabile.|-125<br/>-1021<br/>-1021|
|`FLT_NORMALIZE`||0|
|`FLT_RADIX`<br/>`_DBL_RADIX`<br/>`_LDBL_RADIX`|Base della rappresentazione dell'esponente.|2<br/>2<br/>2|
|`FLT_ROUNDS`<br/>`_DBL_ROUNDS`<br/>`_LDBL_ROUNDS`|Modalità di arrotondamento di addizione a virgola mobile.|1 (vicino)<br/>1 (vicino)<br/>1 (vicino)|

> [!NOTE]
>  Le informazioni contenute nella tabella possono variare nelle versioni future del prodotto.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[limiti per tipi Integer](../cpp/integer-limits.md)  
