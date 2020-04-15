---
title: setvbuf
ms.date: 4/2/2020
api_name:
- setvbuf
- _o_setvbuf
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
- setvbuf
helpviewer_keywords:
- controlling stream buffering
- stream buffering
- setvbuf function
ms.assetid: 6aa5aa37-3408-4fa0-992f-87f9f9c4baea
ms.openlocfilehash: 203265a8dd85854bcedd737359b856fdc4cce04d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81316255"
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

*Modalità*<br/>
Modalità di buffering.

*Dimensione*<br/>
Dimensioni del buffer in byte. Intervallo consentito: 2 <: *<di dimensioni* e INT_MAX (2147483647). Internamente, il valore fornito per *size* viene arrotondato per eccesso al multiplo più vicino di 2.

## <a name="return-value"></a>Valore restituito

Restituisce 0 in caso di esito positivo.

Se *stream* è **NULL**o se *mode* o *size* non rientra in una modifica valida, viene richiamato il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **setvbuf** consente al programma di controllare sia la dimensione del buffer che la dimensione del buffer per il *flusso*. *stream* deve fare riferimento a un file aperto che non è stato sottoposto a un'operazione di I/O da quando è stato aperto. La matrice a cui punta *buffer* viene utilizzata come buffer, a meno che non sia **NULL** \* , nel qual caso **setvbuf** utilizza un buffer allocato automaticamente di *lunghezza*/2 2 byte.

La modalità deve essere **_IOFBF** **, _IOLBF**o **_IONBF**. Se *mode* è **_IOFBF** o **_IOLBF**, *la dimensione* viene utilizzata come dimensione del buffer. Se *mode* è **_IONBF**, il flusso viene senza buffer e *le dimensioni* e il *buffer* vengono ignorati. I valori per la *modalità* e i relativi significati sono:

|valore *della modalità*|Significato|
|-|-|
| **_IOFBF** | Buffering completo; ovvero, *buffer* viene utilizzato come buffer e *dimensione* viene utilizzato come dimensione del buffer. Se *buffer* è **NULL**, viene utilizzata *una dimensione* del buffer allocata automaticamente byte lunghi. |
| **_IOLBF** | Per alcuni sistemi, viene così fornito il buffering di riga. Tuttavia, per Win32, il comportamento è lo stesso di **_IOFBF** - buffer completo. |
| **_IONBF** | Non viene utilizzato alcun buffer, indipendentemente dal *buffer* o dalla *dimensione*. |

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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
