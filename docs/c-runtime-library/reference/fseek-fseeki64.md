---
title: fseek, _fseeki64 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- _fseeki64 function
- fseeki64 function
- fseek function
- file pointers [C++], moving
- file pointers [C++]
- seek file pointers
ms.assetid: f6bb1f8b-891c-426e-9e14-0e7e5c62df70
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 01c0eee248090f6bffad6f68b34d59f1a6fa7265
ms.sourcegitcommit: e9ce38decc9f986edab5543de3464b11ebccb123
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2018
ms.locfileid: "42571772"
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

*flusso*<br/>
Puntatore alla struttura **FILE**.

*offset*<br/>
Numero di byte da *origin*.

*origin*<br/>
Posizione iniziale.

## <a name="return-value"></a>Valore restituito

Caso di esito positivo **fseek** e **_fseeki64** restituisce 0. In caso contrario, viene restituito un valore diverso da zero. Nei dispositivi che non supportano la ricerca, il valore restituito è indefinito. Se *stream* è un puntatore null, o se *origin* non è uno dei valori consentiti descritti di seguito, **fseek** e **_fseeki64** invoke non valido gestore di parametri, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** al **EINVAL** e restituiscono -1.

## <a name="remarks"></a>Note

Il **fseek** e **_fseeki64** funzioni si sposta il puntatore del file (se presente) associato *flusso* a una nuova posizione distante *offset* byte da *origin*. L'operazione successiva nel flusso viene eseguita nella nuova posizione. In un flusso aperto per l'aggiornamento, l'operazione successiva può essere un'operazione di lettura o scrittura. L'argomento *origin* deve essere una delle costanti seguenti, definite in STDIO. H:

|valore di origine|Significato|
|-|-|
**SEEK_CUR**|Posizione corrente del puntatore del file.
**SEEK_END**|Fine del file.
**SEEK_SET**|Inizio del file.

È possibile usare **fseek** e **_fseeki64** per riposizionare il puntatore del mouse in qualsiasi punto in un file. Il puntatore può essere posizionato anche oltre la fine del file. **fseek** e **_fseeki64** Cancella l'indicatore di fine del file e Annulla l'effetto di qualsiasi prima [ungetc](ungetc-ungetwc.md) chiama contro *flusso*.

Quando un file viene aperto per l'accodamento dei dati, la posizione corrente nel file è determinata dall'ultima operazione di I/O e non dalla posizione in cui si verificherà la scrittura successiva. Se non è ancora stata eseguita alcuna operazione di I/O su un file aperto per l'accodamento, la posizione nel file è l'inizio del file.

Per i flussi aperti in modalità testo, **fseek** e **_fseeki64** hanno un uso limitato, perché a causa delle conversioni di ritorno a capo con avanzamento di riga **fseek** e **_ fseeki64** per produrre risultati imprevisti. Gli unici **fseek** e **_fseeki64** operazioni certamente funzionanti sui flussi aperti in modalità testo sono:

- Ricerca con offset 0 rispetto a qualsiasi valore di origine.

- La ricerca dall'inizio del file con un valore di offset restituito da una chiamata a [ftell](ftell-ftelli64.md) quando si usa **fseek** oppure [_ftelli64](ftell-ftelli64.md) quando si usa **_fseeki64**.

In modalità testo, inoltre, CTRL+Z viene interpretato nell'input come un carattere di fine file. Nei file aperti per la lettura/scrittura [fopen](fopen-wfopen.md) e tutte le routine correlate verificare la presenza di una combinazione CTRL + Z alla fine del file e rimuovono, se possibile. Ciò avviene perché l'uso del **fseek** e [ftell](ftell-ftelli64.md) oppure **_fseeki64** e [_ftelli64](ftell-ftelli64.md)per spostarsi all'interno di un file che termina con CTRL + Z può causare **fseek** oppure **_fseeki64** a un comportamento non corretto verso la fine del file.

Quando CRT apre un file che inizia con un BOM (Byte Order Mark), il puntatore del file viene posizionato dopo il BOM, ovvero all'inizio del contenuto effettivo del file. Se devi **fseek** all'inizio del file, usare [ftell](ftell-ftelli64.md) per ottenere la posizione iniziale e **fseek** ad esso anziché alla posizione 0.

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
