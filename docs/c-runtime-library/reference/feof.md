---
title: feof | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- feof
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
- feof
dev_langs:
- C++
helpviewer_keywords:
- end of file, testing for
- feof function
ms.assetid: 09081eee-7c4b-4189-861f-2fad95d3ec6d
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3a14829450c440487e02c7e2c3c64f97c1b83cbb
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

*Flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Il **feof** funzione restituisce un valore diverso da zero se un'operazione di lettura ha tentato di leggere oltre la fine del file; in caso contrario, restituisce 0. Se il puntatore di flusso **NULL**, la funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e il **feof** restituisce 0.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **feof** routine (implementata sia come una funzione che come macro) determina se la fine del *flusso* è stato passato. Quando viene passata la fine del file, leggere le operazioni restituiscono un indicatore di fine del file fino a quando il flusso è chiuso o fino alla [rewind](rewind.md), **fsetpos**, [fseek](fseek-fseeki64.md), o  **clearerr** viene chiamato su di essa.

Se, ad esempio, un file contiene 10 byte e leggere dal file di 10 byte **feof** restituirà 0 perché, anche se il puntatore del file si trova alla fine del file, non si è tentato di leggere oltre la fine. Solo dopo che si tenta di leggere un byte 11 verrà **feof** restituiscono un valore diverso da zero.

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

## <a name="input-crtfeoftxt"></a>Input: crt_feof.txt

```Input
Line one.
Line two.
```

### <a name="output"></a>Output

```Output
Number of bytes read = 19
```

## <a name="see-also"></a>Vedere anche

[Gestione degli errori](../../c-runtime-library/error-handling-crt.md)<br/>
[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[clearerr](clearerr.md)<br/>
[_eof](eof.md)<br/>
[ferror](ferror.md)<br/>
[perror, _wperror](perror-wperror.md)<br/>
