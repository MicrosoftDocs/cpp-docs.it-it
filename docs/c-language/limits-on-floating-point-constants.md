---
title: Limiti sulle costanti a virgola mobile
ms.date: 11/04/2016
helpviewer_keywords:
- ranges, floating-point constants
- floating-point constants, limits
- FLOAT.H header file
- constants, floating-point
- limits, floating-point constants
- floating-point numbers, floating limits
ms.assetid: 2d975868-2af6-45d7-a8af-db79f2c6b67b
ms.openlocfilehash: 545c8fc356d7e1a6c56fdd5c144fa9a55120c97f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50664113"
---
# <a name="limits-on-floating-point-constants"></a>Limiti sulle costanti a virgola mobile

**Sezione specifica Microsoft**

I limiti sui valori delle costanti a virgola mobile sono indicati nella tabella seguente. Queste informazioni sono contenute nel file di intestazione FLOAT.H.

### <a name="limits-on-floating-point-constants"></a>Limiti su costanti a virgola mobile

|Costante|Significato|Valore|
|--------------|-------------|-----------|
|**FLT_DIG**<br />**DBL_DIG**<br />**LDBL_DIG**|Numero di cifre, *q*, tali che un numero a virgola mobile con *q* cifre decimali possa essere arrotondato in una rappresentazione a virgola mobile e viceversa senza perdita di precisione.|6<br />15<br />15|
|**FLT_EPSILON**<br />**DBL_EPSILON**<br />**LDBL_EPSILON**|Minor numero positivo *x* tale che *x* + 1 non sia uguale a 1|1.192092896e-07F<br />2.2204460492503131e-016<br />2.2204460492503131e-016|
|**FLT_GUARD**||0|
|**FLT_MANT_DIG**<br />**DBL_MANT_DIG**<br />**LDBL_MANT_DIG**|Numero di cifre nella radice specificato da **FLT_RADIX** nel significando a virgola mobile. La base è 2, pertanto questi valori specificano i bit.|24<br />53<br />53|
|**FLT_MAX**<br />**DBL_MAX**<br />**LDBL_MAX**|Massimo numero a virgola mobile rappresentabile.|3.402823466e+38F<br />1.7976931348623158e+308<br />1.7976931348623158e+308|
|**FLT_MAX_10_EXP**<br />**DBL_MAX_10_EXP**<br />**LDBL_MAX_10_EXP**|Massimo numero intero tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|38<br />308<br />308|
|**FLT_MAX_EXP**<br />**DBL_MAX_EXP**<br />**LDBL_MAX_EXP**|Massimo numero intero tale che **FLT_RADIX** elevato a tale numero sia un numero a virgola mobile rappresentabile.|128<br />1024<br />1024|
|**FLT_MIN**<br />**DBL_MIN**<br />**LDBL_MIN**|Valore positivo minimo.|1.175494351e-38F<br />2.2250738585072014e-308<br />2.2250738585072014e-308|
|**FLT_MIN_10_EXP**<br />**DBL_MIN_10_EXP**<br />**LDBL_MIN_10_EXP**|Minimo numero negativo tale che 10 elevato a tale numero sia un numero a virgola mobile rappresentabile.|-37<br />-307<br />-307|
|**FLT_MIN_EXP**<br />**DBL_MIN_EXP**<br />**LDBL_MIN_EXP**|Minimo numero negativo tale che **FLT_RADIX** elevato a tale numero sia un numero a virgola mobile rappresentabile.|-125<br />-1021<br />-1021|
|**FLT_NORMALIZE**||0|
|**FLT_RADIX**<br />**_DBL_RADIX**<br />**_LDBL_RADIX**|Base della rappresentazione dell'esponente.|2<br />2<br />2|
|**FLT_ROUNDS**<br />**_DBL_ROUNDS**<br />**_LDBL_ROUNDS**|Modalità di arrotondamento per l'addizione a virgola mobile.|1 (vicino)<br />1 (vicino)<br />1 (vicino)|

Si noti che le informazioni contenute nella tabella precedente possono variare nelle implementazioni future.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Costanti a virgola mobile C](../c-language/c-floating-point-constants.md)