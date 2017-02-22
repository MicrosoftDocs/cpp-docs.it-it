---
title: "lfind | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_lfind"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-utility-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "lfind"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lfind (funzione)"
ms.assetid: a40ece70-1674-4b75-94bd-9f57cfff18f2
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# _lfind
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue una ricerca lineare della chiave specificata.  È disponibile una versione più sicura di questa funzione; vedere [\_lfind\_s](../../c-runtime-library/reference/lfind-s.md).  
  
## Sintassi  
  
```  
void *_lfind(  
   const void *key,  
   const void *base,  
   unsigned int *num,  
   unsigned int width,  
   int (__cdecl *compare)(const void *, const void *)  
);  
```  
  
#### Parametri  
 `key`  
 Oggetto da ricercare.  
  
 `base`  
 Puntatore alla base dei dati della ricerca.  
  
 `num`  
 Numero di elementi dell'array.  
  
 `width`  
 Larghezza degli elementi dell'array.  
  
 `compare`  
 Puntatore alla routine di confronto.  Il primo parametro è un puntatore alla chiave per la ricerca.  Il secondo parametro è un puntatore ad un elemento dell'array da confrontare con la chiave.  
  
## Valore restituito  
 Se la chiave viene trovata, `_lfind` restituisce un puntatore all'elemento alla `base` dell'array che corrisponde a `key`.  Se la chiave non viene trovata, `_lfind` non è reperibile, la funzione restituisce `NULL`.  
  
## Note  
 La funzione `_lfind` esegue una ricerca lineare del valore `key` in un array di `num` elementi, ognuno di `width` byte.  A differenza di `bsearch`, `_lfind` non richiede che l'array sia ordinato.  L'argomento `base` è un puntatore alla base della matrice da ricercare.  L'argomento `compare` è un puntatore a una routine fornita dall'utente che confronta due elementi di un array e restituisce un valore che specifica la loro relazione.  `_lfind` chiama la routine `compare` una o più volte durante la ricerca, passando i puntatori a due elementi di array ad ogni chiamata.  La routine `compare` deve confrontare gli elementi e quindi restituire un valore diverso da zero \(che indica che gli elementi sono differenti\) o 0 \(che indica che gli elementi sono identici\).  
  
 Questa funzione convalida i parametri.  Se `compare`, `key` o `num` è `NULL`, o se `base` è NULL e \*`num` è diverso da zero, o se `width` è minore di zero, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_lfind`|\<search.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
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
  
  **Hello found**   
## Equivalente .NET Framework  
 [System::Collections::ArrayList::Contains](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.contains.aspx)  
  
## Vedere anche  
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [\_lfind\_s](../../c-runtime-library/reference/lfind-s.md)   
 [bsearch](../../c-runtime-library/reference/bsearch.md)   
 [\_lsearch](../../c-runtime-library/reference/lsearch.md)   
 [qsort](../../c-runtime-library/reference/qsort.md)