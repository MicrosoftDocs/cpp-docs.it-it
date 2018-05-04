---
title: _RTC_GetErrDesc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- run-time errors
- _RTC_GetErrDesc function
- RTC_GetErrDesc function
ms.assetid: 7994ec2b-5488-4fd4-806d-a166c9a9f927
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1a176aa258f805a516bf36c982ba63e531a74478
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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

Una stringa di caratteri che contiene una breve descrizione di uno dei tipi di errore rilevati dal sistema di controllo degli errori di runtime. Se l'errore è minore di zero oppure maggiore o uguale al valore restituito da [RTC_NumErrors](rtc-numerrors.md), **RTC_GetErrDesc** restituisce NULL.

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
