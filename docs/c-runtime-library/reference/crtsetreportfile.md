---
title: _CrtSetReportFile
ms.date: 11/04/2016
apiname:
- _CrtSetReportFile
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
- CrtSetReportFile
- _CrtSetReportFile
helpviewer_keywords:
- CrtSetReportFile function
- _CrtSetReportFile function
ms.assetid: 3126537e-511b-44af-9c1c-0605265eabc4
ms.openlocfilehash: 32a560e09c47468daf48c185e23d6e289c6d1d9b
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64343013"
---
# <a name="crtsetreportfile"></a>_CrtSetReportFile

Dopo aver usato [CrtSetReportMode](crtsetreportmode.md) per specificare **_CRTDBG_MODE_FILE**, è possibile specificare l'handle di file per ricevere il testo del messaggio. **Crtsetreportfile** viene usata anche dal [CrtDbgReport, CrtDbgReportW](crtdbgreport-crtdbgreportw.md) per specificare la destinazione del testo (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
_HFILE _CrtSetReportFile(
   int reportType,
   _HFILE reportFile
);
```

### <a name="parameters"></a>Parametri

*reportType*<br/>
Tipo di report: **CRT_WARN**, **CRT_ERROR**, e **CRT_ASSERT**.

*reportFile*<br/>
Nuovo file di report per *reportType*.

## <a name="return-value"></a>Valore restituito

Al termine, **crtsetreportfile** restituisce il file di report precedente definito per il tipo di report specificato in *reportType*. Se viene passato un valore non valido per *reportType*, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **_CRTDBG_HFILE_ERROR**. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="remarks"></a>Note

**Crtsetreportfile** viene usato con il [CrtSetReportMode](crtsetreportmode.md) funzione per definire la destinazione o destinazioni per un tipo specifico di report generato da **CrtDbgReport**. Quando **CrtSetReportMode** è stato chiamato per assegnare le **_CRTDBG_MODE_FILE** modalità per un tipo specifico di report, reporting **crtsetreportfile** deve essere chiamato da definire il file specifico o un flusso da usare come destinazione. Quando [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **crtsetreportfile** vengono rimosse durante la pre-elaborazione.

L'elenco seguente mostra le scelte disponibili per *Impossibile* e il comportamento risultante di **CrtDbgReport**. Queste opzioni sono definite flag di bit in Crtdbg.h.

- **handle di file**

   Handle di file che sarà la destinazione dei messaggi. Non è stato eseguito nessun tentativo per verificare la validità dell'handle. È necessario aprire e chiudere l'handle del file. Ad esempio:

   ```C
   HANDLE hLogFile;
   hLogFile = CreateFile("c:\\log.txt", GENERIC_WRITE,
      FILE_SHARE_WRITE, NULL, CREATE_ALWAYS,
      FILE_ATTRIBUTE_NORMAL, NULL);
   _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
   _CrtSetReportFile(_CRT_WARN, hLogFile);

   _RPT0(_CRT_WARN,"file message\n");
   CloseHandle(hLogFile);
   ```

- **_CRTDBG_FILE_STDERR**

   Scrive un messaggio a **stderr**, che può essere reindirizzato nel modo seguente:

   ```C
   freopen( "c:\\log2.txt", "w", stderr);
   _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
   _CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);

   _RPT0(_CRT_ERROR,"1st message\n");
   ```

- **_CRTDBG_FILE_STDOUT**

   Scrive un messaggio a **stdout**, che è possibile reindirizzare.

- **_CRTDBG_REPORT_FILE**

   Restituisce la modalità di report corrente.

Il file di report usato da ogni tipo di report può essere controllato separatamente. Ad esempio, è possibile specificare che un *reportType* dei **CRT_ERROR** quindi segnalati al **stderr**, mentre un *reportType* di **CRT_ASSERT** segnalati per un handle di file definito dall'utente o un flusso.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_CrtSetReportFile**|\<crtdbg.h>|\<errno.h>|

La console non è supportata nelle App Universal Windows Platform (UWP). L'handle del flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** Le versioni di debug [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md) solo.

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
