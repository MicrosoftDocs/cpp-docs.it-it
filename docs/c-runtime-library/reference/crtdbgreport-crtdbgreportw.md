---
description: 'Altre informazioni su: _CrtDbgReport, _CrtDbgReportW'
title: _CrtDbgReport, _CrtDbgReportW
ms.date: 11/04/2016
api_name:
- _CrtDbgReport
- _CrtDbgReportW
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
- CrtDbgReport
- CrtDbgReportW
- _CrtDbgReportW
- _CrtDbgReport
helpviewer_keywords:
- debug reporting
- _CrtDbgReport function
- CrtDbgReport function
- CrtDbgReportW function
- _CrtDbgReportW function
ms.assetid: 6e581fb6-f7fb-4716-9432-f0145d639ecc
ms.openlocfilehash: 523dc65f846804b13b83bf08b0499b2459fe22ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319804"
---
# <a name="_crtdbgreport-_crtdbgreportw"></a>_CrtDbgReport, _CrtDbgReportW

Genera un rapporto con un messaggio di debug e lo invia tre possibili destinazioni (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
int _CrtDbgReport(
   int reportType,
   const char *filename,
   int linenumber,
   const char *moduleName,
   const char *format [,
   argument] ...
);
int _CrtDbgReportW(
   int reportType,
   const wchar_t *filename,
   int linenumber,
   const wchar_t *moduleName,
   const wchar_t *format [,
   argument] ...
);
```

### <a name="parameters"></a>Parametri

*reportType*<br/>
Tipo di report: **_CRT_WARN**, **_CRT_ERROR** e **_CRT_ASSERT**.

*filename*<br/>
Puntatore al nome del file di origine in cui è stato eseguito Assert/report o **null**.

*LineNumber*<br/>
Numero di riga nel file di origine in cui si è verificata l'asserzione/report o **null**.

*moduleName*<br/>
Puntatore al nome del modulo (.exe o .dll) in cui si è verificata l'asserzione o il rapporto.

*format*<br/>
Puntatore alla stringa di controllo del formato usata per creare il messaggio utente.

*argument*<br/>
Argomenti di sostituzione facoltativi utilizzati dal *formato*.

## <a name="return-value"></a>Valore restituito

Per tutte le destinazioni dei report, **_CrtDbgReport** e **_CrtDbgReportW** restituiscono-1 se si verifica un errore e 0 se non vengono rilevati errori. Tuttavia, quando la destinazione del report è una finestra di messaggio di debug e l'utente fa clic sul pulsante **Riprova**, queste funzioni restituiscono 1. Se l'utente fa clic sul pulsante **Interrompi** nella finestra di messaggio di debug, queste funzioni vengono interrotte immediatamente e non restituiscono nessun valore.

Il [_RPT _RPTF](rpt-rptf-rptw-rptfw-macros.md) le macro di debug chiamano **_CrtDbgReport** per generare i report di debug. Le versioni a caratteri wide di queste macro, nonché [_ASSERT, _ASSERTE](assert-asserte-assert-expr-macros.md), [_RPTW](rpt-rptf-rptw-rptfw-macros.md) e [_RPTFW](rpt-rptf-rptw-rptfw-macros.md), utilizzano **_CrtDbgReportW** per generare i report di debug. Quando **_CrtDbgReport** o **_CrtDbgReportW** restituiscono 1, queste macro avviano il debugger, a condizione che sia abilitato il debug JIT (just-in-Time).

## <a name="remarks"></a>Commenti

**_CrtDbgReport** e **_CrtDbgReportW** possono inviare il report di debug a tre destinazioni diverse: un file di report di debug, un monitor di debug (debugger di Visual Studio) o una finestra di messaggio di debug. Vengono usate due funzioni di configurazione, [_CrtSetReportMode](crtsetreportmode.md) e [_CrtSetReportFile](crtsetreportfile.md), per specificare la destinazione o le destinazioni per ogni tipo di report. Queste funzioni consentono alle destinazioni per la creazione dei rapporti per ogni tipo di rapporto di essere controllate separatamente. È ad esempio possibile specificare che un *reportType* di **_CRT_WARN** venga inviato solo al monitor di debug, mentre un *reportType* di **_CRT_ASSERT** essere inviato a una finestra di messaggio di debug e a un file di report definito dall'utente.

**_CrtDbgReportW** è la versione a caratteri wide di **_CrtDbgReport**. Tutti gli output e i parametri di stringa sono espressi in stringhe a caratteri wide, per il resto è identico alla versione a un byte.

**_CrtDbgReport** e **_CrtDbgReportW** creare il messaggio utente per il rapporto di debug sostituendo l' *argomento*[**n**] argomenti nella stringa di *formato* , usando le stesse regole definite dalle funzioni **printf** o **wprintf** . Queste funzioni generano quindi il rapporto di debug e determinano la destinazione o le destinazioni in base alle modalità del report corrente e al file definito per *reportType*. Quando il report viene inviato a una finestra di messaggio di debug, *filename*, **lineNumber** e *ModuleName* sono inclusi nelle informazioni visualizzate nella finestra di.

Nella tabella seguente sono elencate le opzioni disponibili per la modalità report o le modalità e il file e il comportamento risultante di **_CrtDbgReport** e **_CrtDbgReportW**. Queste opzioni sono definite come flag di bit in \<crtdbg.h> .

|Modalità rapporto|File di rapporto|**_CrtDbgReport** **_CrtDbgReportW** comportamento|
|-----------------|-----------------|------------------------------------------------|
|**_CRTDBG_MODE_DEBUG**|Non applicabile|Scrive un messaggio tramite l'API [OutputDebugString](/windows/win32/api/debugapi/nf-debugapi-outputdebugstringw) di Windows.|
|**_CRTDBG_MODE_WNDW**|Non applicabile|Esegue una chiamata all'API [MessageBox](/windows/win32/api/winuser/nf-winuser-messagebox) di Windows per creare la finestra in cui visualizzare il messaggio nonché i pulsanti **Interrompi**, **Riprova** e **Ignora**. Se un utente fa clic su **Interrompi**, **_CrtDbgReport** o **_CrtDbgReport** immediatamente viene interrotto. Se un utente fa clic su **Riprova**, viene restituito 1. Se un utente fa clic su **Ignora**, l'esecuzione continua e **_CrtDbgReport** e **_CrtDbgReportW** restituisce 0. Si noti che quando si fa clic su **Ignora** in presenza di una condizione di errore, spesso si determina un "comportamento indefinito".|
|**_CRTDBG_MODE_FILE**|**__HFILE**|Scrive un messaggio nell' **handle** fornito dall'utente, usando l'API [WriteFile](/windows/win32/api/fileapi/nf-fileapi-writefile) di Windows e non verifica la validità dell'handle di file; l'applicazione è responsabile dell'apertura del file di report e del passaggio di un handle di file valido.|
|**_CRTDBG_MODE_FILE**|**_CRTDBG_FILE_STDERR**|Scrive il messaggio in **stderr**.|
|**_CRTDBG_MODE_FILE**|**_CRTDBG_FILE_STDOUT**|Scrive il messaggio in **stdout**.|

Il rapporto può essere inviato a una, due o tre destinazioni o a nessuna destinazione. Per altre informazioni su come specificare le modalità report e il file del report, vedere le funzioni [_CrtSetReportMode](crtsetreportmode.md) e [_CrtSetReportFile](crtsetreportfile.md). Per altre informazioni sull'uso delle macro di debug e delle funzioni per la creazione di report, vedere [Macros for Reporting](/visualstudio/debugger/macros-for-reporting) (Macro per la creazione di report).

Se l'applicazione richiede una maggiore flessibilità di quella fornita da **_CrtDbgReport** e **_CrtDbgReportW**, è possibile scrivere una funzione di creazione di report personalizzata e associarla al meccanismo di creazione di report della libreria di runtime del linguaggio C utilizzando la funzione [_CrtSetReportHook](crtsetreporthook.md) .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtDbgReport**|\<crtdbg.h>|
|**_CrtDbgReportW**|\<crtdbg.h>|

**_CrtDbgReport** e **_CrtDbgReportW** sono estensioni Microsoft. Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_crtdbgreport.c
#include <crtdbg.h>

int main(int argc, char *argv[]) {
#ifdef _DEBUG
   _CrtDbgReport(_CRT_ASSERT, __FILE__, __LINE__, argv[0], NULL);
#endif
}
```

Per un esempio su come modificare la funzione per la creazione di report, vedere [crt_dbg2](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg2).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtSetReportMode](crtsetreportmode.md)<br/>
[_CrtSetReportFile](crtsetreportfile.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[_DEBUG](../../c-runtime-library/debug.md)<br/>
