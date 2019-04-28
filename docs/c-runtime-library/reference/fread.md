---
title: fread
ms.date: 11/28/2018
apiname:
- fread
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
- fread
helpviewer_keywords:
- reading data [C++], from input streams
- fread function
- data [C++], reading from input stream
- streams [C++], reading data from
ms.assetid: 9a3c1538-93dd-455e-ae48-77c1e23c53f0
ms.openlocfilehash: 7248eb08409b50d855dbb70c7638a856302b345b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62287876"
---
# <a name="fread"></a>fread

Legge i dati da un flusso.

## <a name="syntax"></a>Sintassi

```C
size_t fread(
   void *buffer,
   size_t size,
   size_t count,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Percorso di archiviazione per i dati.

*size*<br/>
Dimensione dell'elemento in byte.

*count*<br/>
Numero massimo di elementi da leggere.

*stream*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fread** restituisce il numero di elementi completi letti, che possono essere minore di *conteggio* se si verifica un errore o se viene rilevata la fine del file prima di raggiungere *conteggio*. Usare la **feof** oppure **ferror** funzione per distinguere un errore di lettura da una condizione di fine del file. Se *dimensioni* oppure *conteggio* è uguale a 0, **fread** restituisce 0 e il contenuto del buffer è rimasti invariato. Se *stream* oppure *buffer* è un puntatore null **fread** richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** al **EINVAL** e restituisce 0.

Visualizzare [ \_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per altre informazioni su questi codici di errore.

## <a name="remarks"></a>Note

Il **fread** funzione legge fino a *conteggio* elementi di *dimensioni* byte dall'input *flusso* e li archivia in *buffer* . Il puntatore del file associato *flusso* (se presente) viene incrementato del numero di byte effettivamente letti. Se viene aperto il flusso specificato in [modalità testo](../../c-runtime-library/text-and-binary-mode-file-i-o.md), caratteri di nuova riga stile Windows vengono convertiti in caratteri di nuova riga stile Unix. Vale a dire le coppie di ritorno a capo con avanzamento di riga (CRLF) vengono sostituite da caratteri di singolo avanzamento riga (LF). La sostituzione non ha effetto sul puntatore del file o sul valore restituito. La posizione del puntatore del file è indeterminata se si verifica un errore. Non è possibile determinare il valore di un elemento letto parzialmente.

Quando viene utilizzata su un flusso della modalità di testo, se la quantità di dati richiesto (vale a dire *dimensioni* \* *conteggio*) è maggiore o uguale alla classe interna **FILE** \*le dimensioni del buffer (impostazione predefinita è 4096 byte, configurabile mediante [setvbuf](../../c-runtime-library/reference/setvbuf.md)), il flusso di dati viene copiato direttamente nel buffer fornito dall'utente e la conversione di una nuova riga viene eseguita in tale buffer. Poiché i dati convertiti potrebbero essere più brevi rispetto ai dati di flusso copiati nel buffer, i dati precedenti *buffer*\[*return_value* \* *dimensione*] ( in cui *return_value* è il valore restituito da **fread**) possono contenere dati non convertiti dal file. Per questo motivo, è consigliabile null terminare con dati di tipo carattere in *buffer*\[*return_value* \* *dimensione*] Se si intende del buffer per agire come una stringa in formato C. Visualizzare [fopen](fopen-wfopen.md) per informazioni dettagliate sugli effetti della modalità testo e binari.

Questa funzione blocca gli altri thread. Se occorre una versione non di blocco, usare **fread_nolock**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fread**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fread.c
// This program opens a file named FREAD.OUT and
// writes 25 characters to the file. It then tries to open
// FREAD.OUT and read in 25 characters. If the attempt succeeds,
// the program displays the number of actual items read.

#include <stdio.h>

int main( void )
{
   FILE *stream;
   char list[30];
   int  i, numread, numwritten;

   // Open file in text mode:
   if( fopen_s( &stream, "fread.out", "w+t" ) == 0 )
   {
      for ( i = 0; i < 25; i++ )
         list[i] = (char)('z' - i);
      // Write 25 characters to stream
      numwritten = fwrite( list, sizeof( char ), 25, stream );
      printf( "Wrote %d items\n", numwritten );
      fclose( stream );

   }
   else
      printf( "Problem opening the file\n" );

   if( fopen_s( &stream, "fread.out", "r+t" ) == 0 )
   {
      // Attempt to read in 25 characters
      numread = fread( list, sizeof( char ), 25, stream );
      printf( "Number of items read = %d\n", numread );
      printf( "Contents of buffer = %.25s\n", list );
      fclose( stream );
   }
   else
      printf( "File could not be opened\n" );
}
```

```Output
Wrote 25 items
Number of items read = 25
Contents of buffer = zyxwvutsrqponmlkjihgfedcb
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[/ O di testo e File binario](../../c-runtime-library/text-and-binary-mode-file-i-o.md)<br/>
[fopen](fopen-wfopen.md)<br/>
[fwrite](fwrite.md)<br/>
[_read](read.md)<br/>
