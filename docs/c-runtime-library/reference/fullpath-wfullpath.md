---
title: _fullpath, _wfullpath | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _fullpath
- _wfullpath
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
- wfullpath
- fullpath
- _wfullpath
- _fullpath
dev_langs:
- C++
helpviewer_keywords:
- _wfullpath function
- relative file paths
- absolute paths
- wfullpath function
- _fullpath function
- fullpath function
ms.assetid: 4161ec17-0d22-45dd-b07d-0222553afae9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e538ff94a6cd49e4d766dfbca2798aa0daf0e462
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fullpath-wfullpath"></a>_fullpath, _wfullpath

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
Puntatore a un buffer contenente il nome del percorso assoluto o completo o NULL.

*relPath*<br/>
Nome del percorso relativo.

*maxLength*<br/>
Lunghezza massima del buffer di nome di percorso assoluto (*absPath*). Questa lunghezza è espressa in byte per **FullPath** ma in caratteri "wide" (**wchar_t**) per **wfullpath**.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore a un buffer contenente il nome del percorso assoluto (*absPath*). Se si è verificato un errore (ad esempio, se il valore passato in *relPath* include una lettera di unità che non è valido o non viene trovata, o se la lunghezza del nome del percorso assoluto creato (*absPath*) è maggiore di *maxLength*), la funzione restituisce **NULL**.

## <a name="remarks"></a>Note

Il **FullPath** espande il nome di percorso relativo in *relPath* per il percorso completo oppure assoluto e archivia il nome in *absPath*. Se *absPath* è NULL, **malloc** viene utilizzata per allocare un buffer di lunghezza sufficiente per contenere il nome del percorso. È responsabilità del chiamante liberare questo buffer. Un nome di percorso relativo specifica un percorso a un'altra posizione dalla posizione corrente (ad esempio la directory di lavoro corrente: "."). Un nome di percorso assoluto è l'espansione di un nome di percorso relativo che indica il percorso intero necessario per raggiungere la posizione desiderata dalla radice del file system. A differenza **makepath**, **FullPath** utilizzabile per ottenere il nome di percorso assoluto per i percorsi relativi (*relPath*) che includono ". /"o"... / "nei relativi nomi.

Per usare le routine di runtime C, ad esempio, l'applicazione deve includere i file di intestazione contenenti le dichiarazioni per le routine. L'istruzione include per ogni file di intestazione fa riferimento al percorso del file in modo relativo (dalla cartella di lavoro dell'applicazione):

```C
#include <stdlib.h>
```

e il percorso assoluto (percorso effettivo nel file sytem) del file potrebbe essere:

`\\machine\shareName\msvcSrc\crt\headerFiles\stdlib.h`

**FullPath** gestisce automaticamente gli argomenti di stringa di caratteri multibyte esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso. **wfullpath** è una versione a caratteri wide **FullPath**; gli argomenti stringa da **wfullpath** sono stringhe a caratteri "wide". **wfullpath** e **FullPath** si comportano in modo identico con la differenza che **wfullpath** gestiscono le stringhe di caratteri multibyte.

Se **debug** e **CRTDBG_MAP_ALLOC** sono entrambi definito, le chiamate a **FullPath** e **wfullpath** vengono sostituiti dalle chiamate a **fullpath_dbg** e **wfullpath_dbg** per consentire il debug delle allocazioni di memoria. Per altre informazioni, vedere [_fullpath_dbg, _wfullpath_dbg](fullpath-dbg-wfullpath-dbg.md).

Questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md), se *maxlen* è minore o uguale a 0. Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce **NULL**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfullpath**|**_fullpath**|**_fullpath**|**_wfullpath**|

Se il *absPath* buffer **NULL**, **FullPath** chiamate [malloc](malloc.md) per allocare un buffer e ignora il *maxLength*  argomento. È responsabilità del chiamante deallocare questo buffer (usando [free](free.md)) come appropriato. Se il *relPath* argomento specifica un'unità disco, la directory corrente di questa unità viene combinata con il percorso.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fullpath**|\<stdlib.h>|
|**_wfullpath**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_getcwd, _wgetcwd](getcwd-wgetcwd.md)<br/>
[_getdcwd, _wgetdcwd](getdcwd-wgetdcwd.md)<br/>
[_makepath, _wmakepath](makepath-wmakepath.md)<br/>
[_splitpath, _wsplitpath](splitpath-wsplitpath.md)<br/>
