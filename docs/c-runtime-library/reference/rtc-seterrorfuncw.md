---
title: _RTC_SetErrorFuncW | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _RTC_SetErrorFuncW
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
- _RTC_SetErrorFuncW
- RTC_SetErrorFuncW
dev_langs:
- C++
helpviewer_keywords:
- run-time errors
- RTC_SetErrorFuncW function
- _RTC_error_fnW typedef
- _RTC_SetErrorFuncW function
- RTC_error_fnW typedef
ms.assetid: b3e0d71f-1bd3-4c37-9ede-2f638eb3c81a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cf610316c504e61d56556a20797f55d2906bca27
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="rtcseterrorfuncw"></a>_RTC_SetErrorFuncW

Definisce una funzione come gestore per la segnalazione dei controlli degli errori di runtime (RTC).

## <a name="syntax"></a>Sintassi

```C
_RTC_error_fnW _RTC_SetErrorFuncW(
   _RTC_error_fnW function
);
```

### <a name="parameters"></a>Parametri

*function*<br/>
L'indirizzo della funzione che gestirà i controlli degli errori di runtime.

## <a name="return-value"></a>Valore restituito

La funzione di errore definita in precedenza. o **NULL** se non è disponibile alcuna funzione definita in precedenza.

## <a name="remarks"></a>Note

Nel nuovo codice, utilizzare solo **RTC_SetErrorFuncW**. **RTC_SetErrorFunc** sia incluso solo nella libreria per la compatibilità con le versioni precedenti.

Il **RTC_SetErrorFuncW** callback si applica solo al componente che è stato collegato, ma non a livello globale.

Assicurarsi che l'indirizzo passato a **RTC_SetErrorFuncW** è quello di una funzione di gestione degli errori valida.

Se un errore è stato assegnato un tipo di -1 con [RTC_SetErrorType](rtc-seterrortype.md), non viene chiamata la funzione di gestione degli errori.

Prima di chiamare questa funzione, è necessario chiamare una delle funzioni di inizializzazione dei controlli degli errori di run-time. Per altre informazioni, vedere [Using Run-Time Checks Without the C Run-Time Library](/visualstudio/debugger/using-run-time-checks-without-the-c-run-time-library).

**_RTC_error_fnW** viene definito come segue:

> **TypeDef int ( cdecl \*rtc_error_fnw) (int** *errorType* **, wchar_t const \***  *filename* **, int***linenumber* **, wchar_t const \***  *moduleName* **, wchar_t const \***  *formato* **,...);** 

dove:

*errorType* il tipo di errore specificato da [RTC_SetErrorType](rtc-seterrortype.md).

*nome del file* il file di origine in cui si è verificato l'errore, o null se è disponibile alcuna informazione di debug.

*LineNumber* la linea nel *filename* in cui si è verificato l'errore oppure 0 se è disponibile alcuna informazione di debug.

*moduleName* la DLL o nome del file eseguibile in cui si è verificato l'errore.

*formato* stringa di tipo printf per visualizzare un messaggio di errore, usando i parametri rimanenti. Il primo argomento di VA_ARGLIST è il numero di errore RTC che si è verificato.

Per un esempio che illustra come usare **_RTC_error_fnW**, vedere [Personalizzazione dei controlli runtime nativi](/visualstudio/debugger/native-run-time-checks-customization).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_RTC_SetErrorFuncW**|\<rtcapi.h>|

Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[_CrtDbgReport, _CrtDbgReportW](crtdbgreport-crtdbgreportw.md)<br/>
[Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)<br/>
