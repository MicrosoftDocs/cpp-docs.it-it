---
title: _lsearch | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _lsearch
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
- _lsearch
- lsearch
dev_langs:
- C++
helpviewer_keywords:
- _lsearch function
- values, searching for
- keys, finding in arrays
- arrays [CRT], searching
- linear searches
- searching, linear
- lsearch function
ms.assetid: 8200f608-159a-46f0-923b-1a37ee1af7e0
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5f38dd8a23cce652b93794f62c775962482fe159
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="lsearch"></a>_lsearch

Esegue una ricerca lineare di un valore; aggiunge alla fine dell'elenco se non viene trovato. È disponibile una versione più sicura di questa funzione. Vedere [_lsearch_s](lsearch-s.md).

## <a name="syntax"></a>Sintassi

```C
void *_lsearch(
   const void *key,
   void *base,
   unsigned int *num,
   unsigned int width,
   int (__cdecl *compare)(const void *, const void *)
);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Oggetto da cercare.

*base*<br/>
Puntatore alla base della matrice da cercare.

*Numero*<br/>
Numero di elementi.

*width*<br/>
Larghezza di ogni elemento della matrice.

*compare*<br/>
Puntatore alla routine di confronto. Il primo parametro è un puntatore alla chiave per la ricerca. Il secondo parametro è un puntatore a un elemento della matrice da confrontare con la chiave.

## <a name="return-value"></a>Valore restituito

Se la chiave viene trovata, **lsearch** restituisce un puntatore all'elemento della matrice in corrispondenza *base* che corrisponde a *chiave*. Se la chiave non viene trovata, **lsearch** restituisce un puntatore all'elemento appena aggiunto alla fine della matrice.

## <a name="remarks"></a>Note

Il **lsearch** funzione esegue una ricerca lineare per il valore *chiave* in una matrice di *numero* elementi, ognuno dei *larghezza* byte. A differenza **bsearch**, **lsearch** non richiede che la matrice da ordinare. Se *chiave* non viene trovato, **lsearch** lo aggiunge alla fine della matrice e incrementa *numero*.

Il *confrontare* argomento è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e restituisce un valore che specifica la relazione. **lsearch** chiama il *confrontare* routine una o più volte durante la ricerca, passando i puntatori a due elementi di matrice per ogni chiamata. *confrontare* deve confrontare gli elementi e restituire un diverso da zero (ovvero gli elementi sono diversi) oppure 0 (vale a dire gli elementi sono identici).

Questa funzione convalida i relativi parametri. Se *confrontare*, *chiave* oppure *numero* è **NULL**, o se *base* è NULL e **numero*  è diverso da zero, oppure se *larghezza* è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **NULL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_lsearch**|\<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_lsearch.c
#include <search.h>
#include <string.h>
#include <stdio.h>

int compare( const void *arg1, const void *arg2 );

int main(void)
{
   char * wordlist[4] = { "hello", "thanks", "bye" };
                            // leave room to grow...
   int n = 3;
   char **result;
   char *key = "extra";
   int i;

   printf( "wordlist before _lsearch:" );
   for( i=0; i<n; ++i ) printf( " %s", wordlist[i] );
   printf( "\n" );

   result = (char **)_lsearch( &key, wordlist,
                      &n, sizeof(char *), compare );

   printf( "wordlist after _lsearch:" );
   for( i=0; i<n; ++i ) printf( " %s", wordlist[i] );
   printf( "\n" );
}

int compare(const void *arg1, const void *arg2 )
{
   return( _stricmp( * (char**)arg1, * (char**)arg2 ) );
}
```

```Output
wordlist before _lsearch: hello thanks bye
wordlist after _lsearch: hello thanks bye extra
```

## <a name="see-also"></a>Vedere anche

[Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)<br/>
[bsearch](bsearch.md)<br/>
[_lfind](lfind.md)<br/>
[_lsearch_s](lsearch-s.md)<br/>
