---
title: ungetc, ungetwc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- ungetwc function
- ungettc function
- characters, pushing back onto stream
- _ungettc function
- ungetc function
ms.assetid: e0754f3a-b4c6-408f-90c7-e6387b830d84
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6618e3e92d605d9e706331b44b352b41d29d6a61
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32414584"
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

*Flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, ognuna di queste funzioni restituisce l'argomento di tipo carattere *c*. Se *c* non può essere inserito di nuovo o se non è stato letto alcun carattere, il flusso di input non viene modificato e **ungetc** restituisce * * EOF`; **ungetwc` restituisce **WEOF**. Se *flusso* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **EOF** oppure **WEOF** viene restituito e **errno** è impostata su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **ungetc** funzione inserisce il carattere *c* al *flusso* ed elimina l'indicatore di fine del file. Il flusso deve essere aperto per la lettura. Una successiva operazione di lettura sul *flusso* inizia con *c*. Un tentativo di push **EOF** nel flusso utilizzando **ungetc** viene ignorato.

Caratteri inseriti nel flusso dal **ungetc** possono essere cancellati se **fflush**, [fseek](fseek-fseeki64.md), **fsetpos**, o [rewind](rewind.md) viene chiamato prima che il carattere venga letto dal flusso. L'indicatore di posizione del file avrà il valore esistente prima del reinserimento dei caratteri. Lo spazio di archiviazione esterno corrispondente al flusso rimane invariato. Una corretta **ungetc** chiamata su un flusso di testo, l'indicatore di posizione del file non è specificato finché tutti i caratteri inseriti-back di lettura o non vengono rimossi. In ogni esito positivo **ungetc** chiamata su un flusso binario, l'indicatore di posizione del file viene decrementato; se il relativo valore è 0 prima di una chiamata, il valore è definito dopo la chiamata.

I risultati sono imprevedibili se **ungetc** viene chiamato due volte senza un'operazione di lettura o posizionamento di file tra le due chiamate. Dopo una chiamata a **fscanf**, una chiamata a **ungetc** potrebbe non riuscire, a meno che un'altra operazione di lettura (ad esempio **getc**) è stata eseguita. Infatti **fscanf** a sua volta chiama **ungetc**.

**ungetwc** è una versione a caratteri wide **ungetc**. Tuttavia, in ogni esito positivo **ungetwc** chiamata su un flusso di testo o binario, il valore dell'indicatore di posizione del file non è specificato fino a quando non tutti i caratteri inseriti-back di lettura o non vengono rimossi.

Queste funzioni sono thread-safe e bloccano i dati sensibili durante l'esecuzione. Per una versione che non blocca i thread, vedere [_ungetc_nolock, _ungetwc_nolock](ungetc-nolock-ungetwc-nolock.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**ungettc**|**ungetc**|**ungetc**|**ungetwc**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ungetc**|\<stdio.h>|
|**ungetwc**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app di piattaforma UWP (Universal Windows). Gli handle di flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
