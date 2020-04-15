---
title: fseek, _fseeki64
ms.date: 4/2/2020
api_name:
- _fseeki64
- fseek
- _o__fseeki64
- _o_fseek
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
ms.openlocfilehash: e8f6021a0b770f6b435653c190d5968f9ac50a57
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81345763"
---
# <a name="fseek-_fseeki64"></a>fseek, _fseeki64

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

*Origine*<br/>
Posizione iniziale.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **fseek** e **_fseeki64** restituisce 0. In caso contrario, viene restituito un valore diverso da zero. Nei dispositivi che non supportano la ricerca, il valore restituito è indefinito. Se *stream* è un puntatore null o se *origin* non è uno dei valori consentiti descritti di seguito, **fseek** e **_fseeki64** richiamare il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono -1.

## <a name="remarks"></a>Osservazioni

Le funzioni **fseek** e **_fseeki64** spostano il puntatore del file (se presente) associato al *flusso* in una nuova posizione che viene *compensata* tra i byte *dall'origine.* L'operazione successiva nel flusso viene eseguita nella nuova posizione. In un flusso aperto per l'aggiornamento, l'operazione successiva può essere un'operazione di lettura o scrittura. *L'origine* dell'argomento deve essere una delle costanti seguenti, definite in STDIO. H:

|valore di origine|Significato|
|-|-|
| **SEEK_CUR** | Posizione corrente del puntatore del file. |
| **SEEK_END** | Fine del file. |
| **SEEK_SET** | Inizio del file. |

Potete usare **la ricerca** e **la _fseeki64** per riposizionare il puntatore in un punto qualsiasi di un file. Il puntatore può essere posizionato anche oltre la fine del file. **Fseek** e **_fseeki64** cancella l'indicatore di fine file e nega l'effetto di eventuali chiamate [ungetc](ungetc-ungetwc.md) precedenti contro il *flusso*.

Quando un file viene aperto per l'accodamento dei dati, la posizione corrente nel file è determinata dall'ultima operazione di I/O e non dalla posizione in cui si verificherà la scrittura successiva. Se non è ancora stata eseguita alcuna operazione di I/O su un file aperto per l'accodamento, la posizione nel file è l'inizio del file.

Per i flussi aperti in modalità testo, **fseek** e **_fseeki64** hanno un utilizzo limitato, perché le conversioni di avanzamento riga ritorno a capo possono causare **fseek** e **_fseeki64** per produrre risultati imprevisti. Le uniche operazioni di **ricerca** e **_fseeki64** garantite per funzionare sui flussi aperti in modalità testo sono:

- Ricerca con offset 0 rispetto a qualsiasi valore di origine.

- Ricerca dall'inizio del file con un valore di offset restituito da una chiamata a [ftell](ftell-ftelli64.md) quando si utilizza **fseek** o [_ftelli64](ftell-ftelli64.md) quando si utilizza **_fseeki64**.

In modalità testo, inoltre, CTRL+Z viene interpretato nell'input come un carattere di fine file. Nei file aperti per la lettura/scrittura, [fopen](fopen-wfopen.md) e tutte le routine correlate controllano la presenza di un CTRL alla fine del file e, se possibile, lo rimuovono. Ciò avviene in quanto l'utilizzo della combinazione di **fseek** e [ftell](ftell-ftelli64.md) o **_fseeki64** e [_ftelli64](ftell-ftelli64.md), per spostarsi all'interno di un file che termina con un CTRL, può causare il **sicomino** o **_fseeki64** in modo non corretto vicino alla fine del file.

Quando CRT apre un file che inizia con un BOM (Byte Order Mark), il puntatore del file viene posizionato dopo il BOM, ovvero all'inizio del contenuto effettivo del file. Se è necessario **cercare** all'inizio del file, utilizzare [ftell](ftell-ftelli64.md) per ottenere la posizione iniziale e **fseek** ad esso, piuttosto che per la posizione 0.

Questa funzione blocca altri thread durante l'esecuzione e pertanto è thread-safe. Per una versione che non blocca i thread, vedere [_fseek_nolock, _fseeki64_nolock](fseek-nolock-fseeki64-nolock.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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
[Riavvolgimento](rewind.md)<br/>
