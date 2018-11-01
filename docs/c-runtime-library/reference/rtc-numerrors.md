---
title: _RTC_NumErrors
ms.date: 11/04/2016
apiname:
- _RTC_NumErrors
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
- _RTC_NumErrors
- RTC_NumErrors
helpviewer_keywords:
- run-time errors
- _RTC_NumErrors function
- RTC_NumErrors function
ms.assetid: 7e82adae-38e2-4f8b-bc0b-37bda8109fd1
ms.openlocfilehash: e13f85f2140473d6e971d27abb6012effd36c37c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50477194"
---
# <a name="rtcnumerrors"></a>_RTC_NumErrors

Restituisce il numero totale di errori che possono essere rilevati dai controlli degli errori di runtime (RTC). È possibile usare questo numero come controllo in un ciclo **for**, in cui ogni valore del ciclo viene passato a [_RTC_GetErrDesc](rtc-geterrdesc.md).

## <a name="syntax"></a>Sintassi

```C

int _RTC_NumErrors( void );

```

## <a name="return-value"></a>Valore restituito

Un Integer il cui valore rappresenta il numero totale di errori che possono essere rilevati dai controlli degli errori di runtime di Visual C++.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_RTC_NumErrors**|\<rtcapi.h>|

Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[_RTC_GetErrDesc](rtc-geterrdesc.md)<br/>
[Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)<br/>
