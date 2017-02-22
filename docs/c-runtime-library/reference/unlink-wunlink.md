---
title: "_unlink, _wunlink | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_unlink"
  - "_wunlink"
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tunlink"
  - "_unlink"
  - "wunlink"
  - "_wunlink"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_tunlink (funzione)"
  - "_unlink (funzione)"
  - "_wunlink (funzione)"
  - "file [C++], eliminazione"
  - "file [C++], rimozione"
  - "tunlink (funzione)"
  - "unlink (funzione)"
  - "wunlink (funzione)"
ms.assetid: 5e4f5f1b-1e99-4391-9b18-9ac63c32fae8
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _unlink, _wunlink
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Eliminare un file.  
  
## Sintassi  
  
```  
int _unlink(  
   const char *filename   
);  
int _wunlink(  
   const wchar_t *filename   
);  
```  
  
#### Parametri  
 `filename`  
 Nome del file da rimuovere.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce 0 se ha esito positivo.  In caso contrario, la funzione restituisce \-1 ed imposta `errno` a `EACCES`, ovvero il percorso indica un file di sola lettura, o a `ENOENT`, ovvero il file o il percorso non vengono trovati o il percorso specificato è una directory.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici restituiti.  
  
## Note  
 La funzione `_unlink` elimina il file specificato da `filename`.  `_wunlink` è una versione a caratteri estesi di `_unlink`; l'argomento `filename` in `_wunlink` è una stringa di caratteri estesi.  Altrimenti queste funzioni si comportano in modo identico.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tunlink`|`_unlink`|`_unlink`|`_wunlink`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_unlink`|\<io.h\> e stdio.h \<\>|  
|`_wunlink`|\<io.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio di codice  
 Questo programma utilizza \_unlink per eliminare CRT\_UNLINK.TXT.  
  
```  
// crt_unlink.c  
  
#include <stdio.h>  
  
int main( void )  
{  
   if( _unlink( "crt_unlink.txt" ) == -1 )  
      perror( "Could not delete 'CRT_UNLINK.TXT'" );  
   else  
      printf( "Deleted 'CRT_UNLINK.TXT'\n" );  
}  
```  
  
### Input: crt\_unlink.txt  
  
```  
This file will be deleted.  
```  
  
### Esempio di output  
  
```  
Deleted 'CRT_UNLINK.TXT'  
```  
  
## Equivalente .NET Framework  
 [System::IO::File::Delete](https://msdn.microsoft.com/en-us/library/system.io.file.delete.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_close](../../c-runtime-library/reference/close.md)   
 [remove, \_wremove](../../c-runtime-library/reference/remove-wremove.md)