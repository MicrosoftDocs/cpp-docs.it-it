---
title: _CrtSetReportMode
ms.date: 11/04/2016
api_name:
- _CrtSetReportMode
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
- _CrtSetReportMode
- CrtSetReportMode
helpviewer_keywords:
- _CrtSetReportMode function
- CrtSetReportMode function
ms.assetid: 3ecc6a12-afdd-4242-b046-8187ff6d4b36
ms.openlocfilehash: ae7e83ac009d572f8a9f6484519b0cdfb7499ce3
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70938459"
---
# <a name="_crtsetreportmode"></a>_CrtSetReportMode

Specifica la destinazione o le destinazioni per un tipo di report specifico generato da **_CrtDbgReport** e qualsiasi macro che chiama [_CrtDbgReport, _CrtDbgReportW](crtdbgreport-crtdbgreportw.md), ad esempio [_ASSERT, _ASSERTE, _ASSERT_EXPR Macros](assert-asserte-assert-expr-macros.md), _ASSERT [, _ASSERTE, _ Macro ASSERT_EXPR](assert-asserte-assert-expr-macros.md), [RPT, _RPTF, _RPTW, macro _RPTFW](rpt-rptf-rptw-rptfw-macros.md)e [RPT, _RPTF, _RPTW, macro _RPTFW](rpt-rptf-rptw-rptfw-macros.md) (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
int _CrtSetReportMode(
   int reportType,
   int reportMode
);
```

### <a name="parameters"></a>Parametri

*reportType*<br/>
Tipo di report: **_CRT_WARN**, **_CRT_ERROR**e **_CRT_ASSERT**.

*reportMode*<br/>
Nuova modalità report o modalità per *reportType*.

## <a name="return-value"></a>Valore restituito

Al termine, **_CrtSetReportMode** restituisce la modalità report precedente o le modalità per il tipo di report specificato in *reportType*. Se viene passato un valore non valido come *reportType* o viene specificata una modalità non valida per *reportMode*, **_CrtSetReportMode** richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce-1. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="remarks"></a>Note

**_CrtSetReportMode** specifica la destinazione di output per **_CrtDbgReport**. Poiché le macro [_ASSERT](assert-asserte-assert-expr-macros.md), [_ASSERTE](assert-asserte-assert-expr-macros.md), [RPT](rpt-rptf-rptw-rptfw-macros.md)e [_RPTF](rpt-rptf-rptw-rptfw-macros.md) chiamano **_CrtDbgReport**, **_CrtSetReportMode** specifica la destinazione di output del testo specificato con tali macro.

Quando _ [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtSetReportMode** vengono rimosse durante la pre-elaborazione.

Se non si chiama **_CrtSetReportMode** per definire la destinazione di output dei messaggi, verranno applicate le impostazioni predefinite seguenti:

- Le asserzioni non riuscite e gli errori di asserzione vengono indirizzati a una finestra di messaggio di debug.

- Gli avvisi da applicazioni di Windows vengono inviati alla finestra di output del debugger.

- Gli avvisi da applicazioni della console non vengono visualizzati.

La tabella seguente elenca i tipi di report definiti in Crtdbg.h.

|Tipo di report|Descrizione|
|-----------------|-----------------|
|**_CRT_WARN**|Avvisi, messaggi e informazioni che non richiedono attenzione immediata.|
|**_CRT_ERROR**|Errori e problemi irreversibili che richiedono attenzione immediata.|
|**_CRT_ASSERT**|Errori di asserzione (espressioni asserite che restituiscono **false**).|

La funzione **_CrtSetReportMode** assegna la nuova modalità report specificata in *reportMode* al tipo di report specificato in *reportType* e restituisce la modalità report definita in precedenza per *reportType*. La tabella seguente elenca le scelte disponibili per *reportMode* e il comportamento risultante di **_CrtDbgReport**. Queste opzioni sono definite flag di bit in Crtdbg.h.

|Modalità rapporto|Comportamento _CrtDbgReport|
|-----------------|-----------------------------|
|**_CRTDBG_MODE_DEBUG**|Scrive il messaggio alla finestra di output del debugger.|
|**_CRTDBG_MODE_FILE**|Scrive il messaggio a un handle di file specificato dall'utente. Deve essere chiamato [_CrtSetReportFile](crtsetreportfile.md) per definire il file o il flusso da usare come destinazione.|
|**_CRTDBG_MODE_WNDW**|Crea una finestra di messaggio per visualizzare il messaggio insieme ai pulsanti [Interrompi](abort.md), **Riprova**e **Ignora** .|
|**_CRTDBG_REPORT_MODE**|Restituisce *reportMode* per il *reportType*specificato:<br /><br /> 1   **_CRTDBG_MODE_FILE**<br /><br /> 2   **_CRTDBG_MODE_DEBUG**<br /><br /> 4   **_CRTDBG_MODE_WNDW**|

Ogni tipo di report può essere riportato tramite uno, due o tre modalità oppure senza modalità. Pertanto, è possibile avere più di una destinazione definita per un tipo di report singolo. Ad esempio, il frammento di codice seguente causa errori di asserzione da inviare a una finestra di messaggio di debug e a **stderr**:

```C
_CrtSetReportMode( _CRT_ASSERT, _CRTDBG_MODE_FILE | _CRTDBG_MODE_WNDW );
_CrtSetReportFile( _CRT_ASSERT, _CRTDBG_FILE_STDERR );
```

Le modalità di creazione di report per ogni tipo di report possono anche essere controllate separatamente. È ad esempio possibile specificare che un *reportType* di **_CRT_WARN** venga inviato a una stringa di debug di output, mentre **_CRT_ASSERT** viene visualizzato utilizzando una finestra di messaggio di debug e inviato a **stderr**, come illustrato in precedenza.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_CrtSetReportMode**|\<crtdbg.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie** Solo versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md) .

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
