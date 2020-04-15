---
title: qsort
ms.date: 4/2/2020
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 09de57e206eb6fd4a75a0a9444332136aeee0e9d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81338253"
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

*Numero*<br/>
Dimensione della matrice in elementi.

*width*<br/>
Dimensione dell'elemento in byte.

*Confrontare*<br/>
Puntatore a una routine fornita dall'utente che confronta due elementi di matrice e restituisce un valore che ne specifica la relazione.

## <a name="remarks"></a>Osservazioni

La funzione **qsort** implementa un algoritmo di ordinamento rapido per ordinare una matrice di elementi *numerici,* ognuno dei byte di *larghezza.* L'argomento *base* è un puntatore alla base della matrice da ordinare. **qsort** sovrascrive questa matrice utilizzando gli elementi ordinati.

**qsort** chiama la routine di *confronto* una o più volte durante l'ordinamento e passa puntatori a due elementi della matrice a ogni chiamata.

```C
compare( (void *) & elem1, (void *) & elem2 );
```

La routine confronta gli elementi e restituisce uno dei valori seguenti.

|Valore restituito dalla funzione compare|Descrizione|
|-----------------------------------|-----------------|
|< 0|**elem1** meno di **elem2**|
|0|**elem1** equivalente a **elem2**|
|> 0|**elem1** maggiore di **elem2**|

La matrice viene ordinata in ordine crescente, come definito dalla funzione di confronto. Per ordinare una matrice in ordine decrescente, invertire il senso di "maggiore di" e "minore di" nella funzione di confronto.

Questa funzione convalida i relativi parametri. Se *compare* o *number* è **NULL**o se *base* è **NULL** e *number* è diverso da zero o se *width* è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce e **errno** è impostato su **EINVAL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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
