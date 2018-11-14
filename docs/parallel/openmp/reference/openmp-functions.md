---
title: Funzioni OpenMP
ms.date: 10/23/2018
f1_keywords:
- OpenMP functions
- omp_destroy_lock
- omp_destroy_nest_lock
- omp_get_dynamic
- omp_get_max_threads
- omp_get_nested
- omp_get_num_procs
- omp_get_num_threads
- omp_get_thread_num
- omp_get_wtick
- omp_get_wtime
- omp_in_parallel
- omp_init_lock
- omp_init_nest_lock
- omp_set_dynamic
- omp_set_lock
- omp_set_nest_lock
- omp_set_nested
- omp_set_num_threads
- omp_test_lock
- omp_test_nest_lock
- omp_unset_lock
- omp_unset_nest_lock
helpviewer_keywords:
- OpenMP functions
- omp_destroy_lock OpenMP function
- omp_destroy_nest_lock OpenMP function
- omp_get_dynamic OpenMP function
- omp_get_max_threads OpenMP function
- omp_get_nested OpenMP function
- omp_get_num_procs OpenMP function
- omp_get_num_threads OpenMP function
- omp_get_thread_num OpenMP function
- omp_get_wtick OpenMP function
- omp_get_wtime OpenMP function
- omp_in_parallel OpenMP function
- omp_init_lock OpenMP function
- omp_init_nest_lock OpenMP function
- omp_set_dynamic OpenMP function
- omp_set_lock OpenMP function
- omp_set_nest_lock OpenMP function
- omp_set_nested OpenMP function
- omp_set_num_threads OpenMP function
- omp_test_lock OpenMP function
- omp_test_nest_lock OpenMP function
- omp_unset_lock OpenMP function
- omp_unset_nest_lock OpenMP function
ms.assetid: a55a2e5c-a260-44ee-bbd6-de7e2351b384
ms.openlocfilehash: 0435d75b69ea870db50739933245925d6860cbf9
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51333286"
---
# <a name="openmp-functions"></a>Funzioni OpenMP

Fornisce collegamenti a funzioni usate nell'API OpenMP.

L'implementazione di Visual C++ di OpenMP standard include le funzioni seguenti.

