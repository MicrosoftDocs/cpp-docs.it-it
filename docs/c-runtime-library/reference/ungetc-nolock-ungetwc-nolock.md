---
title: "_ungetc_nolock, _ungetwc_nolock | Microsoft Docs"
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
  - "_ungetwc_nolock"
  - "_ungetc_nolock"
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
  - "_ungettc_nolock"
  - "ungetwc_nolock"
  - "ungetc_nolock"
  - "_ungetc_nolock"
  - "_ungetwc_nolock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ungetc_nolock (funzione)"
  - "_ungettc_nolock (funzione)"
  - "_ungetwc_nolock (funzione)"
  - "caratteri, push back nel flusso"
  - "ungetc_nolock (funzione)"
  - "ungettc_nolock (funzione)"
  - "ungetwc_nolock (funzione)"
ms.assetid: aa02d5c2-1be1-46d2-a8c4-b61269e9d465
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ungetc_nolock, _ungetwc_nolock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Reinserisce un carattere nel flusso.  
  
## Sintassi  
  
```  
int _ungetc_nolock(  
   int c,  
   FILE *stream   
);  
wint_t _ungetwc_nolock(  
   wint_t c,  
   FILE *stream   
);  
```  
  
#### Parametri  
 `c`  
 Carattere da inserire.  
  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 Se eseguita correttamente, ognuna di queste funzioni restituisce l'argomento `c`*.* Se `c` non può essere reinserito oppure se non è stato letto nessun carattere, il flusso di input è invariato e `_ungetc_nolock` restituisce `EOF`; `_ungetwc_nolock` restituisce `WEOF`.  Se `stream` è `NULL`, `EOF` o `WEOF` viene restituito ed `errno` è impostato su `EINVAL`.  
  
 Per ulteriori informazioni su questi, e altri, codici di errore vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .  
  
## Note  
 Queste funzioni sono rispettivamente versioni non bloccanti di `ungetc` e `ungetwc`.  Le versioni con il suffisso `_nolock` sono identiche ma non sono protette da interferenze da parte di altri thread.  Potrebbero essere più veloci poiché non comportano un sovraccarico che blocca le altre thread.  Utilizzare queste funzioni solo in contesti thread\-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ungettc_nolock`|`_ungetc_nolock`|`_ungetc_nolock`|`_ungetwc_nolock`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ungetc_nolock`|\<stdio.h\>|  
|`_ungetwc_nolock`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)   
 [putc, putwc](../../c-runtime-library/reference/putc-putwc.md)