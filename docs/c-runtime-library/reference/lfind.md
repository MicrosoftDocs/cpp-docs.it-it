---
title: _lfind
ms.date: 11/04/2016
apiname:
- _lfind
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
- lfind
- _lfind
helpviewer_keywords:
- linear searching
- lfind function
- arrays [CRT], searching
- searching, linear
- finding keys in arrays
- _lfind function
ms.assetid: a40ece70-1674-4b75-94bd-9f57cfff18f2
ms.openlocfilehash: 1508d54d6b2f2566e4aee3afef02af45b28e4f48
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62286492"
---
# <a name="lfind"></a>_lfind

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

Se la chiave viene trovata, **lfind** restituisce un puntatore all'elemento della matrice in corrispondenza *base* che corrisponde a *chiave*. Se la chiave non viene trovata, **lfind** restituisce **NULL**.

## <a name="remarks"></a>Note

Il **lfind** funzione esegue una ricerca lineare per il valore *chiave* in una matrice di *numero* elementi, ognuno dei *larghezza* byte. A differenza **bsearch**, **lfind** richiede che la matrice da ordinare. Il *base* argomento è un puntatore alla base della matrice da cercare. Il *confrontare* argomento è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e quindi restituisce un valore che specifica la relazione. **lfind** chiama il *confrontare* routine una o più volte durante la ricerca, passando i puntatori a due elementi della matrice per ogni chiamata. Il *confrontare* routine deve confrontare gli elementi e quindi restituire diverso da zero (vale a dire gli elementi sono diversi) o 0 (ovvero gli elementi sono identici).

Questa funzione convalida i relativi parametri. Se *confrontare*, *chiave* oppure *numero* è **NULL**, o se *base* è **NULL**e *numero* è diverso da zero, oppure se *larghezza* è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **NULL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_lfind**|\<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
