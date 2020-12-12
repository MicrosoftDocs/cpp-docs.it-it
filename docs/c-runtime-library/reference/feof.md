---
description: 'Altre informazioni su: feof'
title: feof
ms.date: 4/2/2020
api_name:
- feof
- _o_feof
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
- feof
helpviewer_keywords:
- end of file, testing for
- feof function
ms.assetid: 09081eee-7c4b-4189-861f-2fad95d3ec6d
ms.openlocfilehash: 6bfa0382878cef2843f3a6a6e2ba6e6d8c5bed8a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322537"
---
# <a name="feof"></a>feof

Testa la fine del file in un flusso.

## <a name="syntax"></a>Sintassi

```C
int feof(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

La funzione **feof** restituisce un valore diverso da zero se un'operazione di lettura ha tentato di leggere oltre la fine del file; restituisce 0 in caso contrario. Se il puntatore del flusso è **null**, la funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e **feof** restituisce 0.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La routine **feof** (implementata sia come funzione che come macro) determina se è stata passata la fine del *flusso* . Quando viene passata la fine del file, le operazioni di lettura restituiscono un indicatore di fine file fino a quando il flusso non viene chiuso o fino a quando non viene chiamato [Rewind](rewind.md), **fsetpos**, [fseek](fseek-fseeki64.md)o **clearerr** .

Se, ad esempio, un file contiene 10 byte e si leggono 10 byte dal file, **feof** restituirà 0 perché, anche se il puntatore del file si trova alla fine del file, non si è tentato di leggere oltre la fine. Solo dopo il tentativo di leggere un undicesimo byte, **feof** restituirà un valore diverso da zero.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**feof**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_feof.c
// This program uses feof to indicate when
// it reaches the end of the file CRT_FEOF.TXT. It also
// checks for errors with ferror.
//

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   int  count, total = 0;
   char buffer[100];
   FILE *stream;

   fopen_s( &stream, "crt_feof.txt", "r" );
   if( stream == NULL )
      exit( 1 );

   // Cycle until end of file reached:
   while( !feof( stream ) )
   {
      // Attempt to read in 100 bytes:
      count = fread( buffer, sizeof( char ), 100, stream );
      if( ferror( stream ) )      {
         perror( "Read error" );
         break;
      }

      // Total up actual bytes read
      total += count;
   }
   printf( "Number of bytes read = %d\n", total );
   fclose( stream );
}
```

## <a name="input-crt_feoftxt"></a>Input: crt_feof.txt

```Input
Line one.
Line two.
```

### <a name="output"></a>Output

```Output
Number of bytes read = 19
```

## <a name="see-also"></a>Vedi anche

[Gestione degli errori](../../c-runtime-library/error-handling-crt.md)<br/>
[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[clearerr](clearerr.md)<br/>
[_eof](eof.md)<br/>
[ferror](ferror.md)<br/>
[perror, _wperror](perror-wperror.md)<br/>
