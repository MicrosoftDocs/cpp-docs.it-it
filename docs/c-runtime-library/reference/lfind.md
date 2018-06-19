---
title: _lfind | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- linear searching
- lfind function
- arrays [CRT], searching
- searching, linear
- finding keys in arrays
- _lfind function
ms.assetid: a40ece70-1674-4b75-94bd-9f57cfff18f2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0c3bfc7b6abe5f0d5902a02c88e7d5ba16cb24ab
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
ms.locfileid: "34450650"
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

*Numero*<br/>
Numero degli elementi della matrice.

*width*<br/>
Larghezza degli elementi della matrice.

*compare*<br/>
Puntatore alla routine di confronto. Il primo parametro è un puntatore alla chiave per la ricerca. Il secondo parametro è un puntatore all'elemento della matrice da confrontare con la chiave.

## <a name="return-value"></a>Valore restituito

Se la chiave viene trovata, **lfind** restituisce un puntatore all'elemento della matrice in corrispondenza *base* che corrisponde a *chiave*. Se la chiave non viene trovata, **lfind** restituisce **NULL**.

## <a name="remarks"></a>Note

Il **lfind** funzione esegue una ricerca lineare per il valore *chiave* in una matrice di *numero* elementi, ognuno dei *larghezza* byte. A differenza **bsearch**, **lfind** non richiede che la matrice da ordinare. Il *base* argomento è un puntatore alla base della matrice da cercare. Il *confrontare* argomento è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e quindi restituisce un valore che specifica la relazione. **lfind** chiama il *confrontare* routine una o più volte durante la ricerca, passando i puntatori a due elementi di matrice per ogni chiamata. Il *confrontare* routine deve confrontare gli elementi e quindi restituire diverso da zero (ovvero gli elementi sono diversi) oppure 0 (vale a dire gli elementi sono identici).

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
