---
title: _CrtSetReportMode
ms.date: 11/04/2016
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
helpviewer_keywords:
- _CrtSetReportMode function
- CrtSetReportMode function
ms.assetid: 3ecc6a12-afdd-4242-b046-8187ff6d4b36
ms.openlocfilehash: 2096d39a8ba316fc76c97517a16e34231940e7f4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62335295"
---
# <a name="crtsetreportmode"></a>_CrtSetReportMode

Specifica la destinazione o destinazioni per un tipo specifico di report generati da **CrtDbgReport** e qualsiasi macro che chiamano [CrtDbgReport, CrtDbgReportW](crtdbgreport-crtdbgreportw.md), ad esempio [macro Assert, ASSERTE, Assert_expr](assert-asserte-assert-expr-macros.md), [macro Assert, ASSERTE, Assert_expr](assert-asserte-assert-expr-macros.md), [macro rpt, rptf, rptw, Rptfw](rpt-rptf-rptw-rptfw-macros.md), e [macro rpt, rptf, rptw, Rptfw](rpt-rptf-rptw-rptfw-macros.md) (solo versione di debug).

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
Nuova modalità di report o per le modalità *reportType*.

## <a name="return-value"></a>Valore restituito

Al termine, **CrtSetReportMode** restituisce il precedente modalità report o le modalità per il tipo di report specificato in *reportType*. Se un valore non valido viene passato come *reportType* oppure viene specificata una modalità non valida per *reportMode*, **CrtSetReportMode** richiama il gestore di parametri non validi come descritto nella [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** al **EINVAL** e restituisce -1. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="remarks"></a>Note

**CrtSetReportMode** specifica la destinazione di output per **CrtDbgReport**. Poiché le macro [macro Assert](assert-asserte-assert-expr-macros.md), [ASSERTE](assert-asserte-assert-expr-macros.md), [macro rpt](rpt-rptf-rptw-rptfw-macros.md), e [rptf](rpt-rptf-rptw-rptfw-macros.md) chiamare **CrtDbgReport**, **CrtSetReportMode** specifica la destinazione dell'output di testo determinato con queste macro.

Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **CrtSetReportMode** vengono rimosse durante la pre-elaborazione.

Se non si chiama **CrtSetReportMode** per definire la destinazione di output dei messaggi, quindi i seguenti valori predefiniti sono in effetti:

- Le asserzioni non riuscite e gli errori di asserzione vengono indirizzati a una finestra di messaggio di debug.

- Gli avvisi da applicazioni di Windows vengono inviati alla finestra di output del debugger.

- Gli avvisi da applicazioni della console non vengono visualizzati.

La tabella seguente elenca i tipi di report definiti in Crtdbg.h.

|Tipo di report|Descrizione|
|-----------------|-----------------|
|**_CRT_WARN**|Avvisi, messaggi e informazioni che non richiedono attenzione immediata.|
|**_CRT_ERROR**|Errori e problemi irreversibili che richiedono attenzione immediata.|
|**_CRT_ASSERT**|Asserzioni non riuscite (espressioni dichiarate che restituiscono **FALSE**).|

Il **CrtSetReportMode** funzione viene assegnata la nuova modalità di report specificata nella *reportMode* per il tipo di report specificato in *reportType* e restituisce definita in precedenza modalità di report per *reportType*. La tabella seguente elenca le scelte disponibili per *reportMode* e il comportamento risultante di **CrtDbgReport**. Queste opzioni sono definite flag di bit in Crtdbg.h.

|Modalità rapporto|Comportamento _CrtDbgReport|
|-----------------|-----------------------------|
|**_CRTDBG_MODE_DEBUG**|Scrive il messaggio alla finestra di output del debugger.|
|**_CRTDBG_MODE_FILE**|Scrive il messaggio a un handle di file specificato dall'utente. Deve essere chiamato [_CrtSetReportFile](crtsetreportfile.md) per definire il file o il flusso da usare come destinazione.|
|**_CRTDBG_MODE_WNDW**|Crea una finestra di messaggio per visualizzare il messaggio con il [abort](abort.md), **ripetere**, e **ignora** pulsanti.|
|**_CRTDBG_REPORT_MODE**|Restituisce *reportMode* per l'oggetto specificato *reportType*:<br /><br /> 1   **_CRTDBG_MODE_FILE**<br /><br /> 2   **_CRTDBG_MODE_DEBUG**<br /><br /> 4   **_CRTDBG_MODE_WNDW**|

Ogni tipo di report può essere riportato tramite uno, due o tre modalità oppure senza modalità. Pertanto, è possibile avere più di una destinazione definita per un tipo di report singolo. Ad esempio, il frammento di codice seguente causa errori di asserzione da inviare a entrambi una finestra di messaggio di debug e di ottenere **stderr**:

```C
_CrtSetReportMode( _CRT_ASSERT, _CRTDBG_MODE_FILE | _CRTDBG_MODE_WNDW );
_CrtSetReportFile( _CRT_ASSERT, _CRTDBG_FILE_STDERR );
```

Le modalità di creazione di report per ogni tipo di report possono anche essere controllate separatamente. Ad esempio, è possibile specificare che un *reportType* dei **CRT_WARN** essere inviato a una stringa di debug di output, mentre **CRT_ASSERT** essere visualizzata utilizzando una finestra di messaggio di debug e inviato a **stderr**, come illustrato in precedenza.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_CrtSetReportMode**|\<crtdbg.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** Le versioni di debug [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md) solo.

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
