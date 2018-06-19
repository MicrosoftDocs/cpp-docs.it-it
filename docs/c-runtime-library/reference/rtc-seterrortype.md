---
title: _RTC_SetErrorType | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _RTC_SetErrorType
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
- RTC_SetErrorType
- _RTC_SetErrorType
dev_langs:
- C++
helpviewer_keywords:
- run-time errors
- RTC_SetErrorType function
- _RTC_SetErrorType function
ms.assetid: f5f99be7-d357-4b11-b8f5-ddd3428f2b06
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 83395727b37ea3901e2e3c28d7adb6663f043d12
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32406615"
---
# <a name="rtcseterrortype"></a>_RTC_SetErrorType

Associa un errore che viene rilevato dai controlli degli errori di run-time a un tipo. Il gestore di errori elabora le modalità di output degli errori del tipo specificato.

## <a name="syntax"></a>Sintassi

```C
int _RTC_SetErrorType(
   _RTC_ErrorNumber errnum,
   int ErrType
);
```

### <a name="parameters"></a>Parametri

*errnum*<br/>
Numero compreso tra zero e uno minore del valore restituito da [_RTC_NumErrors](rtc-numerrors.md).

*ErrType*<br/>
Valore da assegnare a questo *errnum*. Ad esempio, si può usare **_CRT_ERROR**. Se si utilizza **CrtDbgReport** come gestore di errori *ErrType* può essere solo uno dei simboli definiti in [CrtSetReportMode](crtsetreportmode.md). Se si usa un gestore di errori personalizzato ([_RTC_SetErrorFunc](rtc-seterrorfunc.md)), è possibile avere un numero di *ErrType* pari al numero di *errnum*.

Un' *ErrType* di rtc_errtype_ignore ha un significato speciale per **CrtSetReportMode**; l'errore viene ignorato.

## <a name="return-value"></a>Valore restituito

Il valore precedente per il tipo di errore *tipo*.

## <a name="remarks"></a>Note

Per impostazione predefinita, tutti gli errori vengono impostati su *ErrType* = 1, che corrisponde a **_CRT_ERROR**. Per altre informazioni sui tipi di errore predefiniti come **_CRT_ERROR**, vedere [_CrtDbgReport](crtdbgreport-crtdbgreportw.md).

Prima di chiamare questa funzione, è necessario chiamare una delle funzioni di inizializzazione dei controlli degli errori di runtime. Vedere [Uso dei controlli runtime senza la libreria di runtime del linguaggio C](/visualstudio/debugger/using-run-time-checks-without-the-c-run-time-library).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_RTC_SetErrorType**|\<rtcapi.h>|

Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[_RTC_GetErrDesc](rtc-geterrdesc.md)<br/>
[Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)<br/>
