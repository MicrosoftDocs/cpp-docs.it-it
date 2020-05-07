---
title: fgetpos
ms.date: 4/2/2020
api_name:
- fgetpos
- _o_fgetpos
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
- fgetpos
helpviewer_keywords:
- fgetpos function
- streams, file position indicator
ms.assetid: bfa05c38-1135-418c-bda1-d41be51acb62
ms.openlocfilehash: b57a07dbe5c2c746e8af6b96f1864e4f4534849f
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82920357"
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

Se ha esito positivo, **fgetpos** restituisce 0. In caso di errore, restituisce un valore diverso da zero e imposta **errno** su una delle costanti manifeste seguenti, definite in stdio. H): **EBADF**, che indica che il flusso specificato non è un puntatore di file valido o non è accessibile, o **EINVAL**, il che significa che il valore del *flusso* o il valore di *pos* non è valido, ad esempio se uno dei due è un puntatore null. Se *Stream* o *pos* è un puntatore **null** , la funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

## <a name="remarks"></a>Osservazioni

La funzione **fgetpos** ottiene il valore corrente dell'indicatore di posizione del file dell'argomento del *flusso* e lo archivia nell'oggetto a cui punta *pos*. La funzione **fsetpos** può usare in un secondo momento le informazioni archiviate in *pos* per reimpostare il puntatore dell'argomento del *flusso* sulla relativa posizione all'ora in cui è stato chiamato **fgetpos** . Il valore *pos* viene archiviato in un formato interno ed è destinato a essere utilizzato solo da **fgetpos** e **fsetpos**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
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

## <a name="input-crt_fgetpostxt"></a>Input: crt_fgetpos.txt

```Input
fgetpos gets a stream's file-position indicator.
```

### <a name="output-crt_fgetpostxt"></a>Output crt_fgetpos.txt

```Output
after fgetpos: gets a stream
after fsetpos: gets a stream
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fsetpos](fsetpos.md)<br/>
