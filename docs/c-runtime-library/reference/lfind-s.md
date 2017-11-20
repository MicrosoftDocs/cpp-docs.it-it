---
title: _lfind_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _lfind_s
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
- lfind_s
- _lfind_s
dev_langs: C++
helpviewer_keywords:
- linear searching
- keys, finding in arrays
- lfind_s function
- arrays [CRT], searching
- searching, linear
- _lfind_s function
ms.assetid: f1d9581d-5c9d-4222-a31c-a6dfafefa40d
caps.latest.revision: "26"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a49c732be3c1f378340d00c414acee91e6e62978
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="lfinds"></a>_lfind_s
Esegue una ricerca lineare della chiave specificata. Questa è una versione di [_lfind](../../c-runtime-library/reference/lfind.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void *_lfind_s(  
   const void *key,  
   const void *base,  
   unsigned int *num,  
   size_t size,  
   int (__cdecl *compare)(void *, const void *, const void *),  
   void * context  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `key`  
 Oggetto da cercare.  
  
 `base`  
 Puntatore alla base dei dati di ricerca.  
  
 `num`  
 Numero degli elementi della matrice.  
  
 `size`  
 Dimensione degli elementi della matrice in byte.  
  
 `compare`  
 Puntatore alla routine di confronto. Il primo parametro è il puntatore `context`. Il secondo parametro è un puntatore alla chiave per la ricerca. Il terzo parametro è un puntatore all'elemento della matrice da confrontare con la chiave.  
  
 `context`  
 Puntatore a un oggetto che potrebbe essere accessibile nella funzione di confronto.  
  
## <a name="return-value"></a>Valore restituito  
 Se la chiave viene trovata, `_lfind_s` restituisce un puntatore all'elemento della matrice in `base` che corrisponde a `key`. Se la chiave non viene trovata, `_lfind_s` restituisce `NULL`.  
  
 Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|key|base|compare|num|size|errno|  
|---------|----------|-------------|---------|----------|-----------|  
|`NULL`|qualsiasi|qualsiasi|qualsiasi|qualsiasi|`EINVAL`|  
|qualsiasi|`NULL`|qualsiasi|!= 0|qualsiasi|`EINVAL`|  
|qualsiasi|qualsiasi|qualsiasi|any|zero|`EINVAL`|  
|any|qualsiasi|`NULL`|any|qualsiasi|`EINVAL`|  
  
## <a name="remarks"></a>Note  
 La funzione `_lfind_s` esegue una ricerca lineare del valore `key` in una matrice di `num` elementi, ognuno di `width` byte. A differenza di `bsearch_s`, `_lfind_s` non richiede che la matrice sia ordinata. L'argomento `base` è un puntatore alla base della matrice in cui eseguire la ricerca. L'argomento `compare` è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e quindi restituisce un valore che ne specifica la relazione. `_lfind_s` chiama la routine `compare` una o più volte durante la ricerca, passando il puntatore `context` e i puntatori a due elementi della matrice per ogni chiamata. La routine `compare` deve confrontare gli elementi e quindi restituire un valore diverso da zero (che indica che gli elementi sono diversi) o 0 (che indica che gli elementi sono identici).  
  
 `_lfind_s` è simile a `_lfind` con l'eccezione dell'aggiunta del puntatore `context` agli argomenti della funzione di confronto e all'elenco dei parametri della funzione. Il puntatore `context` può essere utile se la struttura dei dati sottoposta a ricerca fa parte di un oggetto e la funzione `compare` deve accedere ai membri dell'oggetto. La funzione `compare` può eseguire il cast del puntatore void nel tipo di oggetto appropriato e accedere ai membri di tale oggetto. L'aggiunta del parametro `context` rende `_lfind_s` più sicuro perché può essere usato un contesto aggiuntivo per evitare i bug di reentrancy associati all'uso di variabili statiche per rendere disponibili i dati alla funzione `compare`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_lfind_s`|\<search.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_lfind_s.cpp  
// This program uses _lfind_s to search a string array,  
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
// Codepage 850 is the OEM codepage used by the command line,  
// so \x00e1 is the German Sharp S  
  
char *array1[] = { "wei\x00e1", "weis", "annehmen", "weizen", "Zeit",  
                   "weit" };  
  
#define GERMAN_LOCALE "German_Germany.850"  
  
#endif  
  
#ifdef CODEPAGE_1252  
   // If using codepage 1252 (ISO 8859-1, Latin-1), use \x00df  
   // for the German Sharp S  
char *array1[] = { "wei\x00df", "weis", "annehmen", "weizen", "Zeit",  
                   "weit" };  
  
#define GERMAN_LOCALE "German_Germany.1252"  
  
#endif  
  
// The context parameter lets you create a more generic compare.  
// Without this parameter, you would have stored the locale in a  
// static variable, thus making it vulnerable to thread conflicts  
// (if this were a multithreaded program).  
  
int compare( void *pvlocale, const void *str1, const void *str2)  
{  
    char *s1 = *(char**)str1;  
    char *s2 = *(char**)str2;  
  
    locale& loc = *( reinterpret_cast< locale * > ( pvlocale));  
  
    return use_facet< collate<char> >(loc).compare(  
       s1, s1+strlen(s1),  
       s2, s2+strlen(s2) );  
}  
  
void find_it( char *key, char *array[], unsigned int num, locale &loc )  
{  
   char **result = (char **)_lfind_s( &key, array,   
                      &num, sizeof(char *), compare, &loc );  
   if( result )  
      printf( "%s found\n", *result );  
   else  
      printf( "%s not found\n", key );  
}  
  
int main( )  
{  
   find_it( "weit", array1, sizeof(array1)/sizeof(char*), locale(GERMAN_LOCALE) );  
}  
```  
  
```Output  
weit found  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)   
 [bsearch_s](../../c-runtime-library/reference/bsearch-s.md)   
 [_lsearch_s](../../c-runtime-library/reference/lsearch-s.md)   
 [qsort_s](../../c-runtime-library/reference/qsort-s.md)   
 [_lfind](../../c-runtime-library/reference/lfind.md)