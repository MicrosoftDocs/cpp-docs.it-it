---
title: tmpfile_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- tmpfile_s
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
- tmpfile_s
dev_langs:
- C++
helpviewer_keywords:
- temporary files
- tmpfile_s function
- temporary files, creating
ms.assetid: 50879c69-215e-425a-a2a3-8b5467121eae
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 57c230dedd3415a272e168b586a16ccb03f5d29a
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="tmpfiles"></a>tmpfile_s

Crea un file temporaneo. Questa è una versione di [tmpfile](tmpfile.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t tmpfile_s(
   FILE** pFilePtr
);
```

### <a name="parameters"></a>Parametri

*pFilePtr*<br/>
Indirizzo di un puntatore per archiviare l'indirizzo del puntatore a un flusso generato.

## <a name="return-value"></a>Valore restituito

Restituisce 0 in caso di esito positivo e un codice di errore in caso di errore.

### <a name="error-conditions"></a>Condizioni di errore

|*pFilePtr*|**Valore restituito**|**Contenuto della***pFilePtr* |
|----------------|----------------------|---------------------------------|
|**NULL**|**EINVAL**|non modificato|

Se si verifica l'errore di convalida dei parametri precedente, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e il valore restituito è **EINVAL**.

## <a name="remarks"></a>Note

Il **tmpfile_s** funzione crea un file temporaneo e un puntatore viene inserito in tale flusso con il *pFilePtr* argomento. Il file temporaneo viene creato nella directory radice. Per creare un file temporaneo in una directory diversa dalla radice, usare [tmpnam_s](tmpnam-s-wtmpnam-s.md) o [tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md) in combinazione con [fopen](fopen-wfopen.md).

Se non è possibile aprire il file, **tmpfile_s** scrive **NULL** per il *pFilePtr* parametro. Il file temporaneo viene eliminato automaticamente quando il file viene chiuso, quando il programma termina normalmente, o quando **rmtmp** viene chiamato, presupponendo che la directory di lavoro corrente rimane invariato. Il file temporaneo viene aperto in **w + b** modalità (lettura/scrittura binario).

Errore può verificarsi se si tenta di oltre **TMP_MAX_S** (vedere STDIO. H) chiamate con **tmpfile_s**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**tmpfile_s**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

> [!NOTE]
> In questo esempio può richiedere privilegi amministrativi per l'esecuzione in Windows.

```C
// crt_tmpfile_s.c
// This program uses tmpfile_s to create a
// temporary file, then deletes this file with _rmtmp.
//

#include <stdio.h>

int main( void )
{
   FILE *stream;
   char tempstring[] = "String to be written";
   int  i;
   errno_t err;

   // Create temporary files.
   for( i = 1; i <= 3; i++ )
   {
      err = tmpfile_s(&stream);
      if( err )
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
