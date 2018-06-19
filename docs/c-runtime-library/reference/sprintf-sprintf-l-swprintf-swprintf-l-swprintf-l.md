---
title: sprintf, _sprintf_l, swprintf, _swprintf_l, __swprintf_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- __swprintf_l
- sprintf
- _sprintf_l
- _swprintf_l
- swprintf
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
- ntdll.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _stprintf_l
- __swprintf_l
- sprintf_l
- swprintf
- _sprintf_l
- sprintf
- _stprintf
- stprintf_l
dev_langs:
- C++
helpviewer_keywords:
- _swprintf_l function
- _stprintf function
- __swprintf_l function
- stprintf function
- sprintf function
- _sprintf_l function
- _stprintf_l function
- swprintf function
- strings [C++], writing to
- _CRT_NON_CONFORMING_SWPRINTFS
- swprintf_l function
- stprintf_l function
- sprintf_l function
- formatted text [C++]
ms.assetid: f6efe66f-3563-4c74-9455-5411ed939b81
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 02538d8c74de4f48cb4a3d6285e10c3c4e03c322
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32415936"
---
# <a name="sprintf-sprintfl-swprintf-swprintfl-swprintfl"></a>sprintf, _sprintf_l, swprintf, _swprintf_l, __swprintf_l

Scrivere dati formattati in una stringa. Sono disponibili versioni più sicure di alcune di queste funzioni. Vedere [sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md). Le versioni sicure di **swprintf** e **swprintf_l** non accettano un *conteggio* parametro.

## <a name="syntax"></a>Sintassi

```C
int sprintf(
   char *buffer,
   const char *format [,
   argument] ...
);
int _sprintf_l(
   char *buffer,
   const char *format,
   locale_t locale [,
   argument] ...
);
int swprintf(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format [,
   argument]...
);
int _swprintf_l(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   locale_t locale [,
   argument] ...
);
int __swprintf_l(
   wchar_t *buffer,
   const wchar_t *format,
   locale_t locale [,
   argument] ...
);
template <size_t size>
int sprintf(
   char (&buffer)[size],
   const char *format [,
   argument] ...
); // C++ only
template <size_t size>
int _sprintf_l(
   char (&buffer)[size],
   const char *format,
   locale_t locale [,
   argument] ...
); // C++ only

```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Percorso di archiviazione per l'output

*count*<br/>
Numero massimo di caratteri da archiviare nella versione Unicode di questa funzione.

*format*<br/>
Stringa di controllo del formato

*Argomento*<br/>
Argomenti facoltativi

*locale*<br/>
Impostazioni locali da usare.

Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

Il numero di caratteri scritti o -1 se si è verificato un errore. Se *buffer* oppure *formato* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostare **errno** alla **EINVAL**.

**sprintf** restituisce il numero di byte archiviati nel *buffer*, senza contare il carattere di terminazione null. **swprintf** restituisce il numero di caratteri "wide" archiviati in *buffer*, senza contare il carattere "wide" null finale.

## <a name="remarks"></a>Note

Il **sprintf** funzione formatta e archivia una serie di caratteri e i valori *buffer*. Ogni *argomento* (se presente) viene convertita e restituita in base alla specifica del formato corrispondente in *formato*. Il formato è costituito da caratteri ordinari e ha lo stesso modulo e funziona come le *formato* argomento per [printf](printf-printf-l-wprintf-wprintf-l.md). Un carattere Null viene aggiunto dopo l'ultimo carattere scritto. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

> [!IMPORTANT]
> Utilizzo **sprintf**, non è possibile limitare il numero di caratteri scritti, vale a dire che codice che usa **sprintf** è soggetto a sovraccarichi del buffer. Provare a utilizzare la funzione related [snprintf](snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md), che consente di specificare un numero massimo di caratteri da scrivere *buffer*, o utilizzare [scprintf](scprintf-scprintf-l-scwprintf-scwprintf-l.md) per determinare le dimensioni un buffer è obbligatorio. Inoltre, assicurarsi che *formato* non è una stringa definita dall'utente.

**swprintf** è una versione a caratteri wide **sprintf**; gli argomenti puntatori per **swprintf** sono stringhe a caratteri "wide". Rilevamento degli errori in di codifica **swprintf** può essere diverso da quello in **sprintf**. **swprintf** e **fwprintf** si comportano in modo identico con la differenza che **swprintf** scrive l'output in una stringa anziché a una destinazione di tipo **FILE**e **swprintf** richiede il *conteggio* parametro per specificare il numero massimo di caratteri da scrivere. Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.

**swprintf** conforme allo Standard ISO C, che richiede il secondo parametro, *conteggio*, di tipo **size_t**. Per forzare il comportamento non standard precedente, definire **_CRT_NON_CONFORMING_SWPRINTFS**. In una versione futura, il comportamento precedente potrebbe venire rimosso, quindi il codice dovrebbe essere modificato per usare il nuovo comportamento conforme.

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**stprintf**|**sprintf**|**sprintf**|**_swprintf**|
|**stprintf_l**|**_sprintf_l**|**_sprintf_l**|**__swprintf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**sprintf**, **sprintf_l**|\<stdio.h>|
|**swprintf**, **swprintf_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_sprintf.c
// compile with: /W3
// This program uses sprintf to format various
// data and place them in the string named buffer.

#include <stdio.h>

int main( void )
{
   char  buffer[200], s[] = "computer", c = 'l';
   int   i = 35, j;
   float fp = 1.7320534f;

   // Format and print various data:
   j  = sprintf( buffer,     "   String:    %s\n", s ); // C4996
   j += sprintf( buffer + j, "   Character: %c\n", c ); // C4996
   j += sprintf( buffer + j, "   Integer:   %d\n", i ); // C4996
   j += sprintf( buffer + j, "   Real:      %f\n", fp );// C4996
   // Note: sprintf is deprecated; consider using sprintf_s instead

   printf( "Output:\n%s\ncharacter count = %d\n", buffer, j );
}
```

```Output
Output:
   String:    computer
   Character: l
   Integer:   35
   Real:      1.732053

character count = 79
```

## <a name="example"></a>Esempio

```C
// crt_swprintf.c
// wide character example
// also demonstrates swprintf returning error code
#include <stdio.h>

int main( void )
{
   wchar_t buf[100];
   int len = swprintf( buf, 100, L"%s", L"Hello world" );
   printf( "wrote %d characters\n", len );
   len = swprintf( buf, 100, L"%s", L"Hello\xffff world" );
   // swprintf fails because string contains WEOF (\xffff)
   printf( "wrote %d characters\n", len );
}
```

```Output
wrote 11 characters
wrote -1 characters
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
