---
title: "_CrtSetReportFile | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtSetReportFile"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "CrtSetReportFile"
  - "_CrtSetReportFile"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CrtSetReportFile (funzione)"
  - "_CrtSetReportFile (funzione)"
ms.assetid: 3126537e-511b-44af-9c1c-0605265eabc4
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CrtSetReportFile
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Dopo avere utilizzato [\_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) per specificare `_CRTDBG_MODE_FILE`, è possibile specificare un gestore di file per ricevere il testo del messaggio.  `_CrtSetReportFile` viene anche utilizzato da [\_CrtDbgReport, \_CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) per specificare la destinazione del testo \(versione di debug solo\).  
  
## Sintassi  
  
```  
_HFILE _CrtSetReportFile(   
   int reportType,  
   _HFILE reportFile   
);  
```  
  
#### Parametri  
 `reportType`  
 Tipo di rapporto: `_CRT_WARN`, `_CRT_ERROR` e `_CRT_ASSERT`.  
  
 `reportFile`  
 Nuovo file di report per `reportType`.  
  
## Valore restituito  
 Al termine, `_CrtSetReportFile` restituisce il file di report precedente definito per il tipo di rapporto specificato in `reportType`.  Se un valore non valido viene passato in `reportType`, questa funzione chiama il gestore non valido di parametro, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `_CRTDBG_HFILE_ERROR`.  Per ulteriori informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 `_CrtSetReportFile` è utilizzato con la funzione [\_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) per definire la destinazione o le destinazioni per un tipo di report specifico generato da `_CrtDbgReport`.  Quando `_CrtSetReportMode` viene chiamato per assegnare il modo di rapporto `_CRTDBG_MODE_FILE` per un tipo specifico di report, `_CrtSetReportFile` deve quindi essere chiamato per definire il file o il flusso specifico da utilizzare come destinazione.  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetReportFile` vengono rimosse durante la pre\-elaborazione.  
  
 Nella tabella seguente sono elencate le opzioni disponibili per `reportFile` e il comportamento risultante di `_CrtDbgReport`.  Queste opzioni sono definite come flag di bit in Crtdbg.h.  
  
 `file handle`  
 Un punto di controllo del file che sarà la destinazione dei messaggi.  Non viene eseguito alcun tentativo di verificare la validità del punto di controllo.  È necessario aprire e chiudere il punto di controllo del file.  Ad esempio:  
  
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
 Scrive il messaggio a `stderr`, che può essere reindirizzato come segue:  
  
```  
freopen( "c:\\log2.txt", "w", stderr);  
_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);  
_CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);  
  
_RPT0(_CRT_ERROR,"1st message\n");  
```  
  
 `_CRTDBG_FILE_STDOUT`  
 Scrive il messaggio a `stdout`, che è possibile reindirizzare.  
  
 `_CRTDBG_REPORT_FILE`  
 Restituisce la modalità di report corrente.  
  
 Il file di report utilizzato da ogni tipo di rapporto può essere controllato separatamente.  Ad esempio, è possibile specificare che un `reportType` di `_CRT_ERROR` venga restituito a `stderr`, mentre un `reportType` di `_CRT_ASSERT` venga riportato al punto di controllo del file o al flusso definiti dall'utente.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_CrtSetReportFile`|\<crtdbg.h\>|\<errno.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni di compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
 **Librerie:** Versioni di debug solo di [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)