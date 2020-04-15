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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 8f2983bee93c623eb936ed12422134281418076b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81342192"
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

*Chiave*<br/>
Oggetto da cercare.

*base*<br/>
Puntatore alla base dei dati di ricerca.

*Numero*<br/>
Numero degli elementi della matrice.

*Dimensione*<br/>
Dimensione degli elementi della matrice in byte.

*Confrontare*<br/>
Puntatore alla routine di confronto. Il primo parametro è il puntatore di *contesto.* Il secondo parametro è un puntatore alla chiave per la ricerca. Il terzo parametro è un puntatore all'elemento della matrice da confrontare con la chiave.

*context*<br/>
Puntatore a un oggetto che potrebbe essere accessibile nella funzione di confronto.

## <a name="return-value"></a>Valore restituito

Se la chiave viene trovata, **_lfind_s** restituisce un puntatore all'elemento della matrice in *corrispondenza* della chiave *.* Se la chiave non viene trovata, **_lfind_s** restituisce **NULL**.

Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EINVAL** e la funzione restituisce **NULL**.

### <a name="error-conditions"></a>Condizioni di errore

|Key|base|compare|num|size|errno|
|---------|----------|-------------|---------|----------|-----------|
|**Null**|any|any|any|any|**Einval**|
|any|**Null**|any|!= 0|any|**Einval**|
|any|any|any|any|zero|**Einval**|
|any|any|**Null**|any|any|**Einval**|

## <a name="remarks"></a>Osservazioni

La funzione **_lfind_s** esegue una ricerca lineare per la *chiave* di valore in una matrice di elementi *numerici,* ognuno dei byte di *larghezza.* A differenza di **bsearch_s**, **_lfind_s** non richiede l'ordinamento della matrice. L'argomento *base* è un puntatore alla base della matrice in cui eseguire la ricerca. L'argomento *compare* è un puntatore a una routine fornita dall'utente che confronta due elementi della matrice e quindi restituisce un valore che ne specifica la relazione. **_lfind_s** chiama la routine di *confronto* una o più volte durante la ricerca, passando il puntatore di *contesto* e puntatori a due elementi della matrice a ogni chiamata. La routine di *confronto* deve confrontare gli elementi quindi restituiscono diverso da zero (il che significa che gli elementi sono diversi) o 0 (ovvero gli elementi sono identici).

**_lfind_s** è simile a **_lfind** ad eccezione dell'aggiunta del puntatore di *contesto* agli argomenti della funzione di confronto e all'elenco di parametri della funzione. Il puntatore di *contesto* può essere utile se la struttura di dati ricercati fa parte di un oggetto e la funzione di *confronto* deve accedere ai membri dell'oggetto. La funzione *di confronto* può eseguire il cast del puntatore void nel tipo di oggetto appropriato e accedere ai membri di tale oggetto. L'aggiunta del parametro *context* **rende _lfind_s** più sicura perché è possibile utilizzare un contesto aggiuntivo per evitare bug di rientranza associati all'utilizzo di variabili statiche per rendere disponibili i dati per la funzione *di confronto.*

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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
