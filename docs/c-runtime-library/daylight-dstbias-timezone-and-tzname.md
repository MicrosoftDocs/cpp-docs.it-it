---
description: 'Altre informazioni su: _daylight, _dstbias, _timezone e _tzname'
title: _daylight, _dstbias, _timezone, and _tzname
ms.date: 11/04/2016
f1_keywords:
- tzname
- _timezone
- timezone
- _daylight
- _tzname
- daylight
helpviewer_keywords:
- time zones
- time adjustments
- timezone variables
- _tzname function
- _daylight function
- _timezone function
- daylight function
- local time adjustments
- timezone function
- tzname function
- time-zone variables
ms.assetid: d06c7292-6b99-4aba-b284-16a96570c856
ms.openlocfilehash: aaa1d76276e4b4117d5f07695875481215c4122e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258782"
---
# <a name="_daylight-_dstbias-_timezone-and-_tzname"></a>_daylight, _dstbias, _timezone, and _tzname

`_daylight`, `_dstbias`, `_timezone` e `_tzname` vengono utilizzati nelle routine di data e ora per apportare modifiche all'ora locale. Queste variabili globali sono state deprecate a favore di versioni funzionali più sicure che devono essere utilizzate al posto delle variabile globali.

|Variabile globale|Equivalente funzionale|
|---------------------|---------------------------|
|`_daylight`|[_get_daylight](../c-runtime-library/reference/get-daylight.md)|
|`_dstbias`|[_get_dstbias](../c-runtime-library/reference/get-dstbias.md)|
|`_timezone`|[_get_timezone](../c-runtime-library/reference/get-timezone.md)|
|`_tzname`|[_get_tzname](../c-runtime-library/reference/get-tzname.md)|

Vengono dichiarate in Time.h come segue.

## <a name="syntax"></a>Sintassi

```
extern int _daylight;
extern int _dstbias;
extern long _timezone;
extern char *_tzname[2];
```

## <a name="remarks"></a>Osservazioni

In una chiamata a `_ftime`, `localtime` o `_tzset`, i valori di `_daylight`, di `_dstbias`, di `_timezone` e di `_tzname` sono determinati dal valore della variabile di ambiente `TZ`. Se non si imposta in modo esplicito il valore di `TZ`, `_tzname[0]` e `_tzname[1]` contengono, rispettivamente, le impostazioni predefinite di "PST" e "PDT".  Le funzioni di manipolazione dell'ora ([_tzse](../c-runtime-library/reference/tzset.md)t, [_ftime](../c-runtime-library/reference/ftime-ftime32-ftime64.md) e [localtime](../c-runtime-library/reference/localtime-localtime32-localtime64.md)) tentano di impostare i valori di `_daylight`, di `_dstbias` e di `_timezone` eseguendo una query sul sistema operativo per il valore predefinito di ogni variabile. I valori delle variabili globali del fuso orario sono riportati nella tabella seguente.

|Variabile|valore|
|--------------|-----------|
|`_daylight`|Diverso da zero se l'area dell'ora legale (DST) viene specificata in `TZ` o è determinata dal sistema operativo; in caso contrario, 0. Il valore predefinito è 1.|
|`_dstbias`|Offset per l'ora legale.|
|`_timezone`|Differenza in secondi tra l'ora UTC (Universal Coordinated Time) e l'ora locale. Il valore predefinito è 28.800.|
|`_tzname[0]`|Nome del fuso orario derivato dalla variabile di ambiente `TZ`. Il valore predefinito è "PST".|
|`_tzname[1]`|Nome della zona DST derivato dalla variabile di ambiente `TZ`. Il valore predefinito è "PDT" (Pacific Daylight Time).|

## <a name="see-also"></a>Vedi anche

[Variabili globali](../c-runtime-library/global-variables.md)<br/>
[_get_daylight](../c-runtime-library/reference/get-daylight.md)<br/>
[_get_dstbias](../c-runtime-library/reference/get-dstbias.md)<br/>
[_get_timezone](../c-runtime-library/reference/get-timezone.md)<br/>
[_get_tzname](../c-runtime-library/reference/get-tzname.md)
