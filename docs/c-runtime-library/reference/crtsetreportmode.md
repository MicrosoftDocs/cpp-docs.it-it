---
title: _CrtSetReportMode | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _CrtSetReportMode
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
- _CrtSetReportMode
- CrtSetReportMode
dev_langs:
- C++
helpviewer_keywords:
- _CrtSetReportMode function
- CrtSetReportMode function
ms.assetid: 3ecc6a12-afdd-4242-b046-8187ff6d4b36
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bd4ac54cd4bd8877e8a6ba32f585ef5d5e29e65c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32403261"
---
# <a name="crtsetreportmode"></a>_CrtSetReportMode

Specifica la destinazione o le destinazioni per un tipo di report specifico generato dal **CrtDbgReport** e le macro che chiamano [CrtDbgReport, CrtDbgReportW](crtdbgreport-crtdbgreportw.md), ad esempio [macro Assert, ASSERTE, Assert_expr](assert-asserte-assert-expr-macros.md), [macro Assert, ASSERTE, Assert_expr](assert-asserte-assert-expr-macros.md), [rpt, rptf, rptw, rptfw (macro)](rpt-rptf-rptw-rptfw-macros.md), e [rpt, rptf, rptw, rptfw (macro)](rpt-rptf-rptw-rptfw-macros.md) (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
int _CrtSetReportMode(
   int reportType,
   int reportMode
);
```

### <a name="parameters"></a>Parametri

*reportType*<br/>
Tipo di report: **CRT_WARN**, **CRT_ERROR**, e **CRT_ASSERT**.

*reportMode*<br/>
Nuova modalità di report o le modalità per *reportType*.

## <a name="return-value"></a>Valore restituito

Al termine, **CrtSetReportMode** restituisce il precedente modalità report o le modalità per il tipo di report specificato nel *reportType*. Se un valore non valido viene passato come *reportType* o una modalità non valida specificata per *reportMode*, **CrtSetReportMode** richiama il gestore di parametri non validi come descritto nella [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce -1. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="remarks"></a>Note

**CrtSetReportMode** specifica la destinazione di output per **CrtDbgReport**. Poiché le macro [macro Assert](assert-asserte-assert-expr-macros.md), [ASSERTE](assert-asserte-assert-expr-macros.md), [rpt](rpt-rptf-rptw-rptfw-macros.md), e [rptf](rpt-rptf-rptw-rptfw-macros.md) chiamare **CrtDbgReport**, **CrtSetReportMode** specifica la destinazione dell'output di testo specificato con le macro.

Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtSetReportMode** vengono rimosse durante la pre-elaborazione.

Se non si chiama **CrtSetReportMode** per definire la destinazione dell'output dei messaggi, quindi i valori predefiniti seguenti sono disponibili sono:

- Le asserzioni non riuscite e gli errori di asserzione vengono indirizzati a una finestra di messaggio di debug.

- Gli avvisi da applicazioni di Windows vengono inviati alla finestra di output del debugger.

- Gli avvisi da applicazioni della console non vengono visualizzati.

La tabella seguente elenca i tipi di report definiti in Crtdbg.h.

|Tipo di report|Descrizione|
|-----------------|-----------------|
|**CRT_WARN**|Avvisi, messaggi e informazioni che non richiedono attenzione immediata.|
|**CRT_ERROR**|Errori e problemi irreversibili che richiedono attenzione immediata.|
|**CRT_ASSERT**|Gli errori di asserzione (dichiarata espressioni che restituiscono **FALSE**).|

Il **CrtSetReportMode** funzione assegna la nuova modalità di report specificata nel *reportMode* al tipo di report specificato *reportType* e restituisce definita in precedenza modalità di report per *reportType*. La tabella seguente elenca le scelte disponibili per *reportMode* e il comportamento risultante del **CrtDbgReport**. Queste opzioni sono definite flag di bit in Crtdbg.h.

|Modalità rapporto|Comportamento _CrtDbgReport|
|-----------------|-----------------------------|
|**_CRTDBG_MODE_DEBUG**|Scrive il messaggio alla finestra di output del debugger.|
|**_CRTDBG_MODE_FILE**|Scrive il messaggio a un handle di file specificato dall'utente. Deve essere chiamato [_CrtSetReportFile](crtsetreportfile.md) per definire il file o il flusso da usare come destinazione.|
|**_CRTDBG_MODE_WNDW**|Crea una finestra di messaggio per visualizzare il messaggio con il [abort](abort.md), **ripetere**, e **ignora** pulsanti.|
|**_CRTDBG_REPORT_MODE**|Restituisce *reportMode* per l'oggetto specificato *reportType*:<br /><br /> 1 **_CRTDBG_MODE_FILE**<br /><br /> 2 **_CRTDBG_MODE_DEBUG**<br /><br /> 4 **_CRTDBG_MODE_WNDW**|

Ogni tipo di report può essere riportato tramite uno, due o tre modalità oppure senza modalità. Pertanto, è possibile avere più di una destinazione definita per un tipo di report singolo. Ad esempio, il frammento di codice seguente causa errori di asserzione da inviare a entrambi una finestra di messaggio di debug e di ottenere **stderr**:

```C
_CrtSetReportMode( _CRT_ASSERT, _CRTDBG_MODE_FILE | _CRTDBG_MODE_WNDW );
_CrtSetReportFile( _CRT_ASSERT, _CRTDBG_FILE_STDERR );
```

Le modalità di creazione di report per ogni tipo di report possono anche essere controllate separatamente. Ad esempio, è possibile specificare che una *reportType* dei **CRT_WARN** essere inviato a una stringa di output di debug, mentre **CRT_ASSERT** essere visualizzati utilizzando una finestra di messaggio di debug e inviato a **stderr**, illustrato in precedenza.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_CrtSetReportMode**|\<crtdbg.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** solo le versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
