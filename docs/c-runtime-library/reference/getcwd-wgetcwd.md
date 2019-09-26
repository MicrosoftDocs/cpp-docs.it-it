---
title: _getcwd, _wgetcwd
description: Funzioni della libreria di runtime C _getcwd, _wgetcwd ottenere la directory di lavoro corrente.
ms.date: 09/24/2019
api_name:
- _wgetcwd
- _getcwd
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
- api-ms-win-crt-environment-l1-1-0.dll
- api-ms-win-crt-stdio-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 27cfdc1eb59c2de788bbe5963a6fccffcb62cba0
ms.sourcegitcommit: 7750e4c291d56221c8893120c56a1fe6c9af60d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2019
ms.locfileid: "71274623"
---
# <a name="_getcwd-_wgetcwd"></a>_getcwd, _wgetcwd

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

*buffer*\
Posizione di archiviazione per il percorso.

*MAXLEN*\
Lunghezza massima del percorso in caratteri: **char** per **_getcwd** e **wchar_t** per **_wgetcwd**.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore al *buffer*. Un valore restituito **null** indica un errore e **errno** viene impostato su **ENOMEM**, a indicare che la memoria disponibile non è sufficiente per allocare i byte *maxlen* (quando un argomento **null** viene assegnato come *buffer*) o a **ERANGE** , che indica che il percorso è più lungo di *maxlen* caratteri. Se *maxlen* è minore o uguale a zero, questa funzione richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione **_getcwd** ottiene il percorso completo della directory di lavoro corrente per l'unità predefinita e lo archivia nel *buffer*. L'argomento integer *maxlen* specifica la lunghezza massima per il percorso. Si verifica un errore se la lunghezza del percorso, incluso il carattere null di terminazione, supera *maxlen*. L'argomento *buffer* può essere **null**. un buffer di almeno dimensioni *maxlen* (solo se necessario) viene allocato automaticamente, usando **malloc**, per archiviare il percorso. Questo buffer può essere successivamente liberato chiamando **Free** e passandogli il valore restituito **_getcwd** (un puntatore al buffer allocato).

**_getcwd** restituisce una stringa che rappresenta il percorso della directory di lavoro corrente. Se la directory di lavoro corrente è la radice, la stringa termina con una barra`\`rovesciata (). Se la directory di lavoro corrente è impostata su una directory diversa dalla quella radice, la stringa termina con il nome della directory e non con una barra rovesciata.

**_wgetcwd** è una versione a caratteri wide di **_getcwd**; l'argomento del *buffer* e il valore restituito di **_wgetcwd** sono stringhe a caratteri wide. **_wgetcwd** e **_getcwd** si comportano in modo identico.

Quando _ **debug** e **_CRTDBG_MAP_ALLOC** sono definiti, le chiamate a **_getcwd** e **_wgetcwd** vengono sostituite dalle chiamate a **_getcwd_dbg** e **_wgetcwd_dbg** per consentire il debug delle allocazioni di memoria. Per altre informazioni, vedere [_getcwd_dbg, _wgetcwd_dbg](getcwd-dbg-wgetcwd-dbg.md).

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
// Compile with: cl /W4 crt_getcwd.c
// This program places the name of the current directory in the
// buffer array, then displays the name of the current directory
// on the screen. Passing NULL as the buffer forces getcwd to allocate
// memory for the path, which allows the code to support file paths
// longer than _MAX_PATH, which are supported by NTFS.

#include <direct.h> // _getcwd
#include <stdlib.h> // free, perror
#include <stdio.h>  // printf
#include <string.h> // strlen

int main( void )
{
   char* buffer;

   // Get the current working directory:
   if ( (buffer = _getcwd( NULL, 0 )) == NULL )
      perror( "_getcwd error" );
   else
   {
      printf( "%s \nLength: %zu\n", buffer, strlen(buffer) );
      free(buffer);
   }
}
```

```Output
C:\Code
```

## <a name="see-also"></a>Vedere anche

[Controllo delle directory](../../c-runtime-library/directory-control.md)\
[_chdir, _wchdir](chdir-wchdir.md)\
[_mkdir, _wmkdir](mkdir-wmkdir.md)\
[_rmdir, _wrmdir](rmdir-wrmdir.md)
