---
title: _lfind
ms.date: 4/2/2020
api_name:
- _lfind
- _o__lfind
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
- _lfind
helpviewer_keywords:
- linear searching
- lfind function
- arrays [CRT], searching
- searching, linear
- finding keys in arrays
- _lfind function
ms.assetid: a40ece70-1674-4b75-94bd-9f57cfff18f2
ms.openlocfilehash: 287cbd8bc9cc567a4a0d5b9505d57098197bc545
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81342168"
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

*Chiave*<br/>
Oggetto da cercare.

*base*<br/>
Puntatore alla base dei dati di ricerca.

*Numero*<br/>
Numero degli elementi della matrice.

*width*<br/>
Larghezza degli elementi della matrice.

*Confrontare*<br/>
Puntatore alla routine di confronto. Il primo parametro è un puntatore alla chiave per la ricerca. Il secondo parametro è un puntatore all'elemento della matrice da confrontare con la chiave.

## <a name="return-value"></a>Valore restituito

Se la chiave viene trovata, **_lfind** restituisce un puntatore all'elemento della matrice in *corrispondenza* della chiave *.* Se la chiave non viene trovata, **_lfind** restituisce **NULL**.

## <a name="remarks"></a>Osservazioni

La funzione **_lfind** esegue una ricerca lineare per la *chiave* di valore in una matrice di elementi *numerici,* ognuno dei byte di *larghezza.* A differenza di **bsearch**, **_lfind** non richiede l'ordinamento della matrice. L'argomento *base* è un puntatore alla base della matrice in cui eseguire la ricerca. L'argomento *compare* è un puntatore a una routine fornita dall'utente che confronta due elementi della matrice e quindi restituisce un valore che ne specifica la relazione. **_lfind** chiama la routine di *confronto* una o più volte durante la ricerca, passando puntatori a due elementi della matrice a ogni chiamata. La routine di *confronto* deve confrontare gli elementi e quindi restituire diverso da zero (ovvero gli elementi sono diversi) o 0 (ovvero gli elementi sono identici).

Questa funzione convalida i relativi parametri. Se *compare*, *key* o *number* è **NULL**o se *base* è **NULL** e *number* è diverso da zero o se *width* è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EINVAL** e la funzione restituisce **NULL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_lfind**|\<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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
