---
title: _getcwd, _wgetcwd
description: C Funzioni libreria di runtime _getcwd _wgetcwd ottenere la directory di lavoro corrente.
ms.date: 4/2/2020
api_name:
- _wgetcwd
- _getcwd
- _o__getcwd
- _o__wgetcwd
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: bc19a416ebebeb901e8dbb435971e6d5f33e4067
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81344439"
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

*Buffer*\
Posizione di archiviazione per il percorso.

*maxlen*\
Lunghezza massima del percorso in caratteri: **char** per **_getcwd** e **wchar_t** per **_wgetcwd**.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore al *buffer*. Un valore restituito **NULL** indica un errore e **errno** è impostato su **ENOMEM**, a indicare che la memoria non è sufficiente per allocare byte *maxlen* (quando viene fornito un argomento **NULL** come *buffer*) o su **ERANGE**, che indica che il percorso è più lungo dei caratteri *maxlen.* Se *maxlen* è minore o uguale a zero, questa funzione richiama un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_getcwd** ottiene il percorso completo della directory di lavoro corrente per l'unità predefinita e lo memorizza nel *buffer*. L'argomento integer *maxlen* specifica la lunghezza massima per il percorso. Si verifica un errore se la lunghezza del percorso (incluso il carattere di terminazione null) supera *maxlen*. L'argomento *buffer* può essere **NULL;** un buffer di almeno dimensione *maxlen* (più solo se necessario) viene allocato automaticamente, utilizzando **malloc**, per archiviare il percorso. Questo buffer può essere successivamente liberato chiamando **free** e passandoil valore **restituito _getcwd** (un puntatore al buffer allocato).

**_getcwd** restituisce una stringa che rappresenta il percorso della directory di lavoro corrente. Se la directory di lavoro corrente è la radice, la stringa termina con una barra rovesciata ( ).`\` Se la directory di lavoro corrente è impostata su una directory diversa dalla quella radice, la stringa termina con il nome della directory e non con una barra rovesciata.

**_wgetcwd** è una versione a caratteri wide di **_getcwd**; l'argomento *buffer* e il valore restituito di **_wgetcwd** sono stringhe di caratteri wide. **_wgetcwd** e **_getcwd** si comportano in modo identico in caso contrario.

Quando vengono definiti **_DEBUG** e **_CRTDBG_MAP_ALLOC,** le chiamate a **_getcwd** e **_wgetcwd** vengono sostituite da chiamate a **_getcwd_dbg** e **_wgetcwd_dbg** per consentire il debug delle allocazioni di memoria. Per altre informazioni, vedere [_getcwd_dbg, _wgetcwd_dbg](getcwd-dbg-wgetcwd-dbg.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tgetcwd**|**_getcwd**|**_getcwd**|**_wgetcwd**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_getcwd**|\<direct.h>|
|**_wgetcwd**|\<direct.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Controllo directory](../../c-runtime-library/directory-control.md)\
[_chdir, _wchdir](chdir-wchdir.md)\
[_mkdir, _wmkdir](mkdir-wmkdir.md)\
[_rmdir, _wrmdir](rmdir-wrmdir.md)
