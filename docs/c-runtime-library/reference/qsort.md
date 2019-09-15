---
title: qsort
ms.date: 11/04/2016
api_name:
- qsort
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
- api-ms-win-crt-utility-l1-1-0.dll
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- qsort
helpviewer_keywords:
- qsort function
- quick-sort algorithm
- sorting arrays
- arrays [CRT], sorting
ms.assetid: d6cb33eb-d209-485f-8d41-229eb743c027
ms.openlocfilehash: f445158bb72c50507af913986aff2d225ee50928
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70949707"
---
# <a name="qsort"></a>qsort

Esegue un ordinamento rapido. È disponibile una versione più sicura di questa funzione; vedere [qsort_s](qsort-s.md).

## <a name="syntax"></a>Sintassi

```C
void qsort(
   void *base,
   size_t number,
   size_t width,
   int (__cdecl *compare )(const void *, const void *)
);
```

### <a name="parameters"></a>Parametri

*base*<br/>
Inizio della matrice di destinazione.

*numero*<br/>
Dimensione della matrice in elementi.

*width*<br/>
Dimensione dell'elemento in byte.

*compare*<br/>
Puntatore a una routine fornita dall'utente che confronta due elementi di matrice e restituisce un valore che ne specifica la relazione.

## <a name="remarks"></a>Note

La funzione **qsort** implementa un algoritmo di ordinamento rapido per ordinare una matrice di elementi *numerici* , ciascuno di byte di *larghezza* . La *base* degli argomenti è un puntatore alla base della matrice da ordinare. **qsort** sovrascrive questa matrice usando gli elementi ordinati.

**qsort** chiama la routine di *confronto* una o più volte durante l'ordinamento e passa i puntatori a due elementi di matrice per ogni chiamata.

```C
compare( (void *) & elem1, (void *) & elem2 );
```

La routine confronta gli elementi e restituisce uno dei valori seguenti.

|Valore restituito dalla funzione compare|DESCRIZIONE|
|-----------------------------------|-----------------|
|< 0|**elem1** minore di **elem2**|
|0|**elem1** equivalente a **elem2**|
|> 0|**elem1** maggiore di **elem2**|

La matrice viene ordinata in ordine crescente, come definito dalla funzione di confronto. Per ordinare una matrice in ordine decrescente, invertire il senso di "maggiore di" e "minore di" nella funzione di confronto.

Questa funzione convalida i relativi parametri. Se *compare* o *Number* è **null**o se *base* è **null** e *Number* è diverso da zero oppure se *Width* è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce e **errno** viene impostato su **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**qsort**|\<stdlib.h> e \<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_qsort.c
// arguments: every good boy deserves favor

/* This program reads the command-line
* parameters and uses qsort to sort them. It
* then displays the sorted arguments.
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int compare( const void *arg1, const void *arg2 );

int main( int argc, char **argv )
{
   int i;
   /* Eliminate argv[0] from sort: */
   argv++;
   argc--;

   /* Sort remaining args using Quicksort algorithm: */
   qsort( (void *)argv, (size_t)argc, sizeof( char * ), compare );

   /* Output sorted list: */
   for( i = 0; i < argc; ++i )
      printf( " %s", argv[i] );
   printf( "\n" );
}

int compare( const void *arg1, const void *arg2 )
{
   /* Compare all of both strings: */
   return _stricmp( * ( char** ) arg1, * ( char** ) arg2 );
}
```

```Output
boy deserves every favor good
```

## <a name="see-also"></a>Vedere anche

[Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)<br/>
[bsearch](bsearch.md)<br/>
[_lsearch](lsearch.md)<br/>
