---
title: _searchenv_s, _wsearchenv_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _wsearchenv_s
- _searchenv_s
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
apitype: DLLExport
f1_keywords:
- _searchenv_s
- _wsearchenv_s
- wsearchenv_s
- searchenv_s
dev_langs:
- C++
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
caps.latest.revision: 32
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a626ff2fbae86c7e1a1daf7f8fcdb2f5245c929d
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="searchenvs-wsearchenvs"></a>_searchenv_s, _wsearchenv_s

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

*varname*<br/>
Ambiente per la ricerca.

*nome del percorso*<br/>
Buffer per l'archiviazione del percorso completo.

*numberOfElements*<br/>
Dimensioni di *pathname* buffer.

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore.

Se *filename* è una stringa vuota, il valore restituito è **ENOENT**.

### <a name="error-conditions"></a>Condizioni di errore

|*filename*|*varname*|*nome del percorso*|*numberOfElements*|Valore restituito|Contenuto di *pathname*|
|----------------|---------------|----------------|------------------------|------------------|----------------------------|
|qualsiasi|qualsiasi|**NULL**|qualsiasi|**EINVAL**|N/D|
|**NULL**|qualsiasi|qualsiasi|qualsiasi|**EINVAL**|non modificato|
|qualsiasi|qualsiasi|qualsiasi|<= 0|**EINVAL**|non modificato|

Se si verifica una di queste condizioni di errore, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituire **EINVAL**.

## <a name="remarks"></a>Note

Il **searchenv_s** routine cerca il file di destinazione nel dominio specificato. Il *varname* variabile può essere qualsiasi ambiente o variabile definita dall'utente che specifica un elenco dei percorsi di directory, ad esempio **percorso**, **LIB**, e **inclusione** . Poiché **searchenv_s** tra maiuscole e minuscole, *varname* deve corrispondere al caso della variabile di ambiente. Se *varname* non corrisponde al nome di una variabile di ambiente definito nell'ambiente del processo, la funzione restituisce zero e il *pathname* variabile rimane invariata.

La routine cerca innanzitutto il file nella directory di lavoro corrente. Se non trova il file, cerca nelle directory specificate dalla variabile d'ambiente. Se il file di destinazione è in una di queste directory, il percorso appena creato viene copiato in *pathname*. Se il *filename* non viene trovato alcun file, *pathname* contiene una stringa vuota con terminazione null.

Il *pathname* buffer deve essere almeno **MAX_PATH** caratteri per consentire la lunghezza del nome del percorso costruito completo. In caso contrario, **searchenv_s** potrebbe causare un sovraccarico di *pathname* buffer causando un comportamento imprevisto.

**wsearchenv_s** è una versione a caratteri wide **searchenv_s**; gli argomenti da **wsearchenv_s** sono stringhe a caratteri "wide". **wsearchenv_s** e **searchenv_s** si comportano in modo identico in caso contrario.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tsearchenv_s**|**_searchenv_s**|**_searchenv_s**|**_wsearchenv_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_searchenv_s**|\<stdlib.h>|
|**_wsearchenv_s**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Controllo delle directory](../../c-runtime-library/directory-control.md)<br/>
[_searchenv, _wsearchenv](searchenv-wsearchenv.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_putenv, _wputenv](putenv-wputenv.md)<br/>
