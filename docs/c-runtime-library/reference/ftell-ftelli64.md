---
title: ftell, _ftelli64
ms.date: 11/04/2016
api_name:
- _ftelli64
- ftell
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
- _ftelli64
- ftell
helpviewer_keywords:
- ftell function
- ftelli64 function
- _ftelli64 function
- file pointers [C++], getting current position
- file pointers [C++]
ms.assetid: 40149cd8-65f2-42ff-b70c-68e3e918cdd7
ms.openlocfilehash: fda309420e6ae241d3c8ed73c3d41c8ae50de662
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70956459"
---
# <a name="ftell-_ftelli64"></a>ftell, _ftelli64

Ottiene la posizione corrente di un puntatore del file.

## <a name="syntax"></a>Sintassi

```C
long ftell(
   FILE *stream
);
__int64 _ftelli64(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*stream*<br/>
Struttura del **file** di destinazione.

## <a name="return-value"></a>Valore restituito

**ftell** e **_ftelli64** restituiscono la posizione corrente del file. Il valore restituito da **ftell** e **_ftelli64** potrebbe non riflettere l'offset di byte fisico per i flussi aperti in modalità testo, perché la modalità testo causa la conversione del feed della riga di ritorno a capo. Usare **ftell** con [fseek](fseek-fseeki64.md) o **_ftelli64** con [_fseeki64](fseek-fseeki64.md) per tornare correttamente ai percorsi dei file. In errore, **ftell** e **_ftelli64** richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1L e impostano **errno** su una delle due costanti, definite in errno. H. La costante **EBADF** indica che l'argomento del *flusso* non è un valore di puntatore di file valido o non fa riferimento a un file aperto. **EINVAL** indica che un argomento del *flusso* non valido è stato passato alla funzione. Nei dispositivi che non sono in grado di eseguire la ricerca, ad esempio terminali e stampanti, oppure quando il *flusso* non fa riferimento a un file aperto, il valore restituito non è definito.

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Le funzioni **ftell** e **_ftelli64** recuperano la posizione corrente del puntatore del file (se presente) associato al *flusso*. La posizione viene espressa come offset rispetto all'inizio del flusso.

Si noti che quando un file viene aperto per l'accodamento dei dati, la posizione corrente nel file è determinata dall'ultima operazione di I/O e non dalla posizione in cui si verificherà la scrittura successiva. Ad esempio, se un file viene aperto per un accodamento e l'ultima operazione è stata una lettura, la posizione nel file è il punto in cui inizierebbe l'operazione di lettura successiva e non quella in cui inizierebbe inizia la scrittura successiva. (Quando un file viene aperto per l'accodamento, la posizione nel file viene spostata alla fine del file prima di qualsiasi operazione di scrittura.) Se non è ancora stata eseguita alcuna operazione di I/O su un file aperto per l'accodamento, la posizione nel file è l'inizio del file.

In modalità testo CTRL+Z viene interpretato nell'input come un carattere di fine file. Nei file aperti per la lettura/scrittura , fopen e tutte le routine correlate verificano la presenza di una combinazione di tasti CTRL + Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso della combinazione di **ftell** e [fseek](fseek-fseeki64.md) o **_ftelli64** e [_fseeki64](fseek-fseeki64.md)per spostarsi all'interno di un file che termina con CTRL + Z può causare un comportamento non corretto di **ftell** o **_ftelli64** in prossimità della fine del file.

Questa funzione blocca il thread chiamante durante l'esecuzione e pertanto è thread-safe. Per una versione non di blocco, vedere **_ftell_nolock**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazioni facoltative|
|--------------|---------------------|----------------------|
|**ftell**|\<stdio.h>|\<errno.h>|
|**_ftelli64**|\<stdio.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_ftell.c
// This program opens a file named CRT_FTELL.C
// for reading and tries to read 100 characters. It
// then uses ftell to determine the position of the
// file pointer and displays this position.

#include <stdio.h>

FILE *stream;

int main( void )
{
   long position;
   char list[100];
   if( fopen_s( &stream, "crt_ftell.c", "rb" ) == 0 )
   {
      // Move the pointer by reading data:
      fread( list, sizeof( char ), 100, stream );
      // Get position after read:
      position = ftell( stream );
      printf( "Position after trying to read 100 bytes: %ld\n",
              position );
      fclose( stream );
   }
}
```

```Output
Position after trying to read 100 bytes: 100
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[fgetpos](fgetpos.md)<br/>
[fseek, _fseeki64](fseek-fseeki64.md)<br/>
[_lseek, _lseeki64](lseek-lseeki64.md)<br/>
