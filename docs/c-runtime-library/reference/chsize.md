---
title: _chsize | Microsoft Docs
ms.custom: ''
ms.date: 03/29/2018
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _chsize
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
- _chsize
dev_langs:
- C++
helpviewer_keywords:
- size
- _chsize function
- size, changing file
- files [C++], changing size
- chsize function
ms.assetid: b3e881c5-7b27-4837-a3d4-c51591ab10ff
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cec2d058b356cbb7624ee6dd0bbecdfb55c64813
ms.sourcegitcommit: cdd4808dcb274bbb29618286df4d1d4acd35b9bc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/30/2018
---
# <a name="chsize"></a>_chsize

Modifica la dimensione di un file. È disponibile una versione più sicura, vedere [_chsize_s](../../c-runtime-library/reference/chsize-s.md).

## <a name="syntax"></a>Sintassi

```C
int _chsize(
   int fd,
   long size
);
```

### <a name="parameters"></a>Parametri
*fd*<br/>
Descrittore del file che fa riferimento a un file aperto.

*size*<br/>
Nuova lunghezza, in byte, del file.

## <a name="return-value"></a>Valore restituito

chsize` returns the value 0 if the file size is successfully changed. A return value of -1 indicates an error: `errno` is set to `EACCES` if the specified file is read-only or the specified file is locked against access, to `EBADF` if the descriptor is invalid, `ENOSPC` if no space is left on the device, or `EINVAL` if `dimensioni ' è minore di zero.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione `_chsize` estende o tronca il file associato a `fd` in base alla lunghezza specificata da `size`. Il file deve essere aperto in una modalità che consente la scrittura. Se il file viene esteso, vengono aggiunti caratteri null ("\0"). Se il file viene troncato, si perderanno tutti i dati a partire dalla fine del file abbreviato fino alla fine del file originale.

Questa funzione convalida i relativi parametri. Se `size` è minore di zero o `fd` è un descrittore di file non valido, viene richiamato il gestore di parametri non validi come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|`_chsize`|\<io.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_chsize.c
// This program uses _filelength to report the size
// of a file before and after modifying it with _chsize.

#include <io.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <share.h>

int main( void )
{
   int fh, result;
   unsigned int nbytes = BUFSIZ;

   // Open a file
   if( _sopen_s( &fh, "data", _O_RDWR | _O_CREAT, _SH_DENYNO,
                 _S_IREAD | _S_IWRITE ) == 0 )
   {
      printf( "File length before: %ld\n", _filelength( fh ) );
      if( ( result = _chsize( fh, 329678 ) ) == 0 )
         printf( "Size successfully changed\n" );
      else
         printf( "Problem in changing the size\n" );
      printf( "File length after:  %ld\n", _filelength( fh ) );
      _close( fh );
   }
}
```

```Output
File length before: 0
Size successfully changed
File length after:  329678
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[_close](../../c-runtime-library/reference/close.md)<br/>
[_sopen, _wsopen](../../c-runtime-library/reference/sopen-wsopen.md)<br/>
[_open, _wopen](../../c-runtime-library/reference/open-wopen.md)<br/>
