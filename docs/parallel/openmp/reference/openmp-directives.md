---
title: Direttive OpenMP
ms.date: 03/20/2019
f1_keywords:
- OpenMP directives
- atomic
- barrier
- critical
- flush
- for
- master
- ordered
- parallel
- section
- SECTIONS
- single
- threadprivate
helpviewer_keywords:
- OpenMP directives
- atomic OpenMP directive
- barrier OpenMP directive
- critical OpenMP directive
- flush OpenMP directive
- for OpenMP directive
- master OpenMP directive
- ordered OpenMP directive
- parallel OpenMP directive
- sections OpenMP directive
- single OpenMP directive
- threadprivate OpenMP directive
ms.assetid: 0562c263-344c-466d-843e-de830d918940
ms.openlocfilehash: 4db341cf58884263e414e24aacf888c8c88e57cc
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142026"
---
# <a name="openmp-directives"></a>Direttive OpenMP

Fornisce collegamenti alle direttive utilizzate nell'API OpenMP.

Visual C++ supporta le direttive OpenMP seguenti.

Per la condivisione di lavoro parallela:

|Direttiva|Descrizione|
|---------|-----------|
|[parallel](#parallel)|Definisce un'area parallela, ovvero codice che verrà eseguito da più thread in parallelo.|
|[for](#for-openmp)|Fa in modo che le operazioni eseguite in un ciclo di `for` all'interno di un'area parallela siano divise tra i thread.|
|[sections](#sections-openmp)|Identifica le sezioni di codice che devono essere divise tra tutti i thread.|
|[single](#single)|Consente di specificare che una sezione di codice deve essere eseguita in un singolo thread, non necessariamente nel thread master.|

Per il master e la sincronizzazione:

|Direttiva|Descrizione|
|---------|-----------|
|[master](#master)|Specifica che solo il thread master deve eseguire una sezione del programma.|
|[critical](#critical)|Specifica che il codice viene eseguito solo in un thread alla volta.|
|[barrier](#barrier)|Sincronizza tutti i thread in un team; tutti i thread vengono sospesi alla barriera, fino a quando tutti i thread non eseguono la barriera.|
|[atomic](#atomic)|Specifica la posizione di memoria che verrà aggiornata atomicamente.|
|[flush](#flush-openmp)|Specifica che tutti i thread hanno la stessa visualizzazione della memoria per tutti gli oggetti condivisi.|
|[ordinato](#ordered-openmp-directives)|Specifica che il codice in un ciclo di `for` parallelo deve essere eseguito come un ciclo sequenziale.|

Per l'ambiente dati:

|Direttiva|Descrizione|
|---------|-----------|
|[threadprivate](#threadprivate)|Specifica che una variabile è privata per un thread.|

## <a name="atomic"></a>atomica

Specifica la posizione di memoria che verrà aggiornata atomicamente.

```cpp
#pragma omp atomic
   expression
```

### <a name="parameters"></a>Parametri

*expression*<br/>
Istruzione con *lvalue*, la cui posizione di memoria si vuole proteggere da più di una scrittura.

### <a name="remarks"></a>Osservazioni

La direttiva `atomic` non supporta clausole.

Per altre informazioni, vedere [costrutto atomico 2.6.4](../../../parallel/openmp/2-6-4-atomic-construct.md).

### <a name="example"></a>Esempio

```cpp
// omp_atomic.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

#define MAX 10

int main() {
   int count = 0;
   #pragma omp parallel num_threads(MAX)
   {
      #pragma omp atomic
      count++;
   }
   printf_s("Number of threads: %d\n", count);
}
```

```Output
Number of threads: 10
```

## <a name="barrier"></a>barriera

Sincronizza tutti i thread in un team; tutti i thread vengono sospesi alla barriera, fino a quando tutti i thread non eseguono la barriera.

```cpp
#pragma omp barrier
```

### <a name="remarks"></a>Osservazioni

La direttiva `barrier` non supporta clausole.

Per altre informazioni, vedere [direttiva 2.6.3 Barrier](../../../parallel/openmp/2-6-3-barrier-directive.md).

### <a name="example"></a>Esempio

Per un esempio di come usare `barrier`, vedere [Master](#master).

## <a name="critical"></a>critico

Specifica che il codice viene eseguito solo in un thread alla volta.

```cpp
#pragma omp critical [(name)]
{
   code_block
}
```

### <a name="parameters"></a>Parametri

*nome*<br/>
Opzionale Nome per identificare il codice critico. Il nome deve essere racchiuso tra parentesi.

### <a name="remarks"></a>Osservazioni

La direttiva `critical` non supporta clausole.

Per altre informazioni, vedere [costrutto critico 2.6.2](../../../parallel/openmp/2-6-2-critical-construct.md).

### <a name="example"></a>Esempio

```cpp
// omp_critical.cpp
// compile with: /openmp
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    int i;
    int max;
    int a[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        a[i] = rand();
        printf_s("%d\n", a[i]);
    }

    max = a[0];
    #pragma omp parallel for num_threads(4)
        for (i = 1; i < SIZE; i++)
        {
            if (a[i] > max)
            {
                #pragma omp critical
                {
                    // compare a[i] and max again because max
                    // could have been changed by another thread after
                    // the comparison outside the critical section
                    if (a[i] > max)
                        max = a[i];
                }
            }
        }

    printf_s("max = %d\n", max);
}
```

```Output
41
18467
6334
26500
19169
15724
11478
29358
26962
24464
max = 29358
```

## <a name="flush-openmp"></a>filo

Specifica che tutti i thread hanno la stessa visualizzazione della memoria per tutti gli oggetti condivisi.

```cpp
#pragma omp flush [(var)]
```

### <a name="parameters"></a>Parametri

*var*<br/>
Opzionale Elenco delimitato da virgole di variabili che rappresentano gli oggetti che si desidera sincronizzare. Se *var* non è specificato, viene scaricata tutta la memoria.

### <a name="remarks"></a>Osservazioni

La direttiva `flush` non supporta clausole.

Per altre informazioni, vedere [direttiva 2.6.5 Flush](../../../parallel/openmp/2-6-5-flush-directive.md).

### <a name="example"></a>Esempio

```cpp
// omp_flush.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

void read(int *data) {
   printf_s("read data\n");
   *data = 1;
}

void process(int *data) {
   printf_s("process data\n");
   (*data)++;
}

int main() {
   int data;
   int flag;

   flag = 0;

   #pragma omp parallel sections num_threads(2)
   {
      #pragma omp section
      {
         printf_s("Thread %d: ", omp_get_thread_num( ));
         read(&data);
         #pragma omp flush(data)
         flag = 1;
         #pragma omp flush(flag)
         // Do more work.
      }

      #pragma omp section
      {
         while (!flag) {
            #pragma omp flush(flag)
         }
         #pragma omp flush(data)

         printf_s("Thread %d: ", omp_get_thread_num( ));
         process(&data);
         printf_s("data = %d\n", data);
      }
   }
}
```

```Output
Thread 0: read data
Thread 1: process data
data = 2
```

## <a name="for-openmp"></a>per

Fa in modo che le operazioni eseguite in un ciclo di `for` all'interno di un'area parallela siano divise tra i thread.

```cpp
#pragma omp [parallel] for [clauses]
   for_statement
```

### <a name="parameters"></a>Parametri

*clausole*<br/>
Opzionale Zero o più clausole, vedere la sezione **osservazioni** .

*for_statement*<br/>
Ciclo `for`. Se il codice utente nel ciclo `for` modifica la variabile di indice, viene generato un comportamento non definito.

### <a name="remarks"></a>Osservazioni

La direttiva `for` supporta le clausole seguenti:

- [private](openmp-clauses.md#private-openmp)
- [firstprivate](openmp-clauses.md#firstprivate)
- [lastprivate](openmp-clauses.md#lastprivate)
- [reduction](openmp-clauses.md#reduction)
- [ordinato](openmp-clauses.md#ordered-openmp-clauses)
- [schedule](openmp-clauses.md#schedule)
- [nowait](openmp-clauses.md#nowait)

Se viene specificato anche `parallel`, `clauses` può essere qualsiasi clausola accettata dalle direttive `parallel` o `for`, eccetto `nowait`.

Per ulteriori informazioni, vedere [2.4.1 per costrutto](../../../parallel/openmp/2-4-1-for-construct.md).

### <a name="example"></a>Esempio

```cpp
// omp_for.cpp
// compile with: /openmp
#include <stdio.h>
#include <math.h>
#include <omp.h>

#define NUM_THREADS 4
#define NUM_START 1
#define NUM_END 10

int main() {
   int i, nRet = 0, nSum = 0, nStart = NUM_START, nEnd = NUM_END;
   int nThreads = 0, nTmp = nStart + nEnd;
   unsigned uTmp = (unsigned((abs(nStart - nEnd) + 1)) *
                               unsigned(abs(nTmp))) / 2;
   int nSumCalc = uTmp;

   if (nTmp < 0)
      nSumCalc = -nSumCalc;

   omp_set_num_threads(NUM_THREADS);

   #pragma omp parallel default(none) private(i) shared(nSum, nThreads, nStart, nEnd)
   {
      #pragma omp master
      nThreads = omp_get_num_threads();

      #pragma omp for
      for (i=nStart; i<=nEnd; ++i) {
            #pragma omp atomic
            nSum += i;
      }
   }

   if  (nThreads == NUM_THREADS) {
      printf_s("%d OpenMP threads were used.\n", NUM_THREADS);
      nRet = 0;
   }
   else {
      printf_s("Expected %d OpenMP threads, but %d were used.\n",
               NUM_THREADS, nThreads);
      nRet = 1;
   }

   if (nSum != nSumCalc) {
      printf_s("The sum of %d through %d should be %d, "
               "but %d was reported!\n",
               NUM_START, NUM_END, nSumCalc, nSum);
      nRet = 1;
   }
   else
      printf_s("The sum of %d through %d is %d\n",
               NUM_START, NUM_END, nSum);
}
```

```Output
4 OpenMP threads were used.
The sum of 1 through 10 is 55
```

## <a name="master"></a>Master

Specifica che solo il thread master deve eseguire una sezione del programma.

```cpp
#pragma omp master
{
   code_block
}
```

### <a name="remarks"></a>Osservazioni

La direttiva `master` non supporta clausole.

La [singola](#single) direttiva consente di specificare che una sezione di codice deve essere eseguita in un singolo thread, non necessariamente nel thread master.

Per ulteriori informazioni, vedere [2.6.1 Master costrutto](../../../parallel/openmp/2-6-1-master-construct.md).

### <a name="example"></a>Esempio

```cpp
// omp_master.cpp
// compile with: /openmp
#include <omp.h>
#include <stdio.h>

int main( )
{
    int a[5], i;

    #pragma omp parallel
    {
        // Perform some computation.
        #pragma omp for
        for (i = 0; i < 5; i++)
            a[i] = i * i;

        // Print intermediate results.
        #pragma omp master
            for (i = 0; i < 5; i++)
                printf_s("a[%d] = %d\n", i, a[i]);

        // Wait.
        #pragma omp barrier

        // Continue with the computation.
        #pragma omp for
        for (i = 0; i < 5; i++)
            a[i] += i;
    }
}
```

```Output
a[0] = 0
a[1] = 1
a[2] = 4
a[3] = 9
a[4] = 16
```

## <a name="ordered-openmp-directives"></a>ordinato

Specifica che il codice in un ciclo di `for` parallelo deve essere eseguito come un ciclo sequenziale.

```cpp
#pragma omp ordered
   structured-block
```

### <a name="remarks"></a>Osservazioni

La direttiva `ordered` deve rientrare nell'extent dinamico di un costrutto [for](#for-openmp) o `parallel for` con una clausola `ordered`.

La direttiva `ordered` non supporta clausole.

Per altre informazioni, vedere [costrutto ordinato 2.6.6](../../../parallel/openmp/2-6-6-ordered-construct.md).

### <a name="example"></a>Esempio

```cpp
// omp_ordered.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

static float a[1000], b[1000], c[1000];

void test(int first, int last)
{
    #pragma omp for schedule(static) ordered
    for (int i = first; i <= last; ++i) {
        // Do something here.
        if (i % 2)
        {
            #pragma omp ordered
            printf_s("test() iteration %d\n", i);
        }
    }
}

void test2(int iter)
{
    #pragma omp ordered
    printf_s("test2() iteration %d\n", iter);
}

int main( )
{
    int i;
    #pragma omp parallel
    {
        test(1, 8);
        #pragma omp for ordered
        for (i = 0 ; i < 5 ; i++)
            test2(i);
    }
}
```

```Output
test() iteration 1
test() iteration 3
test() iteration 5
test() iteration 7
test2() iteration 0
test2() iteration 1
test2() iteration 2
test2() iteration 3
test2() iteration 4
```

## <a name="parallel"></a>parallelo

Definisce un'area parallela, ovvero codice che verrà eseguito da più thread in parallelo.

```cpp
#pragma omp parallel [clauses]
{
   code_block
}
```

### <a name="parameters"></a>Parametri

*clausole*<br/>
Opzionale Zero o più clausole, vedere la sezione **osservazioni** .

### <a name="remarks"></a>Osservazioni

La direttiva `parallel` supporta le clausole seguenti:

- [if](openmp-clauses.md#if-openmp)
- [private](openmp-clauses.md#private-openmp)
- [firstprivate](openmp-clauses.md#firstprivate)
- [default](openmp-clauses.md#default-openmp)
- [condiviso](openmp-clauses.md#shared-openmp)
- [copyin](openmp-clauses.md#copyin)
- [reduction](openmp-clauses.md#reduction)
- [num_threads](openmp-clauses.md#num-threads)

`parallel` può essere usato anche con le direttive [for](#for-openmp) e [sections](#sections-openmp) .

Per ulteriori informazioni, vedere [2,3 costrutto parallelo](../../../parallel/openmp/2-3-parallel-construct.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come impostare il numero di thread e definire un'area parallela. Per impostazione predefinita, il numero di thread è uguale al numero di processori logici nel computer. Se, ad esempio, si dispone di un computer con un processore fisico abilitato per l'Hyper-Threading, saranno disponibili due processori logici e due thread. L'ordine di output può variare in computer diversi.

```cpp
// omp_parallel.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main() {
   #pragma omp parallel num_threads(4)
   {
      int i = omp_get_thread_num();
      printf_s("Hello from thread %d\n", i);
   }
}
```

```Output
Hello from thread 0
Hello from thread 1
Hello from thread 2
Hello from thread 3
```

## <a name="sections-openmp"></a>sezioni

Identifica le sezioni di codice che devono essere divise tra tutti i thread.

```cpp
#pragma omp [parallel] sections [clauses]
{
   #pragma omp section
   {
      code_block
   }
}
```

### <a name="parameters"></a>Parametri

*clausole*<br/>
Opzionale Zero o più clausole, vedere la sezione **osservazioni** .

### <a name="remarks"></a>Osservazioni

La direttiva `sections` può contenere zero o più direttive di `section`.

La direttiva `sections` supporta le clausole seguenti:

- [private](openmp-clauses.md#private-openmp)
- [firstprivate](openmp-clauses.md#firstprivate)
- [lastprivate](openmp-clauses.md#lastprivate)
- [reduction](openmp-clauses.md#reduction)
- [nowait](openmp-clauses.md#nowait)

Se viene specificato anche `parallel`, `clauses` può essere qualsiasi clausola accettata dalle direttive `parallel` o `sections`, eccetto `nowait`.

Per ulteriori informazioni, vedere il [costrutto di sezioni 2.4.2](../../../parallel/openmp/2-4-2-sections-construct.md).

### <a name="example"></a>Esempio

```cpp
// omp_sections.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel sections num_threads(4)
    {
        printf_s("Hello from thread %d\n", omp_get_thread_num());
        #pragma omp section
        printf_s("Hello from thread %d\n", omp_get_thread_num());
    }
}
```

```Output
Hello from thread 0
Hello from thread 0
```

## <a name="single"></a>singolo

Consente di specificare che una sezione di codice deve essere eseguita in un singolo thread, non necessariamente nel thread master.

```cpp
#pragma omp single [clauses]
{
   code_block
}
```

### <a name="parameters"></a>Parametri

*clausole*<br/>
Opzionale Zero o più clausole, vedere la sezione **osservazioni** .

### <a name="remarks"></a>Osservazioni

La direttiva `single` supporta le clausole seguenti:

- [private](openmp-clauses.md#private-openmp)
- [firstprivate](openmp-clauses.md#firstprivate)
- [copyprivate](openmp-clauses.md#copyprivate)
- [nowait](openmp-clauses.md#nowait)

La direttiva [Master](#master) consente di specificare che una sezione di codice deve essere eseguita solo nel thread master.

Per ulteriori informazioni, vedere la pagina relativa al [singolo costrutto 2.4.3](../../../parallel/openmp/2-4-3-single-construct.md).

### <a name="example"></a>Esempio

```cpp
// omp_single.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main() {
   #pragma omp parallel num_threads(2)
   {
      #pragma omp single
      // Only a single thread can read the input.
      printf_s("read input\n");

      // Multiple threads in the team compute the results.
      printf_s("compute results\n");

      #pragma omp single
      // Only a single thread can write the output.
      printf_s("write output\n");
    }
}
```

```Output
read input
compute results
compute results
write output
```

## <a name="threadprivate"></a>threadprivate

Specifica che una variabile è privata per un thread.

```cpp
#pragma omp threadprivate(var)
```

### <a name="parameters"></a>Parametri

*var*<br/>
Elenco delimitato da virgole di variabili che si desidera rendere private a un thread. *var* deve essere una variabile con ambito globale o con ambito spazio dei nomi o una variabile locale statica.

### <a name="remarks"></a>Osservazioni

La direttiva `threadprivate` non supporta clausole.

La direttiva `threadprivate` è basata sull'attributo [thread](../../../cpp/thread.md) mediante la parola chiave [__declspec](../../../cpp/declspec.md) ; i limiti per `__declspec(thread)` si applicano ai `threadprivate`. Ad esempio, un `threadprivate` variabile esisterà in tutti i thread avviati nel processo, non solo i thread che fanno parte di un team di thread generato da un'area parallela. Tenere presente questo dettaglio di implementazione; è possibile notare che i costruttori per un `threadprivate` tipo definito dall'utente vengono chiamati più spesso.

È possibile usare `threadprivate` in una DLL caricata in modo statico all'avvio del processo. Tuttavia, non è possibile usare `threadprivate` in nessuna DLL che verrà caricata tramite [LoadLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryw) , ad esempio le DLL caricate con [/DELAYLOAD (importazione a caricamento ritardato)](../../../build/reference/delayload-delay-load-import.md), che usa anche `LoadLibrary`.

Per una variabile `threadprivate` di un tipo *distruttibile* non è garantito che il relativo distruttore venga chiamato. Ad esempio:

```cpp
struct MyType
{
    ~MyType();
};

MyType threaded_var;
#pragma omp threadprivate(threaded_var)
int main()
{
    #pragma omp parallel
    {}
}
```

Gli utenti non hanno alcun controllo su quando i thread che costituiscono l'area parallela termineranno. Se i thread sono presenti quando il processo viene chiuso, i thread non riceveranno alcuna notifica relativa alla chiusura del processo e il distruttore non verrà chiamato per `threaded_var` su alcun thread, ad eccezione di quello che si chiude (in questo caso, il thread primario). Pertanto, il codice non deve contare sulla corretta distruzione delle variabili `threadprivate`.

Per altre informazioni, vedere la [direttiva 2.7.1 threadprivate](../../../parallel/openmp/2-7-1-threadprivate-directive.md).

### <a name="example"></a>Esempio

Per un esempio di utilizzo di `threadprivate`, vedere [private](openmp-clauses.md#private-openmp).
