---
title: "qsort | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "qsort"
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
  - "qsort"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "qsort (funzione)"
  - "quick-sort (algoritmo)"
  - "ordinamento di matrici"
  - "matrici [CRT], ordinamento"
ms.assetid: d6cb33eb-d209-485f-8d41-229eb743c027
caps.latest.revision: 19
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# qsort
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue un algoritmo QuickSort.  È disponibile una versione più sicura di questa funzione; vedere [qsort\_s](../../c-runtime-library/reference/qsort-s.md).  
  
## Sintassi  
  
```  
void qsort(  
   void *base,  
   size_t num,  
   size_t width,  
   int (__cdecl *compare )(const void *, const void *)   
);  
```  
  
#### Parametri  
 `base`  
 Inizio dell'array di destinazione.  
  
 `num`  
 Dimensione dell'array in elementi.  
  
 `width`  
 Dimensione dell'elemento in byte.  
  
 `compare`  
 Puntatore a una routine fornita dall'utente che confronta due elementi di array e restituisce un valore che specifica la loro relazione.  
  
## Note  
 La funzione `qsort` implementa un algoritmo di ordinamento QuickSort che consente di ordinare un array di `num` elementi, di `width` byte ciascuno.  L'argomento `base` è un puntatore alla base della matrice da ordinare.  `qsort` sovrascrive questo array utilizzando gli elementi ordinati.  
  
 `qsort` chiama la routine `compare` una o più volte durante l'ordinamento, e passa i puntatori a due elementi di array ad ogni chiamata.  
  
```  
compare( (void *) & elem1, (void *) & elem2 );  
```  
  
 La routine confronta gli elementi e restituisce uno dei valori seguenti.  
  
|La funzione di confronto restituisce un valore|Descrizione|  
|----------------------------------------------------|-----------------|  
|\< 0|`elem1` minore di `elem2`|  
|0|`elem1` è equivalente a `elem2`|  
|\> 0|`elem1` è maggiore di `elem2`|  
  
 L'array viene ordinato in ordine crescente, come definito dalla funzione di confronto.  Per ordinare un array in ordine decrescente, invertire il verso di "maggiore di" e "minore di" nella funzione di confronto.  
  
 Questa funzione convalida i parametri.  Se `compare` o `num` sono `NULL` o se `base` è `NULL` e \*`num` è diverso da zero, o se `width` è minore di zero, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` su `EINVAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`qsort`|\<stdlib.h\> e \<search.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
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
  
  **boy deserves every favor good**   
## Equivalente .NET Framework  
 [System::Collections::ArrayList::Sort](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.sort.aspx)  
  
## Vedere anche  
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [bsearch](../../c-runtime-library/reference/bsearch.md)   
 [\_lsearch](../../c-runtime-library/reference/lsearch.md)