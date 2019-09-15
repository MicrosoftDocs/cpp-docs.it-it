---
title: _chsize
ms.date: 03/29/2018
api_name:
- _chsize
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
- _chsize
helpviewer_keywords:
- size
- _chsize function
- size, changing file
- files [C++], changing size
- chsize function
ms.assetid: b3e881c5-7b27-4837-a3d4-c51591ab10ff
ms.openlocfilehash: 7fe07b2261396be491b833ff52186024edd0b919
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70942970"
---
# <a name="_chsize"></a>_chsize

Modifica la dimensione di un file. È disponibile una versione più sicura, vedere [_chsize_s](chsize-s.md).

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

**_chsize** restituisce il valore 0 se la dimensione del file è stata modificata correttamente. Un valore restituito pari a-1 indica un errore: **errno** è impostato su **EACCES** se il file specificato è di sola lettura o il file specificato è bloccato per l'accesso, a **EBADF** se il descrittore non è valido, **ENOSPC** se non è rimasto spazio nel dispositivo o **EINVAL** se la *dimensione* è minore di zero.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione **_chsize** estende o tronca il file associato a *FD* alla lunghezza specificata dalla *dimensione*. Il file deve essere aperto in una modalità che consente la scrittura. Se il file viene esteso, vengono aggiunti caratteri null ("\0"). Se il file viene troncato, si perderanno tutti i dati a partire dalla fine del file abbreviato fino alla fine del file originale.

Questa funzione convalida i relativi parametri. Se la *dimensione* è minore di zero o *FD* è un descrittore di file non valido, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_chsize**|\<io.h>|\<errno.h>|

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
[_close](close.md)<br/>
[_sopen, _wsopen](sopen-wsopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
