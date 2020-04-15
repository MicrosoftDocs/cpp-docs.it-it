---
title: tmpfile_s
ms.date: 4/2/2020
api_name:
- tmpfile_s
- _o_tmpfile_s
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
- tmpfile_s
helpviewer_keywords:
- temporary files
- tmpfile_s function
- temporary files, creating
ms.assetid: 50879c69-215e-425a-a2a3-8b5467121eae
ms.openlocfilehash: 8f9dd58abdf1d3225341e40661c14ae3a5013257
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81362466"
---
# <a name="tmpfile_s"></a>tmpfile_s

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

|*pFilePtr*|**Valore restituito**|**Contenuto di**  *pFilePtr*|
|----------------|----------------------|---------------------------------|
|**Null**|**Einval**|non modificato|

Se si verifica l'errore di convalida dei parametri precedente, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EINVAL** e il valore restituito è **EINVAL**.

## <a name="remarks"></a>Osservazioni

La funzione **tmpfile_s** crea un file temporaneo e inserisce un puntatore a tale flusso nell'argomento *pFilePtr.* Il file temporaneo viene creato nella directory radice. Per creare un file temporaneo in una directory diversa dalla radice, usare [tmpnam_s](tmpnam-s-wtmpnam-s.md) o [tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md) in combinazione con [fopen](fopen-wfopen.md).

Se non è possibile aprire il file, **tmpfile_s** scrive **NULL** nel parametro *pFilePtr.* Questo file temporaneo viene eliminato automaticamente quando il file viene chiuso, quando il programma termina normalmente o quando viene chiamato **_rmtmp,** presupponendo che la directory di lavoro corrente non venga modificata. Il file temporaneo viene aperto in modalità **di** lettura/scrittura binaria.

L'errore può verificarsi se si tenta di eseguire più di **TMP_MAX_S** (vedere STDIO. H) chiama con **tmpfile_s**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**tmpfile_s**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

> [!NOTE]
> Questo esempio potrebbe richiedere privilegi amministrativi per l'esecuzione in Windows.

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
