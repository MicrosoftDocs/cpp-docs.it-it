---
title: qsort
description: Descrive l'API Microsoft C Runtime Quick Sort `qsort`
ms.date: 10/23/2020
api_name:
- qsort
- _o_qsort
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: c658ffae69cd662809eb4dac09c06b6a13f4e051
ms.sourcegitcommit: faecabcdd12ff53eb79dc0df193fc3567f2f037c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/27/2020
ms.locfileid: "92639120"
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

*`base`*\
Inizio della matrice di destinazione.

*`number`*\
Dimensione della matrice in elementi.

*`width`*\
Dimensione dell'elemento in byte.

*`compare`*\
Puntatore a una routine fornita dall'utente che confronta due elementi di matrice e restituisce un valore che ne specifica la relazione.

## <a name="remarks"></a>Commenti

La **`qsort`** funzione implementa un algoritmo di ordinamento rapido per ordinare una matrice di *`number`* elementi, ognuno di *`width`* byte. L'argomento *`base`* è un puntatore alla base della matrice da ordinare. **`qsort`** sovrascrive questa matrice usando gli elementi ordinati.

**`qsort`** chiama la *`compare`* routine una o più volte durante l'ordinamento e passa i puntatori a due elementi di matrice per ogni chiamata. Se *`compare`* indica che due elementi sono uguali, il relativo ordine nella matrice ordinata risultante non è specificato.

```C
compare( (void *) & elem1, (void *) & elem2 );
```

La routine confronta gli elementi e restituisce uno dei valori seguenti.

|Valore restituito dalla funzione compare|Descrizione|
|-----------------------------------|-----------------|
|< 0|**`elem1`** minore di **`elem2`**|
|0|**`elem1`** equivalente a **`elem2`**|
|> 0|**`elem1`** maggiore di **`elem2`**|

La matrice viene ordinata in ordine crescente, come definito dalla funzione di confronto. Per ordinare una matrice in ordine decrescente, invertire il senso di "maggiore di" e "minore di" nella funzione di confronto.

Questa funzione convalida i relativi parametri. Se *`compare`* o *`number`* è o **`NULL`** se *`base`* è **`NULL`** e *`number`* è diverso da zero o se *`width`* è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in convalida dei [parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce e **`errno`** viene impostato su **`EINVAL`** .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`qsort`**|\<stdlib.h> e \<search.h>|

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

[Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)\
[`bsearch`](bsearch.md)\
[`_lsearch`](lsearch.md)
