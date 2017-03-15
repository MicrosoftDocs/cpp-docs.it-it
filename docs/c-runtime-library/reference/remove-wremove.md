---
title: "remove, _wremove | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wremove"
  - "remove"
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
  - "remove"
  - "_wremove"
  - "_tremove"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_tremove (funzione)"
  - "_wremove (funzione)"
  - "file [C++], eliminazione"
  - "file [C++], rimozione"
  - "remove (funzione)"
  - "tremove (funzione)"
  - "wremove (funzione)"
ms.assetid: b6345ec3-3289-4645-93a4-28b9e478cc19
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# remove, _wremove
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Eliminare un file.  
  
## Sintassi  
  
```  
  
      int remove(  
   const char *path   
);  
int _wremove(  
   const wchar_t *path   
);  
```  
  
#### Parametri  
 *path*  
 Percorso del file da rimuovere.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce 0 se il file corretto viene eliminato.  In caso contrario, restituisce \-1 e imposta `errno` a `EACCES` per indicare che il percorso specifica un file di sola lettura oppure il file è aperto, o a **ENOENT** per indicare che il nome del file o il percorso non è stato trovato o che il percorso specifica una directory.  
  
 Vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni su questi, e altri, codici restituiti.  
  
## Note  
 La funzione **remove** elimina il file specificato da *path.* `_wremove` è una versione a caratteri estesi di **\_remove**; l'argomento di *path* di `_wremove` è una stringa di caratteri estesi.  In caso contrario, `_wremove` e **\_remove** si comportano in modo identico.  Tutti gli handle in un file devono essere chiusi prima che possano essere eliminati.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tremove`|**remove**|**remove**|`_wremove`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|**remove**|\<stdio.h\> or \<io.h\>|  
|`_wremove`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_remove.c  
/* This program uses remove to delete crt_remove.txt */  
  
#include <stdio.h>  
  
int main( void )  
{  
   if( remove( "crt_remove.txt" ) == -1 )  
      perror( "Could not delete 'CRT_REMOVE.TXT'" );  
   else  
      printf( "Deleted 'CRT_REMOVE.TXT'\n" );  
}  
```  
  
## Input: crt\_remove.txt  
  
```  
This file will be deleted.  
```  
  
## Esempio di output  
  
```  
Deleted 'CRT_REMOVE.TXT'  
```  
  
## Equivalente .NET Framework  
 [System::IO::File::Delete](https://msdn.microsoft.com/en-us/library/system.io.file.delete.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_unlink, \_wunlink](../../c-runtime-library/reference/unlink-wunlink.md)