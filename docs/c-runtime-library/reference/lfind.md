---
title: _lfind
ms.date: 11/04/2016
api_name:
- _lfind
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _lfind
helpviewer_keywords:
- linear searching
- lfind function
- arrays [CRT], searching
- searching, linear
- finding keys in arrays
- _lfind function
ms.assetid: a40ece70-1674-4b75-94bd-9f57cfff18f2
ms.openlocfilehash: ec59340433b92334effa8004720e4f0756085670
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79442925"
---
# <a name="_lfind"></a>_lfind

Esegue una ricerca lineare della chiave specificata. È disponibile una versione più sicura di questa funzione. Vedere [_lfind_s](lfind-s.md).

## <a name="syntax"></a>Sintassi

```C
void *_lfind(
   const void *key,
   const void *base,
   unsigned int *num,
   unsigned int width,
   int (__cdecl *compare)(const void *, const void *)
);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Oggetto da cercare.

*base*<br/>
Puntatore alla base dei dati di ricerca.

*number*<br/>
Numero degli elementi della matrice.

*width*<br/>
Larghezza degli elementi della matrice.

*compare*<br/>
Puntatore alla routine di confronto. Il primo parametro è un puntatore alla chiave per la ricerca. Il secondo parametro è un puntatore all'elemento della matrice da confrontare con la chiave.

## <a name="return-value"></a>Valore restituito

Se la chiave viene trovata, **_lfind** restituisce un puntatore all'elemento della matrice in *base* che corrisponde alla *chiave*. Se la chiave non viene trovata, **_lfind** restituisce **null**.

## <a name="remarks"></a>Osservazioni

La funzione **_lfind** esegue una ricerca lineare per la *chiave* del valore in una matrice di elementi *numerici* , ciascuno di byte di *larghezza* . A differenza di **bCerca**, **_lfind** non richiede che la matrice sia ordinata. L'argomento di *base* è un puntatore alla base della matrice in cui eseguire la ricerca. L'argomento *compare* è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e quindi restituisce un valore che ne specifica la relazione. **_lfind** chiama la routine di *confronto* una o più volte durante la ricerca, passando i puntatori a due elementi di matrice per ogni chiamata. La routine di *confronto* deve confrontare gli elementi e quindi restituire un valore diverso da zero (ovvero gli elementi sono diversi) o 0 (che indica che gli elementi sono identici).

Questa funzione convalida i relativi parametri. Se *compare*, *Key* o *Number* è **null**o se *base* è **null** e *Number* è diverso da zero oppure se *Width* è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **null**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_lfind**|\<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).

## <a name="example"></a>Esempio

```C
// crt_lfind.c
// This program uses _lfind to search a string array
// for an occurrence of "hello".

#include <search.h>
#include <string.h>
#include <stdio.h>

int compare(const void *arg1, const void *arg2 )
{
   return( _stricmp( * (char**)arg1, * (char**)arg2 ) );
}

int main( )
{
   char *arr[] = {"Hi", "Hello", "Bye"};
   int n = sizeof(arr) / sizeof(char*);
   char **result;
   char *key = "hello";

   result = (char **)_lfind( &key, arr,
                      &n, sizeof(char *), compare );

   if( result )
      printf( "%s found\n", *result );
   else
      printf( "hello not found!\n" );
}
```

```Output
Hello found
```

## <a name="see-also"></a>Vedere anche

[Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)<br/>
[_lfind_s](lfind-s.md)<br/>
[bsearch](bsearch.md)<br/>
[_lsearch](lsearch.md)<br/>
[qsort](qsort.md)<br/>
