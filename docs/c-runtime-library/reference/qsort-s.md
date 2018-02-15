---
title: qsort_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- qsort_s
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
- qsort_s
dev_langs:
- C++
helpviewer_keywords:
- arrays [C++], sorting
- quick-sort algorithm
- qsort_s function
- sorting arrays
ms.assetid: 6ee817b0-4408-4355-a5d4-6605e419ab91
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 31615609ad233f68b6caa78b85cd5efc0ca2dc71
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="qsorts"></a>qsort_s
Esegue un ordinamento rapido. Questa è una versione di [qsort](../../c-runtime-library/reference/qsort.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void qsort_s(  
   void *base,  
   size_t num,  
   size_t width,  
   int (__cdecl *compare )(void *, const void *, const void *),  
   void * context  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `base`  
 Inizio della matrice di destinazione.  
  
 `num`  
 Dimensione della matrice in elementi.  
  
 `width`  
 Dimensione dell'elemento in byte.  
  
 `compare`  
 Funzione di confronto. Il primo argomento è il puntatore `context`. Il secondo argomento è un puntatore a `key` per la ricerca. Il terzo argomento è un puntatore all'elemento della matrice da confrontare con `key`.  
  
 `context`  
 Un puntatore a un contesto che può essere un qualsiasi oggetto a cui la routine `compare` deve accedere.  
  
## <a name="remarks"></a>Note  
 La funzione `qsort_s` implementa un algoritmo di ordinamento rapido per ordinare una matrice di `num` elementi, di `width` byte ciascuno. L'argomento `base` è un puntatore alla base della matrice da ordinare. `qsort_s` sovrascrive questa matrice con gli elementi ordinati. L'argomento `compare` è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e restituisce un valore che specifica la relazione. `qsort_s` chiama la routine `compare` una o più volte durante l'ordinamento, passando i puntatori a due elementi di matrice per ogni chiamata:  
  
```  
compare( context, (void *) & elem1, (void *) & elem2 );  
```  
  
 La routine deve confrontare gli elementi e quindi restituire uno dei seguenti valori:  
  
|Valore restituito|Descrizione|  
|------------------|-----------------|  
|< 0|`elem1` minore di `elem2`|  
|0|`elem1` equivalente a `elem2`|  
|> 0|`elem1` maggiore di `elem2`|  
  
 La matrice viene ordinata in ordine crescente, come definito dalla funzione di confronto. Per ordinare una matrice in ordine decrescente, invertire il senso di "maggiore di" e "minore di" nella funzione di confronto.  
  
 Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, allora la funzione restituisce e `errno` viene impostato su `EINVAL`. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|key|base|compare|num|width|errno|  
|---------|----------|-------------|---------|-----------|-----------|  
|`NULL`|qualsiasi|qualsiasi|qualsiasi|qualsiasi|`EINVAL`|  
|qualsiasi|`NULL`|qualsiasi|!= 0|qualsiasi|`EINVAL`|  
|qualsiasi|qualsiasi|qualsiasi|qualsiasi|<= 0|`EINVAL`|  
|qualsiasi|qualsiasi|`NULL`|qualsiasi|qualsiasi|`EINVAL`|  
  
 `qsort_s` ha lo stesso comportamento di `qsort` ma dispone del parametro `context` e imposta `errno`. Passando un parametro `context`, le funzioni di confronto possono utilizzare un puntatore a un oggetto per accedere alla funzionalità dell'oggetto o ad altre informazioni non accessibili tramite un puntatore a un elemento. L'aggiunta del `context` parametro rende `qsort_s` più sicura perché `context` può essere utilizzato per evitare i bug reentrancy introdotti dall'utilizzo di variabili statiche per rendere disponibili informazioni condivise il `compare` (funzione).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`qsort_s`|\<stdlib.h> e \<search.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
 **Librerie:** tutte le versioni delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `context` parametro il `qsort_s` (funzione). Il parametro `context` rende più facile eseguire ordinamenti thread-safe. Anziché utilizzare variabili statiche che devono essere sincronizzate per garantire la thread safety, passare un parametro `context` diverso in ogni ordinamento. In questo esempio, un oggetto delle impostazioni locali viene utilizzato come parametro `context`.  
  
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
  
## <a name="sample-output"></a>Esempio di output  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [bsearch_s](../../c-runtime-library/reference/bsearch-s.md)   
 [_lsearch_s](../../c-runtime-library/reference/lsearch-s.md)   
 [qsort](../../c-runtime-library/reference/qsort.md)