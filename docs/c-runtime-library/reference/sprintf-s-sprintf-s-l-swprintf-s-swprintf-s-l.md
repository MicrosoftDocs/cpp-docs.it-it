---
description: 'Altre informazioni su: sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l'
title: sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l
ms.date: 3/9/2021
api_name:
- _swprintf_s_l
- _sprintf_s_l
- swprintf_s
- sprintf_s
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
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- swprintf_s
- sprintf_s
- stdio/sprintf_s
- stdio/swprintf_s
- stdio/_sprintf_s_l
- stdio/_swprintf_s_l
- _sprintf_s_l
- _swprintf_s_l
helpviewer_keywords:
- stprintf_s function
- stprintf_s_l function
- swprintf_s_l function
- sprintf_s function
- swprintf_s function
- _swprintf_s_l function
- sprintf_s_l function
- _stprintf_s_l function
- _stprintf_s function
- _sprintf_s_l function
- formatted text [C++]
ms.openlocfilehash: 323ac9531a60aaff859c18d0f0b6a3811f4ad59a
ms.sourcegitcommit: b04b39940b0c1e265f80fc1951278fdb05a1b30a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/10/2021
ms.locfileid: "102622114"
---
# <a name="sprintf_s-_sprintf_s_l-swprintf_s-_swprintf_s_l"></a>sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l

