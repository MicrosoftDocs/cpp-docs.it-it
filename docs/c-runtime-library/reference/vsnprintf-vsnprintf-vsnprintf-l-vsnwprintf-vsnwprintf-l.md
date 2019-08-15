---
title: vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l
ms.date: 11/04/2016
apiname:
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
- ntoskrnl.exe
- ucrtbase.dll
apitype: DLLExport
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
ms.assetid: a97f92df-c2f8-4ea0-9269-76920d2d566a
ms.openlocfilehash: 2e665562f3dd8ee0be70b4e50068955a91233c60
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69499069"
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

Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

La funzione **vsnprintf** restituisce il numero di caratteri scritti, senza contare il carattere null di terminazione. Se le dimensioni del buffer specificate da *count* non sono sufficientemente grandi per contenere l'output specificato da *Format* e *argptr*, il valore restituito di **vsnprintf** è il numero di caratteri che verrebbero scritti, senza contare null carattere, se il *conteggio* è sufficientemente grande. Se il valore restituito è maggiore di *count* -1, l'output è stato troncato. Un valore restituito -1 indica che si è verificato un errore di codifica.

Entrambe le funzioni **_vsnprintf** e **_vsnwprintf** restituiscono il numero di caratteri scritti se il numero di caratteri da scrivere è minore o uguale al *conteggio*; Se il numero di caratteri da scrivere è maggiore di *count*, queste funzioni restituiscono-1 che indica che l'output è stato troncato.

Il valore restituito da tutte queste funzioni non include il carattere di Null di terminazione, indipendentemente dal fatto che venga scritto o meno. Quando *count* è zero, il valore restituito è il numero di caratteri che verranno scritti dalle funzioni, escluso il valore null di terminazione. È possibile usare questo risultato per allocare spazio nel buffer sufficiente per la stringa e il carattere Null di terminazione e quindi chiamare di nuovo la funzione per riempire il buffer.

Se *Format* è **null**o se il *buffer* è **null** e *count* non è uguale a zero, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1 e impostano **errno** su **EINVAL**.

## <a name="remarks"></a>Note

Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta i dati e scrive fino a *conteggiare* i caratteri nella memoria a cui punta il *buffer*. La funzione **vsnprintf** scrive sempre un carattere di terminazione null, anche se tronca l'output. Quando si usano **_vsnprintf** e **_vsnwprintf**, il buffer avrà una terminazione null solo se è presente spazio alla fine, ovvero se il numero di caratteri da scrivere è minore di *count*.

> [!IMPORTANT]
> Per evitare determinati tipi di rischi per la sicurezza, assicurarsi che *Format* non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

> [!NOTE]
> Per assicurarsi che sia presente spazio per il carattere null di terminazione durante la chiamata a **_vsnprintf**, **_vsnprintf_l**, **_vsnwprintf** e **_vsnwprintf_l**, assicurarsi che *count* sia rigorosamente minore della lunghezza del buffer e inizializzare il buffer su null prima di chiamare la funzione.
>
> Poiché **vsnprintf** scrive sempre il valore null di terminazione, il parametro *count* può essere uguale alla dimensione del buffer.

A partire da UCRT in Visual Studio 2015 e Windows 10, **vsnprintf** non è più identico a **_vsnprintf**. La funzione **vsnprintf** è conforme allo standard C99; **_vnsprintf** viene mantenuto per compatibilità con le versioni precedenti di Visual Studio Code.

Le versioni di queste funzioni con il suffisso **suffisso** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vsntprintf**|**_vsnprintf**|**_vsnprintf**|**_vsnwprintf**|
|**_vsntprintf_l**|**_vsnprintf_l**|**_vsnprintf_l**|**_vsnwprintf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------------|-------------------------------|
|**vsnprintf**, **_vsnprintf**, **_vsnprintf_l**|\<stdio.h>|\<stdio.h> o \<cstdio>|
|**_vsnwprintf**, **_vsnwprintf_l**|\<stdio.h> o \<wchar.h>|\<stdio.h>, \<wchar.h>, \<cstdio> o \<cwchar>|

Le funzioni **_vsnprintf**, **_vsnprintf_l**, **_vsnwprintf** e **_vsnwprintf_l** sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

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

## <a name="example"></a>Esempio

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

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
[Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
