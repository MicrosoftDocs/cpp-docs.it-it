---
title: strcpy_s, wcscpy_s, _mbscpy_s | Microsoft Docs
ms.custom: ''
ms.date: 03/22/2086
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- wcscpy_s
- _mbscpy_s
- strcpy_s
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
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- strcpy_s
- _mbscpy_s
- _tcscpy_s
- wcscpy_s
dev_langs:
- C++
helpviewer_keywords:
- strcpy_s function
- _tcscpy_s function
- _mbscpy_s function
- copying strings
- strings [C++], copying
- tcscpy_s function
- wcscpy_s function
ms.assetid: 611326f3-7929-4a5d-a465-a4683af3b053
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2ee648776d4c8b7df1089edf34d30b5c7e59a63c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="strcpys-wcscpys-mbscpys"></a>strcpy_s, wcscpy_s, _mbscpy_s

Copia una stringa. Queste versioni di [strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **mbscpy_s** non può essere usata nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t strcpy_s(
   char *dest,
   rsize_t dest_size,
   const char *src
);
errno_t wcscpy_s(
   wchar_t *dest,
   rsize_t dest_size,
   const wchar_t *src
);
errno_t _mbscpy_s(
   unsigned char *dest,
   rsize_t dest_size,
   const unsigned char *src
);
```

```cpp
// Template functions are C++ only:
template <size_t size>
errno_t strcpy_s(
   char (&dest)[size],
   const char *src
); // C++ only
template <size_t size>
errno_t wcscpy_s(
   wchar_t (&dest)[size],
   const wchar_t *src
); // C++ only
template <size_t size>
errno_t _mbscpy_s(
   unsigned char (&dest)[size],
   const unsigned char *src
); // C++ only
```

### <a name="parameters"></a>Parametri

*dest*<br/>
Posizione del buffer di stringa di destinazione.

*dest_size*<br/>
Dimensioni del buffer di stringa di destinazione in **char** unità per funzioni narrow e multibyte, e **wchar_t** unità per funzioni "wide". Questo valore deve essere maggiore di zero e minore o uguale a **RSIZE_MAX**.

*src*<br/>
Buffer della stringa di origine che termina con Null.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo; in caso contrario un errore.

### <a name="error-conditions"></a>Condizioni di errore

|*dest*|*dest_size*|*src*|Valore restituito|Contenuto di *dest*|
|----------------------|------------------------|-----------------|------------------|----------------------------------|
|**NULL**|qualsiasi|qualsiasi|**EINVAL**|non modificato|
|qualsiasi|qualsiasi|**NULL**|**EINVAL**|*distruttore*[0] impostato su 0|
|qualsiasi|0 o troppo piccolo|qualsiasi|**ERANGE**|*distruttore*[0] impostato su 0|

## <a name="remarks"></a>Note

Il **strcpy_s** funzione Copia il contenuto nell'indirizzo del *src*, incluso il carattere null di terminazione, nel percorso specificato da *dest*. La stringa di destinazione deve essere sufficientemente grande da contenere la stringa di origine e il relativo carattere Null di terminazione. Il comportamento delle **strcpy_s** è definito se le stringhe di origine e di destinazione si sovrappongono.

**wcscpy_s** è la versione a caratteri "wide" di **strcpy_s**, e **mbscpy_s** è la versione a caratteri multibyte. Gli argomenti di **wcscpy_s** sono caratteri wide, mentre quelli di stringhe **mbscpy_s** sono stringhe a caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.

Se *dest* oppure *src* è un puntatore null, o se la destinazione stringa dimensioni *dest_size* è troppo piccolo, viene richiamato il gestore di parametri non validi, come descritto nella [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EINVAL** e impostare **errno** al **EINVAL** quando *dest* o  *src* è un puntatore null e restituiscono **ERANGE** e impostare **errno** a **ERANGE** quando la stringa di destinazione è troppo piccola.

Quando l'esecuzione dell'operazione si conclude correttamente, la stringa di destinazione è sempre con terminazione Null.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload di modello; gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando quindi la necessità di specificare un argomento di dimensione, e possono sostituire automaticamente le funzioni precedenti, meno sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcscpy_s**|**strcpy_s**|**_mbscpy_s**|**wcscpy_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strcpy_s**|\<string.h>|
|**wcscpy_s**|\<string.h> o \<wchar.h>|
|**_mbscpy_s**|\<mbstring.h>|

Queste funzioni sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

A differenza del codice di qualità di produzione, in questo esempio chiama le funzioni stringa sicura senza verificare la presenza di errori:

```C
// crt_strcpy_s.c
// Compile by using: cl /W4 crt_strcpy_s.c
// This program uses strcpy_s and strcat_s
// to build a phrase.

#include <string.h>     // for strcpy_s, strcat_s
#include <stdlib.h>     // for _countof
#include <stdio.h>      // for printf
#include <errno.h>      // for return values

int main(void)
{
    char string[80];

    strcpy_s(string, _countof(string), "Hello world from ");
    strcat_s(string, _countof(string), "strcpy_s ");
    strcat_s(string, _countof(string), "and ");
    strcat_s(string, _countof(string), "strcat_s!");

    printf("String = %s\n", string);
}
```

```Output
String = Hello world from strcpy_s and strcat_s!
```

Quando si compila codice C++, le versioni dei modelli possono risultare più semplice da utilizzare.

```cpp
// crt_wcscpy_s.cpp
// Compile by using: cl /EHsc /W4 crt_wcscpy_s.cpp
// This program uses wcscpy_s and wcscat_s
// to build a phrase.

#include <cstring>  // for wcscpy_s, wcscat_s
#include <cstdlib>  // for _countof
#include <iostream> // for cout, includes <cstdlib>, <cstring>
#include <errno.h>  // for return values

int main(void)
{
    wchar_t string[80];
    // using template versions of wcscpy_s and wcscat_s:
    wcscpy_s(string, L"Hello world from ");
    wcscat_s(string, L"wcscpy_s ");
    wcscat_s(string, L"and ");
    // of course we can supply the size explicitly if we want to:
    wcscat_s(string, _countof(string), L"wcscat_s!");

    std::wcout << L"String = " << string << std::endl;
}
```

```Output
String = Hello world from wcscpy_s and wcscat_s!
```

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md) <br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md) <br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md) <br/>
[strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md) <br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md) <br/>
[strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md) <br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md) <br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md) <br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
