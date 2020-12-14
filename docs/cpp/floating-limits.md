---
description: 'Altre informazioni su: limiti a virgola mobile'
title: Limiti sulle costanti a virgola mobile
ms.date: 08/03/2018
helpviewer_keywords:
- ranges, floating-point constants
- floating-point constants, limits
- float.h header file
- limits, floating-point constants
- floating-point numbers [C++]
- floating limits
ms.assetid: fc718652-1f4c-4ed8-af60-0e769637459c
ms.openlocfilehash: 92694ee605d7cec12d03d808168b095f5c9f447b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242587"
---
# <a name="floating-limits"></a>Limiti sulle costanti a virgola mobile

**Specifico di Microsoft**

La tabella seguente elenca i limiti sui valori delle costanti a virgola mobile. Questi limiti sono definiti anche nel file di intestazione standard \<float.h> .

## <a name="limits-on-floating-point-constants"></a>Limiti sulle costanti a virgola mobile

|Costante|Significato|Valore|
|--------------|-------------|-----------|
|`FLT_DIG`<br/>`DBL_DIG`<br/>`LDBL_DIG`|Numero di cifre, q, tali che un numero a virgola mobile con q cifre decimali possa essere arrotondato in una rappresentazione a virgola mobile e viceversa senza perdita di precisione.|6<br/>15<br/>15|
|`FLT_EPSILON`<br/>`DBL_EPSILON`<br/>`LDBL_EPSILON`|Minor numero positivo x tale che x + 1 non sia uguale a 1.|1.192092896e-07F<br/>2.2204460492503131e-016<br/>2.2204460492503131e-016|
|`FLT_GUARD`||0|
|`FLT_MANT_DIG`<br/>`DBL_MANT_DIG`<br/>`LDBL_MANT_DIG`|Numero di cifre nella radice specificata da `FLT_RADIX` nell'separatore a virgola mobile. La radice è 2; questi valori specificano quindi i bit.|24<br/>53<br/>53|
|`FLT_MAX`<br/>`DBL_MAX`<br/>`LDBL_MAX`|Numero massimo a virgola mobile rappresentabile.|3.402823466e+38F<br/>1,7976931348623158e+308<br/>1,7976931348623158e+308|
|`FLT_MAX_10_EXP`<br/>`DBL_MAX_10_EXP`<br/>`LDBL_MAX_10_EXP`|Massimo numero intero tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|38<br/>308<br/>308|
|`FLT_MAX_EXP`<br/>`DBL_MAX_EXP`<br/>`LDBL_MAX_EXP`|Il numero intero massimo così `FLT_RADIX` elevato a tale numero è un numero a virgola mobile rappresentabile.|128<br/>1024<br/>1024|
|`FLT_MIN`<br/>`DBL_MIN`<br/>`LDBL_MIN`|Valore positivo minimo.|1.175494351e-38F<br/>2,2250738585072014e-308<br/>2,2250738585072014e-308|
|`FLT_MIN_10_EXP`<br/>`DBL_MIN_10_EXP`<br/>`LDBL_MIN_10_EXP`|Minimo numero negativo tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|-37<br/>-307<br/>-307|
|`FLT_MIN_EXP`<br/>`DBL_MIN_EXP`<br/>`LDBL_MIN_EXP`|Il valore integer minimo negativo tale che `FLT_RADIX` è elevato a tale numero è un numero a virgola mobile rappresentabile.|-125<br/>-1021<br/>-1021|
|`FLT_NORMALIZE`||0|
|`FLT_RADIX`<br/>`_DBL_RADIX`<br/>`_LDBL_RADIX`|Base della rappresentazione dell'esponente.|2<br/>2<br/>2|
|`FLT_ROUNDS`<br/>`_DBL_ROUNDS`<br/>`_LDBL_ROUNDS`|Modalità di arrotondamento per l'addizione a virgola mobile.|1 (vicino)<br/>1 (vicino)<br/>1 (vicino)|

> [!NOTE]
> Le informazioni contenute nella tabella possono variare nelle versioni future del prodotto.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Limiti Integer](../cpp/integer-limits.md)
