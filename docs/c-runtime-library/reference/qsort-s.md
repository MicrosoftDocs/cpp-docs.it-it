---
description: 'Altre informazioni su: qsort_s'
title: qsort_s
ms.date: 4/2/2020
api_name:
- qsort_s
- _o_qsort_s
api_location:
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
- ntoskrnl.exe
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- qsort_s
helpviewer_keywords:
- arrays [C++], sorting
- quick-sort algorithm
- qsort_s function
- sorting arrays
ms.assetid: 6ee817b0-4408-4355-a5d4-6605e419ab91
ms.openlocfilehash: 01890db21bc1eb470b57aa796313da4c6f0c50a8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137163"
---
# <a name="qsort_s"></a>qsort_s

Esegue un ordinamento rapido. Questa è una versione di [qsort](qsort.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
void qsort_s(
   void *base,
   size_t num,
   size_t width,
   int (__cdecl *compare )(void *, const void *, const void *),
   void * context
);
```

### <a name="parameters"></a>Parametri

*base*<br/>
Inizio della matrice di destinazione.

*number*<br/>
Dimensione della matrice in elementi.

*width*<br/>
Dimensione dell'elemento in byte.

*confrontare*<br/>
Funzione di confronto. Il primo argomento è il puntatore di *contesto* . Il secondo argomento è un puntatore alla *chiave* per la ricerca. Il terzo argomento è un puntatore all'elemento della matrice da confrontare con la *chiave*.

*context*<br/>
Puntatore a un contesto, che può essere qualsiasi oggetto a cui deve accedere la routine di *confronto* .

## <a name="remarks"></a>Commenti

La funzione **qsort_s** implementa un algoritmo di ordinamento rapido per ordinare una matrice di elementi *numerici* , ciascuno di byte di *larghezza* . La *base* degli argomenti è un puntatore alla base della matrice da ordinare. **qsort_s** sovrascrive questa matrice con gli elementi ordinati. L'argomento *compare* è un puntatore a una routine fornita dall'utente che confronta due elementi di matrice e restituisce un valore che ne specifica la relazione. **qsort_s** chiama la routine di *confronto* una o più volte durante l'ordinamento, passando i puntatori a due elementi di matrice per ogni chiamata:

```C
compare( context, (void *) & elem1, (void *) & elem2 );
```

La routine deve confrontare gli elementi e quindi restituire uno dei seguenti valori:

|Valore restituito|Descrizione|
|------------------|-----------------|
|< 0|**elem1** minore di **elem2**|
|0|**elem1** equivalente a **elem2**|
|> 0|**elem1** maggiore di **elem2**|

La matrice viene ordinata in ordine crescente, come definito dalla funzione di confronto. Per ordinare una matrice in ordine decrescente, invertire il senso di "maggiore di" e "minore di" nella funzione di confronto.

Se alla funzione vengono passati parametri non validi, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce e **errno** viene impostato su **EINVAL**. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="error-conditions"></a>Condizioni di errore

|Key|base|compare|num|width|errno|
|---------|----------|-------------|---------|-----------|-----------|
|**NULL**|any|any|any|any|**EINVAL**|
|any|**NULL**|any|!= 0|any|**EINVAL**|
|any|any|any|any|<= 0|**EINVAL**|
|any|any|**NULL**|any|any|**EINVAL**|

**qsort_s** ha lo stesso comportamento di **qsort** , ma dispone del parametro *context* e imposta **errno**. Passando un parametro di *contesto* , le funzioni di confronto possono utilizzare un puntatore a un oggetto per accedere alla funzionalità dell'oggetto o ad altre informazioni non accessibili tramite un puntatore di elemento. L'aggiunta del parametro di *contesto* rende **qsort_s** più sicuro perché il *contesto* può essere usato per evitare i bug rientranti introdotti usando variabili statiche per rendere disponibili le informazioni condivise alla funzione di *confronto* .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**qsort_s**|\<stdlib.h> e \<search.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** tutte le versioni delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il parametro di *contesto* nella funzione **qsort_s** . Il parametro *context* rende più semplice l'esecuzione di ordinamenti thread-safe. Anziché utilizzare variabili statiche che devono essere sincronizzate per garantire thread safety, passare un parametro di *contesto* diverso in ogni ordinamento. In questo esempio viene usato un oggetto delle impostazioni locali come parametro di *contesto* .

```cpp
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

### <a name="sample-output"></a>Output di esempio

```Output
Unsorted input:
weiß weis annehmen weizen Zeit weit
Español España espantado
table tableux tablet
Sorted output:
annehmen weiß weis weit weizen Zeit
España Español espantado
table tablet tableux
```

## <a name="see-also"></a>Vedi anche

[Ricerca e ordinamento](../../c-runtime-library/searching-and-sorting.md)<br/>
[bsearch_s](bsearch-s.md)<br/>
[_lsearch_s](lsearch-s.md)<br/>
[qsort](qsort.md)<br/>
