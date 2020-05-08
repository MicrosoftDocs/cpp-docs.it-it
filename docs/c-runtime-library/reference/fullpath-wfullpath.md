---
title: _fullpath, _wfullpath
ms.date: 4/2/2020
api_name:
- _fullpath
- _wfullpath
- _o__fullpath
- _o__wfullpath
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wfullpath
- fullpath
- _wfullpath
- _fullpath
helpviewer_keywords:
- _wfullpath function
- relative file paths
- absolute paths
- wfullpath function
- _fullpath function
- fullpath function
ms.assetid: 4161ec17-0d22-45dd-b07d-0222553afae9
ms.openlocfilehash: f7ef9e8416e73a403abfb30f637afeb4a68e8592
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82909949"
---
# <a name="_fullpath-_wfullpath"></a>_fullpath, _wfullpath

Crea un nome di percorso assoluto o completo per il nome di percorso relativo specificato.

## <a name="syntax"></a>Sintassi

```C
char *_fullpath(
   char *absPath,
   const char *relPath,
   size_t maxLength
);
wchar_t *_wfullpath(
   wchar_t *absPath,
   const wchar_t *relPath,
   size_t maxLength
);
```

### <a name="parameters"></a>Parametri

*absPath*<br/>
Puntatore a un buffer contenente il nome del percorso assoluto o completo o **null**.

*relPath*<br/>
Nome del percorso relativo.

*maxLength*<br/>
Lunghezza massima del buffer del nome del percorso assoluto (*absPath*). Questa lunghezza è in byte per **_fullpath** ma in caratteri wide (**wchar_t**) per **_wfullpath**.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore a un buffer contenente il nome del percorso assoluto (*absPath*). Se si verifica un errore (ad esempio, se il valore passato in *RelPath* include una lettera di unità non valida o non trovata oppure se la lunghezza del nome del percorso assoluto creato (*absPath*) è maggiore di *MaxLength*), la funzione restituisce **null**.

## <a name="remarks"></a>Osservazioni

La funzione **_fullpath** espande il nome del percorso relativo in *RelPath* al percorso completo o assoluto e archivia il nome in *absPath*. Se *absPath* è **null**, **malloc** viene usato per allocare un buffer di lunghezza sufficiente per memorizzare il nome del percorso. È responsabilità del chiamante liberare questo buffer. Un nome di percorso relativo specifica un percorso a un'altra posizione dalla posizione corrente (ad esempio la directory di lavoro corrente: "."). Un nome di percorso assoluto è l'espansione di un nome di percorso relativo che indica il percorso intero necessario per raggiungere la posizione desiderata dalla radice del file system. A differenza di **_makepath**, è possibile usare **_fullpath** per ottenere il nome del percorso assoluto per i percorsi relativi (*RelPath*) che includono "./" o ".. /"nei rispettivi nomi.

Per usare le routine di runtime C, ad esempio, l'applicazione deve includere i file di intestazione contenenti le dichiarazioni per le routine. L'istruzione include per ogni file di intestazione fa riferimento al percorso del file in modo relativo (dalla cartella di lavoro dell'applicazione):

```C
By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

#include <stdlib.h>
```

e il percorso assoluto (percorso effettivo nel file sytem) del file potrebbe essere:

`\\machine\shareName\msvcSrc\crt\headerFiles\stdlib.h`

**_fullpath** gestisce automaticamente gli argomenti della stringa di caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. **_wfullpath** è una versione a caratteri wide di **_fullpath**; gli argomenti stringa da **_wfullpath** sono stringhe a caratteri wide. **_wfullpath** e **_fullpath** si comportano in modo identico, ad eccezione del fatto che **_wfullpath** non gestisce le stringhe di caratteri multibyte.

Se **_DEBUG** e **_CRTDBG_MAP_ALLOC** sono entrambi definiti, le chiamate a **_fullpath** e **_wfullpath** vengono sostituite dalle chiamate a **_fullpath_dbg** e **_wfullpath_dbg** per consentire il debug delle allocazioni di memoria. Per altre informazioni, vedere [_fullpath_dbg, _wfullpath_dbg](fullpath-dbg-wfullpath-dbg.md).

Questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md), se *maxlen* è minore o uguale a 0. Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **null**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfullpath**|**_fullpath**|**_fullpath**|**_wfullpath**|

Se il buffer *absPath* è **null**, **_fullpath** chiama [malloc](malloc.md) per allocare un buffer e ignora l'argomento *MaxLength* . È responsabilità del chiamante deallocare questo buffer (usando [free](free.md)) come appropriato. Se l'argomento *RelPath* specifica un'unità disco, la directory corrente di questa unità viene combinata con il percorso.

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**_fullpath**|\<stdlib.h>|
|**_wfullpath**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fullpath.c
// This program demonstrates how _fullpath
// creates a full path from a partial path.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <direct.h>

void PrintFullPath( char * partialPath )
{
   char full[_MAX_PATH];
   if( _fullpath( full, partialPath, _MAX_PATH ) != NULL )
      printf( "Full path is: %s\n", full );
   else
      printf( "Invalid path\n" );
}

int main( void )
{
   PrintFullPath( "test" );
   PrintFullPath( "\\test" );
   PrintFullPath( "..\\test" );
}
```

```Output
Full path is: C:\Documents and Settings\user\My Documents\test
Full path is: C:\test
Full path is: C:\Documents and Settings\user\test
```

## <a name="see-also"></a>Vedere anche

[Gestione dei file](../../c-runtime-library/file-handling.md)<br/>
[_getcwd, _wgetcwd](getcwd-wgetcwd.md)<br/>
[_getdcwd, _wgetdcwd](getdcwd-wgetdcwd.md)<br/>
[_makepath, _wmakepath](makepath-wmakepath.md)<br/>
[_splitpath, _wsplitpath](splitpath-wsplitpath.md)<br/>
