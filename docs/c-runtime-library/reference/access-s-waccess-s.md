---
title: _access_s, _waccess_s
ms.date: 4/2/2020
api_name:
- _access_s
- _waccess_s
- _o__access_s
- _o__waccess_s
api_location:
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- waccess_s
- access_s
- _waccess_s
- _access_s
helpviewer_keywords:
- access_s function
- taccess_s function
- _taccess_s function
- waccess_s function
- _access_s function
- _waccess_s function
ms.assetid: fb3004fc-dcd3-4569-8b27-d817546e947e
ms.openlocfilehash: 7f16951b99eb29bcb8c39499c29be1018cb86616
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81349131"
---
# <a name="_access_s-_waccess_s"></a>_access_s, _waccess_s

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

*Percorso*<br/>
Percorso di file o directory.

*Modalità*<br/>
Impostazione di autorizzazione.

## <a name="return-value"></a>Valore restituito

Ogni funzione restituisce 0 se il file ha la modalità specificata. La funzione restituisce un codice di errore se il file specificato non esiste o non è accessibile nella modalità specificata. In questo caso, la funzione restituisce un codice di errore dal set come indicato di seguito e inoltre imposta `errno` sullo stesso valore.

|Valore errno|Condizione|
|-|-|
`EACCES`|Accesso negato. L'impostazione di autorizzazione del file non consente l'accesso specificato.
`ENOENT`|Nome file o percorso non trovato.
`EINVAL`|Parametro non valido.

Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Se utilizzata con i file, la funzione **_access_s** determina se il file specificato esiste ed è possibile accedervi come specificato dal valore di *mode*. Se utilizzata con le directory, **_access_s** determina solo se la directory specificata esiste. Nei sistemi operativi Windows 2000 e versioni successive, tutte le directory dispongono dell'accesso in lettura e scrittura.

|valore di mode|Controllo nel file|
|----------------|---------------------|
|00|Solo esistenza.|
|02|Autorizzazione di scrittura.|
|04|Autorizzazione di lettura.|
|06|Autorizzazione di lettura e scrittura.|

L'autorizzazione per la lettura o la scrittura del file non è sufficiente per garantire la possibilità di aprire un file. Ad esempio, se un file è bloccato da un altro processo, potrebbe non essere accessibile anche se **_access_s** restituisce 0.

**_waccess_s** è una versione a caratteri wide di **_access_s**, in cui l'argomento *path* di **_waccess_s** è una stringa di caratteri wide. In caso contrario, **_waccess_s** e **_access_s** si comportano in modo identico.

Queste funzioni convalidano i relativi parametri. Se *path* è NULL o *mode* non specifica una modalità valida, viene richiamato il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_taccess_s`|**_access_s**|**_access_s**|**_waccess_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_access_s**|\<io.h>|\<errno.h>|
|**_waccess_s**|\<wchar.h> o \<io.h>|\<errno.h>|

## <a name="example"></a>Esempio

In questo esempio **viene utilizzato _access_s** per controllare il file denominato crt_access_s.c per verificare se esiste e se è consentita la scrittura.

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

[Gestione dei file](../../c-runtime-library/file-handling.md)<br/>
[_access, _waccess](access-waccess.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[Funzioni _stat, _wstat](stat-functions.md)
