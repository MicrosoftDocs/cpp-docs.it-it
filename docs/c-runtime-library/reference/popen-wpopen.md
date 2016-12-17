---
title: "_popen, _wpopen | Microsoft Docs"
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
  - "_popen"
  - "_wpopen"
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
  - "tpopen"
  - "popen"
  - "wpopen"
  - "_popen"
  - "_wpopen"
  - "_tpopen"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_popen (funzione)"
  - "_tpopen (funzione)"
  - "_wpopen (funzione)"
  - "pipe, creazione"
  - "popen (funzione)"
  - "tpopen (funzione)"
  - "wpopen (funzione)"
ms.assetid: eb718ff2-c87d-4bd4-bd2e-ba317c3d6973
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _popen, _wpopen
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea una pipe ed esegue un comando.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
  
      FILE *_popen(  
const char *command,  
const char *mode   
);  
FILE *_wpopen(  
const wchar_t *command,  
const wchar_t *mode   
);  
```  
  
#### Parametri  
 *comando*  
 Comando da eseguire.  
  
 *mode*  
 Modalità di restituzione del flusso.  
  
## Valore restituito  
 Restituisce un flusso associato alla fine di una pipe creata.  L'altra estremità della pipe viene associata con l'input o l'output del comando generato.  Le funzioni restituiscono **NULL** su un errore.  Se l'errore è un parametro non valido, ad esempio se il *comando* o la *modalità* è un puntatore null, o la *modalità* non rappresenta un sistema valido, `errno` è impostato su `EINVAL`.  Vedere la sezione relativa alle osservazioni, per le modalità valide.  
  
 Per ulteriori informazioni su questi e altri codici, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_popen` crea una pipe e in modo asincrono viene generata una copia del processore di comando con la specifica stringa *command*.  La stringa di caratteri *modalità* specifica il tipo di accesso richiesto, nel modo seguente.  
  
 **"r"**  
 Il processo chiamante può leggere l'output standard di comando generato utilizzando il flusso restituito.  
  
 **"w"**  
 Il processo chiamante può scrivere nell'input standard di comando generato utilizzando il flusso restituito.  
  
 **"b"**  
 Aprire in modalità binaria.  
  
 **"t"**  
 Aprire in modalità di testo.  
  
> [!NOTE]
>  Se si utilizza in un programma Windows, la funzione `_popen` restituisce un puntatore di file non valido in modo che il programma non risponda all'infinito.  `_popen` funziona correttamente in un'applicazione console.  Per creare un'applicazione Windows che reindirizza l'input e l'output, vedere [Creare un processo figlio con input e output reindirizzati](http://msdn.microsoft.com/library/windows/desktop/ms682499) in [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
 `_wpopen` è una versione a caratteri di tipo "wide" di `_popen`; l'argomento *path* per `_wpopen` è una stringa a caratteri wide.  `_wpopen` e `_popen` si comportano in modo identico in caso contrario.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tpopen`|`_popen`|`_popen`|`_wpopen`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_popen`|\<stdio.h\>|  
|`_wpopen`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_popen.c  
/* This program uses _popen and _pclose to receive a   
 * stream of text from a system process.  
 */  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
  
   char   psBuffer[128];  
   FILE   *pPipe;  
  
        /* Run DIR so that it writes its output to a pipe. Open this  
         * pipe with read text attribute so that we can read it   
         * like a text file.   
         */  
  
   if( (pPipe = _popen( "dir *.c /on /p", "rt" )) == NULL )  
      exit( 1 );  
  
   /* Read pipe until end of file, or an error occurs. */  
  
   while(fgets(psBuffer, 128, pPipe))  
   {  
      printf(psBuffer);  
   }  
  
   /* Close pipe and print return value of pPipe. */  
   if (feof( pPipe))  
   {  
     printf( "\nProcess returned %d\n", _pclose( pPipe ) );  
   }  
   else  
   {  
     printf( "Error: Failed to read the pipe to the end.\n");  
   }  
}  
```  
  
## Esempio di output  
 Questo output presuppone che vi sia un solo file nella directory corrente con l'estensione di file .c.  
  
```  
 Volume in drive C is CDRIVE  
 Volume Serial Number is 0E17-1702  
  
 Directory of D:\proj\console\test1  
  
07/17/98  07:26p                   780 popen.c  
               1 File(s)            780 bytes  
                             86,597,632 bytes free  
  
Process returned 0  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [\_pclose](../../c-runtime-library/reference/pclose.md)   
 [\_pipe](../../c-runtime-library/reference/pipe.md)