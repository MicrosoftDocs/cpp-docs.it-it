---
title: "_access_s, _waccess_s | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_access_s"
  - "_waccess_s"
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
  - "waccess_s"
  - "access_s"
  - "_waccess_s"
  - "_access_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_access_s (funzione)"
  - "_taccess_s (funzione)"
  - "_waccess_s (funzione)"
  - "access_s (funzione)"
  - "taccess_s (funzione)"
  - "waccess_s (funzione)"
ms.assetid: fb3004fc-dcd3-4569-8b27-d817546e947e
caps.latest.revision: 28
caps.handback.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _access_s, _waccess_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina le autorizzazioni di lettura\/scrittura del file.  Si tratta di una versione di [\_access, \_waccess](../../c-runtime-library/reference/access-waccess.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _access_s(   
   const char *path,   
   int mode   
);  
errno_t _waccess_s(   
   const wchar_t *path,   
   int mode   
);  
```  
  
#### Parametri  
 `path`  
 Un file o un percorso di directory.  
  
 `mode`  
 Impostazione di autorizzazione.  
  
## Valore restituito  
 Ogni funzione restituisce 0 se il file presenta la modalità specificata.  La funzione restituisce un codice di errore se il file denominato non esiste o non è accessibile in modalità specificata.  In questo caso, la funzione restituisce un codice di errore dal set di seguito e imposta inoltre `errno` allo stesso valore.  
  
 `EACCES`  
 Accesso negato.  L'impostazione dell'autorizzazione del file non consente l'accesso specificato.  
  
 `ENOENT`  
 File o percorso non trovato.  
  
 `EINVAL`  
 Parametro non valido.  
  
 Per ulteriori informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Quando viene utilizzata con i file, la funzione `_access_s` determina se il file specificato esiste ed è possibile accedervi come specificato dal valore di `mode`.  Una volta utilizzato con le directory, `_access_s` determina solo se la directory specificata esiste.  In [!INCLUDE[Win2kFamily](../../c-runtime-library/includes/win2kfamily_md.md)] e sistemi operativi successivi, tutte le directory hanno accesso in lettura e scrittura.  
  
|valore della modalità|Verifica il file per|  
|---------------------------|--------------------------|  
|00|Solo l'esistenza.|  
|02|Autorizzazioni di scrittura.|  
|04|Autorizzazioni di lettura.|  
|06|Autorizzazioni di lettura e scrittura.|  
  
 L'autorizzazione di lettura o di scrittura del file non è sufficiente per garantire la possibilità di aprire un file.  Ad esempio, se un file è bloccato da un altro processo, potrebbe non essere disponibile anche se `_access_s` restituisce 0.  
  
 `_waccess_s` è una versione a caratteri estesi di `_access_s`, dove l'argomento `path` in `_waccess_s` è una stringa di caratteri estesi.  In caso contrario, `_waccess_s` e `_access_s` si comportano in modo identico.  
  
 Queste funzioni convalidano i parametri.  Se `path` è `NULL` o `mode` non specifica la modalità valida, il gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EINVAL` e restituiscono `EINVAL`.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_taccess_s`|`_access_s`|`_access_s`|`_waccess_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_access_s`|\<io.h\>|\<errno.h\>|  
|`_waccess_s`|\<wchar.h\> o \<io.h\>|\<errno.h\>|  
  
## Esempio  
 In questo esempio viene utilizzato `_access_s` per controllare il file denominato crt\_access\_s.c per verificare se esiste e se è consentita la scrittura.  
  
```  
// crt_access_s.c  
  
#include <io.h>  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
    errno_t err = 0;  
  
    // Check for existence.   
    if ((err = _access_s( "crt_access_s.c", 0 )) == 0 )  
    {  
        printf_s( "File crt_access_s.c exists.\n" );  
  
        // Check for write permission.   
        if ((err = _access_s( "crt_access_s.c", 2 )) == 0 )  
        {  
            printf_s( "File crt_access_s.c does have "  
                      "write permission.\n" );  
        }  
        else  
        {  
            printf_s( "File crt_access_s.c does not have "  
                      "write permission.\n" );  
        }  
    }  
    else  
    {  
        printf_s( "File crt_access_s.c does not exist.\n" );  
    }  
}  
```  
  
  **Il file crt\_access\_s.c esiste.**  
**Il file crt\_access\_s.c non dispone delle autorizzazioni di scrittura.**   
## Equivalente .NET Framework  
 <xref:System.IO.FileAccess?displayProperty=fullName>  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_access, \_waccess](../../c-runtime-library/reference/access-waccess.md)   
 [\_chmod, \_wchmod](../../c-runtime-library/reference/chmod-wchmod.md)   
 [\_fstat, \_fstat32, \_fstat64, \_fstati64, \_fstat32i64, \_fstat64i32](../../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)   
 [Funzioni \_stat, \_wstat](../../c-runtime-library/reference/stat-functions.md)