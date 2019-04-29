---
title: _stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l
ms.date: 11/04/2016
apiname:
- _stricmp_l
- _mbsicmp
- _wcsicmp
- _mbsicmp_l
- _stricmp
- _wcsicmp_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
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
ms.openlocfilehash: d27b2128d79d7ff3ab0150e182d494fed52d46ca
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62353839"
---
# <a name="stricmp-wcsicmp-mbsicmp-stricmpl-wcsicmpl-mbsicmpl"></a>_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l

Esegue un confronto di stringhe senza distinzione tra maiuscole/minuscole.

> [!IMPORTANT]
> **mbsicmp** e **mbsicmp_l** non può essere utilizzato nelle applicazioni eseguite nel Runtime di Windows. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

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

*string1*, *string2*<br/>
Stringhe che terminano con Null da confrontare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Il valore restituito indica la relazione della *string1* al *string2* come indicato di seguito.

|Valore restituito|Descrizione|
|------------------|-----------------|
|< 0|*String1* minore di *stringa2*|
|0|*String1* identica alla *stringa2*|
|> 0|*String1* maggiore *stringa2*|

In caso di errore, **mbsicmp** restituisce **_NLSCMPERROR**, che è definito nel \<String. h > e \<Mbstring. h >.

## <a name="remarks"></a>Note

Il **stricmp** ordinale funzione Confronta *string1* e *string2* dopo la conversione di ogni carattere in minuscolo e restituisce un valore che indica la relazione. **stricmp** è diverso da **stricoll** in quanto il **stricmp** confronto influiranno solo **LC_CTYPE**, che determina quali caratteri sono superiore e lettere minuscole. Il **stricoll** funzione Confronta le stringhe in base a entrambe le **LC_CTYPE** e **LC_COLLATE** categorie delle impostazioni locali, che include sia il caso che le regole di confronto ordine. Per altre informazioni sul **LC_COLLATE** categoria, vedere [setlocale](setlocale-wsetlocale.md) e [categorie di impostazioni locali](../../c-runtime-library/locale-categories.md). Le versioni di queste funzioni senza il **l** suffisso usare le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso sono identiche, ma usano le impostazioni locali passate. Se le impostazioni locali non sono state impostate, vengono usate le impostazioni locali di C. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

> [!NOTE]
> **stricmp** equivale a **strcmpi**. Possono essere utilizzati indifferentemente, ma **stricmp** è lo standard preferito.

Il **strcmpi** è equivalente alla funzione **stricmp** e viene fornito per compatibilità con le versioni.

In quanto **stricmp** minuscolo confronti, potrebbe causare comportamenti imprevisti.

Per illustrare quando la conversione da maiuscole **stricmp** influisce sul risultato di un confronto, si presuppone che le due stringhe, JOHNSTON e JOHN_HENRY. La stringa JOHN_HENRY viene considerata minore rispetto a JOHNSTON perché "_" ha un valore ASCII minore rispetto a una S minuscola. In realtà, qualsiasi carattere con un valore ASCII compreso tra 91 e 96 verrà considerato minore rispetto a qualsiasi lettera.

Se il [strcmp](strcmp-wcscmp-mbscmp.md) funzione viene usata invece di **stricmp**, JOHN_HENRY sarà maggiore di JOHNSTON.

**wcsicmp** e **mbsicmp** sono versioni a caratteri wide e caratteri multibyte di **stricmp**. Gli argomenti e il valore restituito di **wcsicmp** sono caratteri wide, mentre quelli di stringhe **mbsicmp** sono stringhe a caratteri multibyte. **mbsicmp** riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce **_NLSCMPERROR** in caso di errore. Per altre informazioni, vedere [Tabelle codici](../../c-runtime-library/code-pages.md). A parte ciò, queste tre funzioni si comportano in modo identico.

**wcsicmp** e **wcscmp** si comportano in modo identico con la differenza che **wcscmp** non converte i relativi argomenti in minuscolo prima di confrontarli. **mbsicmp** e **mbscmp** si comportano in modo identico con la differenza che **mbscmp** non converte i relativi argomenti in minuscolo prima di confrontarli.

È necessario chiamare [setlocale](setlocale-wsetlocale.md) per **wcsicmp** per lavorare con i caratteri Latin 1. Le impostazioni locali C sono attiva per impostazione predefinita, pertanto, ad esempio, non risulta uguale a Ä ä. Chiamare **setlocale** con qualsiasi impostazione locale ad eccezione di c prima della chiamata a **wcsicmp**. Nell'esempio seguente viene illustrato come **wcsicmp** è sensibile alle impostazioni locali:

```C
// crt_stricmp_locale.c
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

Un'alternativa consiste nel chiamare [create_locale, wcreate_locale](create-locale-wcreate-locale.md) e passare l'oggetto delle impostazioni locali restituito come parametro al **wcsicmp_l**.

Tutte queste funzioni convalidano i relativi parametri. Se uno dei due *string1* oppure *string2* sono puntatori null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, queste funzioni restituiscono **_NLSCMPERROR** e impostare **errno** al **EINVAL**.

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

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[_memicmp, _memicmp_l](memicmp-memicmp-l.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
