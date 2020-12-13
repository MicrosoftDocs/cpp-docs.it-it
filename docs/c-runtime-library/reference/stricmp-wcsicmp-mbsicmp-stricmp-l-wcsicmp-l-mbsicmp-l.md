---
description: 'Altre informazioni su: _stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l'
title: _stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l
ms.date: 4/2/2020
api_name:
- _stricmp_l
- _mbsicmp
- _wcsicmp
- _mbsicmp_l
- _stricmp
- _wcsicmp_l
- _o__mbsicmp
- _o__mbsicmp_l
- _o__stricmp
- _o__stricmp_l
- _o__wcsicmp
- _o__wcsicmp_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _ftcsicmp
- _stricmp
- wcsicmp_l
- _wcsicmp
- _tcsicmp
- _strcmpi
- stricmp_l
- _mbsicmp
- _fstricmp
- mbsicmp_l
- mbsicmp
helpviewer_keywords:
- _wcsicmp function
- _stricmp_l function
- fstricmp function
- _tcsicmp function
- ftcsicmp function
- string comparison [C++], lowercase
- _wcsicmp_l function
- _fstricmp function
- strings [C++], comparing
- mbsicmp function
- _ftcsicmp function
- _mbsicmp_l function
- wcsicmp_l function
- _stricmp function
- _mbsicmp function
- tcsicmp function
- stricmp_l function
- mbsicmp_l function
- _strcmpi function
ms.assetid: 0e1ee515-0d75-435a-a445-8875d4669b50
ms.openlocfilehash: 07ec1b2f53ae299c1c9622422cdf22e7f07ad330
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338873"
---
# <a name="_stricmp-_wcsicmp-_mbsicmp-_stricmp_l-_wcsicmp_l-_mbsicmp_l"></a>_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l

Esegue un confronto di stringhe senza distinzione tra maiuscole/minuscole.

