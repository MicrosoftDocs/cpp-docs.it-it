---
description: 'Altre informazioni su: clearerr'
title: clearerr
ms.date: 4/2/2020
api_name:
- clearerr
- _o_clearerr
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
- clearerr
helpviewer_keywords:
- error indicator for streams
- resetting stream error indicator
- clearerr function
ms.assetid: a9711cd4-3335-43d4-a018-87bbac5b3bac
ms.openlocfilehash: 3085039b142f4aa5eec84259626deef961e37fa0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97260787"
---
# <a name="clearerr"></a>clearerr

Reimposta l'indicatore di errore per un flusso. È disponibile una versione più sicura di questa funzione, vedere [clearerr_s](clearerr-s.md).

## <a name="syntax"></a>Sintassi

```C
void clearerr(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="remarks"></a>Commenti

La funzione **clearerr** Reimposta l'indicatore di errore e l'indicatore di fine del file per il *flusso*. Gli indicatori di errore non vengono cancellati automaticamente. una volta impostato l'indicatore di errore per un flusso specificato, le operazioni su tale flusso continuano a restituire un valore di errore fino a quando non viene chiamato **clearerr**, [fseek](fseek-fseeki64.md), **fsetpos** o [Rewind](rewind.md) .

Se il *flusso* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce. Per altre informazioni sui codici **errno** e Error, vedere [costanti errno](../../c-runtime-library/errno-constants.md).

È disponibile una versione più sicura di questa funzione, vedere [clearerr_s](clearerr-s.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**clearerr**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_clearerr.c
// This program creates an error
// on the standard input stream, then clears
// it so that future reads won't fail.

#include <stdio.h>

int main( void )
{
   int c;
   // Create an error by writing to standard input.
   putc( 'c', stdin );
   if( ferror( stdin ) )
   {
      perror( "Write error" );
      clearerr( stdin );
   }

   // See if read causes an error.
   printf( "Will input cause an error? " );
   c = getc( stdin );
   if( ferror( stdin ) )
   {
      perror( "Read error" );
      clearerr( stdin );
   }
   else
      printf( "No read error\n" );
}
```

### <a name="input"></a>Input

```Input
n
```

### <a name="output"></a>Output

```Output
Write error: No error
Will input cause an error? n
No read error
```

## <a name="see-also"></a>Vedi anche

[Gestione degli errori](../../c-runtime-library/error-handling-crt.md)<br/>
[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_eof](eof.md)<br/>
[feof](feof.md)<br/>
[ferror](ferror.md)<br/>
[perror, _wperror](perror-wperror.md)<br/>
