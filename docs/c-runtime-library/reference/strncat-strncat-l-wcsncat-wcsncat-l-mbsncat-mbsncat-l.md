---
description: 'Altre informazioni su: strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l'
title: strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l
ms.date: 1/20/2021
api_name:
- strncat
- _strncat_l
- _mbsncat
- _mbsncat_l
- wcsncat
- wcsncat_l
- _o__mbsncat
- _o__mbsncat_l
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _tcsncat_l
- _wcsncat_l
- _tcsnccat_l
- _mbsncat
- _strncat_l
- strncat
- _tcsnccat
- _mbsncat_l
- _ftcsncat
- wcsncat
- _tcsncat
helpviewer_keywords:
- concatenating strings
- ftcsncat function
- tcsncat_l function
- _tcsnccat_l function
- _tcsncat function
- strncat function
- _ftcsncat function
- mbsncat function
- mbsncat_l function
- strings [C++], appending
- wcsncat function
- tcsnccat function
- tcsnccat_l function
- _tcsnccat function
- string concatenation [C++]
- appending strings
- characters [C++], appending to strings
- _mbsncat function
- _tcsncat_l function
- _mbsncat_l function
- tcsncat function
ms.openlocfilehash: 4b5ae812560cb42498ebed71bb9b8791581ef332
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667013"
---
# <a name="strncat-_strncat_l-wcsncat-_wcsncat_l-_mbsncat-_mbsncat_l"></a>strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l

Aggiunge caratteri di una stringa. Sono disponibili versioni più sicure di queste funzioni, vedere `[strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l` ] (strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.MD).

