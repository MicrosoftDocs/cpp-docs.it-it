---
title: _access_s, _waccess_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _access_s
- _waccess_s
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- waccess_s
- access_s
- _waccess_s
- _access_s
dev_langs:
- C++
helpviewer_keywords:
- access_s function
- taccess_s function
- _taccess_s function
- waccess_s function
- _access_s function
- _waccess_s function
ms.assetid: fb3004fc-dcd3-4569-8b27-d817546e947e
caps.latest.revision: 28
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 051c2e6a6b0315e2ca4ab3192f28a370d969ec5b
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="accesss-waccesss"></a>_access_s, _waccess_s
Determina le autorizzazioni di lettura/scrittura dei file. Questa è una versione di [_access, _waccess](../../c-runtime-library/reference/access-waccess.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `path`  
 Percorso di file o directory.  
  
 `mode`  
 Impostazione di autorizzazione.  
  
## <a name="return-value"></a>Valore restituito  
 Ogni funzione restituisce 0 se il file ha la modalità specificata. La funzione restituisce un codice di errore se il file specificato non esiste o non è accessibile nella modalità specificata. In questo caso, la funzione restituisce un codice di errore dal set come indicato di seguito e inoltre imposta `errno` sullo stesso valore.  
  
 `EACCES`  
 Accesso negato. L'impostazione di autorizzazione del file non consente l'accesso specificato.  
  
 `ENOENT`  
 Nome file o percorso non trovato.  
  
 `EINVAL`  
 Parametro non valido.  
  
 Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Se usata con i file, la funzione `_access_s` determina se il file specificato esiste ed è possibile accedervi come specificato dal valore di `mode`. Se usata con le directory, `_access_s` determina solo se la directory specificata esiste. In [!INCLUDE[Win2kFamily](../../c-runtime-library/includes/win2kfamily_md.md)] e nei sistemi operativi successivi tutte le directory hanno accesso di lettura e scrittura.  
  
|valore di mode|Controllo nel file|  
|----------------|---------------------|  
|00|Solo esistenza.|  
|02|Autorizzazione di scrittura.|  
|04|Autorizzazione di lettura.|  
|06|Autorizzazione di lettura e scrittura.|  
  
 L'autorizzazione per la lettura o la scrittura del file non è sufficiente per garantire la possibilità di aprire un file. Ad esempio, se un file è bloccato da un altro processo, potrebbe non essere accessibile anche se `_access_s` restituisce 0.  
  
 `_waccess_s` è una versione a caratteri wide di `_access_s`, dove l'argomento `path` per `_waccess_s` è una stringa di caratteri wide. In caso contrario, `_waccess_s` e `_access_s` si comportano in modo identico.  
  
 Queste funzioni convalidano i relativi parametri. Se `path` è `NULL` oppure `mode` non specifica una modalità valida, viene richiamato il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_taccess_s`|`_access_s`|`_access_s`|`_waccess_s`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_access_s`|\<io.h>|\<errno.h>|  
|`_waccess_s`|\<wchar.h> o \<io.h>|\<errno.h>|  
  
## <a name="example"></a>Esempio  
 Questo esempio usa `_access_s` per controllare il file denominato crt_access_s.c e verificare se esiste e se la scrittura è consentita.  
  
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
  
```Output  
File crt_access_s.c exists.  
File crt_access_s.c does not have write permission.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [_access, _waccess](../../c-runtime-library/reference/access-waccess.md)   
 [_chmod, _wchmod](../../c-runtime-library/reference/chmod-wchmod.md)   
 [_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [Funzioni _stat, _wstat](../../c-runtime-library/reference/stat-functions.md)
