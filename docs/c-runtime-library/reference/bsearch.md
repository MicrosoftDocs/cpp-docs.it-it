---
title: "bsearch | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "bsearch"
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
  - "bsearch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [CRT], ricerca binaria"
  - "bsearch (funzione)"
ms.assetid: e0ad2f47-e7dd-49ed-8288-870457a14a2c
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# bsearch
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue una ricerca binaria di una matrice ordinata. È disponibile una versione più sicura di questa funzione; vedere [bsearch\_s](../../c-runtime-library/reference/bsearch-s.md).  
  
## Sintassi  
  
```  
void *bsearch(   
   const void *key,  
   const void *base,  
   size_t num,  
   size_t width,  
   int ( __cdecl *compare ) (const void *key, const void *datum)   
);  
```  
  
#### Parametri  
 `key`  
 Oggetto da cercare.  
  
 `base`  
 Puntatore a base dei dati di ricerca.  
  
 `num`  
 Numero di elementi.  
  
 `width`  
 Larghezza degli elementi.  
  
 `compare`  
 Funzione di callback che confronta due elementi. Il primo è un puntatore alla chiave per la ricerca e il secondo è un puntatore all'elemento della matrice da confrontare con la chiave.  
  
## Valore restituito  
 `bsearch` restituisce un puntatore a un'occorrenza di `key` nella matrice a cui punta `base`. Se `key` non viene trovato, la funzione restituisce `NULL`. Se la matrice non è in ordine crescente o contiene record duplicati con chiavi identiche, il risultato è imprevedibile.  
  
## Note  
 La funzione `bsearch` esegue una ricerca binaria di una matrice di elementi `num` ordinata, ognuno di `width` byte. Il valore `base` è un puntatore a base della matrice in cui eseguire la ricerca e `key` è il valore cercato. Il parametro `compare` è un puntatore a una routine fornita dall'utente che confronta la chiave richiesta a un elemento della matrice e restituisce uno dei valori seguenti che specifica la relazione:  
  
|Valore restituito dalla routine `compare`|Descrizione|  
|-----------------------------------------------|-----------------|  
|\< 0|La chiave è minore dell'elemento della matrice.|  
|0|La chiave è uguale all'elemento della matrice.|  
|\> 0|La chiave è maggiore dell'elemento della matrice.|  
  
 Questa funzione convalida i relativi parametri. Se `compare`, `key` o `num` è `NULL` o se `base` è `NULL` e \*`num` è diverso da zero oppure se `width` è zero, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`bsearch`|\<stdlib.h\> e \<search.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Questo programma consente di ordinare una matrice di stringhe con qsort e quindi usa bsearch per trovare la parola "cat".  
  
```  
// crt_bsearch.c  
#include <search.h>  
#include <string.h>  
#include <stdio.h>  
  
int compare( char **arg1, char **arg2 )  
{  
   /* Compare all of both strings: */  
   return _strcmpi( *arg1, *arg2 );  
}  
  
int main( void )  
{  
   char *arr[] = {"dog", "pig", "horse", "cat", "human", "rat", "cow", "goat"};  
   char **result;  
   char *key = "cat";  
   int i;  
  
   /* Sort using Quicksort algorithm: */  
   qsort( (void *)arr, sizeof(arr)/sizeof(arr[0]), sizeof( char * ), (int (*)(const   
   void*, const void*))compare );  
  
   for( i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i )    /* Output sorted list */  
      printf( "%s ", arr[i] );  
  
   /* Find the word "cat" using a binary search algorithm: */  
   result = (char **)bsearch( (char *) &key, (char *)arr, sizeof(arr)/sizeof(arr[0]),  
                              sizeof( char * ), (int (*)(const void*, const void*))compare );  
   if( result )  
      printf( "\n%s found at %Fp\n", *result, result );  
   else  
      printf( "\nCat not found!\n" );  
}  
```  
  
```Output  
cat cow dog goat horse human pig rat cat trovati in 002F0F04  
```  
  
## Equivalente .NET Framework  
 [System::Collections::ArrayList::BinarySearch](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.binarysearch.aspx)  
  
## Vedere anche  
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [\_lfind](../../c-runtime-library/reference/lfind.md)   
 [\_lsearch](../../c-runtime-library/reference/lsearch.md)   
 [qsort](../../c-runtime-library/reference/qsort.md)