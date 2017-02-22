---
title: "qsort_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "qsort_s"
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
  - "qsort_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], ordinamento"
  - "qsort_s (funzione)"
  - "quick-sort (algoritmo)"
  - "ordinamento di matrici"
ms.assetid: 6ee817b0-4408-4355-a5d4-6605e419ab91
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# qsort_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue un algoritmo QuickSort.  Una versione di [qsort](../../c-runtime-library/reference/qsort.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
void qsort_s(  
   void *base,  
   size_t num,  
   size_t width,  
   int (__cdecl *compare )(void *, const void *, const void *),  
   void * context  
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
 Funzione di confronto.  Il primo argomento è il puntatore `context`.  Il secondo argomento è un puntatore a `key` per la ricerca.  Il terzo argomento è un puntatore all'elemento del vettore da confrontare con `key`.  
  
 `context`  
 Un puntatore ad un contesto, che può essere un qualsiasi oggetto a cui la routine `compare` ha bisogno di accedere.  
  
## Note  
 La funzione `qsort_s` implementa un algoritmo di ordinamento QuickSort che consente di ordinare un array di `num` elementi, di `width` byte ciascuno.  L'argomento `base` è un puntatore alla base della matrice da ordinare.  `qsort_s` sovrascrive questo array con gli elementi ordinati.  L'argomento `compare` è un puntatore a una routine fornita dall'utente che confronta due elementi di un array e restituisce un valore che specifica la loro relazione.  `qsort_s` chiama la routine `compare` una o più volte durante l'ordinamento, passando i puntatori a due elementi di array ad ogni chiamata:  
  
```  
compare( context, (void *) & elem1, (void *) & elem2 );  
```  
  
 La routine deve confrontare gli elementi e quindi restituire uno dei seguenti valori:  
  
|Valore restituito|Descrizione|  
|-----------------------|-----------------|  
|\< 0|`elem1` minore di `elem2`|  
|0|`elem1` è equivalente a `elem2`|  
|\> 0|`elem1` è maggiore di `elem2`|  
  
 L'array viene ordinato in ordine crescente, come definito dalla funzione di confronto.  Per ordinare un array in ordine decrescente, invertire il verso di "maggiore di" e "minore di" nella funzione di confronto.  
  
 Se alla funzione vengono passati parametri invalidi, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, allora la funzione completa la propria esecuzione e `errno` viene impostato a `EINVAL`.  Per ulteriori informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
### Condizioni di errore  
  
|chiave|base|compare|num|width|errno|  
|------------|----------|-------------|---------|-----------|-----------|  
|`NULL`|any|any|any|any|`EINVAL`|  
|any|`NULL`|any|\!\= 0|any|`EINVAL`|  
|any|any|any|any|\<\= 0|`EINVAL`|  
|any|any|`NULL`|any|any|`EINVAL`|  
  
 `qsort_s` ha lo stesso comportamento di `qsort` ma dispone del parametro `context` ed imposta `errno`.  Passando un parametro `context`, le funzioni di confronto possono utilizzare un oggetto puntatore per accedere alla funzionalità dell'oggetto o ad altre informazioni non accessibili tramite un puntatore dell'elemento.  L'aggiunta del parametro `context` rende `qsort_s`più sicuro perché `context` può essere utilizzato per evitare dei bug reentrancy introdotti utilizzando variabili statiche per rendere disponibili le informazioni condivise alla funzione `compare`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`qsort_s`|\<stdlib.h\> e \<search.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
 **Librerie:** Tutte le versioni di [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il parametro di `context` nella funzione `qsort_s` `` .  Il parametro `context` rende più facile eseguire ordinamenti thread\-safe.  Anziché utilizzare variabili statiche che devono essere sincronizzate per garantire la thread safety, passare un differente parametro `context` in ogni ordinamento.  In questo esempio, un oggetto delle impostazioni locali viene utilizzato come parametro di `context`.  
  
```  
// crt_qsort_s.cpp  
// compile with: /EHsc /MT  
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
// Codepage 850 is the OEM codepage used by the command line,  
// so \x00e1 is the German Sharp S in that codepage and \x00a4  
// is the n tilde.  
  
char *array1[] = { "wei\x00e1", "weis", "annehmen", "weizen", "Zeit",  
                   "weit" };  
char *array2[] = { "Espa\x00a4ol", "Espa\x00a4" "a", "espantado" };  
char *array3[] = { "table", "tableux", "tablet" };  
  
#define GERMAN_LOCALE "German_Germany.850"  
#define SPANISH_LOCALE "Spanish_Spain.850"  
#define ENGLISH_LOCALE "English_US.850"  
  
#endif  
  
#ifdef CODEPAGE_1252  
   // If using codepage 1252 (ISO 8859-1, Latin-1), use \x00df  
   // for the German Sharp S and \x001f for the n tilde.  
char *array1[] = { "wei\x00df", "weis", "annehmen", "weizen", "Zeit",  
                   "weit" };  
char *array2[] = { "Espa\x00f1ol", "Espa\x00f1" "a", "espantado" };  
char *array3[] = { "table", "tableux", "tablet" };  
  
#define GERMAN_LOCALE "German_Germany.1252"  
#define SPANISH_LOCALE "Spanish_Spain.1252"  
#define ENGLISH_LOCALE "English_US.1252"  
  
#endif  
  
// The context parameter lets you create a more generic compare.  
// Without this parameter, you would have stored the locale in a  
// static variable, thus making sort_array vulnerable to thread  
// conflicts.  
  
int compare( void *pvlocale, const void *str1, const void *str2)  
{  
    char s1[256];  
    char s2[256];  
    strcpy_s(s1, 256, *(char**)str1);  
    strcpy_s(s2, 256, *(char**)str2);  
    _strlwr_s( s1, sizeof(s1) );  
    _strlwr_s( s2, sizeof(s2) );  
  
    locale& loc = *( reinterpret_cast< locale * > ( pvlocale));  
  
    return use_facet< collate<char> >(loc).compare(s1,   
       &s1[strlen(s1)], s2, &s2[strlen(s2)]);  
  
}  
  
void sort_array(char *array[], int num, locale &loc)  
{  
    qsort_s(array, num, sizeof(char*), compare, &loc);  
}  
  
void print_array(char *a[], int c)  
{  
   for (int i = 0; i < c; i++)  
     printf("%s ", a[i]);  
   printf("\n");  
  
}  
  
void sort_german(void * Dummy)  
{  
   sort_array(array1, 6, locale(GERMAN_LOCALE));  
}  
  
void sort_spanish(void * Dummy)  
{     
   sort_array(array2, 3, locale(SPANISH_LOCALE));       
}  
  
void sort_english(void * Dummy)  
{     
   sort_array(array3, 3, locale(ENGLISH_LOCALE));     
}  
  
int main( )  
{  
  
   int i;  
   HANDLE threads[3];  
  
   printf("Unsorted input:\n");  
   print_array(array1, 6);  
   print_array(array2, 3);  
   print_array(array3, 3);  
  
   // Create several threads that perform sorts in different  
   // languages at the same time.   
  
   threads[0] = reinterpret_cast<HANDLE>(  
                 _beginthread( sort_german , 0, NULL));  
   threads[1] = reinterpret_cast<HANDLE>(  
                 _beginthread( sort_spanish, 0, NULL));  
   threads[2] = reinterpret_cast<HANDLE>(  
                 _beginthread( sort_english, 0, NULL));  
  
   for (i = 0; i < 3; i++)  
   {  
      if (threads[i] == reinterpret_cast<HANDLE>(-1))  
      {  
         printf("Error creating threads.\n");  
         exit(1);  
      }  
   }  
  
   // Wait until all threads have terminated.  
   WaitForMultipleObjects(3, threads, true, INFINITE);  
  
   printf("Sorted output: \n");  
  
   print_array(array1, 6);  
   print_array(array2, 3);  
   print_array(array3, 3);  
  
}  
```  
  
## Esempio di output  
  
```  
Unsorted input:  
weiß weis annehmen weizen Zeit weit   
Español España espantado   
table tableux tablet   
Sorted output:   
annehmen weiß weis weit weizen Zeit   
España Español espantado   
table tablet tableux  
```  
  
## Equivalente .NET Framework  
 <xref:System.Collections.ArrayList.Sort%2A>  
  
## Vedere anche  
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [bsearch\_s](../../c-runtime-library/reference/bsearch-s.md)   
 [\_lsearch\_s](../../c-runtime-library/reference/lsearch-s.md)   
 [qsort](../../c-runtime-library/reference/qsort.md)