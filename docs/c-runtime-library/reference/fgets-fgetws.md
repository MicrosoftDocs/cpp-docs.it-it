---
description: 'Altre informazioni su: fgets, fgetws'
title: fgets, fgetws
ms.date: 4/2/2020
api_name:
- fgets
- fgetws
- _o_fgets
- _o_fgetws
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
- _fgetts
- fgetws
- fgets
helpviewer_keywords:
- _fgetts function
- streams, getting strings from
- streams, reading from
- fgets function
- fgetws function
- fgetts function
ms.assetid: ad549bb5-df98-4ccd-a53f-95114e60c4fc
ms.openlocfilehash: 21c360f621ed19f076af129f618e80aa27102e86
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329292"
---
# <a name="fgets-fgetws"></a>fgets, fgetws

Ottenere una stringa da un flusso.

## <a name="syntax"></a>Sintassi

```C
char *fgets(
   char *str,
   int numChars,
   FILE *stream
);
wchar_t *fgetws(
   wchar_t *str,
   int numChars,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Percorso di archiviazione per i dati.

*numChars*<br/>
Numero massimo di caratteri da leggere.

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce *Str*. Viene restituito **null** per indicare un errore o una condizione di fine del file. Usare **feof** o **ferrator** per determinare se si è verificato un errore. Se *Str* o *Stream* è un puntatore null o *numChars* è minore o uguale a zero, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **null**.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La funzione **fgets** legge una stringa dall'argomento del *flusso* di input e la archivia in *Str*. **fgets** legge i caratteri dalla posizione corrente del flusso e include il primo carattere di nuova riga, fino alla fine del flusso o fino a quando il numero di caratteri letti è uguale a *numChars* -1, a seconda del valore che viene raggiunto per primo. Il risultato archiviato in *Str* viene accodato con un carattere null. Il carattere di nuova riga, se letto, viene incluso nella stringa.

**fgetws** è una versione a caratteri wide di **fgets**.

**fgetws** legge l'argomento a caratteri wide *Str* come stringa di caratteri multibyte o una stringa di caratteri wide a seconda che il *flusso* sia aperto in modalità testo o in modalità binaria, rispettivamente. Per altre informazioni sull'uso delle modalità testo e binaria in formato Unicode e I/O flusso multibyte, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_fgetts**|**fgets**|**fgets**|**fgetws**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fgets**|\<stdio.h>|
|**fgetws**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fgets.c
// This program uses fgets to display
// the first line from a file.

#include <stdio.h>

int main( void )
{
   FILE *stream;
   char line[100];

   if( fopen_s( &stream, "crt_fgets.txt", "r" ) == 0 )
   {
      if( fgets( line, 100, stream ) == NULL)
         printf( "fgets error\numChars" );
      else
         printf( "%s", line);
      fclose( stream );
   }
}
```

### <a name="input-crt_fgetstxt"></a>Input: crt_fgets.txt

```Input
Line one.
Line two.
```

### <a name="output"></a>Output

```Output
Line one.
```

## <a name="see-also"></a>Vedi anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fputs, fputws](fputs-fputws.md)<br/>
[gets, _getws](../../c-runtime-library/gets-getws.md)<br/>
[puts, _putws](puts-putws.md)<br/>
