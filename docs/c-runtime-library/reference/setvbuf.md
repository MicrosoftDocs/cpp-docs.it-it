---
title: setvbuf
ms.date: 11/04/2016
apiname:
- setvbuf
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
- setvbuf
helpviewer_keywords:
- controlling stream buffering
- stream buffering
- setvbuf function
ms.assetid: 6aa5aa37-3408-4fa0-992f-87f9f9c4baea
ms.openlocfilehash: d4336c6cc478a035fcc0b9b059a7161d58bc4442
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51328097"
---
# <a name="setvbuf"></a>setvbuf

Controlla il buffering del flusso e le dimensioni del buffer.

## <a name="syntax"></a>Sintassi

```C
int setvbuf(
   FILE *stream,
   char *buffer,
   int mode,
   size_t size
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Puntatore alla struttura **FILE**.

*buffer*<br/>
Buffer allocato dall'utente.

*mode*<br/>
Modalità di buffering.

*size*<br/>
Dimensioni del buffer in byte. Intervallo consentito: 2 < = *dimensioni* < = INT_MAX (2147483647). Internamente, il valore specificato per *dimensioni* viene arrotondato per difetto al multiplo più vicino di 2.

## <a name="return-value"></a>Valore restituito

Restituisce 0 in caso di esito positivo.

Se *flusso* viene **NULL**, o se *modalità* oppure *dimensione* è non all'interno di una modifica valida, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta **errno** al **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **setvbuf** funzione consente al programma di controllare sia il buffering e per la dimensione del buffer *stream*. *flusso* deve fare riferimento a un file aperto che non è stata eseguita un'operazione dei / o dopo l'apertura. La matrice a cui punta *buffer* viene usato come buffer, a meno che non è **NULL**, nel qual caso **setvbuf** Usa un buffer allocato automaticamente della lunghezza  *le dimensioni*/2 \* 2 byte.

La modalità deve essere **iofbf**, **iolbf**, o **ionbf**. Se *modalità* viene **iofbf** oppure **iolbf**, quindi *dimensione* viene usato come le dimensioni del buffer. Se *modalità* viene **ionbf**, il flusso è non memorizzato nel buffer e *dimensioni* e *buffer* vengono ignorati. I valori per *modalità* e i relativi significati sono:

|*modalità* valore|Significato|
|-|-|
| **IOFBF** | Buffering completo vale a dire *buffer* viene usato come buffer e *dimensioni* viene usato come le dimensioni del buffer. Se *buffer* viene **NULL**, un buffer allocato automaticamente *dimensioni* byte viene utilizzato. |
| **IOLBF** | Per alcuni sistemi, viene così fornito il buffering di riga. Tuttavia, per Win32, il comportamento è identico **iofbf** -Buffering completo. |
| **IONBF** | Nessun buffer viene usato, indipendentemente dalla *buffer* oppure *dimensioni*. |

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**setvbuf**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_setvbuf.c
// This program opens two streams: stream1
// and stream2. It then uses setvbuf to give stream1 a
// user-defined buffer of 1024 bytes and stream2 no buffer.
//

#include <stdio.h>

int main( void )
{
   char buf[1024];
   FILE *stream1, *stream2;

   if( fopen_s( &stream1, "data1", "a" ) == 0 &&
       fopen_s( &stream2, "data2", "w" ) == 0 )
   {
      if( setvbuf( stream1, buf, _IOFBF, sizeof( buf ) ) != 0 )
         printf( "Incorrect type or size of buffer for stream1\n" );
      else
         printf( "'stream1' now has a buffer of 1024 bytes\n" );
      if( setvbuf( stream2, NULL, _IONBF, 0 ) != 0 )
         printf( "Incorrect type or size of buffer for stream2\n" );
      else
         printf( "'stream2' now has no buffer\n" );
      _fcloseall();
   }
}
```

```Output
'stream1' now has a buffer of 1024 bytes
'stream2' now has no buffer
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[fflush](fflush.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[setbuf](setbuf.md)<br/>
