---
title: tmpfile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- tmpfile
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
- tmpfile
dev_langs:
- C++
helpviewer_keywords:
- temporary files
- tmpfile function
- temporary files, creating
ms.assetid: c4a4dc24-70da-438d-ae4e-98352d88e375
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7d808b26341ea862965dc33c4c3b3b00ff06f2c6
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="tmpfile"></a>tmpfile

Crea un file temporaneo. Questa funzione è deprecata perché è disponibile una versione più sicura. Vedere [tmpfile_s](tmpfile-s.md).

## <a name="syntax"></a>Sintassi

```C
FILE *tmpfile( void );
```

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **tmpfile** restituisce un puntatore di flusso. In caso contrario, restituisce un **NULL** puntatore.

## <a name="remarks"></a>Note

Il **tmpfile** funzione crea un file temporaneo e restituisce un puntatore a tale flusso. Il file temporaneo viene creato nella directory radice. Per creare un file temporaneo in una directory diversa dalla radice, usare [tmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md) o [tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md) in combinazione con [fopen](fopen-wfopen.md).

Se non è possibile aprire il file, **tmpfile** restituisce un **NULL** puntatore. Il file temporaneo viene eliminato automaticamente quando il file viene chiuso, quando il programma termina normalmente, o quando **rmtmp** viene chiamato, presupponendo che la directory di lavoro corrente rimane invariato. Il file temporaneo viene aperto in **w + b** modalità (lettura/scrittura binario).

Errore può verificarsi se si tenta di più di TMP_MAX (vedere STDIO. H) chiamate con **tmpfile**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**tmpfile**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

> [!NOTE]
> Per l'esecuzione di questo esempio in Windows Vista sono necessari privilegi di amministratore.

```C
// crt_tmpfile.c
// compile with: /W3
// This program uses tmpfile to create a
// temporary file, then deletes this file with _rmtmp.
#include <stdio.h>

int main( void )
{
   FILE *stream;
   int  i;

   // Create temporary files.
   for( i = 1; i <= 3; i++ )
   {
      if( (stream = tmpfile()) == NULL ) // C4996
      // Note: tmpfile is deprecated; consider using tmpfile_s instead
         perror( "Could not open new temporary file\n" );
      else
         printf( "Temporary file %d was created\n", i );
   }

   // Remove temporary files.
   printf( "%d temporary files deleted\n", _rmtmp() );
}
```

```Output
Temporary file 1 was created
Temporary file 2 was created
Temporary file 3 was created
3 temporary files deleted
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_rmtmp](rmtmp.md)<br/>
[_tempnam, _wtempnam, tmpnam, _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)<br/>
