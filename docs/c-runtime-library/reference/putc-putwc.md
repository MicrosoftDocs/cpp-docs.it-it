---
title: putc, putwc
ms.date: 11/04/2016
apiname:
- putwc
- putc
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
- _puttc
- putwc
- putc
helpviewer_keywords:
- streams, writing characters to
- characters, writing
- putwc function
- putc function
- _puttc function
- puttc function
ms.assetid: a37b2e82-9d88-4565-8190-ff8d04c0ddb9
ms.openlocfilehash: 05bbb5434e6626076aab0d574b04058ec730b77c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50444695"
---
# <a name="putc-putwc"></a>putc, putwc

Scrive un carattere in un flusso.

## <a name="syntax"></a>Sintassi

```C
int putc(
   int c,
   FILE *stream
);
wint_t putwc(
   wchar_t c,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Carattere da scrivere.

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Restituisce il carattere scritto. Per indicare un errore o condizione di fine del file, **putc** e **putchar** restituiscono * * EOF`; **putwc` e **putwchar** restituire **WEOF**. Per tutte e quattro le routine, usare [ferror](ferror.md) o [feof](feof.md) per verificare la presenza di un errore o della fine del file. Se viene passato un puntatore null *stream*, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EOF** oppure **WEOF** e impostare **errno** al **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **putc** routine scrive il carattere singolo *c* all'output *flusso* in corrispondenza della posizione corrente. Qualsiasi numero intero può essere passato a **putc**, ma solo gli 8 bit inferiori vengono scritte. Il **putchar** routine è identico a `putc( c, stdout )`. Per ogni routine, se si verifica un errore di lettura, viene impostato l'indicatore di errore per il flusso. **putc** e **putchar** sono simili agli **fputc** e **fputchar**rispettivamente, ma vengono implementate sia come funzioni che come macro (vedere [ Scelta tra funzioni e macro](../../c-runtime-library/recommendations-for-choosing-between-functions-and-macros.md)). **putwc** e **putwchar** sono versioni a caratteri wide di **putc** e **putchar**, rispettivamente. **putwc** e **putc** si comportano in modo identico se il flusso viene aperto in modalità ANSI. **putc** attualmente non supporta output in un flusso UNICODE.

Le versioni con suffisso **_nolock** sono identiche, ad eccezione del fatto che non sono protette da interferenze da parte di altri thread. Per altre informazioni, vedere **_putc_nolock, _putwc_nolock**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**puttc**|**putc**|**putc**|**putwc**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**putc**|\<stdio.h>|
|**putwc**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle App Universal Windows Platform (UWP). L'handle del flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_putc.c
/* This program uses putc to write buffer
* to a stream. If an error occurs, the program
* stops before writing the entire buffer.
*/

#include <stdio.h>

int main( void )
{
   FILE *stream;
   char *p, buffer[] = "This is the line of output\n";
   int  ch;

   ch = 0;
   /* Make standard out the stream and write to it. */
   stream = stdout;
   for( p = buffer; (ch != EOF) && (*p != '\0'); p++ )
      ch = putc( *p, stream );
}
```

### <a name="output"></a>Output

```Output
This is the line of output
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fputc, fputwc](fputc-fputwc.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
