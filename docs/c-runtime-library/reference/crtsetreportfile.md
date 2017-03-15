---
title: _CrtSetReportFile | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 2e97bccf3c9fec12b0856e48aaed53f5c8d84b6a
ms.lasthandoff: 02/24/2017

---
# <a name="crtsetreportfile"></a>_CrtSetReportFile
Dopo aver usato [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) per specificare `_CRTDBG_MODE_FILE`, è possibile specificare l'handle di file per ricevere il testo del messaggio. `_CrtSetReportFile` viene anche usato da [_CrtDbgReport, _CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) per specificare la destinazione del testo (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
_HFILE _CrtSetReportFile(   
   int reportType,  
   _HFILE reportFile   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `reportType`  
 Tipo di segnalazione: `_CRT_WARN`, `_CRT_ERROR` e `_CRT_ASSERT`.  
  
 `reportFile`  
 Nuovo file di report per `reportType`.  
  
## <a name="return-value"></a>Valore restituito  
 Al termine, `_CrtSetReportFile` restituisce il precedente file di report definito per il tipo di report specificato in `reportType`. Se viene passato un valore non valido per `reportType`, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `_CRTDBG_HFILE_ERROR`. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 `_CrtSetReportFile` viene usato con la funzione [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) per definire la destinazione o le destinazioni per un tipo specifico di report generati da `_CrtDbgReport`. Se è stato chiamato `_CrtSetReportMode` per assegnare la modalità di creazione di report `_CRTDBG_MODE_FILE` per un tipo di report specifico, deve essere chiamato `_CrtSetReportFile` per definire il flusso da usare come destinazione o il file specifico. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetReportFile` vengono rimosse durante la pre-elaborazione.  
  
 La tabella seguente illustra un elenco di scelte disponibili per `reportFile` e il comportamento risultante di `_CrtDbgReport`. Queste opzioni sono definite flag di bit in Crtdbg.h.  
  
 `file handle`  
 Handle di file che sarà la destinazione dei messaggi. Non è stato eseguito nessun tentativo per verificare la validità dell'handle. È necessario aprire e chiudere l'handle del file. Ad esempio:  
  
```  
HANDLE hLogFile;  
hLogFile = CreateFile("c:\\log.txt", GENERIC_WRITE,   
   FILE_SHARE_WRITE, NULL, CREATE_ALWAYS,   
   FILE_ATTRIBUTE_NORMAL, NULL);  
_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);  
_CrtSetReportFile(_CRT_WARN, hLogFile);  
  
_RPT0(_CRT_WARN,"file message\n");  
CloseHandle(hLogFile);  
```  
  
 `_CRTDBG_FILE_STDERR`  
 Scrive un messaggio a `stderr`, che può essere reindirizzato nel modo seguente:  
  
```  
freopen( "c:\\log2.txt", "w", stderr);  
_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);  
_CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);  
  
_RPT0(_CRT_ERROR,"1st message\n");  
```  
  
 `_CRTDBG_FILE_STDOUT`  
 Scrive un messaggio a `stdout`, che è possibile reindirizzare.  
  
 `_CRTDBG_REPORT_FILE`  
 Restituisce la modalità di report corrente.  
  
 Il file di report usato da ogni tipo di report può essere controllato separatamente. Ad esempio, è possibile specificare che un `reportType` di `_CRT_ERROR` sia trasmesso a `stderr`, mentre un `reportType` di `_CRT_ASSERT` sia trasmesso a un handle di file definito dall'utente o a un flusso.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_CrtSetReportFile`|\<crtdbg.h>|\<errno.h>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Gli handle del flusso standard associati alla console, `stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter usare le funzioni di runtime del linguaggio C nelle app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)]. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
 **Librerie:** solo le versioni di debug delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)
