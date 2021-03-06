---
description: 'Altre informazioni su: fputs, fputws'
title: fputs, fputws
ms.date: 03/02/2021
api_name:
- fputs
- fputws
- _o_fputs
- _o_fputws
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
- fputs
- fputws
- _fputts
helpviewer_keywords:
- streams, writing strings to
- fputws function
- _fputts function
- fputs function
- fputts function
ms.openlocfilehash: 3b38f3c369a567c00f17a0f4d905de324100a3d4
ms.sourcegitcommit: c0c9cdae79f19655e809a4979227c51bb19cff63
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2021
ms.locfileid: "102236790"
---
# <a name="fputs-fputws"></a>`fputs`, `fputws`

Scrive una stringa in un flusso.

## <a name="syntax"></a>Sintassi

```C
int fputs(
   const char *str,
   FILE *stream
);
int fputws(
   const wchar_t *str,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*`str`*\
Stringa di output.

*`stream`*\
Puntatore alla **`FILE`** struttura.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un valore non negativo se ha esito positivo. In un errore **`fputs`** e **`fputws`** restituiscono **`EOF`** . Se *`str`* o *`stream`* è un puntatore null, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **`errno`** su **`EINVAL`** e quindi restituiscono **`EOF`** .

Per ulteriori informazioni sui codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

Ognuna di queste funzioni copia nell' *`str`* output *`stream`* nella posizione corrente. **`fputws`** copia l'argomento a caratteri wide *`str`* in *`stream`* come una stringa di caratteri multibyte o una stringa di caratteri wide a seconda che *`stream`* venga aperto in modalità testo o in modalità binaria, rispettivamente. Nessuna delle funzioni copia il carattere Null di terminazione.

Le due funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI. **`fputs`** Attualmente non supporta l'output in un flusso UNICODE.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificarlo, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**`_fputts`**|**`fputs`**|**`fputs`**|**`fputws`**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**`fputs`**|\<stdio.h>|
|**`fputws`**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app piattaforma UWP (Universal Windows Platform) (UWP). Gli handle del flusso standard associati alla console,, **`stdin`** e, **`stdout`** **`stderr`** devono essere reindirizzati prima che le funzioni di runtime C possano usarle nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fputs.c
// This program uses fputs to write
// a single line to the stdout stream.

#include <stdio.h>

int main( void )
{
   fputs( "Hello world from fputs.\n", stdout );
}
```

```Output
Hello world from fputs.
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)\
[`fgets`, `fgetws`](fgets-fgetws.md)\
[`gets`, `_getws`](../../c-runtime-library/gets-getws.md)\
[`puts`, `_putws`](puts-putws.md)
