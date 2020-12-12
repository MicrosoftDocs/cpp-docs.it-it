---
description: 'Altre informazioni su: _CrtSetReportFile'
title: _CrtSetReportFile
ms.date: 11/04/2016
api_name:
- _CrtSetReportFile
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
- CrtSetReportFile
- _CrtSetReportFile
helpviewer_keywords:
- CrtSetReportFile function
- _CrtSetReportFile function
ms.assetid: 3126537e-511b-44af-9c1c-0605265eabc4
ms.openlocfilehash: 6b22a76a1a168239210a9f2b93d5cf17d073ec51
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97206955"
---
# <a name="_crtsetreportfile"></a>_CrtSetReportFile

Dopo aver utilizzato [_CrtSetReportMode](crtsetreportmode.md) per specificare **_CRTDBG_MODE_FILE**, è possibile specificare l'handle di file per ricevere il testo del messaggio. **_CrtSetReportFile** viene usato anche da [_CrtDbgReport, _CrtDbgReportW](crtdbgreport-crtdbgreportw.md) per specificare la destinazione del testo (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
_HFILE _CrtSetReportFile(
   int reportType,
   _HFILE reportFile
);
```

### <a name="parameters"></a>Parametri

*reportType*<br/>
Tipo di report: **_CRT_WARN**, **_CRT_ERROR** e **_CRT_ASSERT**.

*reportFile*<br/>
Nuovo file di report per *reportType*.

## <a name="return-value"></a>Valore restituito

Al completamento, **_CrtSetReportFile** restituisce il file di report precedente definito per il tipo di report specificato in *reportType*. Se viene passato un valore non valido per *reportType*, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **_CRTDBG_HFILE_ERROR**. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

**_CrtSetReportFile** viene utilizzato con la funzione [_CrtSetReportMode](crtsetreportmode.md) per definire la destinazione o le destinazioni per un tipo di report specifico generato da **_CrtDbgReport**. Quando **_CrtSetReportMode** viene chiamato per assegnare la modalità di segnalazione **_CRTDBG_MODE_FILE** per un tipo di report specifico, è necessario chiamare **_CrtSetReportFile** per definire il file o il flusso specifico da utilizzare come destinazione. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtSetReportFile** vengono rimosse durante la pre-elaborazione.

Nell'elenco seguente vengono illustrate le scelte disponibili per *reportFile* e il comportamento risultante di **_CrtDbgReport**. Queste opzioni sono definite flag di bit in Crtdbg.h.

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

   Scrive il messaggio in **stderr**, che può essere reindirizzato come indicato di seguito:

   ```C
   freopen( "c:\\log2.txt", "w", stderr);
   _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
   _CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);

   _RPT0(_CRT_ERROR,"1st message\n");
   ```

- **_CRTDBG_FILE_STDOUT**

   Scrive il messaggio in **stdout**, che è possibile reindirizzare.

- **_CRTDBG_REPORT_FILE**

   Restituisce la modalità di report corrente.

Il file di report usato da ogni tipo di report può essere controllato separatamente. Ad esempio, è possibile specificare che un *reportType* di **_CRT_ERROR** essere segnalato a **stderr**, mentre un *reportType* di **_CRT_ASSERT** essere segnalato a un flusso o a un handle di file definito dall'utente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_CrtSetReportFile**|\<crtdbg.h>|\<errno.h>|

La console non è supportata nelle app piattaforma UWP (Universal Windows Platform) (UWP). Gli handle del flusso standard associati alla console, **stdin**, **stdout** e **stderr** devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano usarle nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

**Librerie:** solo le versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedi anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
