---
title: strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l
ms.date: 4/2/2020
api_name:
- _mbspbrk
- wcspbrk
- _mbspbrk_l
- strpbrk
- _o__mbspbrk
- _o__mbspbrk_l
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _fstrpbrk
- _mbspbrk
- strpbrk
- _tcspbrk
- _ftcspbrk
- wcspbrk
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
ms.openlocfilehash: ecdf896587096f0370351aac07cbd6be57257305
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81322165"
---
# <a name="strpbrk-wcspbrk-_mbspbrk-_mbspbrk_l"></a>strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l

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

*Str*<br/>
Stringa cercata con terminazione Null.

*strCharSet (gruppo di caratteri strCharSet)*<br/>
Set di caratteri con terminazione Null.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla prima occorrenza di qualsiasi carattere da *strCharSet* in *str*o un puntatore NULL se i due argomenti stringa non hanno caratteri in comune.

## <a name="remarks"></a>Osservazioni

La `strpbrk` funzione restituisce un puntatore alla prima occorrenza di un carattere in *str* che appartiene al set di caratteri in *strCharSet*. La ricerca non include il carattere Null di terminazione.

`wcspbrk` e `_mbspbrk` sono le versioni a caratteri wide e a caratteri multibyte di `strpbrk`. Gli argomenti e il valore restituito di `wcspbrk` sono stringhe con caratteri wide, mentre quelli di `_mbspbrk` sono stringhe con caratteri multibyte.

`_mbspbrk` convalida i propri parametri. Se *str* o *strCharSet* è NULL, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può `_mbspbrk` continuare, `errno` restituisce NULL e imposta su EINVAL. `strpbrk` e `wcspbrk` non convalidano i parametri. A parte ciò, queste tre funzioni si comportano in modo identico.

`_mbspbrk` è simile a `_mbscspn` ad eccezione del fatto che `_mbspbrk` restituisce un puntatore anziché un valore di tipo [size_t](../../c-runtime-library/standard-types.md).

In C, queste funzioni accettano un puntatore **const** per il primo argomento. In C++ sono disponibili due overload. L'overload che porta un puntatore a **const** restituisce un puntatore a **const**; la versione che accetta un puntatore a non**const** restituisce un puntatore a non**const**. La macro _CRT_CONST_CORRECT_OVERLOADS viene definita se sono disponibili entrambe le versioni **const** e non**const** di queste funzioni. Se è necessario il comportamento non**const** per entrambi gli overload di C, definire il simbolo _CONST_RETURN.

Il valore di output è influenzato dall'impostazione della categoria LC_CTYPE delle impostazioni locali; Per ulteriori informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il **suffisso _l** utilizzano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. la versione con il **suffisso _l** è identica, ad eccezione del fatto che utilizza invece il parametro locale passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strchr, wcschr, _mbschr, _mbschr_l](strchr-wcschr-mbschr-mbschr-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