Scrivere dati formattati in una stringa. Queste sono versioni di [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
int sprintf_s(
   char *buffer,
   size_t sizeOfBuffer,
   const char *format,
   ...
);
int _sprintf_s_l(
   char *buffer,
   size_t sizeOfBuffer,
   const char *format,
   locale_t locale,
   ...
);
int swprintf_s(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   const wchar_t *format,
   ...
);
int _swprintf_s_l(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   const wchar_t *format,
   locale_t locale,
   ...
);
template <size_t size>
int sprintf_s(
   char (&buffer)[size],
   const char *format,
   ...
); // C++ only
template <size_t size>
int swprintf_s(
   wchar_t (&buffer)[size],
   const wchar_t *format,
   ...
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Percorso di archiviazione per l'output

*sizeOfBuffer*<br/>
Numero massimo di caratteri da archiviare.

*format*<br/>
Stringa di controllo del formato

*...*<br/>
Argomenti facoltativi da formattare

*locale*<br/>
Impostazioni locali da usare.

Per altre informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

Numero di caratteri scritti oppure-1 se si è verificato un errore. Se il *buffer* o *Format* è un puntatore null **, sprintf_s** e **swprintf_s** restituiscono-1 e **errno** a **EINVAL**.

**sprintf_s** restituisce il numero di byte archiviati nel *buffer*, senza contare il carattere null di terminazione. **swprintf_s** restituisce il numero di caratteri wide archiviati nel *buffer*, senza contare il carattere wide null di terminazione.

## <a name="remarks"></a>Commenti

La funzione **sprintf_s** formatta e archivia una serie di caratteri e valori nel *buffer*. Ogni *argomento* , se presente, viene convertito e restituito in base alla specifica di formato corrispondente nel *formato*. Il formato è costituito da caratteri ordinari e ha lo stesso formato e la stessa funzione dell'argomento *Format* per [printf](printf-printf-l-wprintf-wprintf-l.md). Un carattere Null viene aggiunto dopo l'ultimo carattere scritto. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

Una differenza principale tra **sprintf_s** e [sprintf](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) è che **sprintf_s** controlla la stringa di formato per i caratteri di formattazione validi, mentre [sprintf](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) controlla solo se la stringa di formato o il buffer sono puntatori **null** . Se il controllo non riesce, il gestore di parametro non valido viene richiamato, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce-1 e **errno** viene impostato su **EINVAL**.

L'altra differenza principale tra **sprintf_s** e [sprintf](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) è che **sprintf_s** accetta un parametro di lunghezza che specifica la dimensione del buffer di output in caratteri. Se il buffer è troppo piccolo per il testo formattato, incluso il carattere null di terminazione, il buffer viene impostato su una stringa vuota inserendo un carattere null nel *buffer*[0] e viene richiamato il gestore di parametri non validi. A differenza di **_snprintf**, **sprintf_s** garantisce che il buffer avrà una terminazione null, a meno che le dimensioni del buffer non siano pari a zero.

**swprintf_s** è una versione a caratteri wide di **sprintf_s**; gli argomenti del puntatore per **swprintf_s** sono stringhe a caratteri wide. Il rilevamento degli errori di codifica in **swprintf_s** può essere diverso da quello **sprintf_s**. Le versioni di queste funzioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Sono disponibili versioni di **sprintf_s** che offrono un controllo maggiore su ciò che accade se il buffer è troppo piccolo. Per altre informazioni, vedere [_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l](snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md).

> [!IMPORTANT]
> A partire da Windows 10 versione 2004 (Build 19041), la `printf` famiglia di funzioni stampa numeri a virgola mobile rappresentati esattamente in base alle regole IEEE 754 per l'arrotondamento. Nelle versioni precedenti di Windows, i numeri a virgola mobile rappresentativi esatti che terminano con "5" verrebbero sempre arrotondati. IEEE 754 indica che è necessario arrotondare al numero pari più vicino (anche noto come "arrotondamento del banco"). Ad esempio, sia `printf("%1.0f", 1.5)` che `printf("%1.0f", 2.5)` devono arrotondare a 2. In precedenza, 1,5 veniva arrotondato a 2 e 2,5 veniva arrotondato a 3. Questa modifica ha effetto solo sui numeri rappresentabili. 2,35, ad esempio, che, quando rappresentata in memoria, è più vicino a 2.35000000000000008, continua a arrotondare fino a 2,4. L'arrotondamento eseguito da queste funzioni ora rispetta anche la modalità di arrotondamento a virgola mobile impostata da [`fesetround`](fegetround-fesetround2.md) . In precedenza, l'arrotondamento sceglie sempre il `FE_TONEAREST` comportamento. Questa modifica influiscono solo sui programmi compilati con Visual Studio 2019 versione 16,2 e successive. Per utilizzare il comportamento di arrotondamento a virgola mobile legacy, collegare con [' legacy_stdio_float_rounding. obj '](../link-options.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_stprintf_s**|**sprintf_s**|**sprintf_s**|**swprintf_s**|
|**_stprintf_s_l**|**_sprintf_s_l**|**_sprintf_s_l**|**_swprintf_s_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**sprintf_s**, **_sprintf_s_l**|C \<stdio.h><br /><br /> C++: \<cstdio> o \<stdio.h>|
|**swprintf_s**, **_swprintf_s_l**|C: \<stdio.h> o \<wchar.h><br /><br /> C++: \<cstdio> , \<cwchar> \<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example-use-sprintf_s-to-format-data"></a>Esempio: usare sprintf_s per formattare i dati

```C
// crt_sprintf_s.c
// This program uses sprintf_s to format various
// data and place them in the string named buffer.
//

#include <stdio.h>

int main( void )
{
   char  buffer[200], s[] = "computer", c = 'l';
   int   i = 35, j;
   float fp = 1.7320534f;

   // Format and print various data:
   j  = sprintf_s( buffer, 200,     "   String:    %s\n", s );
   j += sprintf_s( buffer + j, 200 - j, "   Character: %c\n", c );
   j += sprintf_s( buffer + j, 200 - j, "   Integer:   %d\n", i );
   j += sprintf_s( buffer + j, 200 - j, "   Real:      %f\n", fp );

   printf_s( "Output:\n%s\ncharacter count = %d\n", buffer, j );
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

## <a name="example-error-code-handling"></a>Esempio: gestione del codice di errore

```C
// crt_swprintf_s.c
// wide character example
// also demonstrates swprintf_s returning error code
#include <stdio.h>

int main( void )
{
   wchar_t buf[100];
   int len = swprintf_s( buf, 100, L"%s", L"Hello world" );
   printf( "wrote %d characters\n", len );
   len = swprintf_s( buf, 100, L"%s", L"Hello\xffff world" );
   // swprintf_s fails because string contains WEOF (\xffff)
   printf( "wrote %d characters\n", len );
}
```

```Output
wrote 11 characters
wrote -1 characters
```

## <a name="see-also"></a>Vedi anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, __swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
