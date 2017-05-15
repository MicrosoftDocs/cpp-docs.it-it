---
title: _lfind | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 7c597501d90e4816ffda3b0300109d3b51afc51c
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="lfind"></a>_lfind
Esegue una ricerca lineare della chiave specificata. È disponibile una versione più sicura di questa funzione. Vedere [_lfind_s](../../c-runtime-library/reference/lfind-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_lfind(  
   const void *key,  
   const void *base,  
   unsigned int *num,  
   unsigned int width,  
   int (__cdecl *compare)(const void *, const void *)  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `key`  
 Oggetto da cercare.  
  
 `base`  
 Puntatore alla base dei dati di ricerca.  
  
 `num`  
 Numero degli elementi della matrice.  
  
 `width`  
 Larghezza degli elementi della matrice.  
  
 `compare`  
 Puntatore alla routine di confronto. Il primo parametro è un puntatore alla chiave per la ricerca. Il secondo parametro è un puntatore all'elemento della matrice da confrontare con la chiave.  
  
## <a name="return-value"></a>Valore restituito  
 Se la chiave viene trovata, `_lfind` restituisce un puntatore all'elemento della matrice in `base` che corrisponde a `key`. Se la chiave non viene trovata, `_lfind` restituisce `NULL`.  
  
## <a name="remarks"></a>Note  
 La funzione `_lfind` esegue una ricerca lineare del valore `key` in una matrice di `num` elementi, ognuno di `width` byte. A differenza di `bsearch`, `_lfind` non richiede che la matrice sia ordinata. L'argomento `base` è un puntatore alla base della matrice in cui eseguire la ricerca. L'argomento `compare` è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e quindi restituisce un valore che ne specifica la relazione. `_lfind` chiama la routine `compare` una o più volte durante la ricerca, passando i puntatori a due elementi di matrice per ogni chiamata. La routine `compare` deve confrontare gli elementi e quindi restituire un valore diverso da zero (che indica che gli elementi sono diversi) o 0 (che indica che gli elementi sono identici).  
  
 Questa funzione convalida i relativi parametri. Se `compare`, `key` o `num` è `NULL` o se `base` è NULL e *`num` è diverso da zero o se `width` è minore di zero, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_lfind`|\<search.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
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
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [_lfind_s](../../c-runtime-library/reference/lfind-s.md)   
 [bsearch](../../c-runtime-library/reference/bsearch.md)   
 [_lsearch](../../c-runtime-library/reference/lsearch.md)   
 [qsort](../../c-runtime-library/reference/qsort.md)
