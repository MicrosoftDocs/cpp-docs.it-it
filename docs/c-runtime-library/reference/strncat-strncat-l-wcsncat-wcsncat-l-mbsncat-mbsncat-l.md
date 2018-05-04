---
title: strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- strncat
- _strncat_l
- _mbsncat
- _mbsncat_l
- wcsncat
- wcsncat_l
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
dev_langs:
- C++
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
ms.assetid: de67363b-68c6-4ca5-91e3-478610ad8159
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3d80ca39f4bb12fa28190c499d93ad4152831b4e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="strncat-strncatl-wcsncat-wcsncatl-mbsncat-mbsncatl"></a>strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l

Aggiunge caratteri di una stringa. Sono disponibili versioni più sicure di queste funzioni; vedere [strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md).

> [!IMPORTANT]
> **mbsncat** e **mbsncat_l** non può essere usata nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

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

*strDest*<br/>
Stringa di destinazione con terminazione Null.

*strSource*<br/>
Stringa di origine con terminazione null.

*count*<br/>
Numero di caratteri da aggiungere.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla stringa di destinazione. Nessun valore restituito è riservato per indicare un errore.

## <a name="remarks"></a>Note

Il **strncat** funzione aggiunge al massimo, il primo *conteggio* caratteri *strSource* a *strDest*. Il carattere iniziale di *strSource* sovrascrive il carattere di terminazione null di *strDest*. Se è presente un carattere null in *strSource* prima *conteggio* vengono aggiunti caratteri, **strncat** aggiunge tutti i caratteri da *strSource*, fino al carattere null. Se *conteggio* è maggiore della lunghezza di *strSource*, la lunghezza del *strSource* è usato al posto di *conteggio*. In tutti i casi, la stringa risultante termina con un carattere Null. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

> [!IMPORTANT]
> **strncat** non verifica la presenza di spazio sufficiente *strDest*; è pertanto una causa possibile dei sovraccarichi del buffer. Tenere presente che *conteggio* limita il numero di caratteri aggiunti; non è un limite alle dimensioni dei *strDest*. Vedere l'esempio seguente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).

**wcsncat** e **mbsncat** sono versioni a caratteri wide e caratteri multibyte di **strncat**. Gli argomenti di stringa e valore restituito del **wcsncat** sono caratteri wide, mentre quelli di stringhe **mbsncat** sono stringhe a caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.

Il valore di output è interessato dalla configurazione dell'impostazione delle **LC_CTYPE** categoria delle impostazioni locali, vedere [setlocale](setlocale-wsetlocale.md) per altre informazioni. Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ queste funzioni presentano overload dei modelli. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcsncat**|**strncat**|**_mbsnbcat**|**wcsncat**|
|**tcsncat_l**|**_strncat_l**|**_mbsnbcat_l**|**_wcsncat_l**|

> [!NOTE]
> **_strncat_l** e **_wcsncat_l** non dispone di alcuna dipendenza dalle impostazioni locali e non sono concepiti per essere chiamati direttamente. Vengono forniti per uso interno da parte **tcsncat_l**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strncat**|\<string.h>|
|**wcsncat**|\<string.h> o \<wchar.h>|
|**_mbsncat**|\<mbstring.h>|
|**_mbsncat_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
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
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
