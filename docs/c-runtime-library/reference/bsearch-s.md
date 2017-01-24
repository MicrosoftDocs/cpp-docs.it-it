---
title: "bsearch_s | Microsoft Docs"
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
  - "bsearch_s"
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
  - "bsearch_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "matrici [CRT], ricerca binaria"
  - "bsearch_s (funzione)"
ms.assetid: d5690d5e-6be3-4f1d-aa0b-5ca6dbded276
caps.latest.revision: 27
caps.handback.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# bsearch_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue una ricerca binaria di una matrice ordinata. Versione di [bsearch](../../c-runtime-library/reference/bsearch.md) con miglioramenti della sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
void *bsearch_s(   
   const void *key,  
   const void *base,  
   size_t num,  
   size_t width,  
   int ( __cdecl *compare ) ( void *, const void *key, const void *datum),  
   void * context  
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
 Funzione di callback che confronta due elementi. Il primo argomento è il puntatore `context`. Il secondo argomento è un puntatore a `key` per la ricerca. Il terzo argomento è un puntatore all'elemento della matrice da confrontare con `key`.  
  
 `context`  
 Puntatore a un oggetto accessibile nella funzione di confronto.  
  
## Valore restituito  
 `bsearch_s` restituisce un puntatore a un'occorrenza di `key` nella matrice a cui punta `base`. Se `key` non viene trovato, la funzione restituisce `NULL`. Se la matrice non è in ordine crescente o contiene record duplicati con chiavi identiche, il risultato è imprevedibile.  
  
 Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`. Per altre informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
### Condizioni di errore  
  
|||||||  
|-|-|-|-|-|-|  
|`key`|`base`|`compare`|`num`|`width`|`errno`|  
|`NULL`|qualsiasi|any|any|any|`EINVAL`|  
|any|`NULL`|qualsiasi|\!\= 0|qualsiasi|`EINVAL`|  
|any|any|any|any|\= 0|`EINVAL`|  
|qualsiasi|qualsiasi|`NULL`|any|qualsiasi|`EINVAL`|  
  
## Note  
 La funzione `bsearch_s` esegue una ricerca binaria di una matrice di elementi `num` ordinata, ognuno di `width` byte. Il valore `base` è un puntatore a base della matrice in cui eseguire la ricerca e `key` è il valore cercato. Il parametro `compare` è un puntatore a una routine fornita dall'utente che confronta la chiave richiesta a un elemento della matrice e restituisce uno dei valori seguenti che specifica la relazione:  
  
|Valore restituito dalla routine `compare`|Descrizione|  
|-----------------------------------------------|-----------------|  
|\< 0|La chiave è minore dell'elemento della matrice.|  
|0|La chiave è uguale all'elemento della matrice.|  
|\> 0|La chiave è maggiore dell'elemento della matrice.|  
  
 Il puntatore `context` può essere utile se la struttura dei dati cercati fa parte di un oggetto e la funzione di confronto deve accedere ai membri dell'oggetto. La funzione `compare` può eseguire il cast del puntatore void nel tipo di oggetto appropriato e accedere ai membri di tale oggetto. L'aggiunta del parametro `context` rende `bsearch_s` più sicuro perché può essere usato un contesto aggiuntivo per evitare i bug reentrancy associati all'uso di variabili statiche per rendere disponibili i dati alla funzione `compare`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`bsearch_s`|\<stdlib.h\> e \<search.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Questo programma consente di ordinare una matrice di stringhe con [qsort\_s](../../c-runtime-library/reference/qsort-s.md) e quindi usa bsearch\_s per trovare la parola "cat".  
  
```  
// crt_bsearch_s.cpp  
// This program uses bsearch_s to search a string array,  
// passing a locale as the context.  
// compile with: /EHsc  
#include <stdlib.h>  
#include <stdio.h>  
#include <search.h>  
#include <process.h>  
#include <locale.h>  
#include <locale>  
#include <windows.h>  
using namespace std;  
  
// The sort order is dependent on the code page.  Use 'chcp' at the  
// command line to change the codepage.  When executing this application,  
// the command prompt codepage must match the codepage used here:  
  
#define CODEPAGE_850  
  
#ifdef CODEPAGE_850  
#define ENGLISH_LOCALE "English_US.850"  
#endif  
  
#ifdef CODEPAGE_1252  
#define ENGLISH_LOCALE "English_US.1252"  
#endif  
  
// The context parameter lets you create a more generic compare.  
// Without this parameter, you would have stored the locale in a  
// static variable, thus making it vulnerable to thread conflicts  
// (if this were a multithreaded program).  
  
int compare( void *pvlocale, char **str1, char **str2)  
{  
    char *s1 = *str1;  
    char *s2 = *str2;  
  
    locale& loc = *( reinterpret_cast< locale * > ( pvlocale));  
  
    return use_facet< collate<char> >(loc).compare(  
       s1, s1+strlen(s1),  
       s2, s2+strlen(s2) );  
}  
  
int main( void )  
{  
   char *arr[] = {"dog", "pig", "horse", "cat", "human", "rat", "cow", "goat"};  
  
   char *key = "cat";  
   char **result;  
   int i;  
  
   /* Sort using Quicksort algorithm: */  
   qsort_s( arr,  
            sizeof(arr)/sizeof(arr[0]),  
            sizeof( char * ),  
            (int (*)(void*, const void*, const void*))compare,  
            &locale(ENGLISH_LOCALE) );  
  
   for( i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i )    /* Output sorted list */  
      printf( "%s ", arr[i] );  
  
   /* Find the word "cat" using a binary search algorithm: */  
   result = (char **)bsearch_s( &key,  
                                arr,  
                                sizeof(arr)/sizeof(arr[0]),  
                                sizeof( char * ),  
                                (int (*)(void*, const void*, const void*))compare,  
                                &locale(ENGLISH_LOCALE) );  
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
 <xref:System.Collections.ArrayList.BinarySearch%2A>  
  
## Vedere anche  
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [\_lfind](../../c-runtime-library/reference/lfind.md)   
 [\_lsearch](../../c-runtime-library/reference/lsearch.md)   
 [qsort](../../c-runtime-library/reference/qsort.md)