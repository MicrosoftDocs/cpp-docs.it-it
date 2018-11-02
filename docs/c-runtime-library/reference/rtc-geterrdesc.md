---
title: _RTC_GetErrDesc
ms.date: 11/04/2016
apiname:
- _RTC_GetErrDesc
apilocation:
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
apitype: DLLExport
f1_keywords:
- RTC_GetErrDesc
- _RTC_GetErrDesc
helpviewer_keywords:
- run-time errors
- _RTC_GetErrDesc function
- RTC_GetErrDesc function
ms.assetid: 7994ec2b-5488-4fd4-806d-a166c9a9f927
ms.openlocfilehash: d164626ea89bbe10f5b2ffe4224bf6381e40bab0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50590307"
---
# <a name="rtcgeterrdesc"></a>_RTC_GetErrDesc

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

Una stringa di caratteri che contiene una breve descrizione di uno dei tipi di errore rilevati dal sistema di controllo degli errori di runtime. Se l'errore è minore di zero oppure maggiore o uguale al valore restituito da [RTC_NumErrors](rtc-numerrors.md), **RTC_GetErrDesc** restituisce **NULL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_RTC_GetErrDesc**|\<rtcapi.h>|

Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[_RTC_NumErrors](rtc-numerrors.md)<br/>
[Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)<br/>
