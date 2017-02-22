---
title: "perror, _wperror | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wperror"
  - "perror"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_wperror"
  - "_tperror"
  - "perror"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_tperror (funzione)"
  - "_wperror (funzione)"
  - "messaggi di errore, stampa"
  - "perror (funzione)"
  - "stampa di messaggi di errore"
  - "tperror (funzione)"
  - "wperror (funzione)"
ms.assetid: 34fce792-16fd-4673-9849-cd88b54b6cd5
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# perror, _wperror
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Stampa un messaggio di errore.  
  
## Sintassi  
  
```  
  
      void perror(  
   const char *string   
);  
void _wperror(  
   const wchar_t *string   
);  
```  
  
#### Parametri  
 `string`  
 Stringa del messaggio da stampare.  
  
## Note  
 La funzione `perror` stampa un messaggio di errore su `stderr`.  `_wperror` è una versione a caratteri wide di **\_perror**; l'argomento `string` in `_wperror` è una stringa di caratteri estesi.  Altrimenti `_wperror` e **\_perror** si comportano in modo identico.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tperror`|`perror`|`perror`|`_wperror`|  
  
 `string` viene prima stampato, seguito da due punti, dal messaggio di errore di sistema per l'ultima chiamata di libreria che ha generato l'errore e infine da un carattere di nuova riga.  Se `string` è un puntatore null o un puntatore a una stringa null, `perror` stampa solo il messaggio di errore di sistema.  
  
 Il numero dell'errore viene memorizzato nella variabile [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) \(definito in ERRNO.H\).  I messaggi di errore del sistema sono accessibili tramite la variabile [\_sys\_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md), che è una matrice di messaggi ordinata in base al numero di errore.  `perror` stampa il messaggio di errore appropriato utilizzando il valore `errno` come indice a `_sys_errlist`.  Il valore della variabile [\_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è definito come numero massimo di elementi della matrice `_sys_errlist`.  
  
 Per risultati accurati, chiamare `perror` subito dopo il ritorno di un'errore da parte di una routine della libreria.  In caso contrario, le chiamate successive possono sovrascrivere il valore `errno`.  
  
 Nel sistema operativo Windows, alcuni valori di `errno` elencati in ERRNO.H sono inutilizzati.  Questi valori sono riservati per l'utilizzo del sistema operativo UNIX.  Vedere [\_doserrno, errno, \_sys\_errlist e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per un elenco di valori di `errno` utilizzati dal sistema operativo Windows.  `perror` stampa una stringa vuota per qualsiasi valore di `errno` non utilizzato da queste piattaforme.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`perror`|\<stdio.h\> or \<stdlib.h\>|  
|`_wperror`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_perror.c  
// compile with: /W3  
/* This program attempts to open a file named  
 * NOSUCHF.ILE. Because this file probably doesn't exist,  
 * an error message is displayed. The same message is  
 * created using perror, strerror, and _strerror.  
 */  
  
#include <fcntl.h>  
#include <sys/types.h>  
#include <sys/stat.h>  
#include <io.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <string.h>  
#include <share.h>  
  
int main( void )  
{  
   int  fh;  
  
   if( _sopen_s( &fh, "NOSUCHF.ILE", _O_RDONLY, _SH_DENYNO, 0 ) != 0 )  
   {  
      /* Three ways to create error message: */  
      perror( "perror says open failed" );  
      printf( "strerror says open failed: %s\n",  
         strerror( errno ) ); // C4996  
      printf( _strerror( "_strerror says open failed" ) ); // C4996  
      // Note: strerror and _strerror are deprecated; consider  
      // using strerror_s and _strerror_s instead.  
   }  
   else  
   {  
      printf( "open succeeded on input file\n" );  
      _close( fh );  
   }  
}  
```  
  
## Output  
  
```  
perror says open failed: No such file or directory  
strerror says open failed: No such file or directory  
_strerror says open failed: No such file or directory  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [clearerr](../../c-runtime-library/reference/clearerr.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [strerror, \_strerror, \_wcserror, \_\_wcserror](../../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md)