> [!IMPORTANT]
> non è possibile usare **_mbsicmp** e **_mbsicmp_l** nelle applicazioni eseguite nel Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _stricmp(
   const char *string1,
   const char *string2
);
int _wcsicmp(
   const wchar_t *string1,
   const wchar_t *string2
);
int _mbsicmp(
   const unsigned char *string1,
   const unsigned char *string2
);
int _stricmp_l(
   const char *string1,
   const char *string2,
   _locale_t locale
);
int _wcsicmp_l(
   const wchar_t *string1,
   const wchar_t *string2,
   _locale_t locale
);
int _mbsicmp_l(
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

Il valore restituito indica la relazione tra *String1* e *string2* , come indicato di seguito.

|Valore restituito|Descrizione|
|------------------|-----------------|
|< 0|*String1* minore di *string2*|
|0|*String1* identico a *string2*|
|> 0|*String1* maggiore di *string2*|

In un errore, **_mbsicmp** restituisce **_NLSCMPERROR**, che è definito in \<string.h> e \<mbstring.h> .

## <a name="remarks"></a>Commenti

La funzione **_stricmp** confronta in modo ordinale *String1* e *string2* dopo aver convertito ogni carattere in minuscolo e restituisce un valore che ne indica la relazione. **_stricmp** differisce da **_stricoll** in quanto il confronto di **_stricmp** è influenzato solo dal **LC_CTYPE**, che determina quali caratteri sono maiuscoli e minuscoli. La funzione **_stricoll** Confronta le stringhe in base alle categorie di **LC_CTYPE** e **LC_COLLATE** delle impostazioni locali, che includono sia il caso che l'ordine delle regole di confronto. Per ulteriori informazioni sulla categoria **LC_COLLATE** [, vedere setlocale](setlocale-wsetlocale.md) e [categorie di impostazioni locali](../../c-runtime-library/locale-categories.md). Le versioni di queste funzioni senza il suffisso **_L** usano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso sono identiche, ma usano le impostazioni locali passate. Se le impostazioni locali non sono state impostate, vengono usate le impostazioni locali di C. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

> [!NOTE]
> **_stricmp** equivale a **_strcmpi**. Possono essere usati in modo intercambiabile, ma **_stricmp** è lo standard preferito.

La funzione **_strcmpi** è equivalente a **_stricmp** e viene fornita solo per compatibilità con le versioni precedenti.

Poiché **_stricmp** esegue confronti minuscoli, può causare un comportamento imprevisto.

Per illustrare quando la conversione dei case per **_stricmp** influisca sul risultato di un confronto, si supponga di disporre delle due stringhe JOHNSTON e JOHN_HENRY. La stringa JOHN_HENRY viene considerata minore rispetto a JOHNSTON perché "_" ha un valore ASCII minore rispetto a una S minuscola. In realtà, qualsiasi carattere con un valore ASCII compreso tra 91 e 96 verrà considerato minore rispetto a qualsiasi lettera.

Se viene usata la funzione [strcmp](strcmp-wcscmp-mbscmp.md) invece di **_stricmp**, JOHN_HENRY sarà maggiore di Johnston.

**_wcsicmp** e **_mbsicmp** sono versioni a caratteri wide e a caratteri multibyte di **_stricmp**. Gli argomenti e il valore restituito di **_wcsicmp** sono stringhe a caratteri wide. i **_mbsicmp** sono stringhe di caratteri multibyte. **_mbsicmp** riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce **_NLSCMPERROR** su un errore. Per altre informazioni, vedere [Tabelle codici](../../c-runtime-library/code-pages.md). A parte ciò, queste tre funzioni si comportano in modo identico.

**_wcsicmp** e **wcscmp** si comportano in modo identico con la differenza che **wcscmp** non converte gli argomenti in minuscolo prima di confrontarli. **_mbsicmp** e **_mbscmp** si comportano in modo identico, ad eccezione del fatto che **_mbscmp** non converte gli argomenti in minuscolo prima di confrontarli.

È necessario chiamare [setlocale](setlocale-wsetlocale.md) per **_wcsicmp** per lavorare con i caratteri latini 1. Le impostazioni locali C sono attive per impostazione predefinita, quindi, ad esempio, ä non verrà paragonato a Ä. Chiamare **setlocale con le** impostazioni locali diverse dalle impostazioni locali di C prima della chiamata a **_wcsicmp**. Nell'esempio seguente viene illustrato il modo in cui **_wcsicmp** è sensibile alle impostazioni locali:

```C
// crt_stricmp_locale.c
By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

#include <string.h>
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL,"C");   // in effect by default
   printf("\n%d",_wcsicmp(L"ä", L"Ä"));   // compare fails
   setlocale(LC_ALL,"");
   printf("\n%d",_wcsicmp(L"ä", L"Ä"));   // compare succeeds
}
```

In alternativa, è possibile chiamare [_create_locale, _wcreate_locale](create-locale-wcreate-locale.md) e passare l'oggetto delle impostazioni locali restituito come parametro a **_wcsicmp_l**.

Tutte queste funzioni convalidano i relativi parametri. Se *String1* o *string2* sono puntatori null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, queste funzioni restituiscono **_NLSCMPERROR** e impostano **errno** su **EINVAL**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsicmp**|**_stricmp**|**_mbsicmp**|**_wcsicmp**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_stricmp**, **_stricmp_l**|\<string.h>|
|**_wcsicmp**, **_wcsicmp_l**|\<string.h> o \<wchar.h>|
|**_mbsicmp**, **_mbsicmp_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_stricmp.c

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
      strcpy_s( tmp, _countof(tmp), "less than" );
   else
      strcpy_s( tmp, _countof(tmp), "equal to" );
   printf( "   strcmp:   String 1 is %s string 2\n", tmp );

   // Case insensitive (could use equivalent _stricmp)
   result = _stricmp( string1, string2 );
   if( result > 0 )
      strcpy_s( tmp, _countof(tmp), "greater than" );
   else if( result < 0 )
      strcpy_s( tmp, _countof(tmp), "less than" );
   else
      strcpy_s( tmp, _countof(tmp), "equal to" );
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
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
