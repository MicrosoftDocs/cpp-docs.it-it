---
title: bsearch_s
ms.date: 10/22/2019
api_name:
- bsearch_s
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
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- bsearch_s
helpviewer_keywords:
- arrays [CRT], binary search
- bsearch_s function
ms.assetid: d5690d5e-6be3-4f1d-aa0b-5ca6dbded276
ms.openlocfilehash: fc86576dbbe73f63da6bf0e28e7166ef7c552e55
ms.sourcegitcommit: 0a5518fdb9d87fcc326a8507ac755936285fcb94
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2019
ms.locfileid: "72811151"
---
# <a name="bsearch_s"></a>bsearch_s

Esegue una ricerca binaria di una matrice ordinata. Questa funzione è una versione di [bCerca](bsearch.md) con miglioramenti per la sicurezza, come descritto in [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
void *bsearch_s(
   const void *key,
   const void *base,
   size_t number,
   size_t width,
   int ( __cdecl *compare ) ( void *, const void *key, const void *datum),
   void * context
);
```

### <a name="parameters"></a>Parametri

\ *chiave*
Puntatore alla chiave da cercare.

*base*\
Puntatore alla base dei dati di ricerca.

*numero*\
Numero di elementi.

\ *larghezza*
Larghezza degli elementi.

*confronta*\
Funzione di callback che confronta due elementi. Il primo argomento è il puntatore di *contesto* . Il secondo argomento è un puntatore alla *chiave* per la ricerca. Il terzo argomento è un puntatore all'elemento della matrice da confrontare con la *chiave*.

\ *contesto*
Puntatore a un oggetto accessibile nella funzione di confronto.

## <a name="return-value"></a>Valore restituito

**bsearch_s** restituisce un puntatore a un'occorrenza della *chiave* nella matrice a cui punta la *base*. Se *Key* non viene trovato, la funzione restituisce **null**. Se la matrice non è in ordine crescente o contiene record duplicati con chiavi identiche, il risultato è imprevedibile.

Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **null**. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

### <a name="error-conditions"></a>Condizioni di errore

|||||||
|-|-|-|-|-|-|
|*key*|*base*|*compare*|*numero*|*width*|**errno**|
|**NULL**|any|any|any|any|**EINVAL**|
|any|**NULL**|any|!= 0|any|**EINVAL**|
|any|any|any|any|= 0|**EINVAL**|
|any|any|**NULL**|any|any|**EINVAL**|

## <a name="remarks"></a>Note

La funzione **bsearch_s** esegue una ricerca binaria di una matrice ordinata di elementi *numerici* , ognuno con dimensioni di byte di *larghezza* . Il valore di *base* è un puntatore alla base della matrice in cui eseguire la ricerca e *Key* è il valore cercato. Il parametro *compare* è un puntatore a una routine fornita dall'utente che confronta la chiave richiesta con un elemento della matrice e restituisce uno dei valori seguenti che specifica la relazione:

|Valore restituito dalla routine di *confronto*|Descrizione|
|-----------------------------------------|-----------------|
|\< 0|La chiave è minore dell'elemento della matrice.|
|0|La chiave è uguale all'elemento della matrice.|
|> 0|La chiave è maggiore dell'elemento della matrice.|

Il puntatore di *contesto* può essere utile se la struttura dei dati cercati fa parte di un oggetto e la funzione di confronto deve accedere ai membri dell'oggetto. La funzione *compare* può eseguire il cast del puntatore void nel tipo di oggetto appropriato e accedere ai membri di tale oggetto. L'aggiunta del parametro di *contesto* rende **bsearch_s** più sicuro poiché può essere usato un contesto aggiuntivo per evitare i bug rientranti associati all'uso di variabili statiche per rendere disponibili i dati alla funzione di *confronto* .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**bsearch_s**|\<stdlib.h> e \<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma consente di ordinare una matrice di stringhe con [qsort_s](qsort-s.md)e quindi usa bsearch_s per trovare la parola "cat".

```cpp
// crt_bsearch_s.cpp
// This program uses bsearch_s to search a string array,
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
#define ENGLISH_LOCALE "English_US.850"
#endif

#ifdef CODEPAGE_1252
#define ENGLISH_LOCALE "English_US.1252"
#endif

// The context parameter lets you create a more generic compare.
// Without this parameter, you would have stored the locale in a
// static variable, thus making it vulnerable to thread conflicts
// (if this were a multithreaded program).

int compare( void *pvlocale, char **str1, char **str2)
{
    char *s1 = *str1;
    char *s2 = *str2;

    locale& loc = *( reinterpret_cast< locale * > ( pvlocale));

    return use_facet< collate<char> >(loc).compare(
       s1, s1+strlen(s1),
       s2, s2+strlen(s2) );
}

int main( void )
{
   char *arr[] = {"dog", "pig", "horse", "cat", "human", "rat", "cow", "goat"};

   char *key = "cat";
   char **result;
   int i;

   /* Sort using Quicksort algorithm: */
   qsort_s( arr,
            sizeof(arr)/sizeof(arr[0]),
            sizeof( char * ),
            (int (*)(void*, const void*, const void*))compare,
            &locale(ENGLISH_LOCALE) );

   for( i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i )    /* Output sorted list */
      printf( "%s ", arr[i] );

   /* Find the word "cat" using a binary search algorithm: */
   result = (char **)bsearch_s( &key,
                                arr,
                                sizeof(arr)/sizeof(arr[0]),
                                sizeof( char * ),
                                (int (*)(void*, const void*, const void*))compare,
                                &locale(ENGLISH_LOCALE) );
   if( result )
      printf( "\n%s found at %Fp\n", *result, result );
   else
      printf( "\nCat not found!\n" );
}
```

```Output
cat cow dog goat horse human pig rat
cat found at 002F0F04
```

## <a name="see-also"></a>Vedere anche

[Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)\
[_lfind](lfind.md)\
[_lsearch](lsearch.md)\
[qsort](qsort.md)
