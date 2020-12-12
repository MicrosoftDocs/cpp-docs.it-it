---
description: 'Altre informazioni su: strcmp, wcscmp, _mbscmp, _mbscmp_l'
title: strcmp, wcscmp, _mbscmp, _mbscmp_l
ms.date: 4/2/2020
api_name:
- wcscmp
- _mbscmp
- _mbscmp_l
- strcmp
- _o__mbscmp
- _o__mbscmp_l
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
- ntdll.dll
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
- _mbscmp
- _mbscmp_l
- wcscmp
- strcmp
- _tcscmp
- _ftcscmp
helpviewer_keywords:
- tcscmp function
- strcmp function
- strings [C++], comparing
- mbscmp function
- string comparison [C++]
- _mbscmp function
- _mbscmp_l function
- wcscmp function
- _tcscmp function
- _ftcscmp function
- ftcscmp function
ms.assetid: 5d216b57-7a5c-4cb3-abf0-0f4facf4396d
ms.openlocfilehash: 0c611b92b39d04e455bbd31f22f98898723ff7c1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306157"
---
# <a name="strcmp-wcscmp-_mbscmp-_mbscmp_l"></a>strcmp, wcscmp, _mbscmp, _mbscmp_l

Confrontare le stringhe.

> [!IMPORTANT]
> non è possibile usare **_mbscmp** e **_mbscmp_l** nelle applicazioni eseguite nel Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int strcmp(
   const char *string1,
   const char *string2
);
int wcscmp(
   const wchar_t *string1,
   const wchar_t *string2
);
int _mbscmp(
   const unsigned char *string1,
   const unsigned char *string2
);
int _mbscmp_l(
   const unsigned char *string1,
   const unsigned char *string2,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*String1*, *string2*<br/>
Stringhe che terminano con Null da confrontare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Il valore restituito per ognuna di queste funzioni indica la relazione ordinale tra *String1* e *string2*.

|Valore|Relazione di stringa1 e stringa2|
|-----------|----------------------------------------|
|< 0|*String1* è minore di *string2*|
|0|*String1* è identico a *string2*|
|> 0|*String1* è maggiore di *string2*|

In un errore di convalida dei parametri, **_mbscmp** e **_mbscmp_l** restituire **_NLSCMPERROR**, definito in \<string.h> e \<mbstring.h> .

## <a name="remarks"></a>Commenti

La funzione **strcmp** esegue un confronto ordinale tra *String1* e *string2* e restituisce un valore che ne indica la relazione. **wcscmp** e **_mbscmp** sono rispettivamente le versioni a caratteri wide e a caratteri multibyte di **strcmp**. **_mbscmp** riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce **_NLSCMPERROR** su un errore. **_mbscmp_l** ha lo stesso comportamento, ma usa il parametro delle impostazioni locali passato anziché le impostazioni locali correnti. Per altre informazioni, vedere [Tabelle codici](../../c-runtime-library/code-pages.md). Inoltre, se *String1* o *string2* è un puntatore null, **_mbscmp** richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **_mbscmp** e **_mbscmp_l** restituire **_NLSCMPERROR** e impostare **errno** su **EINVAL**. **strcmp** e **wcscmp** non convalidano i relativi parametri. A parte ciò, queste funzioni si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcscmp**|**strcmp**|**_mbscmp**|**wcscmp**|

Le funzioni **strcmp** differiscono dalle funzioni **strcoll** in quanto i confronti **strcmp** sono ordinali e non sono interessati dalle impostazioni locali. **strcoll** Confronta le stringhe lessicografico usando la categoria **LC_COLLATE** delle impostazioni locali correnti. Per ulteriori informazioni sulla categoria **LC_COLLATE** , vedere [setlocale, _wsetlocale](setlocale-wsetlocale.md).

Nelle impostazioni locali "C", l'ordine dei caratteri nel set di caratteri (set di caratteri ASCII) è lo stesso dell'ordine lessicografico dei caratteri. Tuttavia, in altre impostazioni locali, l'ordine dei caratteri nel set di caratteri può differire dall'ordine lessicografico. Ad esempio, in alcune impostazioni locali europee, il carattere "a" (valore 0x61) precede il carattere "ä" (valore 0xE4) nel set di caratteri, ma il carattere "ä" è davanti al carattere "a" lessicografico.

Nelle impostazioni locali per le quali il set di caratteri e l'ordine dei caratteri lessicografico sono diversi, è possibile usare **strcoll** anziché **strcmp** per il confronto lessicografico delle stringhe. In alternativa, è possibile usare **strxfrm** nelle stringhe originali e quindi usare **strcmp** sulle stringhe risultanti.

Le funzioni **strcmp** distinguono tra maiuscole e minuscole. **\_ stricmp**, **\_ wcsicmp** e **\_ mbsicmp** confrontano le stringhe convertendo prima tali stringhe nelle forme minuscole. Due stringhe che contengono caratteri che si trovano tra' Z ' è a' nella tabella ASCII (' [',' \\ ',']',' ^',' _' è \` ') vengono confrontate in modo diverso, a seconda del caso. Ad esempio, le due stringhe "ABCDe" e "ABCD ^" vengono confrontate in un modo se il confronto è in minuscolo ("abcde" > "abcd ^") e viceversa ("ABCDe" < "ABCD ^") se il confronto è in maiuscolo.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strcmp**|\<string.h>|
|**wcscmp**|\<string.h> o \<wchar.h>|
|**_mbscmp**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_strcmp.c

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char string1[] = "The quick brown dog jumps over the lazy fox";
char string2[] = "The QUICK brown dog jumps over the lazy fox";

int main( void )
{
   char tmp[20];
   int result;

   // Case sensitive
   printf( "Compare strings:\n   %s\n   %s\n\n", string1, string2 );
   result = strcmp( string1, string2 );
   if( result > 0 )
      strcpy_s( tmp, _countof(tmp), "greater than" );
   else if( result < 0 )
      strcpy_s( tmp, _countof (tmp), "less than" );
   else
      strcpy_s( tmp, _countof (tmp), "equal to" );
   printf( "   strcmp:   String 1 is %s string 2\n", tmp );

   // Case insensitive (could use equivalent _stricmp)
   result = _stricmp( string1, string2 );
   if( result > 0 )
      strcpy_s( tmp, _countof (tmp), "greater than" );
   else if( result < 0 )
      strcpy_s( tmp, _countof (tmp), "less than" );
   else
      strcpy_s( tmp, _countof (tmp), "equal to" );
   printf( "   _stricmp:  String 1 is %s string 2\n", tmp );
}
```

```Output
Compare strings:
   The quick brown dog jumps over the lazy fox
   The QUICK brown dog jumps over the lazy fox

   strcmp:   String 1 is greater than string 2
   _stricmp:  String 1 is equal to string 2
```

## <a name="see-also"></a>Vedere anche

[Manipolazione di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[_memicmp, _memicmp_l](memicmp-memicmp-l.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
