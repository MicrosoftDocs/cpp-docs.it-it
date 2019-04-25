---
title: ungetc, ungetwc
ms.date: 11/04/2016
apiname:
- ungetwc
- ungetc
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
- _ungettc
- ungetwc
- ungetc
helpviewer_keywords:
- ungetwc function
- ungettc function
- characters, pushing back onto stream
- _ungettc function
- ungetc function
ms.assetid: e0754f3a-b4c6-408f-90c7-e6387b830d84
ms.openlocfilehash: c504540f8fbbe14961fa051bb93ebef350c2c1da
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62155433"
---
# <a name="ungetc-ungetwc"></a>ungetc, ungetwc

Reinserisce un carattere nel flusso.

## <a name="syntax"></a>Sintassi

```C
int ungetc(
   int c,
   FILE *stream
);
wint_t ungetwc(
   wint_t c,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Carattere da inserire.

*stream*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, ognuna di queste funzioni restituisce l'argomento a caratteri *c*. Se *c* non è possibile reinserire o se non è stato letto alcun carattere, il flusso di input rimane invariato e **ungetc** restituisce **EOF**; **ungetwc** restituisce **WEOF**. Se *stream* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **EOF** oppure **WEOF** viene restituita e **errno** è impostata su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **ungetc** funzione reinserisce il carattere *c* nuovamente in *flusso* e cancella l'indicatore di fine del file. Il flusso deve essere aperto per la lettura. Una successiva operazione di lettura sul *stream* inizia con *c*. Un tentativo di eseguire il push **EOF** nel flusso tramite **ungetc** viene ignorato.

I caratteri inseriti nel flusso da **ungetc** possono essere cancellati se **fflush**, [fseek](fseek-fseeki64.md), **fsetpos**, o [rewind](rewind.md) viene chiamato prima che il carattere venga letto dal flusso. L'indicatore di posizione del file avrà il valore esistente prima del reinserimento dei caratteri. Lo spazio di archiviazione esterno corrispondente al flusso rimane invariato. Una corretta **ungetc** chiamata su un flusso di testo, l'indicatore di posizione del file non è specificato finché tutti i caratteri vengono letti o rimossi. In ogni esito positivo **ungetc** chiamata su un flusso binario, l'indicatore di posizione del file viene decrementato; se il valore è 0 prima della chiamata, il valore è indefinito dopo la chiamata.

I risultati sono imprevedibili se **ungetc** viene chiamato due volte senza un'operazione di lettura o posizionamento di file tra le due chiamate. Dopo una chiamata a **fscanf**, una chiamata a **ungetc** potrebbe non riuscire, a meno che un'altra operazione di lettura (ad esempio **getc**) è stata eseguita. Infatti **fscanf** a sua volta chiama **ungetc**.

**ungetwc** è una versione a caratteri wide di **ungetc**. Tuttavia, in ogni esito positivo **ungetwc** chiamata su un flusso di testo o binari, il valore dell'indicatore di posizione del file non è specificato fino a quando tutti i caratteri vengono letti o rimossi.

Queste funzioni sono thread-safe e bloccano i dati sensibili durante l'esecuzione. Per una versione che non blocca i thread, vedere [_ungetc_nolock, _ungetwc_nolock](ungetc-nolock-ungetwc-nolock.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_ungettc**|**ungetc**|**ungetc**|**ungetwc**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ungetc**|\<stdio.h>|
|**ungetwc**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle App Universal Windows Platform (UWP). L'handle del flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_ungetc.c
// This program first converts a character
// representation of an unsigned integer to an integer. If
// the program encounters a character that is not a digit,
// the program uses ungetc to replace it in the  stream.
//

#include <stdio.h>
#include <ctype.h>

int main( void )
{
   int ch;
   int result = 0;

   // Read in and convert number:
   while( ((ch = getchar()) != EOF) && isdigit( ch ) )
      result = result * 10 + ch - '0';    // Use digit.
   if( ch != EOF )
      ungetc( ch, stdin );                // Put nondigit back.
   printf( "Number = %d\nNext character in stream = '%c'",
            result, getchar() );
}
```

```Output

      521aNumber = 521
Next character in stream = 'a'
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
[putc, putwc](putc-putwc.md)<br/>
