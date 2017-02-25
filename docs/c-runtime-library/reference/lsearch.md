---
title: "lsearch | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_lsearch"
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
  - "lsearch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lsearch (funzione)"
ms.assetid: 8200f608-159a-46f0-923b-1a37ee1af7e0
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# _lsearch
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue una ricerca lineare di un valore; aggiunge alla fine dell'elenco se non viene trovata corrispondenza.  È disponibile una versione più sicura di questa funzione; vedere [\_lsearch\_s](../../c-runtime-library/reference/lsearch-s.md).  
  
## Sintassi  
  
```  
void *_lsearch(  
   const void *key,  
   void *base,  
   unsigned int *num,  
   unsigned int width,  
   int (__cdecl *compare)(const void *, const void *)   
);  
```  
  
#### Parametri  
 `key`  
 Oggetto da ricercare.  
  
 `base`  
 Puntatore alla base dell'array da cercare.  
  
 `num`  
 Numero di elementi  
  
 `width`  
 Grandezza di ogni elemento della matrice.  
  
 `compare`  
 Puntatore alla routine di confronto.  Il primo parametro è un puntatore alla chiave per la ricerca.  Il secondo parametro è un puntatore ad un elemento dell'array da confrontare con la chiave.  
  
## Valore restituito  
 Se la chiave viene trovata, `_lsearch` restituisce un puntatore all'elemento alla `base` dell'array che corrisponde a `key`.  Se la chiave non viene trovata, `_lsearch` restituisce un puntatore all'elemento appena aggiunto alla fine dell'array.  
  
## Note  
 La funzione `_lsearch` esegue una ricerca lineare del valore `key` in un array di `num` elementi, ognuno di `width` byte.  A differenza di `bsearch`, `_lsearch` non richiede che l'array sia ordinato.  Se `key` non viene trovato, `_lsearch` lo aggiunge alla fine dell'array e incrementa `num`.  
  
 L'argomento `compare` è un puntatore a una routine fornita dall'utente che confronta due elementi di un array e restituisce un valore che specifica la loro relazione.  `_lsearch` chiama la routine `compare` una o più volte durante la ricerca, passando i puntatori a due elementi di array ad ogni chiamata.  `compare` deve confrontare gli elementi e restituire un valore diverso da zero \(che indica che gli elementi sono differenti\) o 0 \(che indica che gli elementi sono identici\).  
  
 Questa funzione convalida i parametri.  Se `compare`, `key` o `num` è `NULL`, o se `base` è NULL e \*`num` è diverso da zero, o se `width` è minore di zero, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_lsearch`|\<search.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
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
  
  **elenco delle parole prima di \_lsearch: hello thanks bye**  
**elenco delle parole dopo \_lsearch: hello thanks bye extra**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [bsearch](../../c-runtime-library/reference/bsearch.md)   
 [\_lfind](../../c-runtime-library/reference/lfind.md)   
 [\_lsearch\_s](../../c-runtime-library/reference/lsearch-s.md)