---
title: _RTC_NumErrors | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- run-time errors
- _RTC_NumErrors function
- RTC_NumErrors function
ms.assetid: 7e82adae-38e2-4f8b-bc0b-37bda8109fd1
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d7c6c2fd9f804bdbb949e4e2909cd4b9627e0f24
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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
