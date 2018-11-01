---
title: fprintf, _fprintf_l, fwprintf, _fwprintf_l
ms.date: 11/04/2016
apiname:
- fwprintf
- fprintf
- _fprintf_l
- _fwprintf_l
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
apitype: DLLExport
f1_keywords:
- fprintf
- fwprintf
- _ftprintf
helpviewer_keywords:
- _fwprintf_l function
- fprintf function
- fprintf_l function
- _fprintf_l function
- _ftprintf function
- fwprintf function
- ftprintf_l function
- ftprintf function
- _ftprintf_l function
- print formatted data to streams
- fwprintf_l function
ms.assetid: 34a87e1c-6e4d-4d48-a611-58314dd4dc4b
ms.openlocfilehash: d84ef50e6fd522e393bb87664fb1eb47f3d32bb4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50637297"
---
# <a name="fprintf-fprintfl-fwprintf-fwprintfl"></a>fprintf, _fprintf_l, fwprintf, _fwprintf_l

Stampare dati formattati in un flusso. Sono disponibili versioni più sicure di queste funzioni. Vedere [fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md).

## <a name="syntax"></a>Sintassi

```C
int fprintf(
   FILE *stream,
   const char *format [,
   argument ]...
);
int _fprintf_l(
   FILE *stream,
   const char *format,
   locale_t locale [,
   argument ]...
);
int fwprintf(
   FILE *stream,
   const wchar_t *format [,
   argument ]...
);
int _fwprintf_l(
   FILE *stream,
   const wchar_t *format,
   locale_t locale [,
   argument ]...
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Puntatore alla struttura **FILE**.

*format*<br/>
Stringa di controllo del formato.

*argomento*<br/>
Argomenti facoltativi.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**fprintf** restituisce il numero di byte scritti. **fwprintf** restituisce il numero di caratteri wide scritti. Ognuna di queste funzioni restituisce invece un valore negativo quando si verifica un errore di output. Se *stream* oppure *formato* viene **NULL**, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiscono -1 e impostare **errno** al **EINVAL**. La stringa di formato non è selezionata per i caratteri di formattazione validi come succede quando si usa **fprintf_s** oppure **fwprintf_s**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

**fprintf** formatta e stampa una serie di caratteri e valori di output *flusso*. Ogni funzione *argomenti* (se presente) viene convertita e restituita in base alla specifica di formato corrispondente in *formato*. Per la **fprintf**, il *formato* argomento ha la stessa sintassi e utilizzo in cui sia presente nel **printf**.

**fwprintf** è una versione a caratteri wide di **fprintf**; nella **fwprintf**, *formato* è una stringa di caratteri "wide". Queste funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI. **fprintf** non supporta attualmente l'output in un flusso UNICODE.

Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passato anziché le impostazioni locali del thread corrente.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**ftprintf**|**fprintf**|**fprintf**|**fwprintf**|
|**ftprintf_l**|**_fprintf_l**|**_fprintf_l**|**_fwprintf_l**|

Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fprintf**, **fprintf_l**|\<stdio.h>|
|**fwprintf**, **fwprintf_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fprintf.c
/* This program uses fprintf to format various
* data and print it to the file named FPRINTF.OUT. It
* then displays FPRINTF.OUT on the screen using the system
* function to invoke the operating-system TYPE command.
*/

#include <stdio.h>
#include <process.h>

FILE *stream;

int main( void )
{
   int    i = 10;
   double fp = 1.5;
   char   s[] = "this is a string";
   char   c = '\n';

   fopen_s( &stream, "fprintf.out", "w" );
   fprintf( stream, "%s%c", s, c );
   fprintf( stream, "%d\n", i );
   fprintf( stream, "%f\n", fp );
   fclose( stream );
   system( "type fprintf.out" );
}
```

```Output
this is a string
10
1.500000
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)<br/>
