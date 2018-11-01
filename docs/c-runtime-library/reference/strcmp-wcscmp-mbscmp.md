---
title: strcmp, wcscmp, _mbscmp
ms.date: 11/04/2016
apiname:
- wcscmp
- _mbscmp
- strcmp
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
- ntdll.dll
- ucrtbase.dll
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- _mbscmp
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
- wcscmp function
- _tcscmp function
- _ftcscmp function
- ftcscmp function
ms.assetid: 5d216b57-7a5c-4cb3-abf0-0f4facf4396d
ms.openlocfilehash: b7d8614fffc96a600c0d1f92b85503259cfc5cbb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50600525"
---
# <a name="strcmp-wcscmp-mbscmp"></a>strcmp, wcscmp, _mbscmp

Confrontare le stringhe.

> [!IMPORTANT]
> **mbscmp** non può essere utilizzato nelle applicazioni eseguite nel Runtime di Windows. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

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
```

### <a name="parameters"></a>Parametri

*String1*, *stringa2*<br/>
Stringhe che terminano con Null da confrontare.

## <a name="return-value"></a>Valore restituito

Il valore restituito per ognuna di queste funzioni indica la relazione ordinale anziché *string1* al *string2*.

|Valore|Relazione di stringa1 e stringa2|
|-----------|----------------------------------------|
|< 0|*String1* è minore di *stringa2*|
|0|*String1* è identica alla *stringa2*|
|> 0|*String1* è maggiore di quella *stringa2*|

Errore di convalida dei parametri, **mbscmp** restituisce **_NLSCMPERROR**, che è definito nel \<String. h > e \<Mbstring. h >.

## <a name="remarks"></a>Note

Il **strcmp** funzione esegue un confronto ordinale *string1* e *string2* e restituisce un valore che indica la relazione. **wcscmp** e **mbscmp** sono, rispettivamente, le versioni a caratteri wide e a caratteri multibyte di **strcmp**. **mbscmp** riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce **_NLSCMPERROR** in caso di errore. Per altre informazioni, vedere [Tabelle codici](../../c-runtime-library/code-pages.md). Inoltre, se *string1* o *string2* è un puntatore null **mbscmp** richiama il gestore di parametri non validi, come descritto in [convalidadeiparametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **mbscmp** restituisce **_NLSCMPERROR** e imposta **errno** al **EINVAL**. **strcmp** e **wcscmp** non convalidano i relativi parametri. A parte ciò, queste tre funzioni si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcscmp**|**strcmp**|**_mbscmp**|**wcscmp**|

Il **strcmp** funzioni differiscono dalle **strcoll** funzioni in cui **strcmp** confronti ordinali e non sono interessati dalle impostazioni locali. **strcoll** confronta le stringhe a livello lessicografico usando la **LC_COLLATE** categoria delle impostazioni locali correnti. Per altre informazioni sul **LC_COLLATE** categoria, vedere [setlocale, wsetlocale](setlocale-wsetlocale.md).

Nelle impostazioni locali "C", l'ordine dei caratteri nel set di caratteri (set di caratteri ASCII) è lo stesso dell'ordine lessicografico dei caratteri. Tuttavia, in altre impostazioni locali, l'ordine dei caratteri nel set di caratteri può differire dall'ordine lessicografico. Ad esempio, in alcune impostazioni locali europee, il carattere 'a' (valore 0x61) precede il carattere 'ä' (valore 0xE4) nel set di caratteri, ma il carattere 'ä' precede a livello lessicografico il carattere 'a'.

Nelle impostazioni locali per il quale il set di caratteri e l'ordine lessicografico dei caratteri differiscono, è possibile usare **strcoll** invece di **strcmp** per il confronto lessicografico delle stringhe. In alternativa, è possibile usare **strxfrm** nelle stringhe originali e quindi usare **strcmp** sulle stringhe risultanti.

Il **strcmp** funzioni sono tra maiuscole e minuscole. **stricmp**, **wcsicmp**, e **mbsicmp** confrontare le stringhe convertendole prima in formato minuscolo. Due stringhe che contengono caratteri che si trovano tra 'Z' e 'a' nella tabella ASCII ('[','\\', ']', ' ^', '_' e '\`') Confronta in modo diverso, a seconda del caso. Ad esempio le due stringhe "ABCDE" e "ABCD ^" confrontate in un modo se il confronto è in minuscolo ("abcde" > "abcd ^") e l'altro modo ("ABCDE" < "ABCD ^") se è in maiuscolo.

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

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[_memicmp, _memicmp_l](memicmp-memicmp-l.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
