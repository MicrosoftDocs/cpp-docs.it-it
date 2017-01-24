---
title: "_pclose | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_pclose"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_pclose"
  - "pclose"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_pclose (funzione)"
  - "pclose (funzione)"
  - "pipe, chiusura"
ms.assetid: e2e31a9e-ba3a-4124-bcbb-c4040110b3d3
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _pclose
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Attende un nuovo processore dei comandi e chiude il flusso su una pipe associata.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
  
      int _pclose(  
FILE *stream   
);  
```  
  
#### Parametri  
 `stream`  
 Restituisce un valore da la precedente chiamata a `_popen`.  
  
## Valore restituito  
 Restituisce lo stato di uscita del processore dei comandi di terminazione, oppure –1 se si verifica un errore.  Il formato del valore restituito sarà lo stesso di quello per `_cwait`, ad eccezione del fatto che i byte meno significativi vengono scambiati con i byte più significativi.  Se il flusso è **NULL**, `_pclose` imposta `errno` su `EINVAL` e restituisce \-1.  
  
 Per ulteriori informazioni su questi e altri codici, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_pclose` ricerca l'ID del processo del processore dei comandi \(Cmd.exe\) avviato dalla chiamata collegata a `_popen`, esegue una chiamata a [\_cwait](../../c-runtime-library/reference/cwait.md) sul nuovo processore dei comandi e chiude il flusso sulla pipe associata.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_pclose`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [\_pipe](../../c-runtime-library/reference/pipe.md)   
 [\_popen, \_wpopen](../../c-runtime-library/reference/popen-wpopen.md)