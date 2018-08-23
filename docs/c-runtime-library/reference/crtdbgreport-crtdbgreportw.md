---
title: _CrtDbgReport, _CrtDbgReportW | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _CrtDbgReport
- _CrtDbgReportW
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
- CrtDbgReport
- CrtDbgReportW
- _CrtDbgReportW
- _CrtDbgReport
dev_langs:
- C++
helpviewer_keywords:
- debug reporting
- _CrtDbgReport function
- CrtDbgReport function
- CrtDbgReportW function
- _CrtDbgReportW function
ms.assetid: 6e581fb6-f7fb-4716-9432-f0145d639ecc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b2b0bcdc5ee6c4c2b71837f1cdd958f50d8d0b4a
ms.sourcegitcommit: b92ca0b74f0b00372709e81333885750ba91f90e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/16/2018
ms.locfileid: "42572997"
---
# <a name="crtdbgreport-crtdbgreportw"></a>_CrtDbgReport, _CrtDbgReportW

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
Tipo di report: **CRT_WARN**, **CRT_ERROR**, e **CRT_ASSERT**.

*filename*<br/>
Puntatore al nome del file di origine in cui si è verificato l'asserzione o il rapporto o **NULL**.

*linenumber*<br/>
Numero di riga nel file di origine in cui si è verificato l'asserzione o il rapporto o **NULL**.

*moduleName*<br/>
Puntatore al nome del modulo (.exe o .dll) in cui si è verificata l'asserzione o il rapporto.

*format*<br/>
Puntatore alla stringa di controllo del formato usata per creare il messaggio utente.

*argomento*<br/>
Argomenti di sostituzione facoltativi usati da *formato*.

## <a name="return-value"></a>Valore restituito

Per tutte le destinazioni del rapporto, **CrtDbgReport** e **CrtDbgReportW** restituiscono -1 se si verifica un errore e 0 se non si verificano errori. Tuttavia, quando la destinazione del report è una finestra di messaggio di debug e l'utente fa clic sul pulsante **Riprova**, queste funzioni restituiscono 1. Se l'utente fa clic sul pulsante **Interrompi** nella finestra di messaggio di debug, queste funzioni vengono interrotte immediatamente e non restituiscono nessun valore.

Il [macro rpt, rptf](rpt-rptf-rptw-rptfw-macros.md) eseguire il debug di chiamata di macro **CrtDbgReport** per il debug di generare report. Le versioni a caratteri wide di queste macro, nonché [macro Assert, ASSERTE](assert-asserte-assert-expr-macros.md), [rptw](rpt-rptf-rptw-rptfw-macros.md) e [rptfw](rpt-rptf-rptw-rptfw-macros.md), utilizzare **CrtDbgReportW** a generare i report di debug. Quando **CrtDbgReport** oppure **CrtDbgReportW** restituiscono 1, queste macro avviano il debugger fornito il cui debug just-in-time (JIT) è abilitato.

## <a name="remarks"></a>Note

**CrtDbgReport** e **CrtDbgReportW** può inviare il report di debug a tre destinazioni diverse: un file di report di debug, un monitor di debug (il debugger di Visual Studio) o una finestra di messaggio di debug. Vengono usate due funzioni di configurazione, [_CrtSetReportMode](crtsetreportmode.md) e [_CrtSetReportFile](crtsetreportfile.md), per specificare la destinazione o le destinazioni per ogni tipo di report. Queste funzioni consentono alle destinazioni per la creazione dei rapporti per ogni tipo di rapporto di essere controllate separatamente. Ad esempio, è possibile specificare che un *reportType* dei **CRT_WARN** solo essere inviato al monitor di debug, mentre un *reportType* di **CRT_ASSERT** essere inviati a una finestra di messaggio di debug e un file di rapporto definito dall'utente.

**CrtDbgReportW** è la versione a caratteri wide di **CrtDbgReport**. Tutti gli output e i parametri di stringa sono espressi in stringhe a caratteri wide, per il resto è identico alla versione a un byte.

