---
title: strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l
ms.date: 11/04/2016
api_name:
- _wcsncat_s_l
- wcsncat_s
- _mbsncat_s_l
- _mbsncat_s
- strncat_s
- _strncat_s_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- strncat_s_l
- _mbsncat_s_l
- _tcsncat_s
- wcsncat_s
- wcsncat_s_l
- strncat_s
- _mbsncat_s
- _tcsncat_s_l
helpviewer_keywords:
- concatenating strings
- _mbsncat_s function
- mbsncat_s_l function
- _tcsncat_s function
- _mbsncat_s_l function
- strncat_s function
- strings [C++], appending
- strncat_s_l function
- string concatenation [C++]
- _tcsncat_s_l function
- wcsncat_s function
- appending strings
- wcsncat_s_l function
- mbsncat_s function
ms.assetid: de77eca2-4d9c-4e66-abf2-a95fefc21e5a
ms.openlocfilehash: 7b76f20516cbf20530f20d3f5b6d1978cfeaaef4
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73626178"
---
# <a name="strncat_s-_strncat_s_l-wcsncat_s-_wcsncat_s_l-_mbsncat_s-_mbsncat_s_l"></a>strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l

Aggiunge caratteri a una stringa. Queste versioni di [strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> non è possibile usare **_mbsncat_s** e **_mbsncat_s_l** nelle applicazioni eseguite nel Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t strncat_s(
   char *strDest,
   size_t numberOfElements,
   const char *strSource,
   size_t count
);
errno_t _strncat_s_l(
   char *strDest,
   size_t numberOfElements,
   const char *strSource,
   size_t count,
   _locale_t locale
);
errno_t wcsncat_s(
   wchar_t *strDest,
   size_t numberOfElements,
   const wchar_t *strSource,
   size_t count
);
errno_t _wcsncat_s_l(
   wchar_t *strDest,
   size_t numberOfElements,
   const wchar_t *strSource,
   size_t count,
   _locale_t locale
);
errno_t _mbsncat_s(
   unsigned char *strDest,
   size_t numberOfElements,
   const unsigned char *strSource,
   size_t count
);
errno_t _mbsncat_s_l(
   unsigned char *strDest,
   size_t numberOfElements,
   const unsigned char *strSource,
   size_t count,
   _locale_t locale
);
template <size_t size>
errno_t strncat_s(
   char (&strDest)[size],
   const char *strSource,
   size_t count
); // C++ only
template <size_t size>
errno_t _strncat_s_l(
   char (&strDest)[size],
   const char *strSource,
   size_t count,
   _locale_t locale
); // C++ only
template <size_t size>
errno_t wcsncat_s(
   wchar_t (&strDest)[size],
   const wchar_t *strSource,
   size_t count
); // C++ only
template <size_t size>
errno_t _wcsncat_s_l(
   wchar_t (&strDest)[size],
   const wchar_t *strSource,
   size_t count,
   _locale_t locale
); // C++ only
template <size_t size>
errno_t _mbsncat_s(
   unsigned char (&strDest)[size],
   const unsigned char *strSource,
   size_t count
); // C++ only
template <size_t size>
errno_t _mbsncat_s_l(
   unsigned char (&strDest)[size],
   const unsigned char *strSource,
   size_t count,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*strDest*<br/>
Stringa di destinazione con terminazione Null.

*numberOfElements*<br/>
Dimensioni del buffer di destinazione.

*strSource*<br/>
Stringa di origine con terminazione null.

*count*<br/>
Numero di caratteri da aggiungere o [_TRUNCATE](../../c-runtime-library/truncate.md).

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce 0 in caso di esito positivo e un codice di errore in caso di errore.

### <a name="error-conditions"></a>Condizioni di errore

|*strDestination*|*numberOfElements*|*strSource*|Valore restituito|Contenuto di *strDestination*|
|----------------------|------------------------|-----------------|------------------|----------------------------------|
|**Null** o senza terminazione|any|any|**EINVAL**|non modificato|
|any|any|**NULL**|**EINVAL**|non modificato|
|any|0 o troppo piccolo|any|**ERANGE**|non modificato|

## <a name="remarks"></a>Note

Queste funzioni tentano di accodare i primi *d* caratteri di *strSource* alla fine di *strDest*, dove *D* è il minor *numero di conteggio* e la lunghezza di *strSource*. Se l'aggiunta di tali caratteri *D* si adatta all'interno di *strDest* (le cui dimensioni sono specificate come *NumberOfElements*) e lasciano comunque spazio per un carattere di terminazione null, questi caratteri vengono accodati, a partire dal valore null di terminazione originale di  *strDest*e viene aggiunto un nuovo valore null di terminazione; in caso contrario, *strDest*[0] viene impostato sul carattere null e viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Esiste un'eccezione a quanto indicato nel paragrafo precedente. Se *count* è [_TRUNCATE](../../c-runtime-library/truncate.md) , la maggior parte di *strSource* che verrà adattata viene aggiunta a *strDest* lasciando spazio per l'aggiunta di un null di terminazione.

Di seguito è riportato un esempio:

```C
char dst[5];
strncpy_s(dst, _countof(dst), "12", 2);
strncat_s(dst, _countof(dst), "34567", 3);
```

significa che viene richiesto a **strncat_s** di accodare tre caratteri a due caratteri in un buffer di cinque caratteri; Ciò non lascia spazio per il carattere di terminazione null, di conseguenza **strncat_s** Azzera la stringa e chiama il gestore di parametri non validi.

Se è necessario il comportamento di troncamento, utilizzare **_TRUNCATE** o modificare di conseguenza il parametro *size* :

```C
strncat_s(dst, _countof(dst), "34567", _TRUNCATE);
```

Oppure

```C
strncat_s(dst, _countof(dst), "34567", _countof(dst)-strlen(dst)-1);
```

In tutti i casi, la stringa risultante termina con un carattere Null. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

Se *strSource* o *strDest* è **null**o è *NumberOfElements* è zero, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, la funzione restituisce **EINVAL** senza modificarne i parametri.

**wcsncat_s** e **_mbsncat_s** sono versioni a caratteri wide e a caratteri multibyte di **strncat_s**. Gli argomenti di stringa e il valore restituito di **wcsncat_s** sono stringhe a caratteri wide. quelli di **_mbsncat_s** sono stringhe di caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsncat_s**|**strncat_s**|**_mbsnbcat_s**|**wcsncat_s**|
|**_tcsncat_s_l**|**_strncat_s_l**|**_mbsnbcat_s_l**|**_wcsncat_s_l**|

**_strncat_s_l** e **_wcsncat_s_l** non hanno alcuna dipendenza dalle impostazioni locali; vengono fornite solo per **_tcsncat_s_l**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strncat_s**|\<string.h>|
|**wcsncat_s**|\<string.h> o \<wchar.h>|
|**_mbsncat_s**, **_mbsncat_s_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```cpp
// crt_strncat_s.cpp
// compile with: /MTd

// These #defines enable secure template overloads
// (see last part of Examples() below)
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <crtdbg.h>  // For _CrtSetReportMode
#include <errno.h>

// This example uses a 10-byte destination buffer.

errno_t strncat_s_tester( const char * initialDest,
                          const char * src,
                          int count )
{
   char dest[10];
   strcpy_s( dest, _countof(dest), initialDest );

   printf_s( "\n" );

   if ( count == _TRUNCATE )
      printf_s( "Appending '%s' to %d-byte buffer dest with truncation semantics\n",
               src, _countof(dest) );
   else
      printf_s( "Appending %d chars of '%s' to %d-byte buffer dest\n",
              count, src, _countof(dest) );

   printf_s( "    old contents of dest: '%s'\n", dest );

   errno_t err = strncat_s( dest, _countof(dest), src, count );

   printf_s( "    new contents of dest: '%s'\n", dest );

   return err;
}

void Examples()
{
   strncat_s_tester( "hi ", "there", 4 );
   strncat_s_tester( "hi ", "there", 5 );
   strncat_s_tester( "hi ", "there", 6 );

   printf_s( "\nDestination buffer too small:\n" );
   strncat_s_tester( "hello ", "there", 4 );

   printf_s( "\nTruncation examples:\n" );

   errno_t err = strncat_s_tester( "hello ", "there", _TRUNCATE );
   printf_s( "    truncation %s occur\n", err == STRUNCATE ? "did"
                                                       : "did not" );

   err = strncat_s_tester( "hello ", "!", _TRUNCATE );
   printf_s( "    truncation %s occur\n", err == STRUNCATE ? "did"
                                                       : "did not" );

   printf_s( "\nSecure template overload example:\n" );

   char dest[10] = "cats and ";
   strncat( dest, "dachshunds", 15 );
   // With secure template overloads enabled (see #define
   // at top of file), the preceding line is replaced by
   //    strncat_s( dest, _countof(dest), "dachshunds", 15 );
   // Instead of causing a buffer overrun, strncat_s invokes
   // the invalid parameter handler.
   // If secure template overloads were disabled, strncat would
   // append "dachshunds" and overrun the dest buffer.
   printf_s( "    new contents of dest: '%s'\n", dest );
}

void myInvalidParameterHandler(
   const wchar_t* expression,
   const wchar_t* function,
   const wchar_t* file,
   unsigned int line,
   uintptr_t pReserved)
{
   wprintf_s(L"Invalid parameter handler invoked: %s\n", expression);
}

int main( void )
{
   _invalid_parameter_handler oldHandler, newHandler;

   newHandler = myInvalidParameterHandler;
   oldHandler = _set_invalid_parameter_handler(newHandler);
   // Disable the message box for assertions.
   _CrtSetReportMode(_CRT_ASSERT, 0);

   Examples();
}
```

```Output
Appending 4 chars of 'there' to 10-byte buffer dest
    old contents of dest: 'hi '
    new contents of dest: 'hi ther'

Appending 5 chars of 'there' to 10-byte buffer dest
    old contents of dest: 'hi '
    new contents of dest: 'hi there'

Appending 6 chars of 'there' to 10-byte buffer dest
    old contents of dest: 'hi '
    new contents of dest: 'hi there'

Destination buffer too small:

Appending 4 chars of 'there' to 10-byte buffer dest
    old contents of dest: 'hello '
Invalid parameter handler invoked: (L"Buffer is too small" && 0)
    new contents of dest: ''

Truncation examples:

Appending 'there' to 10-byte buffer dest with truncation semantics
    old contents of dest: 'hello '
    new contents of dest: 'hello the'
    truncation did occur

Appending '!' to 10-byte buffer dest with truncation semantics
    old contents of dest: 'hello '
    new contents of dest: 'hello !'
    truncation did not occur

Secure template overload example:
Invalid parameter handler invoked: (L"Buffer is too small" && 0)
    new contents of dest: ''
```

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
