---
title: _dup, _dup2
ms.date: 11/04/2016
api_name:
- _dup
- _dup2
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
ms.openlocfilehash: da47d6f040b62906d30107f9036ffa2a3ea05a1c
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70937780"
---
# <a name="_dup-_dup2"></a>_dup, _dup2

Crea un secondo descrittore di file per un file aperto ( **_dup**) o riassegna un descrittore di file ( **_dup2**).

## <a name="syntax"></a>Sintassi

```C
int _dup( int fd );
int _dup2( int fd1, int fd2 );
```

### <a name="parameters"></a>Parametri

*fd*, *fd1*<br/>
Descrittori del file che fanno riferimento al file aperto.

*fd2*<br/>
Qualsiasi descrittore del file.

## <a name="return-value"></a>Valore restituito

**_dup** restituisce un nuovo descrittore di file. **_dup2** restituisce 0 per indicare l'esito positivo. Se si verifica un errore, ogni funzione restituisce-1 e **errno** viene impostato su **EBADF** se il descrittore del file non è valido o **EMFILE** se non sono disponibili altri descrittori di file. Nel caso di un descrittore del file non valido, la funzione richiama anche il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Le funzioni **_dup** e **_dup2** associano un secondo descrittore di file a un file attualmente aperto. Queste funzioni possono essere usate per associare un descrittore di file predefinito, ad esempio per **stdout**, con un file diverso. Le operazioni sul file possono essere eseguite utilizzando qualsiasi descrittore del file. Il tipo di accesso consentito per il file non viene influenzato dalla creazione di un nuovo descrittore. **_dup** restituisce il descrittore del file successivo disponibile per il file specificato. **_dup2** forza *FD2* a fare riferimento allo stesso file di *FD1*. Se *FD2* è associato a un file aperto al momento della chiamata, tale file viene chiuso.

Sia **_dup** che **_dup2** accettano i descrittori di file come parametri. Per passare un flusso (`FILE *`) a una di queste funzioni, usare [_fileno](fileno.md). La routine **Fileno** restituisce il descrittore di file attualmente associato al flusso specificato. Nell'esempio seguente viene illustrato come associare **stderr** (definito come `FILE *` in stdio. h) a un descrittore di file:

```C
int cstderr = _dup( _fileno( stderr ));
```

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_dup**|\<io.h>|
|**_dup2**|\<io.h>|

La console non è supportata nelle app piattaforma UWP (Universal Windows Platform) (UWP). Gli handle del flusso standard associati alla console, **stdin**, **stdout**e **stderr**devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano usarle nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
