---
title: fgetc, fgetwc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- fgetwc
- fgetc
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
- _fgettc
- fgetwc
- fgetc
dev_langs:
- C++
helpviewer_keywords:
- fgettc function
- characters, reading
- _fgettc function
- fgetc function
- streams, reading characters from
- reading characters from streams
- fgetwc function
ms.assetid: 13348b7b-dc86-421c-9d6c-611ca79c8338
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f06c5c2f092932d97755a8f0cff63cde3a9682c6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fgetc-fgetwc"></a>fgetc, fgetwc

Leggono un carattere da un flusso.

## <a name="syntax"></a>Sintassi

```C
int fgetc(
   FILE *stream
);
wint_t fgetwc(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*Flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fgetc** restituisce il carattere letto come un **int** o restituisce **EOF** per indicare un errore o fine del file. **fgetwc** viene restituito, come un [wint_t](../../c-runtime-library/standard-types.md), il carattere "wide" che corrisponde al carattere letto o restituisce **WEOF** per indicare un errore o fine del file. Per entrambe le funzioni, usare **feof** oppure **ferror** per distinguere tra un errore e una condizione di fine del file. Se si verifica un errore di lettura, viene impostato l'indicatore di errore per il flusso. Se *flusso* viene **NULL**, **fgetc** e **fgetwc** richiamano il gestore di parametri non validi, come descritto in [parametro Convalida](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** alla **EINVAL** e restituire **EOF**.

## <a name="remarks"></a>Note

Ognuna di queste funzioni legge un singolo carattere dalla posizione corrente del file associato *flusso*. La funzione quindi incrementa il puntatore del file associato (se definito) per puntare al carattere successivo. Se il flusso è alla fine del file, viene impostato l'indicatore di fine del file per il flusso.

**fgetc** equivale a **getc**, ma viene implementato solo come funzione, anziché come una funzione e una macro.

**fgetwc** è la versione a caratteri "wide" di **fgetc**; legge **c** come un carattere multibyte o un carattere Wide a seconda se *flusso* viene aperto in modalità di testo o binario.

Le versioni con suffisso **_nolock** sono identiche, ad eccezione del fatto che non sono protette da interferenze da parte di altri thread.

Per altre informazioni sull'elaborazione di caratteri wide e caratteri multibyte in modalità testo e binaria, vedere [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**fgettc**|**fgetc**|**fgetc**|**fgetwc**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fgetc**|\<stdio.h>|
|**fgetwc**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fgetc.c
// This program uses getc to read the first
// 80 input characters (or until the end of input)
// and place them into a string named buffer.

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   FILE *stream;
   char buffer[81];
   int  i, ch;

   // Open file to read line from:
   fopen_s( &stream, "crt_fgetc.txt", "r" );
   if( stream == NULL )
      exit( 0 );

   // Read in first 80 characters and place them in "buffer":
   ch = fgetc( stream );
   for( i=0; (i < 80 ) && ( feof( stream ) == 0 ); i++ )
   {
      buffer[i] = (char)ch;
      ch = fgetc( stream );
   }

   // Add null to end string
   buffer[i] = '\0';
   printf( "%s\n", buffer );
   fclose( stream );
}
```

## <a name="input-crtfgetctxt"></a>Input: crt_fgetc.txt

```Input
Line one.
Line two.
```

### <a name="output"></a>Output

```Output
Line one.
Line two.
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fputc, fputwc](fputc-fputwc.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
