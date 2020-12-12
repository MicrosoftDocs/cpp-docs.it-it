---
description: 'Altre informazioni su: timespec_get, _timespec32_get, _timespec64_get'
title: timespec_get, _timespec32_get, _timespec64_get1
ms.date: 4/2/2020
api_name:
- timespec_get
- _timespec32_get
- _timespec64_get
- _o__timespec32_get
- _o__timespec64_get
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-time-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- timespec_get
- _timespec32_get
- _timespec64_get
- time/timespec_get
- time/_timespec32_get
- time/_timespec64_get
- timespec
- _timespec32
- _timespec64
helpviewer_keywords:
- timespec_get function
- _timespec32_get function
- _timespec64_get function
ms.assetid: ed757258-b4f2-4c1d-a91b-22ea6ffce4ab
ms.openlocfilehash: c6fc7c84d21bdeb8394602565dfe83fe22b59cb2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299527"
---
# <a name="timespec_get-_timespec32_get-_timespec64_get"></a>timespec_get, _timespec32_get, _timespec64_get

Imposta l'intervallo a cui punta il primo argomento sull'ora di calendario corrente, secondo la base temporale specificata.

## <a name="syntax"></a>Sintassi

```C
int timespec_get(
    struct timespec* const time_spec,
    int const base
);
int _timespec32_get(
    struct _timespec32* const time_spec,
    int const base
);
int _timespec64_get(
    struct _timespec64* const time_spec,
    int const base
);
```

### <a name="parameters"></a>Parametri

*time_spec*<br/>
Puntatore a uno struct impostato sul tempo, in secondi e nanosecondi, dall'inizio del periodo.

*base*<br/>
Un valore specifico dell'implementazione diverso da zero che specifica la base temporale.

## <a name="return-value"></a>Valore restituito

Valore di *base* in caso di esito positivo; in caso contrario, restituisce zero.

## <a name="remarks"></a>Commenti

Le funzioni di **timespec_get** impostano l'ora corrente nello struct a cui punta l'argomento *time_spec* . Tutte le versioni di questo struct hanno due membri, **tv_sec** e **tv_nsec**. Il valore **tv_sec** è impostato sul numero intero di secondi e **tv_nsec** sul numero integrale di nanosecondi, arrotondato alla risoluzione del clock di sistema, dall'inizio del periodo specificato dalla *base*.

**Specifico di Microsoft**

Queste funzioni supportano solo **TIME_UTC** come valore di *base* . In questo modo, il valore *time_spec* viene impostato sul numero di secondi e nanosecondi dall'inizio del periodo, ovvero la mezzanotte del 1 gennaio 1970, ora UTC (Coordinated Universal Time). In una **`struct`** **_timespec32**, **tv_sec** è un valore di **__time32_t** . In una **`struct`** **_timespec64**, **tv_sec** è un valore di **__time64_t** . In una **`struct`** **timespec** **tv_sec** è un tipo di **time_t** , ovvero 32 bit o 64 bit, a seconda che sia definita la macro del preprocessore _USE_32BIT_TIME_T. La funzione **timespec_get** è una funzione inline che chiama **_timespec32_get** se _USE_32BIT_TIME_T è definito. in caso contrario, chiama **_timespec64_get**.

**Fine sezione specifica Microsoft**

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**timespec_get**, **_timespec32_get**, **_timespec64_get**|C: \<time.h> , C++: \<ctime> o \<time.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Gestione del tempo](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64](utime-utime32-utime64-wutime-wutime32-wutime64.md)<br/>
