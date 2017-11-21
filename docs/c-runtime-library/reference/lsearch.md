---
title: _lsearch | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _lsearch
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
dev_langs: C++
helpviewer_keywords:
- _lsearch function
- values, searching for
- keys, finding in arrays
- arrays [CRT], searching
- linear searches
- searching, linear
- lsearch function
ms.assetid: 8200f608-159a-46f0-923b-1a37ee1af7e0
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 10d308709947a602b1049d9bfdab8ad238f1cb5f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="lsearch"></a>_lsearch
Esegue una ricerca lineare di un valore; aggiunge alla fine dell'elenco se non viene trovato. È disponibile una versione più sicura di questa funzione. Vedere [_lsearch_s](../../c-runtime-library/reference/lsearch-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_lsearch(  
   const void *key,  
   void *base,  
   unsigned int *num,  
   unsigned int width,  
   int (__cdecl *compare)(const void *, const void *)   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `key`  
 Oggetto da cercare.  
  
 `base`  
 Puntatore alla base della matrice da cercare.  
  
 `num`  
 Numero di elementi.  
  
 `width`  
 Larghezza di ogni elemento della matrice.  
  
 `compare`  
 Puntatore alla routine di confronto. Il primo parametro è un puntatore alla chiave per la ricerca. Il secondo parametro è un puntatore a un elemento della matrice da confrontare con la chiave.  
  
## <a name="return-value"></a>Valore restituito  
 Se la chiave viene trovata, `_lsearch` restituisce un puntatore all'elemento della matrice in `base` che corrisponde a `key`. Se la chiave non viene trovata, `_lsearch` restituisce un puntatore all'elemento appena aggiunto alla fine della matrice.  
  
## <a name="remarks"></a>Note  
 La funzione `_lsearch` esegue una ricerca lineare del valore `key` in una matrice di `num` elementi, ognuno di `width` byte. A differenza di `bsearch`, `_lsearch` non richiede che la matrice sia ordinata. Se `key` non viene trovato, `_lsearch` lo aggiunge alla fine della matrice e incrementa `num`.  
  
 L'argomento `compare` è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e restituisce un valore che specifica la relazione. `_lsearch` chiama la routine `compare` una o più volte durante la ricerca, passando i puntatori a due elementi di matrice per ogni chiamata. `compare` deve confrontare gli elementi e restituire un valore diverso da zero (che indica che gli elementi sono diversi) o 0 (che indica che gli elementi sono identici).  
  
 Questa funzione convalida i relativi parametri. Se `compare`, `key` o `num` è `NULL` o se `base` è NULL e *`num` è diverso da zero o se `width` è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_lsearch`|\<search.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
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
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [bsearch](../../c-runtime-library/reference/bsearch.md)   
 [_lfind](../../c-runtime-library/reference/lfind.md)   
 [_lsearch_s](../../c-runtime-library/reference/lsearch-s.md)