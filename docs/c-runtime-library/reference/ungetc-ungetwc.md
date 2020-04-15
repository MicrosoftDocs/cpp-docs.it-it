---
title: ungetc, ungetwc
ms.date: 4/2/2020
api_name:
- ungetwc
- ungetc
- _o_ungetc
- _o_ungetwc
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
ms.openlocfilehash: 484af7b72f860a8a9d12cf0b62444871caad4675
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81361289"
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

*C*<br/>
Carattere da inserire.

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, ognuna di queste funzioni restituisce l'argomento carattere *c*. Se *c* non può essere spinto indietro o se non è stato letto alcun carattere, il flusso di input è invariato e **ungetc** restituisce **EOF**; **ungetwc** restituisce **WEOF**. Se *stream* è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, viene restituito **EOF** o **WEOF** e **errno** è impostato su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **ungetc** spinge il carattere *c* nel *flusso* e cancella l'indicatore di fine file. Il flusso deve essere aperto per la lettura. Un'operazione di lettura successiva sul *flusso* inizia con *c*. Un tentativo di eseguire il push **di EOF** nel flusso utilizzando **ungetc** viene ignorato.

I caratteri posizionati nel flusso da **ungetc** possono essere cancellati se **fflush**, [fseek](fseek-fseeki64.md), **fsetpos**o [rewind](rewind.md) viene chiamato prima che il carattere venga letto dal flusso. L'indicatore di posizione del file avrà il valore esistente prima del reinserimento dei caratteri. Lo spazio di archiviazione esterno corrispondente al flusso rimane invariato. In una chiamata **ungetc** riuscita su un flusso di testo, l'indicatore di posizione del file non viene specificato fino a quando tutti i caratteri inseriti non vengono letti o eliminati. A ogni chiamata **ungetc** riuscita su un flusso binario, l'indicatore di posizione del file viene decrementato; se il valore era 0 prima di una chiamata, il valore non è definito dopo la chiamata.

I risultati sono imprevedibili se **ungetc** viene chiamato due volte senza un'operazione di lettura o posizionamento dei file tra le due chiamate. Dopo una chiamata a **fscanf**, una chiamata a **ungetc** potrebbe non riuscire a meno che non sia stata eseguita un'altra operazione di lettura (ad esempio **getc**). Questo perché **fscanf** stesso chiama **ungetc**.

**ungetwc** è una versione a caratteri wide di **ungetc**. Tuttavia, in ogni chiamata **ungetwc** riuscita su un flusso di testo o binario, il valore dell'indicatore di posizione del file non viene specificato fino a quando tutti i caratteri push-back non vengono letti o eliminati.

Queste funzioni sono thread-safe e bloccano i dati sensibili durante l'esecuzione. Per una versione che non blocca i thread, vedere [_ungetc_nolock, _ungetwc_nolock](ungetc-nolock-ungetwc-nolock.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_ungettc**|**ungetc**|**ungetc**|**ungetwc**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ungetc**|\<stdio.h>|
|**ungetwc**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app UWP (Universal Windows Platform). Gli handle di flusso standard associati alla console, **stdin**, **stdout**e **stderr**, devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano utilizzarli nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
