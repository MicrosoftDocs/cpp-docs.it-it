---
title: bsearch
ms.date: 11/04/2016
api_name:
- bsearch
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
- bsearch
helpviewer_keywords:
- arrays [CRT], binary search
- bsearch function
ms.assetid: e0ad2f47-e7dd-49ed-8288-870457a14a2c
ms.openlocfilehash: 9e44e85d1c6d73a68da2edd099cdeb6156f9759d
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70939442"
---
# <a name="bsearch"></a>bsearch

Esegue una ricerca binaria di una matrice ordinata. È disponibile una versione più sicura di questa funzione. Vedere [bsearch_s](bsearch-s.md).

## <a name="syntax"></a>Sintassi

```C
void *bsearch(
   const void *key,
   const void *base,
   size_t num,
   size_t width,
   int ( __cdecl *compare ) (const void *key, const void *datum)
);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Oggetto da cercare.

*base*<br/>
Puntatore a base dei dati di ricerca.

*numero*<br/>
Numero di elementi.

*width*<br/>
Larghezza degli elementi.

*compare*<br/>
Funzione di callback che confronta due elementi. Il primo è un puntatore alla chiave per la ricerca e il secondo è un puntatore all'elemento della matrice da confrontare con la chiave.

## <a name="return-value"></a>Valore restituito

**bCerca** restituisce un puntatore a un'occorrenza della *chiave* nella matrice a cui punta la *base*. Se *Key* non viene trovato, la funzione restituisce **null**. Se la matrice non è in ordine crescente o contiene record duplicati con chiavi identiche, il risultato è imprevedibile.

## <a name="remarks"></a>Note

La funzione **bCerca** esegue una ricerca binaria di una matrice ordinata di elementi *numerici* , ognuno con dimensioni di byte di *larghezza* . Il valore di *base* è un puntatore alla base della matrice in cui eseguire la ricerca e *Key* è il valore cercato. Il parametro *compare* è un puntatore a una routine fornita dall'utente che confronta la chiave richiesta con un elemento della matrice e restituisce uno dei valori seguenti che specifica la relazione:

|Valore restituito dalla routine di *confronto*|DESCRIZIONE|
|-----------------------------------------|-----------------|
|\< 0|La chiave è minore dell'elemento della matrice.|
|0|La chiave è uguale all'elemento della matrice.|
|> 0|La chiave è maggiore dell'elemento della matrice.|

Questa funzione convalida i relativi parametri. Se *compare*, *Key* o *Number* è **null**o se *base* è **null** e *Number* è diverso da zero oppure se *Width* è zero, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri. ](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su `EINVAL` e la funzione restituisce **null**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**bsearch**|\<stdlib.h> e \<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma consente di ordinare una matrice di stringhe con qsort e quindi usa bsearch per trovare la parola "cat".

```C
// crt_bsearch.c
#include <search.h>
#include <string.h>
#include <stdio.h>

int compare( char **arg1, char **arg2 )
{
   /* Compare all of both strings: */
   return _strcmpi( *arg1, *arg2 );
}

int main( void )
{
   char *arr[] = {"dog", "pig", "horse", "cat", "human", "rat", "cow", "goat"};
   char **result;
   char *key = "cat";
   int i;

   /* Sort using Quicksort algorithm: */
   qsort( (void *)arr, sizeof(arr)/sizeof(arr[0]), sizeof( char * ), (int (*)(const
   void*, const void*))compare );

   for( i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i )    /* Output sorted list */
      printf( "%s ", arr[i] );

   /* Find the word "cat" using a binary search algorithm: */
   result = (char **)bsearch( (char *) &key, (char *)arr, sizeof(arr)/sizeof(arr[0]),
                              sizeof( char * ), (int (*)(const void*, const void*))compare );
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

[Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)<br/>
[_lfind](lfind.md)<br/>
[_lsearch](lsearch.md)<br/>
[qsort](qsort.md)<br/>
