---
title: fgetpos
ms.date: 11/04/2016
apiname:
- fgetpos
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
- fgetpos
helpviewer_keywords:
- fgetpos function
- streams, file position indicator
ms.assetid: bfa05c38-1135-418c-bda1-d41be51acb62
ms.openlocfilehash: e213c9830ffe6edf04b12a80828f14cc48f77524
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50658419"
---
# <a name="fgetpos"></a>fgetpos

Ottiene un indicatore di posizione file del flusso.

## <a name="syntax"></a>Sintassi

```C
int fgetpos(
   FILE *stream,
   fpos_t *pos
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Flusso di destinazione.

*POS*<br/>
Archiviazione dell'indicatore di posizione.

## <a name="return-value"></a>Valore restituito

Caso di esito positivo **fgetpos** restituisce 0. In caso di errore, viene restituito un valore diverso da zero e imposta **errno** a uno dei seguenti manifesto costanti (definite in STDIO. H): **EBADF**, ovvero il flusso specificato non è un puntatore di file valido o non è accessibile, o **EINVAL**, vale a dire il *flusso* valore o il valore di *pos* è valido, ad esempio se è un puntatore null. Se *stream* oppure *pos* è un **NULL** puntatore, la funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

## <a name="remarks"></a>Note

Il **fgetpos** funzione Ottiene il valore corrente del *stream* indicatore di posizione dell'argomento e archivia nell'oggetto a cui fa riferimento *pos*. Il **fsetpos** funzione può utilizzare in un secondo momento le informazioni archiviate in *pos* reimpostare il *flusso* puntatore dell'argomento sulla propria posizione al momento **fgetpos** è stato chiamato. Il *pos* valore viene archiviato in un formato interno e deve essere utilizzato solo dai **fgetpos** e **fsetpos**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fgetpos**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fgetpos.c
// This program uses fgetpos and fsetpos to
// return to a location in a file.

#include <stdio.h>

int main( void )
{
   FILE   *stream;
   fpos_t pos;
   char   buffer[20];

   if( fopen_s( &stream, "crt_fgetpos.txt", "rb" ) ) {
      perror( "Trouble opening file" );
      return -1;
   }

   // Read some data and then save the position.
   fread( buffer, sizeof( char ), 8, stream );
   if( fgetpos( stream, &pos ) != 0 ) {
      perror( "fgetpos error" );
      return -1;
   }

   fread( buffer, sizeof( char ), 13, stream );
   printf( "after fgetpos: %.13s\n", buffer );

   // Restore to old position and read data
   if( fsetpos( stream, &pos ) != 0 ) {
      perror( "fsetpos error" );
      return -1;
   }

   fread( buffer, sizeof( char ), 13, stream );
   printf( "after fsetpos: %.13s\n", buffer );
   fclose( stream );
}
```

## <a name="input-crtfgetpostxt"></a>Input: crt_fgetpos.txt

```Input
fgetpos gets a stream's file-position indicator.
```

### <a name="output-crtfgetpostxt"></a>Output crt_fgetpos.txt

```Output
after fgetpos: gets a stream
after fsetpos: gets a stream
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fsetpos](fsetpos.md)<br/>
