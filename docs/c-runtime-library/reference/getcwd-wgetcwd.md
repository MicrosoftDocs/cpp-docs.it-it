---
title: _getcwd, _wgetcwd
ms.date: 11/04/2016
apiname:
- _wgetcwd
- _getcwd
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
- api-ms-win-crt-environment-l1-1-0.dll
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _getcwd
- wgetcwd
- _wgetcwd
- tgetcwd
- _tgetcwd
helpviewer_keywords:
- getcwd function
- working directory
- _wgetcwd function
- _getcwd function
- current working directory
- wgetcwd function
- directories [C++], current working
ms.assetid: 888dc8c6-5595-4071-be55-816b38e3e739
ms.openlocfilehash: 4c533f0e716cb9a13c152b9be3c46f60291118d9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62331792"
---
# <a name="getcwd-wgetcwd"></a>_getcwd, _wgetcwd

Ottiene la directory di lavoro corrente.

## <a name="syntax"></a>Sintassi

```C
char *_getcwd(
   char *buffer,
   int maxlen
);
wchar_t *_wgetcwd(
   wchar_t *buffer,
   int maxlen
);
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Posizione di archiviazione per il percorso.

*maxlen*<br/>
Lunghezza massima del percorso in caratteri: **char** per **getcwd** e **wchar_t** per **wgetcwd**.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore a *buffer*. Oggetto **NULL** restituire il valore indica un errore, e **errno** viene impostato su **ENOMEM**, che indica che vi sia memoria sufficiente per allocare *maxlen* byte (quando un **NULL** viene fornito come argomento *buffer*), oppure a **ERANGE**, che indica che il percorso è più lungo rispetto a *maxlen*  caratteri. Se *maxlen* è minore o uguale a zero, questa funzione richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **getcwd** funzione Ottiene il percorso completo della directory di lavoro corrente per l'unità predefinita e lo archivia in *buffer*. L'argomento integer *maxlen* specifica la lunghezza massima per il percorso. Si verifica un errore se la lunghezza del percorso (incluso il carattere di terminazione null) supera *maxlen*. Il *buffer* l'argomento può essere **NULL**; un buffer con dimensione di almeno *maxlen* (più grande solo se necessario) viene allocato automaticamente, usando **malloc**, per archiviare il percorso. Questo buffer può essere successivamente liberato chiamando **gratuito** e passando il **getcwd** restituito (un puntatore al buffer allocato).

**getcwd** restituisce una stringa che rappresenta il percorso della directory di lavoro corrente. Se la directory di lavoro corrente è la radice, la stringa termina con una barra rovesciata ( **\\** ). Se la directory di lavoro corrente è impostata su una directory diversa dalla quella radice, la stringa termina con il nome della directory e non con una barra rovesciata.

**wgetcwd** è una versione a caratteri wide di **getcwd**; gli *buffer* argomento e il valore restituito **wgetcwd** sono stringhe a caratteri wide. **wgetcwd** e **getcwd** hanno lo stesso comportamento in caso contrario.

Quando **debug** e **CRTDBG_MAP_ALLOC** definiti, le chiamate a **getcwd** e **wgetcwd** vengono sostituite da chiamate agli **_ getcwd_dbg** e **wgetcwd_dbg** per consentire il debug delle allocazioni di memoria. Per altre informazioni, vedere [_getcwd_dbg, _wgetcwd_dbg](getcwd-dbg-wgetcwd-dbg.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tgetcwd**|**_getcwd**|**_getcwd**|**_wgetcwd**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_getcwd**|\<direct.h>|
|**_wgetcwd**|\<direct.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_getcwd.c
// This program places the name of the current directory in the
// buffer array, then displays the name of the current directory
// on the screen. Passing NULL as the buffer forces getcwd to allocate
// memory for the path, which allows the code to support file paths
// longer than _MAX_PATH, which are supported by NTFS.

#include <direct.h>
#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char* buffer;

   // Get the current working directory:
   if( (buffer = _getcwd( NULL, 0 )) == NULL )
      perror( "_getcwd error" );
   else
   {
      printf( "%s \nLength: %d\n", buffer, strnlen(buffer) );
      free(buffer);
   }
}
```

```Output
C:\Code
```

## <a name="see-also"></a>Vedere anche

[Controllo delle directory](../../c-runtime-library/directory-control.md)<br/>
[_chdir, _wchdir](chdir-wchdir.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_rmdir, _wrmdir](rmdir-wrmdir.md)<br/>