|Funzione|Descrizione|
|--------|-----------|
|[omp_destroy_lock](#omp-destroy-lock)|Non Inizializza un blocco.|
|[omp_destroy_nest_lock](#omp-destroy-nest-lock)|Non Inizializza un blocco annidabile.|
|[omp_get_dynamic](#omp-get-dynamic)|Restituisce un valore che indica se il numero di thread disponibili nella prossime aree parallele possa essere adattato per la fase di esecuzione.|
|[omp_get_max_threads](#omp-get-max-threads)|Restituisce un valore integer che è uguale o maggiore del numero di thread che sarebbero disponibili se un'area parallela senza [num_threads](openmp-clauses.md#num-threads) sono state definite in quel punto nel codice.|
|[omp_get_nested](#omp-get-nested)|Restituisce un valore che indica se è abilitato il parallelismo annidato.|
|[omp_get_num_procs](#omp-get-num-procs)|Restituisce il numero di processori che sono disponibili quando viene chiamata la funzione.|
|[omp_get_num_threads](#omp-get-num-threads)|Restituisce il numero di thread in tale area.|
|[omp_get_thread_num](#omp-get-thread-num)|Restituisce il numero di thread del thread in esecuzione all'interno del team relativo thread.|
|[omp_get_wtick](#omp-get-wtick)|Restituisce il numero di secondi tra cicli di clock del processore.|
|[omp_get_wtime](#omp-get-wtime)|Restituisce che un valore in secondi del tempo trascorso da un certo punto.|
|[omp_in_parallel](#omp-in-parallel)|Restituisce diversi da zero se viene chiamato dall'interno di un'area parallela.|
|[omp_init_lock](#omp-init-lock)|Inizializza un blocco semplice.|
|[omp_init_nest_lock](#omp-init-nest-lock)|Inizializza un blocco.|
|[omp_set_dynamic](#omp-set-dynamic)|Indica che il numero di thread disponibili nella prossime aree parallele possa essere adattato per la fase di esecuzione.|
|[omp_set_lock](#omp-set-lock)|Blocchi di esecuzione del thread fino a quando non è disponibile un blocco.|
|[omp_set_nest_lock](#omp-set-nest-lock)|Blocchi di esecuzione del thread fino a quando non è disponibile un blocco.|
|[omp_set_nested](#omp-set-nested)|Abilitato il parallelismo annidato.|
|[omp_set_num_threads](#omp-set-num-threads)|Imposta il numero di thread in aree parallele imminenti, a meno che non viene sottoposto a override da una [num_threads](openmp-clauses.md#num-threads) clausola.|
|[omp_test_lock](#omp-test-lock)|Tenta di impostare un blocco, ma non blocca l'esecuzione del thread.|
|[omp_test_nest_lock](#omp-test-nest-lock)|Tenta di impostare un blocco annidabile ma non blocca l'esecuzione del thread.|
|[omp_unset_lock](#omp-unset-lock)|Rilascia un blocco.|
|[omp_unset_nest_lock](#omp-unset-nest-lock)|Rilascia un blocco annidabile.|

## <a name="omp-destroy-lock"></a>funzioni omp_destroy_lock

Non Inizializza un blocco.

```
void omp_destroy_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_lock_t](openmp-data-types.md#omp-lock-t) che è stata inizializzata [funzioni omp_init_lock](#omp-init-lock).

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.2.2 funzioni omp_destroy_lock e omp_destroy_nest_lock funzioni](../../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md).

### <a name="example"></a>Esempio

Visualizzare [funzioni omp_init_lock](#omp-init-lock) per un esempio d'uso `omp_destroy_lock`.

## <a name="omp-destroy-nest-lock"></a>omp_destroy_nest_lock

Non Inizializza un blocco annidabile.

```
void omp_destroy_nest_lock(
   omp_nest_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_nest_lock_t](openmp-data-types.md#omp-nest-lock-t) che è stata inizializzata [omp_init_nest_lock](#omp-init-nest-lock).

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.2.2 funzioni omp_destroy_lock e omp_destroy_nest_lock funzioni](../../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md).

### <a name="example"></a>Esempio

Visualizzare [omp_init_nest_lock](#omp-init-nest-lock) per un esempio d'uso `omp_destroy_nest_lock`.

## <a name="omp-get-dynamic"></a>omp_get_dynamic

Restituisce un valore che indica se il numero di thread disponibili nella prossime aree parallele possa essere adattato per la fase di esecuzione.

```
int omp_get_dynamic();
```

### <a name="return-value"></a>Valore restituito

Un valore diverso da zero indica che verranno regolati in modo dinamico i thread.

### <a name="remarks"></a>Note

Regolazione dinamica del thread viene specificato con [omp_set_dynamic](#omp-set-dynamic) e [OMP_DYNAMIC](openmp-environment-variables.md#omp-dynamic).

Per altre informazioni, vedere [3.1.7 funzione omp_set_dynamic](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).

### <a name="example"></a>Esempio

Visualizzare [omp_set_dynamic](#omp-set-dynamic) per un esempio d'uso `omp_get_dynamic`.

## <a name="omp-get-max-threads"></a>omp_get_max_threads

Restituisce un valore integer che è uguale o maggiore del numero di thread che sarebbero disponibili se un'area parallela senza [num_threads](openmp-clauses.md#num-threads) sono state definite in quel punto nel codice.

```
int omp_get_max_threads( )
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.1.3 funzione omp_get_max_threads](../../../parallel/openmp/3-1-3-omp-get-max-threads-function.md).

### <a name="example"></a>Esempio

```
// omp_get_max_threads.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    omp_set_num_threads(8);
    printf_s("%d\n", omp_get_max_threads( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_max_threads( ));
        }

    printf_s("%d\n", omp_get_max_threads( ));

    #pragma omp parallel num_threads(3)
        #pragma omp master
        {
            printf_s("%d\n", omp_get_max_threads( ));
        }

    printf_s("%d\n", omp_get_max_threads( ));
}
```

```Output
8
8
8
8
8
```

## <a name="omp-get-nested"></a>omp_get_nested

Restituisce un valore che indica se è abilitato il parallelismo annidato.

```
int omp_get_nested( );
```

### <a name="return-value"></a>Valore restituito

Un valore diverso da zero indica che è abilitato il parallelismo annidato.

### <a name="remarks"></a>Note

Parallelismo annidato è specificato con [omp_set_nested](#omp-set-nested) e [OMP_NESTED](openmp-environment-variables.md#omp-nested).

Per altre informazioni, vedere [3.1.10 funzione omp_get_nested](../../../parallel/openmp/3-1-10-omp-get-nested-function.md).

### <a name="example"></a>Esempio

Visualizzare [omp_set_nested](#omp-set-nested) per un esempio d'uso `omp_get_nested`.

## <a name="omp-get-num-procs"></a>omp_get_num_procs

Restituisce il numero di processori che sono disponibili quando viene chiamata la funzione.

```
int omp_get_num_procs();
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.1.5 funzione omp_get_num_procs](../../../parallel/openmp/3-1-5-omp-get-num-procs-function.md).

### <a name="example"></a>Esempio

```
// omp_get_num_procs.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    printf_s("%d\n", omp_get_num_procs( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_num_procs( ));
        }
}
```

```Output
// Expect the following output when the example is run on a two-processor machine:
2
2
```

## <a name="omp-get-num-threads"></a>omp_get_num_threads

Restituisce il numero di thread in tale area.

```
int omp_get_num_threads( );
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.1.2 funzione omp_get_num_threads](../../../parallel/openmp/3-1-2-omp-get-num-threads-function.md).

### <a name="example"></a>Esempio

```
// omp_get_num_threads.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main()
{
    omp_set_num_threads(4);
    printf_s("%d\n", omp_get_num_threads( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_num_threads( ));
        }

    printf_s("%d\n", omp_get_num_threads( ));

    #pragma omp parallel num_threads(3)
        #pragma omp master
        {
            printf_s("%d\n", omp_get_num_threads( ));
        }

    printf_s("%d\n", omp_get_num_threads( ));
}
```

```Output
1
4
1
3
1
```

## <a name="omp-get-thread-num"></a>omp_get_thread_num

Restituisce il numero di thread del thread in esecuzione all'interno del team relativo thread.

```
int omp_get_thread_num( );
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.1.4 funzione omp_get_thread_num](../../../parallel/openmp/3-1-4-omp-get-thread-num-function.md).

### <a name="example"></a>Esempio

Visualizzare [parallele](openmp-directives.md#parallel) per un esempio d'uso `omp_get_thread_num`.

## <a name="omp-get-wtick"></a>omp_get_wtick

Restituisce il numero di secondi tra cicli di clock del processore.

```
double omp_get_wtick( );
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.3.2 funzione omp_get_wtick](../../../parallel/openmp/3-3-2-omp-get-wtick-function.md).

### <a name="example"></a>Esempio

Visualizzare [omp_get_wtime](#omp-get-wtime) per un esempio d'uso `omp_get_wtick`.

## <a name="omp-get-wtime"></a>omp_get_wtime

Restituisce che un valore in secondi del tempo trascorso da un certo punto.

```
double omp_get_wtime( );
```

### <a name="return-value"></a>Valore restituito

Restituisce che un valore in secondi del tempo trascorso dal punto di alcune arbitrario, ma coerente.

### <a name="remarks"></a>Note

Tale punto rimane coerente durante l'esecuzione del programma, rendendo possibile confronti imminenti.

Per altre informazioni, vedere [3.3.1 funzione omp_get_wtime](../../../parallel/openmp/3-3-1-omp-get-wtime-function.md).

### <a name="example"></a>Esempio

```
// omp_get_wtime.cpp
// compile with: /openmp
#include "omp.h"
#include <stdio.h>
#include <windows.h>

int main() {
    double start = omp_get_wtime( );
    Sleep(1000);
    double end = omp_get_wtime( );
    double wtick = omp_get_wtick( );

    printf_s("start = %.16g\nend = %.16g\ndiff = %.16g\n",
             start, end, end - start);

    printf_s("wtick = %.16g\n1/wtick = %.16g\n",
             wtick, 1.0 / wtick);
}
```

```Output
start = 594255.3671159324
end = 594256.3664474116
diff = 0.9993314791936427
wtick = 2.793651148400146e-007
1/wtick = 3579545
```

## <a name="omp-in-parallel"></a>omp_in_parallel

Restituisce diversi da zero se viene chiamato dall'interno di un'area parallela.

```
int omp_in_parallel( );
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.1.6 funzione omp_in_parallel](../../../parallel/openmp/3-1-6-omp-in-parallel-function.md).

### <a name="example"></a>Esempio

```
// omp_in_parallel.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    omp_set_num_threads(4);
    printf_s("%d\n", omp_in_parallel( ));

    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_in_parallel( ));
        }
}
```

```Output
0
1
```

## <a name="omp-init-lock"></a>funzioni omp_init_lock

Inizializza un blocco semplice.

```
void omp_init_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_lock_t](openmp-data-types.md#omp-lock-t).

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.2.1 funzioni omp_init_lock e omp_init_nest_lock funzioni](../../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md).

### <a name="example"></a>Esempio

```
// omp_init_lock.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

omp_lock_t my_lock;

int main() {
   omp_init_lock(&my_lock);

   #pragma omp parallel num_threads(4)
   {
      int tid = omp_get_thread_num( );
      int i, j;

      for (i = 0; i < 5; ++i) {
         omp_set_lock(&my_lock);
         printf_s("Thread %d - starting locked region\n", tid);
         printf_s("Thread %d - ending locked region\n", tid);
         omp_unset_lock(&my_lock);
      }
   }

   omp_destroy_lock(&my_lock);
}
```

```Output
Thread 0 - starting locked region
Thread 0 - ending locked region
Thread 0 - starting locked region
Thread 0 - ending locked region
Thread 0 - starting locked region
Thread 0 - ending locked region
Thread 0 - starting locked region
Thread 0 - ending locked region
Thread 0 - starting locked region
Thread 0 - ending locked region
Thread 1 - starting locked region
Thread 1 - ending locked region
Thread 1 - starting locked region
Thread 1 - ending locked region
Thread 1 - starting locked region
Thread 1 - ending locked region
Thread 1 - starting locked region
Thread 1 - ending locked region
Thread 1 - starting locked region
Thread 1 - ending locked region
Thread 2 - starting locked region
Thread 2 - ending locked region
Thread 2 - starting locked region
Thread 2 - ending locked region
Thread 2 - starting locked region
Thread 2 - ending locked region
Thread 2 - starting locked region
Thread 2 - ending locked region
Thread 2 - starting locked region
Thread 2 - ending locked region
Thread 3 - starting locked region
Thread 3 - ending locked region
Thread 3 - starting locked region
Thread 3 - ending locked region
Thread 3 - starting locked region
Thread 3 - ending locked region
Thread 3 - starting locked region
Thread 3 - ending locked region
Thread 3 - starting locked region
Thread 3 - ending locked region
```

## <a name="omp-init-nest-lock"></a>omp_init_nest_lock

Inizializza un blocco.

```
void omp_init_nest_lock(
   omp_nest_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_nest_lock_t](openmp-data-types.md#omp-nest-lock-t).

### <a name="remarks"></a>Note

Il conteggio di annidamento iniziale è zero.

Per altre informazioni, vedere [3.2.1 funzioni omp_init_lock e omp_init_nest_lock funzioni](../../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md).

### <a name="example"></a>Esempio

```
// omp_init_nest_lock.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

omp_nest_lock_t my_lock;

void Test() {
   int tid = omp_get_thread_num( );
   omp_set_nest_lock(&my_lock);
   printf_s("Thread %d - starting nested locked region\n", tid);
   printf_s("Thread %d - ending nested locked region\n", tid);
   omp_unset_nest_lock(&my_lock);
}

int main() {
   omp_init_nest_lock(&my_lock);

   #pragma omp parallel num_threads(4)
   {
      int i, j;

      for (i = 0; i < 5; ++i) {
         omp_set_nest_lock(&my_lock);
            if (i % 3)
               Test();
            omp_unset_nest_lock(&my_lock);
        }
    }

    omp_destroy_nest_lock(&my_lock);
}
```

```Output
Thread 0 - starting nested locked region
Thread 0 - ending nested locked region
Thread 0 - starting nested locked region
Thread 0 - ending nested locked region
Thread 3 - starting nested locked region
Thread 3 - ending nested locked region
Thread 3 - starting nested locked region
Thread 3 - ending nested locked region
Thread 3 - starting nested locked region
Thread 3 - ending nested locked region
Thread 2 - starting nested locked region
Thread 2 - ending nested locked region
Thread 2 - starting nested locked region
Thread 2 - ending nested locked region
Thread 2 - starting nested locked region
Thread 2 - ending nested locked region
Thread 1 - starting nested locked region
Thread 1 - ending nested locked region
Thread 1 - starting nested locked region
Thread 1 - ending nested locked region
Thread 1 - starting nested locked region
Thread 1 - ending nested locked region
Thread 0 - starting nested locked region
Thread 0 - ending nested locked region
```

## <a name="omp-set-dynamic"></a>omp_set_dynamic

Indica che il numero di thread disponibili nella prossime aree parallele possa essere adattato per la fase di esecuzione.

```
void omp_set_dynamic(
   int val
);
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Un valore che indica se il numero di thread disponibili nella prossime aree parallele possa essere adattato dal runtime.  Se diverso da zero, che il runtime può modificare il numero di thread, se è zero, il runtime non regola dinamicamente il numero di thread.

### <a name="remarks"></a>Note

Il numero di thread non supererà mai il valore impostato da [omp_set_num_threads](#omp-set-num-threads) o tramite [OMP_NUM_THREADS](openmp-environment-variables.md#omp-num-threads).

Uso [omp_get_dynamic](#omp-get-dynamic) per visualizzare l'impostazione corrente di `omp_set_dynamic`.

L'impostazione `omp_set_dynamic` sostituirà l'impostazione delle [OMP_DYNAMIC](openmp-environment-variables.md#omp-dynamic) variabile di ambiente.

Per altre informazioni, vedere [3.1.7 funzione omp_set_dynamic](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).

### <a name="example"></a>Esempio

```
// omp_set_dynamic.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main()
{
    omp_set_dynamic(9);
    omp_set_num_threads(4);
    printf_s("%d\n", omp_get_dynamic( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_dynamic( ));
        }
}
```

```Output
1
1
```

## <a name="omp-set-lock"></a>omp_set_lock

Blocchi di esecuzione del thread fino a quando non è disponibile un blocco.

```
void omp_set_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_lock_t](openmp-data-types.md#omp-lock-t) che è stata inizializzata [funzioni omp_init_lock](#omp-init-lock).

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.2.3 funzioni omp_set_lock e omp_set_nest_lock](../../../parallel/openmp/3-2-3-omp-set-lock-and-omp-set-nest-lock-functions.md).

### <a name="examples"></a>Esempi

Visualizzare [funzioni omp_init_lock](#omp-init-lock) per un esempio d'uso `omp_set_lock`.

## <a name="omp-set-nest-lock"></a>omp_set_nest_lock

Blocchi di esecuzione del thread fino a quando non è disponibile un blocco.

```
void omp_set_nest_lock(
   omp_nest_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_nest_lock_t](openmp-data-types.md#omp-nest-lock-t) che è stata inizializzata [omp_init_nest_lock](#omp-init-nest-lock).

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.2.3 funzioni omp_set_lock e omp_set_nest_lock](../../../parallel/openmp/3-2-3-omp-set-lock-and-omp-set-nest-lock-functions.md).

### <a name="examples"></a>Esempi

Visualizzare [omp_init_nest_lock](#omp-init-nest-lock) per un esempio d'uso `omp_set_nest_lock`.

## <a name="omp-set-nested"></a>omp_set_nested

Abilitato il parallelismo annidato.

```
void omp_set_nested(
   int val
);
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Un valore diverso da zero consente il parallelismo annidato, mentre zero disabilita il parallelismo annidato.

### <a name="remarks"></a>Note

OMP annidati parallelismo può essere attivato con `omp_set_nested`, oppure impostando il [OMP_NESTED](openmp-environment-variables.md#omp-nested) variabile di ambiente.

L'impostazione `omp_set_nested` sostituirà l'impostazione del `OMP_NESTED` variabile di ambiente.

Abilitazione della variabile di ambiente, è possibile interrompere un programma in caso contrario, operational, perché il numero di thread aumenta in misura esponenziale durante la nidificazione di aree parallele.  Ad esempio, una funzione che effettui sei volte con il numero di thread OMP impostato su 4 la richiede 4.096 (4 alla potenza di 6) i thread. Ad eccezione di applicazioni/O associate ai, peggioramento delle prestazioni di un'applicazione in genere se sono presenti altri thread rispetto ai processori.

Uso [omp_get_nested](#omp-get-nested) per visualizzare l'impostazione corrente di `omp_set_nested`.

Per altre informazioni, vedere [3.1.9 funzione omp_set_nested](../../../parallel/openmp/3-1-9-omp-set-nested-function.md).

### <a name="example"></a>Esempio

```
// omp_set_nested.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    omp_set_nested(1);
    omp_set_num_threads(4);
    printf_s("%d\n", omp_get_nested( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_nested( ));
        }
}
```

```Output
1
1
```

## <a name="omp-set-num-threads"></a>omp_set_num_threads

Imposta il numero di thread in aree parallele imminenti, a meno che non viene sottoposto a override da una [num_threads](openmp-clauses.md#num-threads) clausola.

```
void omp_set_num_threads(
   int num_threads
);
```

### <a name="parameters"></a>Parametri

*num_threads*<br/>
Il numero di thread in tale area.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.1.1 funzione omp_set_num_threads](../../../parallel/openmp/3-1-1-omp-set-num-threads-function.md).

### <a name="example"></a>Esempio

Visualizzare [omp_get_num_threads](#omp-get-num-threads) per un esempio d'uso `omp_set_num_threads`.

## <a name="omp-test-lock"></a>funzioni omp_test_lock

Tenta di impostare un blocco, ma non blocca l'esecuzione del thread.

```
int omp_test_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_lock_t](openmp-data-types.md#omp-lock-t) che è stata inizializzata [funzioni omp_init_lock](#omp-init-lock).

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.2.5 funzioni omp_test_lock e omp_test_nest_lock funzioni](../../../parallel/openmp/3-2-5-omp-test-lock-and-omp-test-nest-lock-functions.md).

### <a name="example"></a>Esempio

```
// omp_test_lock.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

omp_lock_t simple_lock;

int main() {
    omp_init_lock(&simple_lock);

    #pragma omp parallel num_threads(4)
    {
        int tid = omp_get_thread_num();

        while (!omp_test_lock(&simple_lock))
            printf_s("Thread %d - failed to acquire simple_lock\n",
                     tid);

        printf_s("Thread %d - acquired simple_lock\n", tid);

        printf_s("Thread %d - released simple_lock\n", tid);
        omp_unset_lock(&simple_lock);
    }

    omp_destroy_lock(&simple_lock);
}
```

```Output
Thread 1 - acquired simple_lock
Thread 1 - released simple_lock
Thread 0 - failed to acquire simple_lock
Thread 3 - failed to acquire simple_lock
Thread 0 - failed to acquire simple_lock
Thread 3 - failed to acquire simple_lock
Thread 2 - acquired simple_lock
Thread 0 - failed to acquire simple_lock
Thread 3 - failed to acquire simple_lock
Thread 0 - failed to acquire simple_lock
Thread 3 - failed to acquire simple_lock
Thread 2 - released simple_lock
Thread 0 - failed to acquire simple_lock
Thread 3 - failed to acquire simple_lock
Thread 0 - acquired simple_lock
Thread 3 - failed to acquire simple_lock
Thread 0 - released simple_lock
Thread 3 - failed to acquire simple_lock
Thread 3 - acquired simple_lock
Thread 3 - released simple_lock
```

## <a name="omp-test-nest-lock"></a>omp_test_nest_lock

Tenta di impostare un blocco annidabile ma non blocca l'esecuzione del thread.

```
int omp_test_nest_lock(
   omp_nest_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_nest_lock_t](openmp-data-types.md#omp-nest-lock-t) che è stata inizializzata [omp_init_nest_lock](#omp-init-nest-lock).

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.2.5 funzioni omp_test_lock e omp_test_nest_lock funzioni](../../../parallel/openmp/3-2-5-omp-test-lock-and-omp-test-nest-lock-functions.md).

### <a name="example"></a>Esempio

```
// omp_test_nest_lock.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

omp_nest_lock_t nestable_lock;

int main() {
   omp_init_nest_lock(&nestable_lock);

   #pragma omp parallel num_threads(4)
   {
      int tid = omp_get_thread_num();
      while (!omp_test_nest_lock(&nestable_lock))
         printf_s("Thread %d - failed to acquire nestable_lock\n",
                tid);

      printf_s("Thread %d - acquired nestable_lock\n", tid);

      if (omp_test_nest_lock(&nestable_lock)) {
         printf_s("Thread %d - acquired nestable_lock again\n",
                tid);
         printf_s("Thread %d - released nestable_lock\n",
                tid);
         omp_unset_nest_lock(&nestable_lock);
      }

      printf_s("Thread %d - released nestable_lock\n", tid);
      omp_unset_nest_lock(&nestable_lock);
   }

   omp_destroy_nest_lock(&nestable_lock);
}
```

```Output
Thread 1 - acquired nestable_lock
Thread 0 - failed to acquire nestable_lock
Thread 1 - acquired nestable_lock again
Thread 0 - failed to acquire nestable_lock
Thread 1 - released nestable_lock
Thread 0 - failed to acquire nestable_lock
Thread 1 - released nestable_lock
Thread 0 - failed to acquire nestable_lock
Thread 3 - acquired nestable_lock
Thread 0 - failed to acquire nestable_lock
Thread 3 - acquired nestable_lock again
Thread 0 - failed to acquire nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 3 - released nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 3 - released nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 0 - acquired nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 0 - acquired nestable_lock again
Thread 2 - failed to acquire nestable_lock
Thread 0 - released nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 0 - released nestable_lock
Thread 2 - failed to acquire nestable_lock
Thread 2 - acquired nestable_lock
Thread 2 - acquired nestable_lock again
Thread 2 - released nestable_lock
Thread 2 - released nestable_lock
```

## <a name="omp-unset-lock"></a>funzioni omp_unset_lock

Rilascia un blocco.

```
void omp_unset_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_lock_t](openmp-data-types.md#omp-lock-t) che è stata inizializzata [funzioni omp_init_lock](#omp-init-lock), proprietà del thread e in esecuzione nella funzione.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.2.4 funzioni omp_unset_lock e omp_unset_nest_lock funzioni](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).

### <a name="example"></a>Esempio

Visualizzare [funzioni omp_init_lock](#omp-init-lock) per un esempio d'uso `omp_unset_lock`.

## <a name="omp-unset-nest-lock"></a>omp_unset_nest_lock

Rilascia un blocco annidabile.

```
void omp_unset_nest_lock(
   omp_nest_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_nest_lock_t](openmp-data-types.md#omp-nest-lock-t) che è stata inizializzata [omp_init_nest_lock](#omp-init-nest-lock), proprietà del thread e in esecuzione nella funzione.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [3.2.4 funzioni omp_unset_lock e omp_unset_nest_lock funzioni](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).

### <a name="example"></a>Esempio

Visualizzare [omp_init_nest_lock](#omp-init-nest-lock) per un esempio d'uso `omp_unset_nest_lock`.
