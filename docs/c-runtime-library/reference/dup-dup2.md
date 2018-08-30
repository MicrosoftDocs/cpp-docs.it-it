---
title: _dup, _dup2 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _dup
- _dup2
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _dup2
- _dup
dev_langs:
- C++
helpviewer_keywords:
- _dup2 function
- dup function
- file handles [C++], duplicating
- file handles [C++], reassigning
- dup2 function
- _dup function
ms.assetid: 4d07e92c-0d76-4832-a770-dfec0e7a0cfa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 820172e1e6ab4ad007c89b2b40f03512134f0f0d
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43215953"
---
# <a name="dup-dup2"></a>_dup, _dup2

Crea un secondo descrittore del file per un file aperto (**dup**), o riassegna un descrittore di file (**_dup2**).

## <a name="syntax"></a>Sintassi

```C
int _dup( int fd );
int _dup2( int fd1, int fd2 );
```

### <a name="parameters"></a>Parametri

*FD*, *fd1*<br/>
Descrittori del file che fanno riferimento al file aperto.

*FD2*<br/>
Qualsiasi descrittore del file.

## <a name="return-value"></a>Valore restituito

**dup** restituisce un nuovo descrittore di file. **_dup2** restituisce 0 per indicare l'esito positivo. Se si verifica un errore, ogni funzione restituisce -1 e imposta **errno** al **EBADF** se il descrittore del file non è valido o su **EMFILE** se nessun altri descrittori di file sono disponibili. Nel caso di un descrittore del file non valido, la funzione richiama anche il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **dup** e **_dup2** funzioni associare un secondo descrittore del file a un file attualmente aperto. Queste funzioni possono essere usate per associare un descrittore di file predefiniti, ad esempio quello relativo **stdout**, con un altro file. Le operazioni sul file possono essere eseguite utilizzando qualsiasi descrittore del file. Il tipo di accesso consentito per il file non viene influenzato dalla creazione di un nuovo descrittore. **dup** restituisce il descrittore di file disponibile successivo per il file specificato. **_dup2** forza *fd2* per fare riferimento allo stesso file *fd1*. Se *fd2* è associato a un file aperto al momento della chiamata, tale file verrà chiuso.

Entrambe **dup** e **_dup2** accettano descrittori del file come parametri. Per passare un flusso (`FILE *`) a una di queste funzioni, usare [fileno](fileno.md). Il **fileno** routine restituisce il descrittore del file attualmente associato al flusso specificato. Nell'esempio seguente viene illustrato come associare **stderr** (definita come `FILE *` in stdio. h) con un descrittore di file:

```C
int cstderr = _dup( _fileno( stderr ));
```

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_dup**|\<io.h>|
|**_dup2**|\<io.h>|

La console non è supportata nelle App Universal Windows Platform (UWP). L'handle del flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