> [!IMPORTANT]
> **`_mbsncat`** e **`_mbsncat_l`** non possono essere usati nelle applicazioni eseguite nella Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
char *strncat(
   char *strDest,
   const char *strSource,
   size_t count
);
wchar_t *wcsncat(
   wchar_t *strDest,
   const wchar_t *strSource,
   size_t count
);
unsigned char *_mbsncat(
   unsigned char *strDest,
   const unsigned char *strSource,
   size_t count
);
unsigned char *_mbsncat_l(
   unsigned char *strDest,
   const unsigned char *strSource,
   size_t count,
   _locale_t locale
);
template <size_t size>
char *strncat(
   char (&strDest)[size],
   const char *strSource,
   size_t count
); // C++ only
template <size_t size>
wchar_t *wcsncat(
   wchar_t (&strDest)[size],
   const wchar_t *strSource,
   size_t count
); // C++ only
template <size_t size>
unsigned char *_mbsncat(
   unsigned char (&strDest)[size],
   const unsigned char *strSource,
   size_t count
); // C++ only
template <size_t size>
unsigned char *_mbsncat_l(
   unsigned char (&strDest)[size],
   const unsigned char *strSource,
   size_t count,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*`strDest`*\
Stringa di destinazione con terminazione Null.

*`strSource`*\
Stringa di origine con terminazione null.

*`count`*\
Numero di caratteri da aggiungere.

*`locale`*\
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla stringa di destinazione. Nessun valore restituito è riservato per indicare un errore.

## <a name="remarks"></a>Commenti

La **`strncat`** funzione aggiunge al massimo i primi *`count`* caratteri di *`strSource`* a *`strDest`* . Il carattere iniziale di *`strSource`* sovrascrive il carattere null di terminazione di *`strDest`* . Se viene visualizzato un carattere null in *`strSource`* prima dell' *`count`* aggiunta dei caratteri, **`strncat`** aggiunge tutti i caratteri da *`strSource`* fino al carattere null. Se *`count`* è maggiore della lunghezza di *`strSource`* , la lunghezza di *`strSource`* viene usata al posto di *`count`* . In tutti i casi, la stringa risultante termina con un carattere Null. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

> [!IMPORTANT]
> **`strncat`** non verifica la presenza di spazio sufficiente in *`strDest`* ; è pertanto una possibile provocazione dei sovraccarichi del buffer. Tenere presente che *`count`* limita il numero di caratteri accodati; non è un limite per le dimensioni di *`strDest`* . Vedere l'esempio seguente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

**`wcsncat`** e **`_mbsncat`** sono versioni a caratteri wide e a caratteri multibyte di **`strncat`** . Gli argomenti di stringa e il valore restituito di **`wcsncat`** sono stringhe di caratteri wide, mentre quelli di **`_mbsncat`** sono stringhe di caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.

Il valore di output è influenzato dall'impostazione della **`LC_CTYPE`** categoria delle impostazioni locali. Per ulteriori informazioni, vedere [`setlocale`](setlocale-wsetlocale.md) per ulteriori informazioni. Le versioni di queste funzioni senza il **`_l`** suffisso usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il **`_l`** suffisso sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ queste funzioni presentano overload dei modelli. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|`TCHAR.H `routine|`_UNICODE & _MBCS` non definito|`_MBCS` definito|`_UNICODE` definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**`_tcsncat`**|**`strncat`**|**`_mbsnbcat`**|**`wcsncat`**|
|**`_tcsncat_l`**|**`_strncat_l`**|**`_mbsnbcat_l`**|**`_wcsncat_l`**|

> [!NOTE]
> **`_strncat_l`** e **`_wcsncat_l`** non hanno alcuna dipendenza dalle impostazioni locali e non sono destinati a essere chiamati direttamente. Vengono fornite per uso interno da **`_tcsncat_l`** .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`strncat`**|\<string.h>|
|**`wcsncat`**|\<string.h> o \<wchar.h>|
|**`_mbsncat`**|\<mbstring.h>|
|**`_mbsncat_l`**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strncat.c
// Use strcat and strncat to append to a string.
#include <stdlib.h>

#define MAXSTRINGLEN 39

char string[MAXSTRINGLEN+1];
// or char *string = malloc(MAXSTRINGLEN+1);

void BadAppend( char suffix[], int n )
{
   strncat( string, suffix, n );
}

void GoodAppend( char suffix[], size_t n )
{
   strncat( string, suffix, __min( n, MAXSTRINGLEN-strlen(string)) );
}

int main( void )
{
   string[0] = '\0';
   printf( "string can hold up to %d characters\n", MAXSTRINGLEN );

   strcpy( string, "This is the initial string!" );
   // concatenate up to 20 characters...
   BadAppend( "Extra text to add to the string...", 20 );
   printf( "After BadAppend :  %s (%d chars)\n", string, strlen(string) );

   strcpy( string, "This is the initial string!" );
   // concatenate up to 20 characters...
   GoodAppend( "Extra text to add to the string...", 20 );
   printf( "After GoodAppend:  %s (%d chars)\n", string, strlen(string) );
}
```

### <a name="output"></a>Output

```Output
string can hold up to 39 characters
After BadAppend :  This is the initial string!Extra text to add to (47 chars)
After GoodAppend:  This is the initial string!Extra text t (39 chars)
```

Si noti che **BadAppend** ha causato un sovraccarico del buffer.

## <a name="see-also"></a>Vedi anche

[Manipolazione di stringhe](../../c-runtime-library/string-manipulation-crt.md)\
[`_mbsnbcat, _mbsnbcat_l`](mbsnbcat-mbsnbcat-l.md)\
[`strcat, wcscat, _mbscat`](strcat-wcscat-mbscat.md)\
[`strcmp, wcscmp, _mbscmp`](strcmp-wcscmp-mbscmp.md)\
[`strcpy, wcscpy, _mbscpy`](strcpy-wcscpy-mbscpy.md)\
[`strncmp, wcsncmp, _mbsncmp, _mbsncmp_l`](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)\
[`strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l`](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)\
[`_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l`](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)\
[`strrchr, wcsrchr, _mbsrchr, _mbsrchr_l`](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)\
[`_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l`](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)\
[`strspn, wcsspn, _mbsspn, _mbsspn_l`](strspn-wcsspn-mbsspn-mbsspn-l.md)\
[Locale](../../c-runtime-library/locale.md)\
[Interpretazione delle sequenze di Multibyte-Character](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)\
