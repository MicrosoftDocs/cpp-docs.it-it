---
title: _access, _waccess | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _access
- _waccess
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
- _waccess
- _access
- taccess
- waccess
- _taccess
dev_langs: C++
helpviewer_keywords:
- access function
- _taccess function
- waccess function
- _access function
- _waccess function
- taccess function
ms.assetid: ba34f745-85c3-49e5-a7d4-3590bd249dd3
caps.latest.revision: "27"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5c4d8c6d8caae8b36f372ce75b4fc91638f9e78e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="access-waccess"></a>_access, _waccess
Determina se un file è di sola lettura o meno. Sono disponibili versioni più sicure. Vedere [_access_s, _waccess_s](../../c-runtime-library/reference/access-s-waccess-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `path`  
 Percorso di file o directory.  
  
 `mode`  
 Attributo di lettura/scrittura.  
  
## <a name="return-value"></a>Valore restituito  
 Ogni funzione restituisce 0 se il file ha la modalità specificata. La funzione restituisce -1 se il file specificato non esiste o non dispone di una determinata modalità; In questo caso, `errno` è impostato come illustrato nella tabella seguente.  
  
 `EACCES`  
 Accesso non consentito: l'impostazione di autorizzazione del file non consente l'accesso specificato.  
  
 `ENOENT`  
 Nome file o percorso non trovato.  
  
 `EINVAL`  
 Parametro non valido.  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Se usata con i file, la funzione `_access` determina se il file o la directory specificata esiste e ha gli attributi specificati dal valore di `mode`. Se usata con le directory, `_access` determina solo se la directory specificata esiste. In [!INCLUDE[Win2kFamily](../../c-runtime-library/includes/win2kfamily_md.md)] e nei sistemi operativi successivi, tutte le directory hanno accesso di lettura e scrittura.  
  
|Valore di `mode`|Controllo nel file|  
|------------------|---------------------|  
|00|Solo esistenza|  
|02|Sola scrittura|  
|04|Sola lettura|  
|06|Lettura e scrittura|  
  
 Questa funzione verifica solo se il file e la directory sono di sola lettura o meno e non controlla le impostazioni di sicurezza del file system. A tale scopo è necessario un token di accesso. Per altre informazioni sula sicurezza del file system, vedere [Access Tokens](http://msdn.microsoft.com/library/windows/desktop/aa374909) (Token di accesso). È disponibile una classe ATL per offrire questa funzionalità. Vedere [Classe CAccessToken](../../atl/reference/caccesstoken-class.md).  
  
 `_waccess` è una versione a caratteri wide di `_access`; l'argomento `path` in `_waccess` è una stringa di caratteri wide. In caso contrario, `_waccess` e `_access` si comportano in modo identico.  
  
 Questa funzione convalida i relativi parametri. Se `path` è `NULL` oppure `mode` non specifica una modalità valida, viene richiamato il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, la funzione imposta `errno` su `EINVAL` e restituisce -1.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_taccess`|`_access`|`_access`|`_waccess`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|---------------------|----------------------|  
|`_access`|\<io.h>|\<errno.h>|  
|`_waccess`|\<wchar.h> o \<io.h>|\<errno.h>|  
  
## <a name="example"></a>Esempio  
 L'esempio seguente usa `_access` per controllare il file denominato crt_ACCESS.C e verificare se esiste e se la scrittura è consentita.  
  
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
  
```Output  
File crt_ACCESS.C exists.  
File crt_ACCESS.C does not have write permission.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [_chmod, _wchmod](../../c-runtime-library/reference/chmod-wchmod.md)   
 [_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](../../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [Funzioni _stat, _wstat](../../c-runtime-library/reference/stat-functions.md)