**CrtDbgReport** e **CrtDbgReportW** creare il messaggio utente per il report di debug, sostituendo il *argomento*[**n**] gli argomenti in di *formato* stringa, usando le stesse regole definite per il **printf** oppure **wprintf** funzioni. Queste funzioni, quindi generano il report di debug e determinano la destinazione o destinazioni, in base alle modalità rapporto correnti e sul file definiti per *reportType*. Quando il report viene inviato a una finestra di messaggio di debug, il *nomefile*, **lineNumber**, e *moduleName* sono inclusi nelle informazioni visualizzate nella finestra.

La tabella seguente elenca le scelte disponibili per la modalità di report e file e il comportamento risultante di **CrtDbgReport** e **CrtDbgReportW**. Queste opzioni sono definite come flag di bit in \<crtdbg.h>.

|Modalità rapporto|File di rapporto|**CrtDbgReport**, **CrtDbgReportW** comportamento|
|-----------------|-----------------|------------------------------------------------|
|**_CRTDBG_MODE_DEBUG**|Non applicabile|Scrive un messaggio tramite l'API [OutputDebugString](http://msdn.microsoft.com/library/windows/desktop/aa363362.aspx) di Windows.|
|**_CRTDBG_MODE_WNDW**|Non applicabile|Esegue una chiamata all'API[MessageBox](http://msdn.microsoft.com/library/windows/desktop/ms645505) di Windows per creare la finestra in cui visualizzare il messaggio nonché i pulsanti **Interrompi**, **Riprova** e **Ignora**. Se un utente sceglie **Abort**, **CrtDbgReport** oppure **CrtDbgReport** viene immediatamente interrotto. Se un utente fa clic su **Riprova**, viene restituito 1. Se un utente sceglie **Ignore**, l'esecuzione continua e **CrtDbgReport** e **CrtDbgReportW** restituiscono 0. Si noti che quando si fa clic su **Ignora** in presenza di una condizione di errore, spesso si determina un "comportamento indefinito".|
|**_CRTDBG_MODE_FILE**|**__HFILE**|Scrive un messaggio a fornito dall'utente **GESTISCONO**, utilizzando il Windows [WriteFile](/windows/desktop/api/fileapi/nf-fileapi-writefile) API e non verifica la validità dell'handle di file; l'applicazione è responsabile dell'apertura del file di report e il passaggio di un file valido handle.|
|**_CRTDBG_MODE_FILE**|**_CRTDBG_FILE_STDERR**|Scrive un messaggio a **stderr**.|
|**_CRTDBG_MODE_FILE**|**_CRTDBG_FILE_STDOUT**|Scrive un messaggio a **stdout**.|

Il rapporto può essere inviato a una, due o tre destinazioni o a nessuna destinazione. Per altre informazioni su come specificare le modalità report e il file del report, vedere le funzioni [_CrtSetReportMode](crtsetreportmode.md) e [_CrtSetReportFile](crtsetreportfile.md). Per altre informazioni sull'uso delle macro di debug e delle funzioni per la creazione di report, vedere [Macros for Reporting](/visualstudio/debugger/macros-for-reporting) (Macro per la creazione di report).

Se l'applicazione richiede una maggiore flessibilità rispetto a quelle fornite da **CrtDbgReport** e **CrtDbgReportW**, è possibile scrivere una funzione di creazione report e agganciarla nella libreria run-time di C reporting meccanismo mediante il [CrtSetReportHook](crtsetreporthook.md) (funzione).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtDbgReport**|\<crtdbg.h>|
|**_CrtDbgReportW**|\<crtdbg.h>|

**CrtDbgReport** e **CrtDbgReportW** sono estensioni Microsoft. Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_CrtSetReportMode](crtsetreportmode.md)<br/>
[_CrtSetReportFile](crtsetreportfile.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[_DEBUG](../../c-runtime-library/debug.md)<br/>
