---
title: Direttive OpenMP | Microsoft Docs
ms.custom: ''
ms.date: 10/22/2018
ms.technology:
- cpp-parallel
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e761115642cb9ab95931a89ac3b511256d88708b
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49809005"
---
# <a name="openmp-directives"></a>Direttive OpenMP

Vengono forniti collegamenti alle direttive usati nell'API OpenMP.

Visual C++ supporta le seguenti direttive OpenMP:

Direttiva                             | Descrizione
------------------------------------- | -----------------------------------------------------------------------------------------------------------------
[atomic](#atomic)                     | Specifica che una posizione di memoria che verrà aggiornata in modo atomico.
[barrier](#barrier)                   | Sincronizza tutti i thread in un team. tutti i thread Sospendi alla barriera, fino a quando tutti i thread di eseguano la barriera.
[critical](#critical)                 | Specifica che i codice viene eseguito solo in un unico thread alla volta.
[flush](#flush-openmp)                | Specifica che tutti i thread hanno la stessa visualizzazione di memoria per tutti gli oggetti condivisi.
[for](#for-openmp)                    | Fa sì che il lavoro svolto un `for` ciclo all'interno di un'area parallela da dividere tra thread.
[master](#master)                     | Specifica che solo il thread master deve essere eseguita una sezione del programma.
[ordered](#ordered-openmp-directives) | Specifica che il codice in un parallelizzata `for` ciclo deve essere eseguito, ad esempio un ciclo sequenziale.
[parallel](#parallel)                 | Definisce un'area parallela, ovvero codice che verrà eseguito da più thread in parallelo.
[Sezioni](#sections-openmp)          | Identifica le sezioni di codice da dividere tra tutti i thread.
[single](#single)                     | Consente di specificare che una sezione di codice deve essere eseguita su un thread singolo, non necessariamente del thread master.
[threadprivate](#threadprivate)       | Specifica che una variabile privata di un thread.

## <a name="atomic"></a>atomico

Specifica che una posizione di memoria che verrà aggiornata in modo atomico.

```
#pragma omp atomic
   expression
```

### <a name="parameters"></a>Parametri

*Espressione*<br/>
L'istruzione con lvalue, la cui posizione di memoria desiderata per la protezione da più di un'operazione di scrittura. Per altre informazioni sulle forme espressione legali, vedere la specifica di OpenMP.

### <a name="remarks"></a>Note

Il `atomic` direttiva non supporta nessuna clausole OpenMP.

Per altre informazioni, vedere [atomico 2.6.4 costrutto](../../../parallel/openmp/2-6-4-atomic-construct.md).

### <a name="example"></a>Esempio

```
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

## <a name="barrier"></a>barrier

Sincronizza tutti i thread in un team. tutti i thread Sospendi alla barriera, fino a quando tutti i thread di eseguano la barriera.

```
#pragma omp barrier
```

### <a name="remarks"></a>Note

Il `barrier` direttiva non supporta nessuna clausole OpenMP.

Per altre informazioni, vedere [2.6.3 direttiva barrier](../../../parallel/openmp/2-6-3-barrier-directive.md).

### <a name="example"></a>Esempio

Per un esempio d'uso `barrier`, vedere [master](#master).

## <a name="critical"></a>critical

Specifica che codice è possibile eseguire solo in un unico thread alla volta.

```
#pragma omp critical [(name)]
{
   code_block
}
```

### <a name="parameters"></a>Parametri

*name*<br/>
(Facoltativo) Un nome per identificare il codice critico. Si noti che il nome deve essere racchiuso tra parentesi.

### <a name="remarks"></a>Note

Il `critical` direttiva non supporta nessuna clausole OpenMP.

Per altre informazioni, vedere [critici 2.6.2 costrutto](../../../parallel/openmp/2-6-2-critical-construct.md).

### <a name="example"></a>Esempio

```
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

## <a name="flush-openmp"></a>flush (OpenMP)

Specifica che tutti i thread hanno la stessa visualizzazione di memoria per tutti gli oggetti condivisi.

```
#pragma omp flush [(var)]
```

### <a name="parameters"></a>Parametri

*var*<br/>
(Facoltativo) Elenco delimitato da virgole di variabili che rappresentano gli oggetti da sincronizzare. Se `var` non è specificato, tutta la memoria viene scaricata.

### <a name="remarks"></a>Note

Il `flush` direttiva non supporta nessuna clausole OpenMP.

Per altre informazioni, vedere [2.6.5 direttiva flush](../../../parallel/openmp/2-6-5-flush-directive.md).

### <a name="example"></a>Esempio

```
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

## <a name="for-openmp"></a>for (OpenMP)

Fa sì che il lavoro svolto un `for` ciclo all'interno di un'area parallela da dividere tra thread.

```
#pragma omp [parallel] for [clauses]
   for_statement
```

### <a name="parameters"></a>Parametri

*Clausole*<br/>
(Facoltativo) Zero o più clausole. Vedere la sezione Osservazioni per un elenco delle clausole supportate da `for`.

*for_Statement*<br/>
Oggetto `for` ciclo. Un comportamento indefinito determinerà se Scrivi codice utente nel `for` ciclo modifica la variabile di indice.

### <a name="remarks"></a>Note

Il `for` direttiva supporta le clausole OpenMP seguente:

- [firstprivate](../../../parallel/openmp/reference/firstprivate.md)
- [lastprivate](../../../parallel/openmp/reference/lastprivate.md)
- [nowait](../../../parallel/openmp/reference/nowait.md)
- [ordered](../../../parallel/openmp/reference/ordered-openmp-directives.md)
- [private](../../../parallel/openmp/reference/private-openmp.md)
- [reduction](../../../parallel/openmp/reference/reduction.md)
- [schedule](../../../parallel/openmp/reference/schedule.md)

Se `parallel` viene anche specificato, `clauses` può essere qualsiasi clausola accettato dal `parallel` oppure `for` direttive, tranne `nowait`.

Per altre informazioni, vedere [2.4.1 costrutto for](../../../parallel/openmp/2-4-1-for-construct.md).

### <a name="example"></a>Esempio

```
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

## <a name="master"></a>master

Specifica che solo il thread master deve essere eseguita una sezione del programma.

```
#pragma omp master
{
   code_block
}
```

### <a name="remarks"></a>Note

Il `master` direttiva non supporta nessuna clausole OpenMP.

Il [singolo](#single) direttiva consente di specificare che una sezione di codice deve essere eseguita su un thread singolo, non necessariamente del thread master.

Per altre informazioni, vedere [2.6.1 costrutto di master](../../../parallel/openmp/2-6-1-master-construct.md).

### <a name="example"></a>Esempio

```
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

## <a name="ordered-openmp-directives"></a>Ordered (direttive OpenMP)

Specifica che il codice in un parallelizzata `for` ciclo deve essere eseguito, ad esempio un ciclo sequenziale.

```
#pragma omp ordered
   structured-block
```

### <a name="remarks"></a>Note

Il `ordered` direttiva deve essere entro l'ambito dinamico di un [per](#for-openmp) oppure `parallel for` costruire con un `ordered` clausola.

Il `ordered` direttiva non supporta nessuna clausole OpenMP.

Per altre informazioni, vedere [2.6.6 costrutto ordered](../../../parallel/openmp/2-6-6-ordered-construct.md).

### <a name="example"></a>Esempio

```
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

## <a name="parallel"></a>parallel

Definisce un'area parallela, ovvero codice che verrà eseguito da più thread in parallelo.

```
#pragma omp parallel [clauses]
{
   code_block
}
```

### <a name="parameters"></a>Parametri

*Clausole*<br/>
(Facoltativo) Zero o più clausole.  Vedere la sezione Osservazioni per un elenco delle clausole supportate da `parallel`.

### <a name="remarks"></a>Note

Il `parallel` direttiva supporta le clausole OpenMP seguente:

- [copyin](../../../parallel/openmp/reference/copyin.md)
- [default](../../../parallel/openmp/reference/default-openmp.md)
- [firstprivate](../../../parallel/openmp/reference/firstprivate.md)
- [if](../../../parallel/openmp/reference/if-openmp.md)
- [num_threads](../../../parallel/openmp/reference/num-threads.md)
- [private](../../../parallel/openmp/reference/private-openmp.md)
- [reduction](../../../parallel/openmp/reference/reduction.md)
- [shared](../../../parallel/openmp/reference/shared-openmp.md)

`parallel` è anche utilizzabile con il [sezioni](#sections-openmp) e [per](#for-openmp) direttive.

Per altre informazioni, vedere [2.3 costrutto parallel](../../../parallel/openmp/2-3-parallel-construct.md).

### <a name="example"></a>Esempio

L'esempio seguente viene illustrato come impostare il numero di thread e definire un'area parallela. Il numero di thread è uguale per impostazione predefinita per il numero di processori logici nel computer. Ad esempio, se si dispone di un computer con un unico processore fisico con hyperthreading abilitato, avrà due processori logici e due thread.

```
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

### <a name="comment"></a>Commento

Si noti che l'ordine dell'output può variare in computer diversi.

## <a name="sections-openmp"></a>sections (OpenMP)

Identifica le sezioni di codice da dividere tra tutti i thread.

```
#pragma omp [parallel] sections [clauses]
{
   #pragma omp section
   {
      code_block
   } 
}
```

### <a name="parameters"></a>Parametri

*Clausole*<br/>
(Facoltativo) Zero o più clausole. Vedere la sezione Osservazioni per un elenco delle clausole supportate da `sections`.

### <a name="remarks"></a>Note

Il `sections` direttiva può contenere zero o più `section` direttive.

Il `sections` direttiva supporta le clausole OpenMP seguente:

- [firstprivate](../../../parallel/openmp/reference/firstprivate.md)
- [lastprivate](../../../parallel/openmp/reference/lastprivate.md)
- [nowait](../../../parallel/openmp/reference/nowait.md)
- [private](../../../parallel/openmp/reference/private-openmp.md)
- [reduction](../../../parallel/openmp/reference/reduction.md)

Se `parallel` viene anche specificato, `clauses` può essere qualsiasi clausola accettato dal `parallel` oppure `sections` direttive, tranne `nowait`.

Per altre informazioni, vedere [2.4.2 costrutto sections](../../../parallel/openmp/2-4-2-sections-construct.md).

### <a name="example"></a>Esempio

```
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

## <a name="single"></a>singola

Consente di specificare che una sezione di codice deve essere eseguita su un thread singolo, non necessariamente del thread master.

```
#pragma omp single [clauses] 
{
   code_block
}
```

### <a name="parameters"></a>Parametri

*Clausole*<br/>
(Facoltativo) Zero o più clausole. Vedere la sezione Osservazioni per un elenco delle clausole supportate da `single`.

### <a name="remarks"></a>Note

Il `single` direttiva supporta le clausole OpenMP seguente:

- [copyprivate](../../../parallel/openmp/reference/copyprivate.md)
- [firstprivate](../../../parallel/openmp/reference/firstprivate.md)
- [nowait](../../../parallel/openmp/reference/nowait.md)
- [private](../../../parallel/openmp/reference/private-openmp.md)

Il [master](#master) direttiva consente di specificare che una sezione di codice deve essere eseguita solo sul thread master.

Per altre informazioni, vedere [singolo 2.4.3 costrutto](../../../parallel/openmp/2-4-3-single-construct.md).

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

Specifica che una variabile privata di un thread.

```
#pragma omp threadprivate(var)
```

### <a name="parameters"></a>Parametri

*var*<br/>
Elenco delimitato da virgole di variabili che si desidera rendere privato a un thread. `var` deve essere una variabile globale o dello spazio dei nomi-con ambito o una variabile locale statica.

### <a name="remarks"></a>Note

Il `threadprivate` direttiva non supporta nessuna clausole OpenMP.

Per altre informazioni, vedere [2.7.1 direttiva threadprivate](../../../parallel/openmp/2-7-1-threadprivate-directive.md).

Il `threadprivate` direttiva si basa sul [thread](../../../cpp/thread.md) attributo mediante la [declspec](../../../cpp/declspec.md) parola chiave; limiti sulle `__declspec(thread)` si applicano a `threadprivate`.

Non è possibile usare `threadprivate` in qualsiasi DLL che verrà caricata mediante [LoadLibrary](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibrarya).  Divieto, nel include DLL che siano state caricate [/DELAYLOAD (importazione a caricamento ritardato)](../../../build/reference/delayload-delay-load-import.md), che utilizza anch ' `LoadLibrary`.

È possibile usare `threadprivate` in una DLL che viene caricata in modo statico all'avvio del processo.

In quanto `threadprivate` basa `__declspec(thread)`, un `threadprivate` variabile sarà presente in qualsiasi thread avviato nel processo, non solo i thread che fanno parte di un team di thread generato da un'area parallela.  Tenere presente questo dettaglio di implementazione; è possibile notare, ad esempio, che i costruttori per una `threadprivate` tipo definito dall'utente vengono chiamati più spesso quella prevista.

Oggetto `threadprivate` variabile di tipo destructable non è garantito che il relativo distruttore chiamato.  Ad esempio:

```
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

Gli utenti non hanno alcun controllo sulla quando terminerà il thread che costituisce l'area parallela.  Se tali thread esistano al momento della chiusura del processo, il thread non sarà necessario notificare l'uscita dal processo e non verrà chiamato il distruttore per `threaded_var` in qualsiasi thread ad eccezione di quello che viene chiuso (, il thread principale).  Quindi codice non dovrebbe contare sulla corretta distruzione del `threadprivate` variabili.

### <a name="example"></a>Esempio

Per un esempio d'uso `threadprivate`, vedere [private](../../../parallel/openmp/reference/private-openmp.md).
