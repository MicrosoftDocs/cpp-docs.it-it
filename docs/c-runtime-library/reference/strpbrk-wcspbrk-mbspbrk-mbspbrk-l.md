---
title: strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _mbspbrk
- wcspbrk
- _mbspbrk_l
- strpbrk
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
- _fstrpbrk
- _mbspbrk
- strpbrk
- _tcspbrk
- _ftcspbrk
- wcspbrk
dev_langs:
- C++
helpviewer_keywords:
- fstrpbrk function
- _ftcspbrk function
- _mbspbrk_l function
- strpbrk function
- _fstrpbrk function
- mbspbrk function
- characters [C++], scanning strings
- _tcspbrk function
- wcspbrk function
- ftcspbrk function
- character sets [C++], scanning strings for characters
- strings [C++], scanning
- tcspbrk function
- _mbspbrk function
- mbspbrk_l function
ms.assetid: 80b504f7-a167-4dde-97ad-4ae3000dc810
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: db26c60badceab6c1422146a32de3d6dd2ecb8bd
ms.sourcegitcommit: 04d327940787df1297b72d534f388a035d472af0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/20/2018
ms.locfileid: "39181133"
---
# <a name="strpbrk-wcspbrk-mbspbrk-mbspbrkl"></a>strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l

Cerca nelle stringhe caratteri dei set di caratteri specificati.

> [!IMPORTANT]
> `_mbspbrk` e `_mbspbrk_l` non possono essere usati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
char *strpbrk(
   const char *str,
   const char *strCharSet
); // C only
char *strpbrk(
   char *str,
   const char *strCharSet
); // C++ only
const char *strpbrk(
   const char *str,
   const char *strCharSet
); // C++ only
wchar_t *wcspbrk(
   const wchar_t *str,
   const wchar_t *strCharSet
); // C only
wchar_t *wcspbrk(
   wchar_t *str,
   const wchar_t *strCharSet
); // C++ only
const wchar_t *wcspbrk(
   const wchar_t *str,
   const wchar_t *strCharSet
); // C++ only
unsigned char *_mbspbrk(
   const unsigned char *str,
   const unsigned char *strCharSet
); // C only
unsigned char *_mbspbrk(
   unsigned char *str,
   const unsigned char *strCharSet
); // C++ only
const unsigned char *_mbspbrk(
   const unsigned char *str,
   const unsigned char *strCharSet
); // C++ only
unsigned char *_mbspbrk_l(
   const unsigned char *str,
   const unsigned char *strCharSet,
   _locale_t locale
); // C only
unsigned char *_mbspbrk_l(
   unsigned char *str,
   const unsigned char *strCharSet,
   _locale_t locale
); // C++ only
const unsigned char *_mbspbrk_l(
   const unsigned char *str,
   const unsigned char* strCharSet,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa cercata con terminazione Null.

*strCharSet*<br/>
Set di caratteri con terminazione Null.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla prima occorrenza di qualsiasi carattere da *strCharSet* nelle *str*, o un puntatore NULL se i due argomenti di stringa non includono caratteri in comune.

## <a name="remarks"></a>Note

Il `strpbrk` funzione restituisce un puntatore alla prima occorrenza di un carattere in *str* che appartiene al set di caratteri *strCharSet*. La ricerca non include il carattere Null di terminazione.

`wcspbrk` e `_mbspbrk` sono le versioni a caratteri wide e a caratteri multibyte di `strpbrk`. Gli argomenti e il valore restituito di `wcspbrk` sono stringhe con caratteri wide, mentre quelli di `_mbspbrk` sono stringhe con caratteri multibyte.

`_mbspbrk` convalida i propri parametri. Se *str* oppure *strCharSet* è NULL, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `_mbspbrk` restituisce NULL e imposta `errno` su EINVAL. `strpbrk` e `wcspbrk` non convalidano i parametri. A parte ciò, queste tre funzioni si comportano in modo identico.

`_mbspbrk` è simile a `_mbscspn` ad eccezione del fatto che `_mbspbrk` restituisce un puntatore anziché un valore di tipo [size_t](../../c-runtime-library/standard-types.md).

In C, queste funzioni accettano un **const** puntatore per il primo argomento. In C++ sono disponibili due overload. L'overload che accetta un puntatore alla **const** restituisce un puntatore a **const**; la versione che accetta un puntatore a non -**const** restituisce un puntatore a non -**const** . La macro _CRT_CONST_CORRECT_OVERLOADS è definito se entrambi i **const** e non-**const** sono disponibili versioni di queste funzioni. Se non occorre**const** comportamento per entrambi gli overload C++, definire il simbolo CONST_RETURN.

Il valore di output è interessato dall'impostazione dell'impostazione della categoria LC_CTYPE delle impostazioni locali; per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il **l** suffisso usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; la versione con la **l** suffisso è identico, ma usa il parametro delle impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|`_tcspbrk`|`strpbrk`|`_mbspbrk`|`wcspbrk`|
|**n/d**|**n/d**|`_mbspbrk_l`|**n/d**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`strpbrk`|\<string.h>|
|`wcspbrk`|\<string.h> o \<wchar.h>|
|`_mbspbrk`, `_mbspbrk_l`|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strpbrk.c

#include <string.h>
#include <stdio.h>

int main( void )
{
   char string[100] = "The 3 men and 2 boys ate 5 pigs\n";
   char *result = NULL;

   // Return pointer to first digit in "string".
   printf( "1: %s\n", string );
   result = strpbrk( string, "0123456789" );
   printf( "2: %s\n", result++ );
   result = strpbrk( result, "0123456789" );
   printf( "3: %s\n", result++ );
   result = strpbrk( result, "0123456789" );
   printf( "4: %s\n", result );
}
```

```Output
1: The 3 men and 2 boys ate 5 pigs

2: 3 men and 2 boys ate 5 pigs

3: 2 boys ate 5 pigs

4: 5 pigs
```

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strchr, wcschr, _mbschr, _mbschr_l](strchr-wcschr-mbschr-mbschr-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
