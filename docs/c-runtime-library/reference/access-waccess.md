---
title: "_access, _waccess | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_access"
  - "_waccess"
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
  - "_waccess"
  - "_access"
  - "taccess"
  - "waccess"
  - "_taccess"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_access (funzione)"
  - "_taccess (funzione)"
  - "_waccess (funzione)"
  - "access (funzione)"
  - "taccess (funzione)"
  - "waccess (funzione)"
ms.assetid: ba34f745-85c3-49e5-a7d4-3590bd249dd3
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 27
---
# _access, _waccess
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un file è in sola lettura o meno.  Sono disponibili le versioni più sicure; consultare [\_access\_s, \_waccess\_s](../../c-runtime-library/reference/access-s-waccess-s.md).  
  
## Sintassi  
  
```  
int _access(   
   const char *path,   
   int mode   
);  
int _waccess(   
   const wchar_t *path,   
   int mode   
);  
```  
  
#### Parametri  
 `path`  
 Un file o un percorso di directory.  
  
 `mode`  
 Attributo lettura \/scrittura.  
  
## Valore restituito  
 Ogni funzione restituisce 0 se il file presenta la modalità specificata.  La funzione restituisce \- 1 se il file denominato non esiste o non è stata specificata la modalità; in questo caso, `errno` è impostato come illustrato nella tabella seguente.  
  
 `EACCES`  
 Accesso negato: l'impostazione di autorizzazione del file non consente l'accesso specificato.  
  
 `ENOENT`  
 File o percorso non trovato.  
  
 `EINVAL`  
 Parametro non valido.  
  
 Per ulteriori informazioni su questi e altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Quando viene utilizzata con i file, la funzione `_access` determina se il file o la directory specificata esiste e dispone degli attributi specificati dal valore di `mode`.  Una volta utilizzato con le directory, `_access` determina solo se la directory specificata esiste; in [!INCLUDE[Win2kFamily](../../c-runtime-library/includes/win2kfamily_md.md)] e sistemi operativi successivi, tutte le directory hanno accesso in scrittura e lettura.  
  
|Valore `mode`|Verifica il file per|  
|-------------------|--------------------------|  
|00|Solo l'esistenza|  
|02|Sola scrittura|  
|04|Sola lettura|  
|06|Lettura e scrittura|  
  
 Questa funzione esamina solo se il file e la directory siano in sola lettura oppure no, non controlla le impostazioni di sicurezza del filesystem.  Per quello è necessario un token di accesso.  Per ulteriori informazioni sulla sicurezza di filesystem, consultare [Token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909).  Esiste una classe ATL per fornire questa funzionalità; consultare [CAccessToken Class](../../atl/reference/caccesstoken-class.md).  
  
 `_waccess` è una versione a caratteri estesi di `_access`; l'argomento `path` in `_waccess` è una stringa di caratteri estesi.  `_waccess` e `_access` si comportano in modo identico in caso contrario.  
  
 Questa funzione convalida i parametri.  Se `path` è `NULL` o `mode` non specifica la modalità valida, il gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` a `EINVAL` e restituisce \-1.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_taccess`|`_access`|`_access`|`_waccess`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`_access`|\<io.h\>|\<errno.h\>|  
|`_waccess`|\<wchar.h\> o \<io.h\>|\<errno.h\>|  
  
## Esempio  
 In questo esempio viene utilizzato `_access` per controllare il file denominato crt\_ACCESS.C per verificare se esiste e se è consentita la scrittura.  
  
```  
// crt_access.c  
// compile with: /W1  
// This example uses _access to check the file named  
// crt_ACCESS.C to see if it exists and if writing is allowed.  
  
#include  <io.h>  
#include  <stdio.h>  
#include  <stdlib.h>  
  
int main( void )  
{  
    // Check for existence.  
    if( (_access( "crt_ACCESS.C", 0 )) != -1 )  
    {  
        printf_s( "File crt_ACCESS.C exists.\n" );  
  
        // Check for write permission.  
        // Assume file is read-only.  
        if( (_access( "crt_ACCESS.C", 2 )) == -1 )  
            printf_s( "File crt_ACCESS.C does not have write permission.\n" );  
    }  
}  
```  
  
  **Il file crt\_ACCESS.C esiste.**  
**Il file crt\_ACCESS.C non dispone delle autorizzazioni di scrittura.**   
## Equivalente .NET Framework  
 <xref:System.IO.FileAccess?displayProperty=fullName>  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_chmod, \_wchmod](../../c-runtime-library/reference/chmod-wchmod.md)   
 [\_fstat, \_fstat32, \_fstat64, \_fstati64, \_fstat32i64, \_fstat64i32](../../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)   
 [Funzioni \_stat, \_wstat](../../c-runtime-library/reference/stat-functions.md)