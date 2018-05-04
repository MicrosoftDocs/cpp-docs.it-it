---
title: _lfind_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _lfind_s
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
- api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- lfind_s
- _lfind_s
dev_langs:
- C++
helpviewer_keywords:
- linear searching
- keys, finding in arrays
- lfind_s function
- arrays [CRT], searching
- searching, linear
- _lfind_s function
ms.assetid: f1d9581d-5c9d-4222-a31c-a6dfafefa40d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 963b657a009f7376a17706b4ac1e5fb4e8b69237
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="lfinds"></a>_lfind_s

Esegue una ricerca lineare della chiave specificata. Questa è una versione di [_lfind](lfind.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
void *_lfind_s(
   const void *key,
   const void *base,
   unsigned int *num,
   size_t size,
   int (__cdecl *compare)(void *, const void *, const void *),
   void * context
);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Oggetto da cercare.

*base*<br/>
Puntatore alla base dei dati di ricerca.

*Numero*<br/>
Numero degli elementi della matrice.

*size*<br/>
Dimensione degli elementi della matrice in byte.

*compare*<br/>
Puntatore alla routine di confronto. Il primo parametro è il *contesto* puntatore. Il secondo parametro è un puntatore alla chiave per la ricerca. Il terzo parametro è un puntatore all'elemento della matrice da confrontare con la chiave.

*context*<br/>
Puntatore a un oggetto che potrebbe essere accessibile nella funzione di confronto.

## <a name="return-value"></a>Valore restituito

Se la chiave viene trovata, **lfind_s** restituisce un puntatore all'elemento della matrice in corrispondenza *base* che corrisponde a *chiave*. Se la chiave non viene trovata, **lfind_s** restituisce **NULL**.

Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **NULL**.

### <a name="error-conditions"></a>Condizioni di errore

|key|base|compare|num|size|errno|
|---------|----------|-------------|---------|----------|-----------|
|**NULL**|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**EINVAL**|
|qualsiasi|**NULL**|qualsiasi|!= 0|qualsiasi|**EINVAL**|
|qualsiasi|qualsiasi|qualsiasi|qualsiasi|zero|**EINVAL**|
|qualsiasi|qualsiasi|**NULL**|any|qualsiasi|**EINVAL**|

## <a name="remarks"></a>Note

Il **lfind_s** funzione esegue una ricerca lineare per il valore *chiave* in una matrice di *numero* elementi, ognuno dei *larghezza* byte. A differenza **bsearch_s**, **lfind_s** non richiede che la matrice da ordinare. Il *base* argomento è un puntatore alla base della matrice da cercare. Il *confrontare* argomento è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e quindi restituisce un valore che specifica la relazione. **lfind_s** chiama il *confrontare* routine una o più volte durante la ricerca, passando il *contesto* puntatore e i puntatori a due elementi di matrice per ogni chiamata. Il *confrontare* routine deve confrontare gli elementi quindi restituito diverso da zero (Ciò significa che gli elementi sono diversi) oppure 0 (vale a dire gli elementi sono identici).

**lfind_s** è simile a **lfind** tranne l'aggiunta del *contesto* puntatore all'elenco di parametri della funzione e gli argomenti della funzione di confronto. Il *contesto* puntatore può essere utile se la struttura dei dati cercati fa parte di un oggetto e il *confrontare* deve accedere ai membri dell'oggetto funzione. Il *confrontare* funzione possibile il cast del puntatore void nell'oggetto appropriato tipo e accedere ai membri di tale oggetto. L'aggiunta del *contesto* parametro rende **lfind_s** più sicura perché un contesto aggiuntivo consente di evitare i bug reentrancy associati all'utilizzo di variabili statiche per rendere i dati disponibili per il *confrontare* (funzione).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_lfind_s**|\<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```cpp
// crt_lfind_s.cpp
// This program uses _lfind_s to search a string array,
// passing a locale as the context.
// compile with: /EHsc
#include <stdlib.h>
#include <stdio.h>
#include <search.h>
#include <process.h>
#include <locale.h>
#include <locale>
#include <windows.h>
using namespace std;

// The sort order is dependent on the code page.  Use 'chcp' at the
// command line to change the codepage.  When executing this application,
// the command prompt codepage must match the codepage used here:

#define CODEPAGE_850

#ifdef CODEPAGE_850
// Codepage 850 is the OEM codepage used by the command line,
// so \x00e1 is the German Sharp S

char *array1[] = { "wei\x00e1", "weis", "annehmen", "weizen", "Zeit",
                   "weit" };

#define GERMAN_LOCALE "German_Germany.850"

#endif

#ifdef CODEPAGE_1252
   // If using codepage 1252 (ISO 8859-1, Latin-1), use \x00df
   // for the German Sharp S
char *array1[] = { "wei\x00df", "weis", "annehmen", "weizen", "Zeit",
                   "weit" };

#define GERMAN_LOCALE "German_Germany.1252"

#endif

// The context parameter lets you create a more generic compare.
// Without this parameter, you would have stored the locale in a
// static variable, thus making it vulnerable to thread conflicts
// (if this were a multithreaded program).

int compare( void *pvlocale, const void *str1, const void *str2)
{
    char *s1 = *(char**)str1;
    char *s2 = *(char**)str2;

    locale& loc = *( reinterpret_cast< locale * > ( pvlocale));

    return use_facet< collate<char> >(loc).compare(
       s1, s1+strlen(s1),
       s2, s2+strlen(s2) );
}

void find_it( char *key, char *array[], unsigned int num, locale &loc )
{
   char **result = (char **)_lfind_s( &key, array,
                      &num, sizeof(char *), compare, &loc );
   if( result )
      printf( "%s found\n", *result );
   else
      printf( "%s not found\n", key );
}

int main( )
{
   find_it( "weit", array1, sizeof(array1)/sizeof(char*), locale(GERMAN_LOCALE) );
}
```

```Output
weit found
```

## <a name="see-also"></a>Vedere anche

[Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)<br/>
[bsearch_s](bsearch-s.md)<br/>
[_lsearch_s](lsearch-s.md)<br/>
[qsort_s](qsort-s.md)<br/>
[_lfind](lfind.md)<br/>
