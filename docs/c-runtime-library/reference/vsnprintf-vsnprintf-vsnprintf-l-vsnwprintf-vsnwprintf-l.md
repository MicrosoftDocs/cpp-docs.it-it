---
title: vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l
description: Informazioni di riferimento sulle API per vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf e _vsnwprintf_l; che scrivono l'output formattato usando un puntatore a un elenco di argomenti.
ms.date: 3/9/2021
api_name:
- _vsnprintf
- _vsnprintf_l
- _vsnwprintf
- _vsnwprintf_l
- _vsnprintf
- _vsnprintf;
- vsnprintf; _vsnprintf
- _vsnwprintf;
- _vsnprintf_l;
- _vsnwprintf_l;
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
- ntoskrnl.exe
- ucrtbase.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _vsnprintf
- _vsnwprintf
- _vsntprintf
- vsnprintf
- stdio/vsnprintf
- stdio/_vsnprintf
- stdio/_vsnprintf_l
- stdio/_vsnwprintf
- stdio/_vsnwprintf_l
- _vsnprintf_l
- _vsnwprintf_l
helpviewer_keywords:
- vsntprintf function
- _vsnwprintf_l function
- vsnwprintf_l function
- vsntprintf_l function
- _vsntprintf function
- _vsnprintf_l function
- vsnprintf function
- _vsntprintf_l function
- vsnprintf_l function
- _vsnwprintf function
- _vsnprintf function
- formatted text [C++]
- vsnwprintf function
ms.openlocfilehash: 870afc9cae241e61daebcac06089d01ac2fc3675
ms.sourcegitcommit: b04b39940b0c1e265f80fc1951278fdb05a1b30a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/10/2021
ms.locfileid: "102621997"
---
# <a name="vsnprintf-_vsnprintf-_vsnprintf_l-_vsnwprintf-_vsnwprintf_l"></a>vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l

Scrivere l'output formattato mediante un puntatore a un elenco di argomenti. Sono disponibili versioni più sicure di queste funzioni. Vedere [vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l](vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md).

## <a name="syntax"></a>Sintassi

```C
int vsnprintf(
   char *buffer,
   size_t count,
   const char *format,
   va_list argptr
);
int _vsnprintf(
   char *buffer,
   size_t count,
   const char *format,
   va_list argptr
);
int _vsnprintf_l(
   char *buffer,
   size_t count,
   const char *format,
   locale_t locale,
   va_list argptr
);
int _vsnwprintf(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   va_list argptr
);
int _vsnwprintf_l(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   locale_t locale,
   va_list argptr
);
template <size_t size>
int vsnprintf(
   char (&buffer)[size],
   size_t count,
   const char *format,
   va_list argptr
); // C++ only
template <size_t size>
int _vsnprintf(
   char (&buffer)[size],
   size_t count,
   const char *format,
   va_list argptr
); // C++ only
template <size_t size>
int _vsnprintf_l(
   char (&buffer)[size],
   size_t count,
   const char *format,
   locale_t locale,
   va_list argptr
); // C++ only
template <size_t size>
int _vsnwprintf(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format,
   va_list argptr
); // C++ only
template <size_t size>
int _vsnwprintf_l(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format,
   locale_t locale,
   va_list argptr
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Percorso di archiviazione per l'output.

*count*<br/>
Numero massimo di caratteri da scrivere.

*format*<br/>
Specifica di formato.

*argptr*<br/>
Puntatore a un elenco di argomenti.

*locale*<br/>
Impostazioni locali da usare.

Per altre informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

La funzione **vsnprintf** restituisce il numero di caratteri scritti, senza contare il carattere null di terminazione. Se le dimensioni del buffer specificate da *count* non sono sufficientemente grandi per contenere l'output specificato da *Format* e *argptr*, il valore restituito di **vsnprintf** è il numero di caratteri che verrebbero scritti, senza contare il carattere null, se il *conteggio* era sufficientemente grande. Se il valore restituito è maggiore di *count* -1, l'output è stato troncato. Un valore restituito -1 indica che si è verificato un errore di codifica.

Sia **_vsnprintf** che **_vsnwprintf** funzioni restituiscono il numero di caratteri scritti se il numero di caratteri da scrivere è minore o uguale al *conteggio*. Se il numero di caratteri da scrivere è maggiore di *count*, queste funzioni restituiscono-1 che indica che l'output è stato troncato.

Il valore restituito da tutte queste funzioni non include la terminazione null, indipendentemente dal fatto che ne venga scritta una o meno.

- Se *count* è zero e il *buffer* è **null**, il valore restituito è il numero di caratteri che verranno scritti dalle funzioni. Il valore non prende in considerazione un **null** di terminazione. È possibile usare questo risultato per allocare spazio nel buffer sufficiente per la stringa e il carattere Null di terminazione e quindi chiamare di nuovo la funzione per riempire il buffer.
- Se *count* è zero, ma il *buffer* non è **null**, non viene scritto alcun elemento e la funzione restituisce `-1` .
- Se *Format* è **null** o se il *buffer* è **null** e *count* non è uguale a zero, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1 e impostano **errno** su **EINVAL**.

## <a name="remarks"></a>Commenti

Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta i dati e scrive fino a *conteggiare* i caratteri nella memoria a cui punta il *buffer*. La funzione **vsnprintf** scrive sempre un carattere di terminazione null, anche se tronca l'output. Quando si usano **_vsnprintf** e **_vsnwprintf**, il buffer avrà una terminazione null solo se è presente spazio alla fine, ovvero se il numero di caratteri da scrivere è minore di *count*.

> [!IMPORTANT]
> Per evitare determinati tipi di rischi per la sicurezza, assicurarsi che *Format* non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).
> A partire da Windows 10 versione 2004 (Build 19041), la `printf` famiglia di funzioni stampa numeri a virgola mobile rappresentati esattamente in base alle regole IEEE 754 per l'arrotondamento. Nelle versioni precedenti di Windows, i numeri a virgola mobile rappresentativi esatti che terminano con "5" verrebbero sempre arrotondati. IEEE 754 indica che è necessario arrotondare al numero pari più vicino (anche noto come "arrotondamento del banco"). Ad esempio, sia `printf("%1.0f", 1.5)` che `printf("%1.0f", 2.5)` devono arrotondare a 2. In precedenza, 1,5 veniva arrotondato a 2 e 2,5 veniva arrotondato a 3. Questa modifica ha effetto solo sui numeri rappresentabili. 2,35, ad esempio, che, quando rappresentata in memoria, è più vicino a 2.35000000000000008, continua a arrotondare fino a 2,4. L'arrotondamento eseguito da queste funzioni ora rispetta anche la modalità di arrotondamento a virgola mobile impostata da [`fesetround`](fegetround-fesetround2.md) . In precedenza, l'arrotondamento sceglie sempre il `FE_TONEAREST` comportamento. Questa modifica influiscono solo sui programmi compilati con Visual Studio 2019 versione 16,2 e successive. Per utilizzare il comportamento di arrotondamento a virgola mobile legacy, collegare con [' legacy_stdio_float_rounding. obj '](../link-options.md).

> [!NOTE]
> Per assicurarsi che sia disponibile spazio per il carattere null di terminazione durante la chiamata di **_vsnprintf**, **_vsnprintf_l**, **_vsnwprintf** e **_vsnwprintf_l**, assicurarsi che *count* sia rigorosamente minore della lunghezza del buffer e inizializzare il buffer su null prima di chiamare la funzione.
>
> Poiché **vsnprintf** scrive sempre il valore null di terminazione, il parametro *count* può essere uguale alla dimensione del buffer.

A partire da UCRT in Visual Studio 2015 e Windows 10, **vsnprintf** non è più identico a **_vsnprintf**. La funzione **vsnprintf** è conforme allo standard C99; **_vnsprintf** viene mantenuta per compatibilità con le versioni precedenti di Visual Studio Code.

Le versioni di queste funzioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vsntprintf**|**_vsnprintf**|**_vsnprintf**|**_vsnwprintf**|
|**_vsntprintf_l**|**_vsnprintf_l**|**_vsnprintf_l**|**_vsnwprintf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------------|-------------------------------|
|**vsnprintf**, **_vsnprintf**, **_vsnprintf_l**|\<stdio.h>|\<stdio.h> oppure \<cstdio>|
|**_vsnwprintf**, **_vsnwprintf_l**|\<stdio.h> o \<wchar.h>|\<stdio.h>, \<wchar.h>, \<cstdio> o \<cwchar>|

Le funzioni **_vsnprintf**, **_vsnprintf_l**, **_vsnwprintf** e **_vsnwprintf_l** sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example-use-wide-characters-with-_vsnwprintf"></a>Esempio: usare caratteri wide con `_vsnwprintf()`

```C
// crt_vsnwprintf.c
// compile by using: cl /W3 crt_vsnwprintf.c

