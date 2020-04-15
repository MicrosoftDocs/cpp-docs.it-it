---
title: _dup, _dup2
ms.date: 4/2/2020
api_name:
- _dup
- _dup2
- _o__dup
- _o__dup2
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
- api-ms-win-crt-stdio-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _dup2
- _dup
helpviewer_keywords:
- _dup2 function
- dup function
- file handles [C++], duplicating
- file handles [C++], reassigning
- dup2 function
- _dup function
ms.assetid: 4d07e92c-0d76-4832-a770-dfec0e7a0cfa
ms.openlocfilehash: 239f857bb40c9609cb6f7ff373295a7a1f8523a9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81348119"
---
# <a name="_dup-_dup2"></a>_dup, _dup2

Crea un secondo descrittore di file per un file aperto (**_dup**) o riassegna un descrittore di file (**_dup2**).

## <a name="syntax"></a>Sintassi

```C
int _dup( int fd );
int _dup2( int fd1, int fd2 );
```

### <a name="parameters"></a>Parametri

*fd*, *fd1*<br/>
Descrittori del file che fanno riferimento al file aperto.

*fd2 (in modo*<br/>
Qualsiasi descrittore del file.

## <a name="return-value"></a>Valore restituito

**_dup** restituisce un nuovo descrittore di file. **_dup2** restituisce 0 per indicare l'esito positivo. Se si verifica un errore, ogni funzione restituisce -1 e imposta **errno** su **EBADF** se il descrittore di file non è valido o **su EMFILE** se non sono disponibili altri descrittori di file. Nel caso di un descrittore del file non valido, la funzione richiama anche il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Le funzioni **_dup** e **_dup2** associano un secondo descrittore di file a un file attualmente aperto. Queste funzioni possono essere utilizzate per associare un descrittore di file predefinito, ad esempio quello per **stdout**, a un file diverso. Le operazioni sul file possono essere eseguite utilizzando qualsiasi descrittore del file. Il tipo di accesso consentito per il file non viene influenzato dalla creazione di un nuovo descrittore. **_dup** restituisce il successivo descrittore di file disponibile per il file specificato. **_dup2** impone a *fd2* di fare riferimento allo stesso file di *fd1*. Se *fd2* è associato a un file aperto al momento della chiamata, tale file viene chiuso.

Sia **_dup** che **_dup2** accettare descrittori di file come parametri. Per passare un`FILE *`flusso ( ) a una di queste funzioni, utilizzare [_fileno](fileno.md). La routine **fileno** restituisce il descrittore di file attualmente associato al flusso specificato. Nell'esempio seguente viene illustrato come associare **stderr** (definito come `FILE *` in Stdio.h) a un descrittore di file:

```C
int cstderr = _dup( _fileno( stderr ));
```

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_dup**|\<io.h>|
|**_dup2**|\<io.h>|

La console non è supportata nelle app UWP (Universal Windows Platform). Gli handle di flusso standard associati alla console, **stdin**, **stdout**e **stderr**, devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano utilizzarli nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_dup.c
// This program uses the variable old to save
// the original stdout. It then opens a new file named
// DataFile and forces stdout to refer to it. Finally, it
// restores stdout to its original state.

#include <io.h>
#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   int old;
   FILE *DataFile;

   old = _dup( 1 );   // "old" now refers to "stdout"
                      // Note:  file descriptor 1 == "stdout"
   if( old == -1 )
   {
      perror( "_dup( 1 ) failure" );
      exit( 1 );
   }
   _write( old, "This goes to stdout first\n", 26 );
   if( fopen_s( &DataFile, "data", "w" ) != 0 )
   {
      puts( "Can't open file 'data'\n" );
      exit( 1 );
   }

   // stdout now refers to file "data"
   if( -1 == _dup2( _fileno( DataFile ), 1 ) )
   {
      perror( "Can't _dup2 stdout" );
      exit( 1 );
   }
   puts( "This goes to file 'data'\n" );

   // Flush stdout stream buffer so it goes to correct file
   fflush( stdout );
   fclose( DataFile );

   // Restore original stdout
   _dup2( old, 1 );
   puts( "This goes to stdout\n" );
   puts( "The file 'data' contains:" );
   _flushall();
   system( "type data" );
}
```

```Output
This goes to stdout first
This goes to stdout

The file 'data' contains:
This goes to file 'data'
```

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_close](close.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
