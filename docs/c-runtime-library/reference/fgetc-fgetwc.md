---
title: fgetc, fgetwc
ms.date: 4/2/2020
api_name:
- fgetwc
- fgetc
- _o_fgetc
- _o_fgetwc
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
- _fgettc
- fgetwc
- fgetc
helpviewer_keywords:
- fgettc function
- characters, reading
- _fgettc function
- fgetc function
- streams, reading characters from
- reading characters from streams
- fgetwc function
ms.assetid: 13348b7b-dc86-421c-9d6c-611ca79c8338
ms.openlocfilehash: c1589c64127b47f4dd2a1147f2b4d549601db4fc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81347006"
---
# <a name="fgetc-fgetwc"></a>fgetc, fgetwc

Legge un carattere dal flusso.

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

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fgetc** restituisce il carattere letto come **int** o restituisce **EOF** per indicare un errore o la fine del file. **fgetwc** restituisce, come [wint_t](../../c-runtime-library/standard-types.md), il carattere wide che corrisponde al carattere letto o restituisce **WEOF** per indicare un errore o la fine del file. Per entrambe le funzioni, usare **feof** o **ferror** per distinguere tra un errore e una condizione di fine file. Se si verifica un errore di lettura, viene impostato l'indicatore di errore per il flusso. Se *stream* è **NULL**, **fgetc** e **fgetwc** richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono **EOF**.

## <a name="remarks"></a>Osservazioni

Ognuna di queste funzioni legge un singolo carattere dalla posizione corrente del file associato al *flusso*. La funzione quindi incrementa il puntatore del file associato (se definito) per puntare al carattere successivo. Se il flusso è alla fine del file, viene impostato l'indicatore di fine del file per il flusso.

**fgetc** equivale a **getc**, ma viene implementato solo come funzione, anziché come funzione e macro.

**fgetwc** è la versione a caratteri wide di **fgetc**; legge **c** come un carattere multibyte o un carattere wide a seconda che *il flusso* venga aperto in modalità testo o in modalità binaria.

Le versioni con suffisso **_nolock** sono identiche, ad eccezione del fatto che non sono protette da interferenze da parte di altri thread.

Per altre informazioni sull'elaborazione di caratteri wide e caratteri multibyte in modalità testo e binaria, vedere [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_fgettc**|**fgetc**|**fgetc**|**fgetwc**|

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

## <a name="input-crt_fgetctxt"></a>Input: crt_fgetc.txt

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
