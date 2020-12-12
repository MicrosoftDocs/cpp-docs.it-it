---
description: 'Altre informazioni su: fread'
title: fread
ms.date: 4/2/2020
api_name:
- fread
- _o_fread
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fread
helpviewer_keywords:
- reading data [C++], from input streams
- fread function
- data [C++], reading from input stream
- streams [C++], reading data from
ms.assetid: 9a3c1538-93dd-455e-ae48-77c1e23c53f0
ms.openlocfilehash: 131dacd296d4e710ea1b91d9a8578ef06b76a341
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314048"
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

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fread** restituisce il numero di elementi completi effettivamente letti, che può essere minore di *count* se si verifica un errore o se viene rilevata la fine del file prima di raggiungere il *conteggio*. Usare la funzione **feof** o **ferretor** per distinguere un errore di lettura da una condizione di fine del file. Se *size* o *count* è 0, **fread** restituisce 0 e il contenuto del buffer non viene modificato. Se il *flusso* o il *buffer* è un puntatore null, **fread** richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce 0.

Per ulteriori informazioni su questi codici di errore, vedere [ \_ doserrno, errno, \_ sys \_ errlist e \_ sys \_ Nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .

## <a name="remarks"></a>Commenti

La funzione **fread** legge fino a *contare* gli elementi di *dimensioni* byte dal *flusso* di input e li archivia nel *buffer*. Il puntatore del file associato al *flusso* (se ne esiste uno) viene incrementato del numero di byte effettivamente letti. Se il flusso specificato viene aperto in [modalità testo](../../c-runtime-library/text-and-binary-mode-file-i-o.md), le nuove righe dello stile di Windows vengono convertite in nuove righe di tipo UNIX. Ovvero, le coppie ritorno a capo/avanzamento riga (CRLF) vengono sostituite da caratteri di avanzamento riga singolo (LF). La sostituzione non ha effetto sul puntatore del file o sul valore restituito. La posizione del puntatore del file è indeterminata se si verifica un errore. Non è possibile determinare il valore di un elemento letto parzialmente.

Se usato in un flusso in modalità testo, se la quantità di dati richiesti (ovvero il  \* *numero* di dimensioni) è maggiore o uguale alla dimensione del buffer di **file** interno \* (per impostazione predefinita, si tratta di 4096 byte, configurabile tramite [setvbuf](../../c-runtime-library/reference/setvbuf.md)), i dati del flusso vengono copiati direttamente nel buffer fornito dall'utente e la conversione di nuova riga viene eseguita in tale buffer. Poiché i dati convertiti possono essere più brevi rispetto ai dati del flusso copiati nel buffer, i dati RETURN_VALUE dimensione del *buffer* precedente \[  \* ] (dove *RETURN_VALUE* è il valore restituito da **fread**) possono contenere dati non convertiti dal file. Per questo motivo, è consigliabile terminare con null i dati di tipo carattere in *buffer* \[ *RETURN_VALUE* \* *size*] se lo scopo del buffer è fungere da stringa di tipo C. Per informazioni dettagliate sugli effetti della modalità testo e della modalità binaria, vedere [fopen](fopen-wfopen.md) .

Questa funzione blocca gli altri thread. Se è necessaria una versione senza blocco, utilizzare **_fread_nolock**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

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
[I/O di file di testo e binari](../../c-runtime-library/text-and-binary-mode-file-i-o.md)<br/>
[fopen](fopen-wfopen.md)<br/>
[fwrite](fwrite.md)<br/>
[_read](read.md)<br/>
