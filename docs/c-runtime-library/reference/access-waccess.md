---
title: _access, _waccess
ms.date: 11/04/2016
api_name:
- _access
- _waccess
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _waccess
- _access
- taccess
- waccess
- _taccess
helpviewer_keywords:
- access function
- _taccess function
- waccess function
- _access function
- _waccess function
- taccess function
ms.assetid: ba34f745-85c3-49e5-a7d4-3590bd249dd3
ms.openlocfilehash: 90092b5d1c250fd79be107b0c36ee5641f70b30c
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70943931"
---
# <a name="_access-_waccess"></a>_access, _waccess

Determina se un file è di sola lettura o meno. Sono disponibili versioni più sicure. Vedere [_access_s, _waccess_s](access-s-waccess-s.md).

## <a name="syntax"></a>Sintassi

```C
int _access(
   const char *path,
   int mode
);
int _waccess(
   const wchar_t *path,
   int mode
);
```

### <a name="parameters"></a>Parametri

*path*<br/>
Percorso di file o directory.

*mode*<br/>
Attributo di lettura/scrittura.

## <a name="return-value"></a>Valore restituito

Ogni funzione restituisce 0 se il file ha la modalità specificata. La funzione restituisce-1 se il file specificato non esiste o non ha la modalità specificata. in questo caso, `errno` viene impostato come illustrato nella tabella seguente.

|||
|-|-|
`EACCES`|Accesso non consentito: l'impostazione di autorizzazione del file non consente l'accesso specificato.
`ENOENT`|Nome file o percorso non trovato.
`EINVAL`|Parametro non valido.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Quando viene usato con i file, la funzione **_access** determina se il file o la directory specificata esiste e ha gli attributi specificati dal valore di *mode*. Quando viene usato con le directory, **_access** determina solo se la directory specificata esiste; in Windows 2000 e nei sistemi operativi successivi, tutte le directory hanno accesso in lettura e scrittura.

|valore della *modalità*|Controllo nel file|
|------------------|---------------------|
|00|Solo esistenza|
|02|Sola scrittura|
|04|Sola lettura|
|06|Lettura e scrittura|

Questa funzione verifica solo se il file e la directory sono di sola lettura o meno e non controlla le impostazioni di sicurezza del file system. A tale scopo è necessario un token di accesso. Per altre informazioni sula sicurezza del file system, vedere [Access Tokens](/windows/win32/SecAuthZ/access-tokens) (Token di accesso). È disponibile una classe ATL per offrire questa funzionalità. Vedere [Classe CAccessToken](../../atl/reference/caccesstoken-class.md).

**_waccess** è una versione a caratteri wide di **_access**; l'argomento *path* per **_waccess** è una stringa di caratteri wide. **_waccess** e **_access** si comportano in modo identico.

Questa funzione convalida i relativi parametri. Se *path* è null o *mode* non specifica una modalità valida, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su `EINVAL` e restituisce -1.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_taccess`|**_access**|**_access**|**_waccess**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**_access**|\<io.h>|\<errno.h>|
|**_waccess**|\<wchar.h> o \<io.h>|\<errno.h>|

## <a name="example"></a>Esempio

Nell'esempio seguente viene usato **_access** per controllare il file denominato crt_ACCESS. C per verificare se esiste e se la scrittura è consentita.

```C
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

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[Funzioni _stat, _wstat](stat-functions.md)