---
description: 'Altre informazioni su: _searchenv_s, _wsearchenv_s'
title: _searchenv_s, _wsearchenv_s
ms.date: 4/2/2020
api_name:
- _wsearchenv_s
- _searchenv_s
- _o__searchenv_s
- _o__wsearchenv_s
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _searchenv_s
- _wsearchenv_s
- wsearchenv_s
- searchenv_s
helpviewer_keywords:
- tsearchenv_s function
- files [C++], finding
- buffers [C++], buffer overruns
- environment paths, searching for files
- wsearchenv_s function
- searchenv_s function
- _tsearchenv_s function
- buffer overruns
- buffers [C++], avoiding overruns
- _wsearchenv_s function
- _searchenv_s function
- environment paths
ms.assetid: 47f9fc29-250e-4c09-b52e-9e9f0ef395ca
ms.openlocfilehash: c618840c904bb03eb2f04b9931c7fe7999a278a4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288958"
---
# <a name="_searchenv_s-_wsearchenv_s"></a>_searchenv_s, _wsearchenv_s

Cerca un file usando i percorsi di ambiente. Queste versioni di [_searchenv, _wsearchenv](searchenv-wsearchenv.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _searchenv_s(
   const char *filename,
   const char *varname,
   char *pathname,
   size_t numberOfElements
);
errno_t _wsearchenv_s(
   const wchar_t *filename,
   const wchar_t *varname,
   wchar_t *pathname,
   size_t numberOfElements
);
template <size_t size>
errno_t _searchenv_s(
   const char *filename,
   const char *varname,
   char (&pathname)[size]
); // C++ only
template <size_t size>
errno_t _wsearchenv_s(
   const wchar_t *filename,
   const wchar_t *varname,
   wchar_t (&pathname)[size]
); // C++ only
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Nome del file di cui eseguire la ricerca.

*VarName*<br/>
Ambiente per la ricerca.

*percorso*<br/>
Buffer per l'archiviazione del percorso completo.

*numberOfElements*<br/>
Dimensioni del buffer del *percorso* .

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore.

Se *filename* è una stringa vuota, il valore restituito è **ENOENT**.

### <a name="error-conditions"></a>Condizioni di errore

|*filename*|*VarName*|*percorso*|*numberOfElements*|Valore restituito|Contenuto di *pathname*|
|----------------|---------------|----------------|------------------------|------------------|----------------------------|
|any|any|**NULL**|any|**EINVAL**|n/d|
|**NULL**|any|any|any|**EINVAL**|non modificato|
|any|any|any|<= 0|**EINVAL**|non modificato|

Se si verifica una di queste condizioni di errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono **EINVAL**.

## <a name="remarks"></a>Commenti

Il **_searchenv_s** routine Cerca il file di destinazione nel dominio specificato. La variabile *VarName* può essere qualsiasi ambiente o variabile definita dall'utente che specifica un elenco di percorsi di directory, ad esempio **path**, **lib** e **include**. Poiché **_searchenv_s** fa distinzione tra maiuscole e minuscole, *VarName* deve corrispondere al case della variabile di ambiente. Se *VarName* non corrisponde al nome di una variabile di ambiente definita nell'ambiente del processo, la funzione restituisce zero e la variabile *pathname* è invariata.

La routine cerca innanzitutto il file nella directory di lavoro corrente. Se non trova il file, cerca nelle directory specificate dalla variabile d'ambiente. Se il file di destinazione si trova in una di queste directory, il percorso appena creato viene copiato in *pathname*. Se il file *filename* non viene trovato, *pathname* contiene una stringa vuota con terminazione null.

Il buffer del *percorso* deve avere una lunghezza di almeno **_MAX_PATH** caratteri per contenere la lunghezza totale del nome del percorso costruito. In caso contrario, **_searchenv_s** potrebbe sovraccaricare il buffer del *percorso* causando un comportamento imprevisto.

**_wsearchenv_s** è una versione a caratteri wide di **_searchenv_s**; gli argomenti da **_wsearchenv_s** sono stringhe a caratteri wide. **_wsearchenv_s** e **_searchenv_s** si comportano in modo identico.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tsearchenv_s**|**_searchenv_s**|**_searchenv_s**|**_wsearchenv_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_searchenv_s**|\<stdlib.h>|
|**_wsearchenv_s**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_searchenv_s.c
/* This program searches for a file in
* a directory specified by an environment variable.
*/

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char pathbuffer[_MAX_PATH];
   char searchfile[] = "CL.EXE";
   char envvar[] = "PATH";
   errno_t err;

   /* Search for file in PATH environment variable: */
   err = _searchenv_s( searchfile, envvar, pathbuffer, _MAX_PATH );
   if (err != 0)
   {
      printf("Error searching the path. Error code: %d\n", err);
   }
   if( *pathbuffer != '\0' )
      printf( "Path for %s:\n%s\n", searchfile, pathbuffer );
   else
      printf( "%s not found\n", searchfile );
}
```

```Output
Path for CL.EXE:
C:\Program Files\Microsoft Visual Studio 2010\VC\BIN\CL.EXE
```

## <a name="see-also"></a>Vedere anche

[Controllo Directory](../../c-runtime-library/directory-control.md)<br/>
[_searchenv, _wsearchenv](searchenv-wsearchenv.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_putenv, _wputenv](putenv-wputenv.md)<br/>