// To turn off error C4996, define this symbol:
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <wtypes.h>

#define BUFFCOUNT (10)

void FormatOutput(LPCWSTR formatstring, ...)
{
    int nSize = 0;
    wchar_t buff[BUFFCOUNT];
    memset(buff, 0, sizeof(buff));
    va_list args;
    va_start(args, formatstring);
    // Note: _vsnwprintf is deprecated; consider vsnwprintf_s instead
    nSize = _vsnwprintf(buff, BUFFCOUNT - 1, formatstring, args); // C4996
    wprintf(L"nSize: %d, buff: %ls\n", nSize, buff);
    va_end(args);
}

int main() {
    FormatOutput(L"%ls %ls", L"Hi", L"there");
    FormatOutput(L"%ls %ls", L"Hi", L"there!");
    FormatOutput(L"%ls %ls", L"Hi", L"there!!");
}
```

```Output
nSize: 8, buff: Hi there
nSize: 9, buff: Hi there!
nSize: -1, buff: Hi there!
```

Il comportamento cambia se si usa vsnprintf, insieme ai parametri con stringa "narrow". Il parametro *count* può essere l'intera dimensione del buffer e il valore restituito è il numero di caratteri che sarebbero stati scritti se il *conteggio* fosse sufficientemente grande:

## <a name="example-use-vsnprintf-with-narrow-strings"></a>Esempio: utilizzo `vsnprintf()` di stringhe Narrow

```C
// crt_vsnprintf.c
// compile by using: cl /W4 crt_vsnprintf.c
#include <stdio.h>
#include <stdarg.h> // for va_list, va_start
#include <string.h> // for memset

#define BUFFCOUNT (10)

void FormatOutput(char* formatstring, ...)
{
    int nSize = 0;
    char buff[BUFFCOUNT];
    memset(buff, 0, sizeof(buff));
    va_list args;
    va_start(args, formatstring);
    nSize = vsnprintf(buff, sizeof(buff), formatstring, args);
    printf("nSize: %d, buff: %s\n", nSize, buff);
    va_end(args);
}

int main() {
    FormatOutput("%s %s", "Hi", "there");   //  8 chars + null
    FormatOutput("%s %s", "Hi", "there!");  //  9 chars + null
    FormatOutput("%s %s", "Hi", "there!!"); // 10 chars + null
}
```

```Output
nSize: 8, buff: Hi there
nSize: 9, buff: Hi there!
nSize: 10, buff: Hi there!
```

## <a name="see-also"></a>Vedi anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
[Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \_ _swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
