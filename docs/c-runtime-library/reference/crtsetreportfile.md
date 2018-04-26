---
title: _CrtSetReportFile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CrtSetReportFile function
- _CrtSetReportFile function
ms.assetid: 3126537e-511b-44af-9c1c-0605265eabc4
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d4f2c7aeda689e3b941d460c05c0c5be5d69d69d
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="crtsetreportfile"></a>_CrtSetReportFile

Dopo aver utilizzato [CrtSetReportMode](crtsetreportmode.md) per specificare **_CRTDBG_MODE_FILE**, è possibile specificare l'handle di file per ricevere il testo del messaggio. **Crtsetreportfile** viene utilizzato anche dalle [CrtDbgReport, CrtDbgReportW](crtdbgreport-crtdbgreportw.md) per specificare la destinazione di testo (solo versione debug).

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

*Impossibile*<br/>
Nuovo file di report per *reportType*.

## <a name="return-value"></a>Valore restituito

Al termine, **crtsetreportfile** restituisce il precedente file report definito per il tipo di report specificato nel *reportType*. Se viene passato un valore non valido *reportType*, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **_CRTDBG_HFILE_ERROR**. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="remarks"></a>Note

**Crtsetreportfile** viene usato con il [CrtSetReportMode](crtsetreportmode.md) funzione per definire la destinazione o le destinazioni per un tipo di report specifico generato dal **CrtDbgReport**. Quando si **CrtSetReportMode** è stato chiamato per assegnare il **_CRTDBG_MODE_FILE** reporting per un tipo di report specifico, in modalità **crtsetreportfile** devono quindi essere chiamati per definire il file specifico o un flusso da utilizzare come destinazione. Quando si [debug](../../c-runtime-library/debug.md) non è definito, le chiamate a **crtsetreportfile** vengono rimosse durante la pre-elaborazione.

Nell'elenco seguente vengono mostrate le scelte disponibili per *Impossibile* e il comportamento risultante del **CrtDbgReport**. Queste opzioni sono definite flag di bit in Crtdbg.h.

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

Il file di report usato da ogni tipo di report può essere controllato separatamente. Ad esempio, è possibile specificare che una *reportType* dei **CRT_ERROR** vengano segnalate al **stderr**, mentre un *reportType* di **CRT_ASSERT** possibile segnalare a un handle di file definito dall'utente o un flusso.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_CrtSetReportFile**|\<crtdbg.h>|\<errno.h>|

La console non è supportata nelle app di piattaforma UWP (Universal Windows). Gli handle di flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** solo le versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
