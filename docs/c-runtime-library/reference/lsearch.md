---
title: _lsearch
ms.date: 4/2/2020
api_name:
- _lsearch
- _o__lsearch
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
- _lsearch
helpviewer_keywords:
- _lsearch function
- values, searching for
- keys, finding in arrays
- arrays [CRT], searching
- linear searches
- searching, linear
- lsearch function
ms.assetid: 8200f608-159a-46f0-923b-1a37ee1af7e0
ms.openlocfilehash: a6ef3d86ffe8f03da34d4a374bddda1452815672
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81341640"
---
# <a name="_lsearch"></a>_lsearch

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

*Chiave*<br/>
Oggetto da cercare.

*base*<br/>
Puntatore alla base della matrice da cercare.

*Numero*<br/>
Numero di elementi.

*width*<br/>
Larghezza di ogni elemento della matrice.

*Confrontare*<br/>
Puntatore alla routine di confronto. Il primo parametro è un puntatore alla chiave per la ricerca. Il secondo parametro è un puntatore a un elemento della matrice da confrontare con la chiave.

## <a name="return-value"></a>Valore restituito

Se la chiave viene trovata, **_lsearch** restituisce un puntatore all'elemento della matrice in *corrispondenza* della chiave *.* Se la chiave non viene trovata, **_lsearch** restituisce un puntatore all'elemento appena aggiunto alla fine della matrice.

## <a name="remarks"></a>Osservazioni

La funzione **_lsearch** esegue una ricerca lineare per la *chiave* di valore in una matrice di elementi *numerici,* ognuno dei byte di *larghezza.* A differenza di **bsearch**, **_lsearch** non richiede l'ordinamento della matrice. Se *key* non viene trovato, **_lsearch** lo aggiunge alla fine della matrice e incrementa il *numero*.

L'argomento *compare* è un puntatore a una routine fornita dall'utente che confronta due elementi della matrice e restituisce un valore che ne specifica la relazione. **_lsearch** chiama la routine di *confronto* una o più volte durante la ricerca, passando puntatori a due elementi della matrice a ogni chiamata. *compare* deve confrontare gli elementi e restituire diverso da zero (ovvero gli elementi sono diversi) o 0 (ovvero gli elementi sono identici).

Questa funzione convalida i relativi parametri. Se *compare*, *key* o *number* è **NULL**o se *base* è **NULL** e *number* è diverso da zero o se *width* è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EINVAL** e la funzione restituisce **NULL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_lsearch**|\<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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
