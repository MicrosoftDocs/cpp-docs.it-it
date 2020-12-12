---
description: 'Altre informazioni su: _RTC_GetErrDesc'
title: _RTC_GetErrDesc
ms.date: 11/04/2016
api_name:
- _RTC_GetErrDesc
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- RTC_GetErrDesc
- _RTC_GetErrDesc
helpviewer_keywords:
- run-time errors
- _RTC_GetErrDesc function
- RTC_GetErrDesc function
ms.assetid: 7994ec2b-5488-4fd4-806d-a166c9a9f927
ms.openlocfilehash: 5e9beccec5e13d6c2c00e3edaefec695a8e16737
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97168722"
---
# <a name="_rtc_geterrdesc"></a>_RTC_GetErrDesc

Restituisce una breve descrizione di un tipo di controllo degli errori di runtime (RTC).

## <a name="syntax"></a>Sintassi

```C
const char * _RTC_GetErrDesc(
   _RTC_ErrorNumber errnum
);
```

### <a name="parameters"></a>Parametri

*errnum*<br/>
Numero compreso tra zero e uno minore del valore restituito da **_RTC_NumErrors**.

## <a name="return-value"></a>Valore restituito

Una stringa di caratteri che contiene una breve descrizione di uno dei tipi di errore rilevati dal sistema di controllo degli errori di runtime. Se Error è minore di zero o maggiore o uguale al valore restituito da [_RTC_NumErrors](rtc-numerrors.md), **_RTC_GetErrDesc** restituisce **null**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_RTC_GetErrDesc**|\<rtcapi.h>|

Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedi anche

[_RTC_NumErrors](rtc-numerrors.md)<br/>
[Controllo degli errori di run-time](../../c-runtime-library/run-time-error-checking.md)<br/>
