---
title: fflush
ms.date: 11/04/2016
apiname:
- fflush
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
- fflush
helpviewer_keywords:
- streams, flushing
- flushing
- fflush function
ms.assetid: 8bbc753f-dc74-4e77-b563-74da2835e92b
ms.openlocfilehash: 1d0e1b6f346481935b5b19736a8f9b41fede36e2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50527232"
---
# <a name="fflush"></a>fflush

Scarica un flusso.

## <a name="syntax"></a>Sintassi

```C
int fflush(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fflush** restituisce 0 se il buffer è stato scaricato correttamente. Il valore 0 viene restituito anche nel caso in cui il flusso specificato non ha nessun buffer o viene aperto in sola lettura. Un valore restituito pari **EOF** indica un errore.

> [!NOTE]
> Se **fflush** restituisce **EOF**, i dati potrebbero essere andati persi a causa di un errore di scrittura. Quando si configura un gestore degli errori critici, è consigliabile disattivare il buffering con la **setvbuf** funzione o usare routine i/o a basso livello, ad esempio **Open**, **Close**, e **Write** anziché le funzioni dei / o flusso.

## <a name="remarks"></a>Note

Il **fflush** funzione Svuota il flusso *stream*. Se il flusso è stato aperto in modalità scrittura o in modalità aggiornamento e l'ultima operazione è stata un'operazione di scrittura, il contenuto del buffer di flusso viene scritto nel file sottostante o nel dispositivo e il buffer viene eliminato. Se il flusso è stato aperto in modalità di lettura o se il flusso non ha buffer, la chiamata a **fflush** non ha alcun effetto e qualsiasi buffer viene mantenuto. Una chiamata a **fflush** Annulla l'effetto di qualsiasi chiamata precedente a **ungetc** per il flusso. Il flusso rimane aperto dopo la chiamata.

Se *stream* viene **NULL**, il comportamento è lo stesso di una chiamata a **fflush** su ogni flusso aperto. Tutti i flussi aperti in modalità scrittura e in modalità aggiornamento in cui l'ultima operazione è stata un'operazione di scrittura vengono scaricati. La chiamata non ha effetto su altri flussi.

I buffer sono normalmente gestiti dal sistema operativo, il quale determina il momento ottimale per scrivere automaticamente i dati sul disco: quando un buffer è pieno, quando un flusso viene chiuso o quando un programma termina normalmente senza chiudere i flussi. La funzionalità di commit al disco della libreria di runtime consente di assicurare che i dati critici siano scritti direttamente su disco anziché nei buffer del sistema operativo. Senza riscrivere un programma esistente, è possibile abilitare questa funzionalità collegando i file oggetto del programma a COMMODE.OBJ. Nel file eseguibile risultante, le chiamate a **FlushAll** scrivere il contenuto di tutti i buffer su disco. Solo **FlushAll** e **fflush** interessati da commode. obj.

Per informazioni sul controllo della funzionalità di commit al disco, vedere [I/O del flusso](../../c-runtime-library/stream-i-o.md), [fopen](fopen-wfopen.md) e [_fdopen](fdopen-wfdopen.md).

Questa funzione blocca il thread che chiama e quindi è thread-safe. Per una versione non di blocco, vedere **fflush_nolock**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fflush**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fflush.c
#include <stdio.h>
#include <conio.h>

int main( void )
{
   int integer;
   char string[81];

   // Read each word as a string.
   printf( "Enter a sentence of four words with scanf: " );
   for( integer = 0; integer < 4; integer++ )
   {
      scanf_s( "%s", string, sizeof(string) );
      printf( "%s\n", string );
   }

   // You must flush the input buffer before using gets.
   // fflush on input stream is an extension to the C standard
   fflush( stdin );
   printf( "Enter the same sentence with gets: " );
   gets_s( string, sizeof(string) );
   printf( "%s\n", string );
}
```

```Output

      This is a test
This is a test

```

```Output

      This is a test
This is a testEnter a sentence of four words with scanf: This is a test
This
is
a
test
Enter the same sentence with gets: This is a test
This is a test
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_flushall](flushall.md)<br/>
[setvbuf](setvbuf.md)<br/>
