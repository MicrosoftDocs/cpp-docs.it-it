---
title: _lfind_s
ms.date: 4/2/2020
api_name:
- _lfind_s
- _o__lfind_s
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
- api-ms-win-crt-utility-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- lfind_s
- _lfind_s
helpviewer_keywords:
- linear searching
- keys, finding in arrays
- lfind_s function
- arrays [CRT], searching
- searching, linear
- _lfind_s function
ms.assetid: f1d9581d-5c9d-4222-a31c-a6dfafefa40d
ms.openlocfilehash: 589a413c9f1fb49fbfe8cd1b5eacb9d452716523
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82916511"
---
# <a name="_lfind_s"></a>_lfind_s

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

*number*<br/>
Numero degli elementi della matrice.

*size*<br/>
Dimensione degli elementi della matrice in byte.

*confrontare*<br/>
Puntatore alla routine di confronto. Il primo parametro è il puntatore di *contesto* . Il secondo parametro è un puntatore alla chiave per la ricerca. Il terzo parametro è un puntatore all'elemento della matrice da confrontare con la chiave.

*context*<br/>
Puntatore a un oggetto che potrebbe essere accessibile nella funzione di confronto.

## <a name="return-value"></a>Valore restituito

Se la chiave viene trovata, **_lfind_s** restituisce un puntatore all'elemento della matrice in *base* che corrisponde alla *chiave*. Se la chiave non viene trovata, **_lfind_s** restituisce **null**.

Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **null**.

### <a name="error-conditions"></a>Condizioni di errore

|Key|base|compare|num|size|errno|
|---------|----------|-------------|---------|----------|-----------|
|**NULL**|any|any|any|any|**EINVAL**|
|any|**NULL**|any|!= 0|any|**EINVAL**|
|any|any|any|any|zero|**EINVAL**|
|any|any|**NULL**|any|any|**EINVAL**|

## <a name="remarks"></a>Osservazioni

La funzione **_lfind_s** esegue una ricerca lineare per la *chiave* del valore in una matrice di elementi *numerici* , ciascuno di byte di *larghezza* . A differenza di **bsearch_s**, **_lfind_s** non richiede che la matrice sia ordinata. L'argomento di *base* è un puntatore alla base della matrice in cui eseguire la ricerca. L'argomento *compare* è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e quindi restituisce un valore che ne specifica la relazione. **_lfind_s** chiama la routine di *confronto* una o più volte durante la ricerca, passando il puntatore di *contesto* e i puntatori a due elementi di matrice per ogni chiamata. La routine di *confronto* deve confrontare gli elementi, quindi restituire un valore diverso da zero (ovvero gli elementi sono diversi) o 0 (che indica che gli elementi sono identici).

**_lfind_s** è simile a **_lfind** ad eccezione dell'aggiunta del puntatore di *contesto* agli argomenti della funzione di confronto e all'elenco di parametri della funzione. Il puntatore di *contesto* può essere utile se la struttura dei dati cercati fa parte di un oggetto e la funzione di *confronto* deve accedere ai membri dell'oggetto. La funzione *compare* può eseguire il cast del puntatore void nel tipo di oggetto appropriato e accedere ai membri di tale oggetto. L'aggiunta del parametro di *contesto* rende **_lfind_s** più sicuro perché può essere usato un contesto aggiuntivo per evitare i bug rientranti associati all'uso di variabili statiche per rendere disponibili i dati alla funzione di *confronto* .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_lfind_s**|\<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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
