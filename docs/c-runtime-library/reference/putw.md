---
title: _putw
ms.date: 11/04/2016
api_name:
- _putw
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
- _putw
- putw
helpviewer_keywords:
- integers, writing to streams
- putw function
- streams, writing integers to
- _putw function
ms.assetid: 83d63644-249d-4a39-87e5-3b7aa313968d
ms.openlocfilehash: 0515ae911a653bde1208b1711bf33dd8b4e2f8e1
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70949761"
---
# <a name="_putw"></a>_putw

Scrive un Integer in un flusso.

## <a name="syntax"></a>Sintassi

```C
int _putw(
   int binint,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*binint*<br/>
Integer binario da restituire.

*stream*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Restituisce il valore scritto. Un valore restituito di **EOF** potrebbe indicare un errore. Poiché **EOF** è anche un valore intero legittimo, usare **Ferrer** per verificare un errore. Se il *flusso* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **EOF**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

La funzione **_putw** scrive un valore binario di tipo **int** nella posizione corrente del *flusso.* **_putw** non influisce sull'allineamento degli elementi nel flusso né presuppone un allineamento speciale. **_putw** è principalmente per la compatibilità con le librerie precedenti. I problemi di portabilità possono verificarsi con **_putw** perché le dimensioni di un **int** e l'ordine dei byte all'interno di un **int** sono diverse tra i sistemi.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_putw**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_putw.c
/* This program uses _putw to write a
* word to a stream, then performs an error check.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   FILE *stream;
   unsigned u;
   if( fopen_s( &stream, "data.out", "wb" ) )
      exit( 1 );
   for( u = 0; u < 10; u++ )
   {
      _putw( u + 0x2132, stream );   /* Write word to stream. */
      if( ferror( stream ) )         /* Make error check. */
      {
         printf( "_putw failed" );
         clearerr_s( stream );
         exit( 1 );
      }
   }
   printf( "Wrote ten words\n" );
   fclose( stream );
}
```

### <a name="output"></a>Output

```Output
Wrote ten words
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_getw](getw.md)<br/>
