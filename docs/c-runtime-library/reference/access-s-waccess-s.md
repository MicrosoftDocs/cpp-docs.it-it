---
title: _access_s, _waccess_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 24c269951eacfc2f7a5d40c8fad1e4fb67cc1d2f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="accesss-waccesss"></a>_access_s, _waccess_s

Determina le autorizzazioni di lettura/scrittura dei file. Questa è una versione di [_access, _waccess](access-waccess.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _access_s(
   const char *path,
   int mode
);
errno_t _waccess_s(
   const wchar_t *path,
   int mode
);
```

### <a name="parameters"></a>Parametri

*path*<br/>
Percorso di file o directory.

*mode*<br/>
Impostazione di autorizzazione.

## <a name="return-value"></a>Valore restituito

Ogni funzione restituisce 0 se il file ha la modalità specificata. La funzione restituisce un codice di errore se il file specificato non esiste o non è accessibile nella modalità specificata. In questo caso, la funzione restituisce un codice di errore dal set come indicato di seguito e imposta inoltre **errno** sullo stesso valore.

|Valore errno|Condizione|
|-|-|
**EACCES**|Accesso negato. L'impostazione di autorizzazione del file non consente l'accesso specificato.
**ENOENT**|Nome file o percorso non trovato.
**EINVAL**|Parametro non valido.

Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Se usato con i file, il **access_s** funzione determina se il file specificato esiste ed è possibile accedervi come specificato dal valore di *modalità*. Se usato con le directory **access_s** determina solo se è presente nella directory specificata. In Windows 2000 e sistemi operativi successivi, tutte le directory di aver letto e accesso in scrittura.

|valore di mode|Controllo nel file|
|----------------|---------------------|
|00|Solo esistenza.|
|02|Autorizzazione di scrittura.|
|04|Autorizzazione di lettura.|
|06|Autorizzazione di lettura e scrittura.|

L'autorizzazione per la lettura o la scrittura del file non è sufficiente per garantire la possibilità di aprire un file. Ad esempio, se un file è bloccato da un altro processo, potrebbe non essere accessibile anche se **access_s** restituisce 0.

**waccess_s** è una versione a caratteri "wide" **access_s**, dove il *percorso* argomento **waccess_s** è una stringa di caratteri "wide". In caso contrario, **waccess_s** e **access_s** si comportano in modo identico.

Queste funzioni convalidano i relativi parametri. Se *percorso* viene **NULL** oppure *modalità* non specifica una modalità valida, viene richiamato il gestore di parametri non validi, come descritto in [convalidadeiparametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituire **EINVAL**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**taccess_s**|**_access_s**|**_access_s**|**_waccess_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_access_s**|\<io.h>|\<errno.h>|
|**_waccess_s**|\<wchar.h> o \<io.h>|\<errno.h>|

## <a name="example"></a>Esempio

Questo esempio viene utilizzato **access_s** per controllare il file denominato crt_access_s.c per vedere se il file esista e che la scrittura è consentita.

```C
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

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_access, _waccess](access-waccess.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[Funzioni _stat, _wstat](stat-functions.md)<br/>
