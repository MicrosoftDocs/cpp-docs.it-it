---
title: fseek, _fseeki64
ms.date: 11/04/2016
apiname:
- _fseeki64
- fseek
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
- fseek
- _fseeki64
helpviewer_keywords:
- _fseeki64 function
- fseeki64 function
- fseek function
- file pointers [C++], moving
- file pointers [C++]
- seek file pointers
ms.assetid: f6bb1f8b-891c-426e-9e14-0e7e5c62df70
ms.openlocfilehash: 4cfb4bcea4a110cf8a9c9db664c42d6603328cf0
ms.sourcegitcommit: 878a164fe6d550ca81ab87d8425c8d3cd52fe384
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/22/2019
ms.locfileid: "68376091"
---
# <a name="fseek-fseeki64"></a>fseek, _fseeki64

Sposta il puntatore del file in una posizione specificata.

## <a name="syntax"></a>Sintassi

```C
int fseek(
   FILE *stream,
   long offset,
   int origin
);
int _fseeki64(
   FILE *stream,
   __int64 offset,
   int origin
);
```

### <a name="parameters"></a>Parametri

*stream*<br/>
Puntatore alla struttura **FILE**.

*offset*<br/>
Numero di byte da *origin*.

*origin*<br/>
Posizione iniziale.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, **fseek** e **_fseeki64** restituiscono 0. In caso contrario, viene restituito un valore diverso da zero. Nei dispositivi che non supportano la ricerca, il valore restituito è indefinito. Se il *flusso* è un puntatore null o se *Origin* non è uno dei valori consentiti descritti di seguito, **fseek** e **_fseeki64** richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono-1.

## <a name="remarks"></a>Note

Le funzioni **fseek** e **_fseeki64** spostano il puntatore del file (se presente) associato al *flusso* in una nuova posizione che è un *offset* di byte dall' *origine*. L'operazione successiva nel flusso viene eseguita nella nuova posizione. In un flusso aperto per l'aggiornamento, l'operazione successiva può essere un'operazione di lettura o scrittura. L' *origine* dell'argomento deve essere una delle costanti seguenti, definite in stdio. H

|valore di origine|Significato|
|-|-|
| **SEEK_CUR** | Posizione corrente del puntatore del file. |
| **SEEK_END** | Fine del file. |
| **SEEK_SET** | Inizio del file. |

È possibile usare **fseek** e **_fseeki64** per riposizionare il puntatore in qualsiasi punto di un file. Il puntatore può essere posizionato anche oltre la fine del file. **fseek** e **_fseeki64** cancellano l'indicatore di fine del file e negano l'effetto di eventuali chiamate [ungetc](ungetc-ungetwc.md) precedenti rispetto al *flusso*.

Quando un file viene aperto per l'accodamento dei dati, la posizione corrente nel file è determinata dall'ultima operazione di I/O e non dalla posizione in cui si verificherà la scrittura successiva. Se non è ancora stata eseguita alcuna operazione di I/O su un file aperto per l'accodamento, la posizione nel file è l'inizio del file.

Per i flussi aperti in modalità testo, **fseek** e **_fseeki64** hanno un uso limitato, perché le conversioni di feed di ritorno a capo e di avanzamento riga possono provocare risultati imprevisti per **fseek** e **_fseeki64** . Le uniche operazioni **fseek** e **_fseeki64** che funzionano sui flussi aperti in modalità testo sono le seguenti:

- Ricerca con offset 0 rispetto a qualsiasi valore di origine.

- Ricerca dall'inizio del file con un valore di offset restituito da una chiamata a [ftell](ftell-ftelli64.md) quando si usa **fseek** o [_ftelli64](ftell-ftelli64.md) quando si usa **_fseeki64**.

In modalità testo, inoltre, CTRL+Z viene interpretato nell'input come un carattere di fine file. Nei file aperti per la lettura/scrittura [](fopen-wfopen.md) , fopen e tutte le routine correlate verificano la presenza di una combinazione di tasti CTRL + Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso della combinazione di **fseek** e [ftell](ftell-ftelli64.md) o **_fseeki64** e [_ftelli64](ftell-ftelli64.md)per spostarsi all'interno di un file che termina con CTRL + Z può causare un comportamento non corretto di **fseek** o **_fseeki64** in prossimità della fine del file.

Quando CRT apre un file che inizia con un BOM (Byte Order Mark), il puntatore del file viene posizionato dopo il BOM, ovvero all'inizio del contenuto effettivo del file. Se è necessario **fseek** all'inizio del file, utilizzare [ftell](ftell-ftelli64.md) per ottenere la posizione iniziale e **fseek** al suo posto anziché alla posizione 0.

Questa funzione blocca altri thread durante l'esecuzione e pertanto è thread-safe. Per una versione che non blocca i thread, vedere [_fseek_nolock, _fseeki64_nolock](fseek-nolock-fseeki64-nolock.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fseek**|\<stdio.h>|
|**_fseeki64**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fseek.c
// This program opens the file FSEEK.OUT and
// moves the pointer to the file's beginning.

#include <stdio.h>

int main( void )
{
   FILE *stream;
   char line[81];
   int  result;

   if ( fopen_s( &stream, "fseek.out", "w+" ) != 0 )
   {
      printf( "The file fseek.out was not opened\n" );
      return -1;
   }
   fprintf( stream, "The fseek begins here: "
                    "This is the file 'fseek.out'.\n" );
   result = fseek( stream, 23L, SEEK_SET);
   if( result )
      perror( "Fseek failed" );
   else
   {
      printf( "File pointer is set to middle of first line.\n" );
      fgets( line, 80, stream );
      printf( "%s", line );
    }
   fclose( stream );
}
```

```Output
File pointer is set to middle of first line.
This is the file 'fseek.out'.
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[ftell, _ftelli64](ftell-ftelli64.md)<br/>
[_lseek, _lseeki64](lseek-lseeki64.md)<br/>
[rewind](rewind.md)<br/>
