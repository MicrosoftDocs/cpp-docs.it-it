---
title: _tell, _telli64
ms.date: 11/04/2016
api_name:
- _telli64
- _tell
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
- tell
- telli64
- _telli64
- _tell
helpviewer_keywords:
- tell function
- file pointers [C++], getting
- _tell function
- file pointers [C++]
- telli64 function
- _telli64 function
ms.assetid: 1500e8f9-8fec-4253-9eec-ec66125dfc9b
ms.openlocfilehash: 54f672a1b230103d6f9ae1c45d2c9e487764939e
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70946264"
---
# <a name="_tell-_telli64"></a>_tell, _telli64

Ottiene la posizione del puntatore del file.

## <a name="syntax"></a>Sintassi

```C
long _tell(
   int handle
);
__int64 _telli64(
   int handle
);
```

### <a name="parameters"></a>Parametri

*gestire*<br/>
Descrittore del file che fa riferimento a un file aperto.

## <a name="return-value"></a>Valore restituito

Posizione corrente del puntatore del file. Nei dispositivi che non supportano la ricerca, il valore restituito è indefinito.

Un valore restituito di-1L indica un errore. Se *handle* è un descrittore di file non valido, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EBADF** e restituiscono-1L.

Per altre informazioni su questo e su altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .

## <a name="remarks"></a>Note

La funzione **_tell** ottiene la posizione corrente del puntatore del file (se presente) associato all'argomento dell' *handle* . La posizione viene espressa come numero di byte dall'inizio del file. Per la funzione **_telli64** , questo valore è espresso come intero a 64 bit.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_tell**, **_telli64**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_tell.c
// This program uses _tell to tell the
// file pointer position after a file read.
//

#include <io.h>
#include <stdio.h>
#include <fcntl.h>
#include <share.h>
#include <string.h>

int main( void )
{
   int  fh;
   char buffer[500];

   if ( _sopen_s( &fh, "crt_tell.txt", _O_RDONLY, _SH_DENYNO, 0) )
   {
      char buff[50];
      _strerror_s( buff, sizeof(buff), NULL );
      printf( buff );
      exit( -1 );
   }

   if( _read( fh, buffer, 500 ) > 0 )
      printf( "Current file position is: %d\n", _tell( fh ) );
   _close( fh );
}
```

### <a name="input-crt_telltxt"></a>Input: crt_tell.txt

```Input
Line one.
Line two.
```

### <a name="output"></a>Output

```Output
Current file position is: 20
```

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[ftell, _ftelli64](ftell-ftelli64.md)<br/>
[_lseek, _lseeki64](lseek-lseeki64.md)<br/>
