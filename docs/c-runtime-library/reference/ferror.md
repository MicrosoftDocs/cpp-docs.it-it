---
title: "ferror | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "ferror"
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
  - "ferror"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "errori [C++], verifica del flusso"
  - "ferror (funzione)"
  - "flussi, verifica di errori"
ms.assetid: 528a34bc-f2aa-4c3f-b89a-5b148e6864f7
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# ferror
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Test per un errore in un flusso.  
  
## Sintassi  
  
```  
int ferror(   
   FILE *stream   
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 Se nessun errore si è verificato in `stream`, `ferror` restituisce 0.  In caso contrario, restituisce un valore diverso da zero.  Se il flusso è `NULL`, `ferror` invoca il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` a `EINVAL` e restituisce 0 .  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici di errore.  
  
## Note  
 La routine `ferror` \(implementata come funzione che come macro\) esegue un test per un errore di lettura o scrittura nel file associati a `stream`.  Se si è verificato un errore, il contrassegno di errore per il flusso rimane impostato fino alla chiusura o azzeramento del flusso, oppure finché viene chiamato `clearerr`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`ferror`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [feof](../../c-runtime-library/reference/feof.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Gestione degli errori](../../c-runtime-library/error-handling-crt.md)   
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [clearerr](../../c-runtime-library/reference/clearerr.md)   
 [\_eof](../../c-runtime-library/reference/eof.md)   
 [feof](../../c-runtime-library/reference/feof.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [perror, \_wperror](../../c-runtime-library/reference/perror-wperror.md)