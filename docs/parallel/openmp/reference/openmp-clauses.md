---
title: Clausole OpenMP
ms.date: 10/22/2018
f1_keywords:
- OpenMP clauses
- copyin
- copyprivate
- default
- firstprivate
- if
- lastprivate
- nowait
- num_threads
- ordered
- private
- reduction
- schedule
- shared
helpviewer_keywords:
- OpenMP clauses
- copyin OpenMP clause
- copyprivate OpenMP clause
- default OpenMP clause
- defaults, OpenMP clause
- firstprivate OpenMP clause
- if OpenMP clause
- lastprivate OpenMP clause
- nowait OpenMP clause
- num_threads OpenMP clause
- ordered OpenMP clause
- private OpenMP clause
- reduction OpenMP clause
- schedule OpenMP clause
- shared OpenMP clause
ms.assetid: 806e7d8f-b204-4e4c-a12c-273ab540a7ca
ms.openlocfilehash: 7d65b8315ad42f4993e54c07d31d42fffa43c4db
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51519136"
---
# <a name="openmp-clauses"></a>Clausole OpenMP

Fornisce collegamenti alle clausole utilizzate nell'API OpenMP.

Visual C++ supporta le clausole OpenMP seguente:

|Clausola|Descrizione|
|------|-----------|
|[copyin](#copyin)|Consente ai thread di accedere a valore del thread master, per un [threadprivate](openmp-directives.md#threadprivate) variabile.|
|[copyprivate](#copyprivate)|Specifica che una o più variabili devono essere condivise tra tutti i thread.|
|[default](#default-openmp)|Specifica il comportamento delle variabili senza ambite in un'area parallela.|
|[firstprivate](#firstprivate)|Specifica che ogni thread deve avere una propria istanza di una variabile, e che è necessario inizializzare la variabile con il valore della variabile, perché è presente prima del costrutto parallelo.|
|[if](#if-openmp)|Specifica se un ciclo deve essere eseguito in parallelo o in serie.|
|[lastprivate](#lastprivate)|Specifica che la versione del contesto di inclusione della variabile è impostata uguale a quella privata di qualsiasi thread esegue l'iterazione finale (costrutto di ciclo for) o l'ultima sezione (#pragma sezioni).|
|[nowait](#nowait)|Esegue l'override la barriera implicita una direttiva.|
|[num_threads](#num-threads)|Imposta il numero di thread in un gruppo di thread.|
|[ordered](#ordered-openmp-clauses)|Obbligatorio in un'operazione parallela [per](openmp-directives.md#for-openmp) istruzione se un' [ordinati](openmp-directives.md#ordered-openmp-directives) direttiva deve essere utilizzato nel ciclo.|
|[private](#private-openmp)|Specifica che ogni thread deve avere una propria istanza di una variabile.|
|[reduction](#reduction)|Specifica che una o più variabili private per ogni thread sono l'oggetto di un'operazione di riduzione alla fine di tale area.|
|[schedule](#schedule)|Viene applicata il [per](openmp-directives.md#for-openmp) direttiva.|
|[shared](#shared-openmp)|Specifica che una o più variabili devono essere condivise tra tutti i thread.|

## <a name="copyin"></a>copyin

Consente ai thread di accedere a valore del thread master, per un [threadprivate](openmp-directives.md#threadprivate) variabile.

```
copyin(var)
```

### <a name="parameters"></a>Parametri

*var*<br/>
Il `threadprivate` variabile che verrà inizializzata con il valore della variabile nel thread principale, come si presenta prima del costrutto parallelo.

### <a name="remarks"></a>Note

`copyin` si applica alle direttive seguenti:

- [parallel](openmp-directives.md#parallel)
- [for](openmp-directives.md#for-openmp)
- [Sezioni](openmp-directives.md#sections-openmp)

Per altre informazioni, vedere [2.7.2.7 copyin](../../../parallel/openmp/2-7-2-7-copyin.md).

### <a name="example"></a>Esempio

Visualizzare [threadprivate](openmp-directives.md#threadprivate) per un esempio d'uso `copyin`.

## <a name="copyprivate"></a>copyprivate

Specifica che una o più variabili devono essere condivise tra tutti i thread.

```
copyprivate(var)
```

### <a name="parameters"></a>Parametri

*var*<br/>
Uno o più variabili da condividere. Se è specificata più di una variabile, separare i nomi delle variabili con una virgola.

### <a name="remarks"></a>Note

`copyprivate` viene applicata il [singolo](openmp-directives.md#single) direttiva.

Per altre informazioni, vedere [2.7.2.8 copyprivate](../../../parallel/openmp/2-7-2-8-copyprivate.md).

### <a name="example"></a>Esempio

```
// omp_copyprivate.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

float x, y, fGlobal = 1.0;
#pragma omp threadprivate(x, y)

float get_float() {
   fGlobal += 0.001;
   return fGlobal;
}

void use_float(float f, int t) {
   printf_s("Value = %f, thread = %d\n", f, t);
}

void CopyPrivate(float a, float b) {
   #pragma omp single copyprivate(a, b, x, y)
   {
      a = get_float();
      b = get_float();
      x = get_float();
      y = get_float();
    }

   use_float(a, omp_get_thread_num());
   use_float(b, omp_get_thread_num());
   use_float(x, omp_get_thread_num());
   use_float(y, omp_get_thread_num());
}

int main() {
   float a = 9.99, b = 123.456;

   printf_s("call CopyPrivate from a single thread\n");
   CopyPrivate(9.99, 123.456);

   printf_s("call CopyPrivate from a parallel region\n");
   #pragma omp parallel
   {
      CopyPrivate(a, b);
   }
}
```

```Output
call CopyPrivate from a single thread
Value = 1.001000, thread = 0
Value = 1.002000, thread = 0
Value = 1.003000, thread = 0
Value = 1.004000, thread = 0
call CopyPrivate from a parallel region
Value = 1.005000, thread = 0
Value = 1.005000, thread = 1
Value = 1.006000, thread = 0
Value = 1.006000, thread = 1
Value = 1.007000, thread = 0
Value = 1.007000, thread = 1
Value = 1.008000, thread = 0
Value = 1.008000, thread = 1
```

## <a name="default-openmp"></a>predefinito (OpenMP)

Specifica il comportamento delle variabili senza ambite in un'area parallela.

```
default(shared | none)
```

### <a name="remarks"></a>Note

`shared`, che è in effetti se il `default` clausola non è specificato, significa che qualsiasi variabile in un'area parallela verrà considerata come se fosse specificato con il [condivisa](#shared-openmp) clausola. `none` significa che qualsiasi variabile utilizzata in un'area parallela che non sono con ambito con la [privati](#private-openmp), [condiviso](#shared-openmp), [riduzione](#reduction), [firstprivate](#firstprivate), oppure [lastprivate](#lastprivate) clausola genererà un errore del compilatore.

`default` si applica alle direttive seguenti:

- [parallel](openmp-directives.md#parallel)
- [for](openmp-directives.md#for-openmp)
- [Sezioni](openmp-directives.md#sections-openmp)

Per altre informazioni, vedere [2.7.2.5 predefinito](../../../parallel/openmp/2-7-2-5-default.md).

### <a name="example"></a>Esempio

Visualizzare [privati](#private-openmp) per un esempio d'uso `default`.

## <a name="firstprivate"></a>firstprivate

Specifica che ogni thread deve avere una propria istanza di una variabile, e che è necessario inizializzare la variabile con il valore della variabile, perché è presente prima del costrutto parallelo.

```
firstprivate(var)
```

### <a name="parameters"></a>Parametri

*var*<br/>
La variabile ad avere istanze in ogni thread e che verrà inizializzata con il valore della variabile, perché è presente prima del costrutto parallelo. Se è specificata più di una variabile, separare i nomi delle variabili con una virgola.

### <a name="remarks"></a>Note

`firstprivate` si applica alle direttive seguenti:

- [for](openmp-directives.md#for-openmp)
- [parallel](openmp-directives.md#parallel)
- [Sezioni](openmp-directives.md#sections-openmp)
- [single](openmp-directives.md#single)

Per altre informazioni, vedere [2.7.2.2 firstprivate](../../../parallel/openmp/2-7-2-2-firstprivate.md).

### <a name="example"></a>Esempio

Per un esempio d'uso `firstprivate`, vedere l'esempio nella [private](#private-openmp).

## <a name="if-openmp"></a>Se (OpenMP)

Specifica se un ciclo deve essere eseguito in parallelo o in serie.

```
if(expression)
```

### <a name="parameters"></a>Parametri

*Espressione*<br/>
Un'espressione integrale che, se restituisce true (diverso da zero), fa sì che il codice in tale area per l'esecuzione in parallelo. Se l'espressione restituisce false (zero), l'area parallela viene eseguito in serie (per un singolo thread).

### <a name="remarks"></a>Note

`if` si applica alle direttive seguenti:

- [parallel](openmp-directives.md#parallel)
- [for](openmp-directives.md#for-openmp)
- [Sezioni](openmp-directives.md#sections-openmp)

Per altre informazioni, vedere [2.3 costrutto parallel](../../../parallel/openmp/2-3-parallel-construct.md).

### <a name="example"></a>Esempio

```
// omp_if.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

void test(int val)
{
    #pragma omp parallel if (val)
    if (omp_in_parallel())
    {
        #pragma omp single
        printf_s("val = %d, parallelized with %d threads\n",
                 val, omp_get_num_threads());
    }
    else
    {
        printf_s("val = %d, serialized\n", val);
    }
}

int main( )
{
    omp_set_num_threads(2);
    test(0);
    test(2);
}
```

```Output
val = 0, serialized
val = 2, parallelized with 2 threads
```

## <a name="lastprivate"></a>lastprivate

Specifica che la versione del contesto di inclusione della variabile è impostata uguale a quella privata di qualsiasi thread esegue l'iterazione finale (costrutto di ciclo for) o l'ultima sezione (#pragma sezioni).

```
lastprivate(var)
```

### <a name="parameters"></a>Parametri

*var*<br/>
La variabile che sarà uguale a quella privata di qualsiasi thread esegue l'iterazione finale (costrutto di ciclo for) o l'ultima sezione (#pragma sezioni).

### <a name="remarks"></a>Note

`lastprivate` si applica alle direttive seguenti:

- [for](openmp-directives.md#for-openmp)
- [Sezioni](openmp-directives.md#sections-openmp)

Per altre informazioni, vedere [2.7.2.3 lastprivate](../../../parallel/openmp/2-7-2-3-lastprivate.md).

### <a name="example"></a>Esempio

Visualizzare [pianificazione](#schedule) per un esempio d'uso `lastprivate` clausola.

## <a name="nowait"></a>NOWAIT

Esegue l'override la barriera implicita una direttiva.

```
nowait
```

### <a name="remarks"></a>Note

`nowait` si applica alle direttive seguenti:

- [for](openmp-directives.md#for-openmp)
- [Sezioni](openmp-directives.md#sections-openmp)
- [single](openmp-directives.md#single)

Per altre informazioni, vedere [2.4.1 costrutto for](../../../parallel/openmp/2-4-1-for-construct.md), [2.4.2 costrutto sections](../../../parallel/openmp/2-4-2-sections-construct.md), e [singolo 2.4.3 costrutto](../../../parallel/openmp/2-4-3-single-construct.md).

### <a name="example"></a>Esempio

```
// omp_nowait.cpp
// compile with: /openmp /c
#include <stdio.h>

#define SIZE 5

void test(int *a, int *b, int *c, int size)
{
    int i;
    #pragma omp parallel
    {
        #pragma omp for nowait
        for (i = 0; i < size; i++)
            b[i] = a[i] * a[i];

        #pragma omp for nowait
        for (i = 0; i < size; i++)
            c[i] = a[i]/2;
    }
}

int main( )
{
    int a[SIZE], b[SIZE], c[SIZE];
    int i;

    for (i=0; i<SIZE; i++)
        a[i] = i;

    test(a,b,c, SIZE);

    for (i=0; i<SIZE; i++)
        printf_s("%d, %d, %d\n", a[i], b[i], c[i]);
}
```

```Output
0, 0, 0
1, 1, 0
2, 4, 1
3, 9, 1
4, 16, 2
```

## <a name="num-threads"></a>num_threads

Imposta il numero di thread in un gruppo di thread.

```
num_threads(num)
```

### <a name="parameters"></a>Parametri

*num*<br/>
Il numero di thread

### <a name="remarks"></a>Note

Il `num_threads` clausola ha la stessa funzionalità come i [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) (funzione).

`num_threads` si applica alle direttive seguenti:

- [parallel](openmp-directives.md#parallel)
- [for](openmp-directives.md#for-openmp)
- [Sezioni](openmp-directives.md#sections-openmp)

Per altre informazioni, vedere [2.3 costrutto parallel](../../../parallel/openmp/2-3-parallel-construct.md).

### <a name="example"></a>Esempio

Visualizzare [parallele](openmp-directives.md#parallel) per un esempio d'uso `num_threads` clausola.

## <a name="ordered-openmp-clauses"></a>Ordered (clausole OpenMP)

Obbligatorio in un'operazione parallela [per](openmp-directives.md#for-openmp) istruzione se un' [ordinati](openmp-directives.md#ordered-openmp-directives) direttiva deve essere utilizzato nel ciclo.

```
ordered
```

### <a name="remarks"></a>Note

`ordered` viene applicata il [per](openmp-directives.md#for-openmp) direttiva.

Per altre informazioni, vedere [2.4.1 costrutto for](../../../parallel/openmp/2-4-1-for-construct.md).

### <a name="example"></a>Esempio

Visualizzare [ordinati](openmp-directives.md#ordered-openmp-directives) per un esempio d'uso `ordered` clausola.

## <a name="private-openmp"></a>privato (OpenMP)

Specifica che ogni thread deve avere una propria istanza di una variabile.

```
private(var)
```

### <a name="parameters"></a>Parametri

*var*<br/>
La variabile ad avere istanze in ogni thread.

### <a name="remarks"></a>Note

`private` si applica alle direttive seguenti:

- [for](openmp-directives.md#for-openmp)
- [parallel](openmp-directives.md#parallel)
- [Sezioni](openmp-directives.md#sections-openmp)
- [single](openmp-directives.md#single)

Per altre informazioni, vedere [2.7.2.1 privato](../../../parallel/openmp/2-7-2-1-private.md).

### <a name="example"></a>Esempio

```C
// openmp_private.c
// compile with: /openmp
#include <windows.h>
#include <assert.h>
#include <stdio.h>
#include <omp.h>

#define NUM_THREADS 4
#define SLEEP_THREAD 1
#define NUM_LOOPS 2

enum Types {
   ThreadPrivate,
   Private,
   FirstPrivate,
   LastPrivate,
   Shared,
   MAX_TYPES
};

int nSave[NUM_THREADS][MAX_TYPES][NUM_LOOPS] = {{0}};
int nThreadPrivate;

#pragma omp threadprivate(nThreadPrivate)
#pragma warning(disable:4700)

int main() {
   int nPrivate = NUM_THREADS;
   int nFirstPrivate = NUM_THREADS;
   int nLastPrivate = NUM_THREADS;
   int nShared = NUM_THREADS;
   int nRet = 0;
   int i;
   int j;
   int nLoop = 0;

   nThreadPrivate = NUM_THREADS;
   printf_s("These are the variables before entry "
           "into the parallel region.\n");
   printf_s("nThreadPrivate = %d\n", nThreadPrivate);
   printf_s("      nPrivate = %d\n", nPrivate);
   printf_s(" nFirstPrivate = %d\n", nFirstPrivate);
   printf_s("  nLastPrivate = %d\n", nLastPrivate);
   printf_s("       nShared = %d\n\n", nShared);
   omp_set_num_threads(NUM_THREADS);

   #pragma omp parallel copyin(nThreadPrivate) private(nPrivate) shared(nShared) firstprivate(nFirstPrivate)
   {
      #pragma omp for schedule(static) lastprivate(nLastPrivate)
      for (i = 0 ; i < NUM_THREADS ; ++i) {
         for (j = 0 ; j < NUM_LOOPS ; ++j) {
            int nThread = omp_get_thread_num();
            assert(nThread < NUM_THREADS);

            if (nThread == SLEEP_THREAD)
               Sleep(100);
            nSave[nThread][ThreadPrivate][j] = nThreadPrivate;
            nSave[nThread][Private][j] = nPrivate;
            nSave[nThread][Shared][j] = nShared;
            nSave[nThread][FirstPrivate][j] = nFirstPrivate;
            nSave[nThread][LastPrivate][j] = nLastPrivate;
            nThreadPrivate = nThread;
            nPrivate = nThread;
            nShared = nThread;
            nLastPrivate = nThread;
            --nFirstPrivate;
         }
      }
   }

   for (i = 0 ; i < NUM_LOOPS ; ++i) {
      for (j = 0 ; j < NUM_THREADS ; ++j) {
         printf_s("These are the variables at entry of "
                  "loop %d of thread %d.\n", i + 1, j);
         printf_s("nThreadPrivate = %d\n",
                  nSave[j][ThreadPrivate][i]);
         printf_s("      nPrivate = %d\n",
                  nSave[j][Private][i]);
         printf_s(" nFirstPrivate = %d\n",
                  nSave[j][FirstPrivate][i]);
         printf_s("  nLastPrivate = %d\n",
                  nSave[j][LastPrivate][i]);
         printf_s("       nShared = %d\n\n",
                  nSave[j][Shared][i]);
      }
   }

   printf_s("These are the variables after exit from "
            "the parallel region.\n");
   printf_s("nThreadPrivate = %d (The last value in the "
            "master thread)\n", nThreadPrivate);
   printf_s("      nPrivate = %d (The value prior to "
            "entering parallel region)\n", nPrivate);
   printf_s(" nFirstPrivate = %d (The value prior to "
            "entering parallel region)\n", nFirstPrivate);
   printf_s("  nLastPrivate = %d (The value from the "
            "last iteration of the loop)\n", nLastPrivate);
   printf_s("       nShared = %d (The value assigned, "
            "from the delayed thread, %d)\n\n",
            nShared, SLEEP_THREAD);
}
```

```Output
These are the variables before entry into the parallel region.
nThreadPrivate = 4
      nPrivate = 4
nFirstPrivate = 4
  nLastPrivate = 4
       nShared = 4

These are the variables at entry of loop 1 of thread 0.
nThreadPrivate = 4
      nPrivate = 1310720
nFirstPrivate = 4
  nLastPrivate = 1245104
       nShared = 3

These are the variables at entry of loop 1 of thread 1.
nThreadPrivate = 4
      nPrivate = 4488
nFirstPrivate = 4
  nLastPrivate = 19748
       nShared = 0

These are the variables at entry of loop 1 of thread 2.
nThreadPrivate = 4
      nPrivate = -132514848
nFirstPrivate = 4
  nLastPrivate = -513199792
       nShared = 4

These are the variables at entry of loop 1 of thread 3.
nThreadPrivate = 4
      nPrivate = 1206
nFirstPrivate = 4
  nLastPrivate = 1204
       nShared = 2

These are the variables at entry of loop 2 of thread 0.
nThreadPrivate = 0
      nPrivate = 0
nFirstPrivate = 3
  nLastPrivate = 0
       nShared = 0

These are the variables at entry of loop 2 of thread 1.
nThreadPrivate = 1
      nPrivate = 1
nFirstPrivate = 3
  nLastPrivate = 1
       nShared = 1

These are the variables at entry of loop 2 of thread 2.
nThreadPrivate = 2
      nPrivate = 2
nFirstPrivate = 3
  nLastPrivate = 2
       nShared = 2

These are the variables at entry of loop 2 of thread 3.
nThreadPrivate = 3
      nPrivate = 3
nFirstPrivate = 3
  nLastPrivate = 3
       nShared = 3

These are the variables after exit from the parallel region.
nThreadPrivate = 0 (The last value in the master thread)
      nPrivate = 4 (The value prior to entering parallel region)
nFirstPrivate = 4 (The value prior to entering parallel region)
  nLastPrivate = 3 (The value from the last iteration of the loop)
       nShared = 1 (The value assigned, from the delayed thread, 1)
```

## <a name="reduction"></a>riduzione

Specifica che una o più variabili private per ogni thread sono l'oggetto di un'operazione di riduzione alla fine di tale area.

```
reduction(operation:var)
```

### <a name="parameters"></a>Parametri

*Operazione*<br/>
L'operatore per l'operazione da eseguire sulle variabili (`var`) alla fine di tale area.

*var*<br/>
Una o più variabili in cui eseguire l'operazione di riduzione scalare. Se è specificata più di una variabile, separare i nomi delle variabili con una virgola.

### <a name="remarks"></a>Note

`reduction` si applica alle direttive seguenti:

- [for](openmp-directives.md#for-openmp)
- [parallel](openmp-directives.md#parallel)
- [Sezioni](openmp-directives.md#sections-openmp)

Per altre informazioni, vedere [2.7.2.6 riduzione](../../../parallel/openmp/2-7-2-6-reduction.md).

### <a name="example"></a>Esempio

```
// omp_reduction.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

#define NUM_THREADS 4
#define SUM_START   1
#define SUM_END     10
#define FUNC_RETS   {1, 1, 1, 1, 1}

int bRets[5] = FUNC_RETS;
int nSumCalc = ((SUM_START + SUM_END) * (SUM_END - SUM_START + 1)) / 2;

int func1( ) {return bRets[0];}
int func2( ) {return bRets[1];}
int func3( ) {return bRets[2];}
int func4( ) {return bRets[3];}
int func5( ) {return bRets[4];}

int main( )
{
    int nRet = 0,
        nCount = 0,
        nSum = 0,
        i,
        bSucceed = 1;

    omp_set_num_threads(NUM_THREADS);

    #pragma omp parallel reduction(+ : nCount)
    {
        nCount += 1;

        #pragma omp for reduction(+ : nSum)
        for (i = SUM_START ; i <= SUM_END ; ++i)
            nSum += i;

        #pragma omp sections reduction(&& : bSucceed)
        {
            #pragma omp section
            {
                bSucceed = bSucceed && func1( );
            }

            #pragma omp section
            {
                bSucceed = bSucceed && func2( );
            }

            #pragma omp section
            {
                bSucceed = bSucceed && func3( );
            }

            #pragma omp section
            {
                bSucceed = bSucceed && func4( );
            }

            #pragma omp section
            {
                bSucceed = bSucceed && func5( );
            }
        }
    }

    printf_s("The parallel section was executed %d times "
             "in parallel.\n", nCount);
    printf_s("The sum of the consecutive integers from "
             "%d to %d, is %d\n", 1, 10, nSum);

    if (bSucceed)
        printf_s("All of the functions, func1 through "
                 "func5 succeeded!\n");
    else
        printf_s("One or more of the functions, func1 "
                 "through func5 failed!\n");

    if (nCount != NUM_THREADS)
    {
        printf_s("ERROR: For %d threads, %d were counted!\n",
                 NUM_THREADS, nCount);
        nRet |= 0x1;
   }

    if (nSum != nSumCalc)
    {
        printf_s("ERROR: The sum of %d through %d should be %d, "
                "but %d was reported!\n",
                SUM_START, SUM_END, nSumCalc, nSum);
        nRet |= 0x10;
    }

    if (bSucceed != (bRets[0] && bRets[1] &&
                     bRets[2] && bRets[3] && bRets[4]))
    {
        printf_s("ERROR: The sum of %d through %d should be %d, "
                 "but %d was reported!\n",
                 SUM_START, SUM_END, nSumCalc, nSum);
        nRet |= 0x100;
    }
}
```

```Output
The parallel section was executed 4 times in parallel.
The sum of the consecutive integers from 1 to 10, is 55
All of the functions, func1 through func5 succeeded!
```

## <a name="schedule"></a>Pianificazione

Viene applicata il [per](openmp-directives.md#for-openmp) direttiva.

```
schedule(type[,size])
```

### <a name="parameters"></a>Parametri

*type*<br/>
Il tipo di pianificazione:

- `dynamic`
- `guided`
- `runtime`
- `static`

*size*<br/>
(Facoltativo) Specifica le dimensioni di iterazioni. `size` deve essere un numero intero. Non è valida quando `type` è `runtime`.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [2.4.1 costrutto for](../../../parallel/openmp/2-4-1-for-construct.md).

### <a name="example"></a>Esempio

```cpp
// omp_schedule.cpp
// compile with: /openmp
#include <windows.h>
#include <stdio.h>
#include <omp.h>

#define NUM_THREADS 4
#define STATIC_CHUNK 5
#define DYNAMIC_CHUNK 5
#define NUM_LOOPS 20
#define SLEEP_EVERY_N 3

int main( )
{
    int nStatic1[NUM_LOOPS],
        nStaticN[NUM_LOOPS];
    int nDynamic1[NUM_LOOPS],
        nDynamicN[NUM_LOOPS];
    int nGuided[NUM_LOOPS];

    omp_set_num_threads(NUM_THREADS);

    #pragma omp parallel
    {
        #pragma omp for schedule(static, 1)
        for (int i = 0 ; i < NUM_LOOPS ; ++i)
        {
            if ((i % SLEEP_EVERY_N) == 0)
                Sleep(0);
            nStatic1[i] = omp_get_thread_num( );
        }

        #pragma omp for schedule(static, STATIC_CHUNK)
        for (int i = 0 ; i < NUM_LOOPS ; ++i)
        {
            if ((i % SLEEP_EVERY_N) == 0)
                Sleep(0);
            nStaticN[i] = omp_get_thread_num( );
        }

        #pragma omp for schedule(dynamic, 1)
        for (int i = 0 ; i < NUM_LOOPS ; ++i)
        {
            if ((i % SLEEP_EVERY_N) == 0)
                Sleep(0);
            nDynamic1[i] = omp_get_thread_num( );
        }

        #pragma omp for schedule(dynamic, DYNAMIC_CHUNK)
        for (int i = 0 ; i < NUM_LOOPS ; ++i)
        {
            if ((i % SLEEP_EVERY_N) == 0)
                Sleep(0);
            nDynamicN[i] = omp_get_thread_num( );
        }

        #pragma omp for schedule(guided)
        for (int i = 0 ; i < NUM_LOOPS ; ++i)
        {
            if ((i % SLEEP_EVERY_N) == 0)
                Sleep(0);
            nGuided[i] = omp_get_thread_num( );
        }
    }

    printf_s("------------------------------------------------\n");
    printf_s("| static | static | dynamic | dynamic | guided |\n");
    printf_s("|    1   |    %d   |    1    |    %d    |        |\n",
             STATIC_CHUNK, DYNAMIC_CHUNK);
    printf_s("------------------------------------------------\n");

    for (int i=0; i<NUM_LOOPS; ++i)
    {
        printf_s("|    %d   |    %d   |    %d    |    %d    |"
                 "    %d   |\n",
                 nStatic1[i], nStaticN[i],
                 nDynamic1[i], nDynamicN[i], nGuided[i]);
    }

    printf_s("------------------------------------------------\n");
}
```

```Output
------------------------------------------------
| static | static | dynamic | dynamic | guided |
|    1   |    5   |    1    |    5    |        |
------------------------------------------------
|    0   |    0   |    0    |    2    |    1   |
|    1   |    0   |    3    |    2    |    1   |
|    2   |    0   |    3    |    2    |    1   |
|    3   |    0   |    3    |    2    |    1   |
|    0   |    0   |    2    |    2    |    1   |
|    1   |    1   |    2    |    3    |    3   |
|    2   |    1   |    2    |    3    |    3   |
|    3   |    1   |    0    |    3    |    3   |
|    0   |    1   |    0    |    3    |    3   |
|    1   |    1   |    0    |    3    |    2   |
|    2   |    2   |    1    |    0    |    2   |
|    3   |    2   |    1    |    0    |    2   |
|    0   |    2   |    1    |    0    |    3   |
|    1   |    2   |    2    |    0    |    3   |
|    2   |    2   |    2    |    0    |    0   |
|    3   |    3   |    2    |    1    |    0   |
|    0   |    3   |    3    |    1    |    1   |
|    1   |    3   |    3    |    1    |    1   |
|    2   |    3   |    3    |    1    |    1   |
|    3   |    3   |    0    |    1    |    3   |
------------------------------------------------
```

## <a name="shared-openmp"></a>condiviso (OpenMP)

Specifica che una o più variabili devono essere condivise tra tutti i thread.

```
shared(var)
```

### <a name="parameters"></a>Parametri

*var*<br/>
Uno o più variabili da condividere. Se è specificata più di una variabile, separare i nomi delle variabili con una virgola.

### <a name="remarks"></a>Note

È possibile condividere le variabili tra i thread con il [copyprivate](#copyprivate) clausola.

`shared` si applica alle direttive seguenti:

- [for](openmp-directives.md#for-openmp)
- [parallel](openmp-directives.md#parallel)
- [Sezioni](openmp-directives.md#sections-openmp)

Per altre informazioni, vedere [2.7.2.4 condiviso](../../../parallel/openmp/2-7-2-4-shared.md).

### <a name="example"></a>Esempio

Visualizzare [privati](#private-openmp) per un esempio d'uso `shared`.
