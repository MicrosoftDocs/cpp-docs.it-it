---
title: _searchenv, _wsearchenv
ms.date: 4/2/2020
api_name:
- _searchenv
- _wsearchenv
- _o__searchenv
- _o__wsearchenv
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _wsearchenv
- _tsearchenv
- wsearchenv
- _searchenv
- searchenv
helpviewer_keywords:
- _wsearchenv function
- files [C++], finding
- _searchenv function
- tsearchenv function
- environment paths, searching for files
- _tsearchenv function
- wsearchenv function
- searchenv function
- environment paths
ms.assetid: 9c944a27-d326-409b-aee6-410e8762d9d3
ms.openlocfilehash: 22a8ca8fa7e56a84289d7e90ffb519073f006b5c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81332388"
---
# <a name="_searchenv-_wsearchenv"></a>_searchenv, _wsearchenv

Usa i percorsi di ambiente per cercare un file. Sono disponibili versioni più sicure di queste funzioni. Vedere [_searchenv_s, _wsearchenv_s](searchenv-s-wsearchenv-s.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
void _searchenv(
   const char *filename,
   const char *varname,
   char *pathname
);
void _wsearchenv(
   const wchar_t *filename,
   const wchar_t *varname,
   wchar_t *pathname
);
template <size_t size>
void _searchenv(
   const char *filename,
   const char *varname,
   char (&pathname)[size]
); // C++ only
template <size_t size>
void _wsearchenv(
   const wchar_t *filename,
   const wchar_t *varname,
   wchar_t (&pathname)[size]
); // C++ only
```

### <a name="parameters"></a>Parametri

*Filename*<br/>
Nome del file di cui eseguire la ricerca.

*Varname*<br/>
Ambiente per la ricerca.

*Percorso*<br/>
Buffer per l'archiviazione del percorso completo.

## <a name="remarks"></a>Osservazioni

La **routine _searchenv** cerca il file di destinazione nel dominio specificato. La variabile *varname* può essere qualsiasi variabile di ambiente o definita dall'utente, ad esempio **PATH**, **LIB**o **INCLUDE,** che specifica un elenco di percorsi di directory. Poiché **_searchenv** fa distinzione tra maiuscole e minuscole, *varname* deve corrispondere al case della variabile di ambiente.

La routine cerca innanzitutto il file nella directory di lavoro corrente. Se non trova il file, cerca nelle directory specificate dalla variabile d'ambiente. Se il file di destinazione si trova in una di queste directory, il percorso appena creato viene copiato in *nomepercorso*. Se il file *filename* non viene trovato, *pathname* contiene una stringa vuota con terminazione null.

Il buffer *dei nomi* di percorso deve essere lungo almeno **_MAX_PATH** per contenere l'intera lunghezza del nome del percorso costruito. In caso contrario, **_searchenv** potrebbe sovraccaricare il buffer *dei nomi* di percorso e causare un comportamento imprevisto.

**_wsearchenv** è una versione a caratteri wide di **_searchenv**e gli argomenti per **_wsearchenv** sono stringhe a caratteri wide. **_wsearchenv** e **_searchenv** si comportano in modo identico in caso contrario.

Se *filename* è una stringa vuota, queste funzioni restituiscono **ENOENT**.

Se *filename* o *pathname* è un puntatore **NULL,** viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostano **errno** su **EINVAL**.

Per ulteriori informazioni su **errno** e sui codici di errore, vedere [errno Constants](../../c-runtime-library/errno-constants.md).

In C++, queste funzioni presentano overload di modello che richiamano le relative controparti più sicure e più recenti. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tsearchenv**|**_searchenv**|**_searchenv**|**_wsearchenv**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_searchenv**|\<stdlib.h>|
|**_wsearchenv**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_searchenv.c
// compile with: /W3
// This program searches for a file in
// a directory that's specified by an environment variable.

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char pathbuffer[_MAX_PATH];
   char searchfile[] = "CL.EXE";
   char envvar[] = "PATH";

   // Search for file in PATH environment variable:
   _searchenv( searchfile, envvar, pathbuffer ); // C4996
   // Note: _searchenv is deprecated; consider using _searchenv_s
   if( *pathbuffer != '\0' )
      printf( "Path for %s:\n%s\n", searchfile, pathbuffer );
   else
      printf( "%s not found\n", searchfile );
}
```

```Output
Path for CL.EXE:
C:\Program Files\Microsoft Visual Studio 8\VC\BIN\CL.EXE
```

## <a name="see-also"></a>Vedere anche

[Controllo delle directory](../../c-runtime-library/directory-control.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_putenv, _wputenv](putenv-wputenv.md)<br/>
[_searchenv_s, _wsearchenv_s](searchenv-s-wsearchenv-s.md)<br/>
