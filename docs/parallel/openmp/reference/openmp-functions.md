---
description: 'Altre informazioni su: funzioni OpenMP'
title: Funzioni OpenMP
ms.date: 03/20/2019
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
ms.openlocfilehash: 16495be2631a26721d33d5cbbd5f21ea21de7c50
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342374"
---
# <a name="openmp-functions"></a>Funzioni OpenMP

Fornisce collegamenti alle funzioni utilizzate nell'API OpenMP.

L'implementazione Visual C++ dello standard OpenMP include le funzioni e i tipi di dati seguenti.

Per l'esecuzione dell'ambiente:

|Funzione|Descrizione|
|--------|-----------|
|[omp_set_num_threads](#omp-set-num-threads)|Imposta il numero di thread nelle aree parallele future, a meno che non venga sottoposto a override da una clausola [num_threads](openmp-clauses.md#num-threads) .|
|[omp_get_num_threads](#omp-get-num-threads)|Restituisce il numero di thread nell'area parallela.|
|[omp_get_max_threads](#omp-get-max-threads)|Restituisce un intero maggiore o uguale al numero di thread che sarebbero disponibili se un'area parallela senza [num_threads](openmp-clauses.md#num-threads) è stata definita in quel punto del codice.|
|[omp_get_thread_num](#omp-get-thread-num)|Restituisce il numero di thread del thread in esecuzione all'interno del team di thread.|
|[omp_get_num_procs](#omp-get-num-procs)|Restituisce il numero di processori disponibili quando viene chiamata la funzione.|
|[omp_in_parallel](#omp-in-parallel)|Restituisce un valore diverso da zero se chiamato dall'interno di un'area parallela.|
|[omp_set_dynamic](#omp-set-dynamic)|Indica che il numero di thread disponibili nelle aree parallele future può essere regolato in base al tempo di esecuzione.|
|[omp_get_dynamic](#omp-get-dynamic)|Restituisce un valore che indica se il numero di thread disponibili nelle aree parallele future può essere regolato in base al tempo di esecuzione.|
|[omp_set_nested](#omp-set-nested)|Abilita il parallelismo annidato.|
|[omp_get_nested](#omp-get-nested)|Restituisce un valore che indica se il parallelismo annidato è abilitato.|

Per blocco:

|Funzione|Descrizione|
|--------|-----------|
|[omp_init_lock](#omp-init-lock)|Inizializza un blocco semplice.|
|[omp_init_nest_lock](#omp-init-nest-lock)|Inizializza un blocco.|
|[omp_destroy_lock](#omp-destroy-lock)|Inizializza un blocco.|
|[omp_destroy_nest_lock](#omp-destroy-nest-lock)|Uninizializza un blocco annidabile.|
|[omp_set_lock](#omp-set-lock)|Blocca l'esecuzione del thread fino a quando non è disponibile un blocco.|
|[omp_set_nest_lock](#omp-set-nest-lock)|Blocca l'esecuzione del thread fino a quando non è disponibile un blocco.|
|[omp_unset_lock](#omp-unset-lock)|Rilascia un blocco.|
|[omp_unset_nest_lock](#omp-unset-nest-lock)|Rilascia un blocco annidabile.|
|[omp_test_lock](#omp-test-lock)|Tenta di impostare un blocco ma non blocca l'esecuzione del thread.|
|[omp_test_nest_lock](#omp-test-nest-lock)|Tenta di impostare un blocco annidabile ma non blocca l'esecuzione del thread.|

|Tipo di dati|Descrizione|
|---------|-----------|
|`omp_lock_t`|Tipo che contiene lo stato di un blocco, se il blocco è disponibile o se un thread è proprietario di un blocco.|
|`omp_nest_lock_t`|Tipo che contiene una delle informazioni seguenti su un blocco: se il blocco è disponibile e l'identità del thread proprietario del blocco e di un numero di annidamento.|

Per le routine di temporizzazione:

|Funzione|Descrizione|
|--------|-----------|
|[omp_get_wtime](#omp-get-wtime)|Restituisce un valore in secondi del tempo trascorso da un determinato punto.|
|[omp_get_wtick](#omp-get-wtick)|Restituisce il numero di secondi tra i cicli di clock del processore.|

## <a name="omp_destroy_lock"></a><a name="omp-destroy-lock"></a> omp_destroy_lock

Inizializza un blocco.

```cpp
void omp_destroy_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Variabile di tipo `omp_lock_t` inizializzata con [omp_init_lock](#omp-init-lock).

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.2.2 omp_destroy_lock e funzioni di omp_destroy_nest_lock](../3-run-time-library-functions.md#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions).

### <a name="example"></a>Esempio

Vedere [omp_init_lock](#omp-init-lock) per un esempio di utilizzo di `omp_destroy_lock` .

## <a name="omp_destroy_nest_lock"></a><a name="omp-destroy-nest-lock"></a> omp_destroy_nest_lock

Uninizializza un blocco annidabile.

```cpp
void omp_destroy_nest_lock(
   omp_nest_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Variabile di tipo `omp_nest_lock_t` inizializzata con [omp_init_nest_lock](#omp-init-nest-lock).

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.2.2 omp_destroy_lock e funzioni di omp_destroy_nest_lock](../3-run-time-library-functions.md#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions).

### <a name="example"></a>Esempio

Vedere [omp_init_nest_lock](#omp-init-nest-lock) per un esempio di utilizzo di `omp_destroy_nest_lock` .

## <a name="omp_get_dynamic"></a><a name="omp-get-dynamic"></a> omp_get_dynamic

Restituisce un valore che indica se il numero di thread disponibili nelle aree parallele future può essere regolato in base al tempo di esecuzione.

```cpp
int omp_get_dynamic();
```

### <a name="return-value"></a>Valore restituito

Un valore diverso da zero indica che i thread verranno modificati in modo dinamico.

### <a name="remarks"></a>Commenti

La regolazione dinamica dei thread viene specificata con [omp_set_dynamic](#omp-set-dynamic) e [OMP_DYNAMIC](openmp-environment-variables.md#omp-dynamic).

Per ulteriori informazioni, vedere [3.1.7 omp_set_dynamic Function](../3-run-time-library-functions.md#317-omp_set_dynamic-function).

### <a name="example"></a>Esempio

Vedere [omp_set_dynamic](#omp-set-dynamic) per un esempio di utilizzo di `omp_get_dynamic` .

## <a name="omp_get_max_threads"></a><a name="omp-get-max-threads"></a> omp_get_max_threads

Restituisce un intero maggiore o uguale al numero di thread che sarebbero disponibili se un'area parallela senza [num_threads](openmp-clauses.md#num-threads) è stata definita in quel punto del codice.

```cpp
int omp_get_max_threads( )
```

### <a name="remarks"></a>Commenti

Per altre informazioni, vedere [3.1.3 omp_get_max_threads Function](../3-run-time-library-functions.md#313-omp_get_max_threads-function).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_get_nested"></a><a name="omp-get-nested"></a> omp_get_nested

Restituisce un valore che indica se il parallelismo annidato è abilitato.

```cpp
int omp_get_nested( );
```

### <a name="return-value"></a>Valore restituito

Un valore diverso da zero indica che il parallelismo annidato è abilitato.

### <a name="remarks"></a>Commenti

Il parallelismo annidato viene specificato con [omp_set_nested](#omp-set-nested) e [OMP_NESTED](openmp-environment-variables.md#omp-nested).

Per ulteriori informazioni, vedere [3.1.10 omp_get_nested Function](../3-run-time-library-functions.md#3110-omp_get_nested-function).

### <a name="example"></a>Esempio

Vedere [omp_set_nested](#omp-set-nested) per un esempio di utilizzo di `omp_get_nested` .

## <a name="omp_get_num_procs"></a><a name="omp-get-num-procs"></a> omp_get_num_procs

Restituisce il numero di processori disponibili quando viene chiamata la funzione.

```cpp
int omp_get_num_procs();
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.1.5 omp_get_num_procs Function](../3-run-time-library-functions.md#315-omp_get_num_procs-function).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_get_num_threads"></a><a name="omp-get-num-threads"></a> omp_get_num_threads

Restituisce il numero di thread nell'area parallela.

```cpp
int omp_get_num_threads( );
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere la [funzione 3.1.2 omp_get_num_threads](../3-run-time-library-functions.md#312-omp_get_num_threads-function).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_get_thread_num"></a><a name="omp-get-thread-num"></a> omp_get_thread_num

Restituisce il numero di thread del thread in esecuzione all'interno del team di thread.

```cpp
int omp_get_thread_num( );
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.1.4 omp_get_thread_num Function](../3-run-time-library-functions.md#314-omp_get_thread_num-function).

### <a name="example"></a>Esempio

Vedere [Parallel](openmp-directives.md#parallel) per un esempio di utilizzo di `omp_get_thread_num` .

## <a name="omp_get_wtick"></a><a name="omp-get-wtick"></a> omp_get_wtick

Restituisce il numero di secondi tra i cicli di clock del processore.

```cpp
double omp_get_wtick( );
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.3.2 omp_get_wtick funzione](../3-run-time-library-functions.md#332-omp_get_wtick-function).

### <a name="example"></a>Esempio

Vedere [omp_get_wtime](#omp-get-wtime) per un esempio di utilizzo di `omp_get_wtick` .

## <a name="omp_get_wtime"></a><a name="omp-get-wtime"></a> omp_get_wtime

Restituisce un valore in secondi del tempo trascorso da un determinato punto.

```cpp
double omp_get_wtime( );
```

### <a name="return-value"></a>Valore restituito

Restituisce un valore in secondi del tempo trascorso da un punto arbitrario, ma coerente.

### <a name="remarks"></a>Commenti

Questo punto rimarrà coerente durante l'esecuzione del programma, rendendo possibili i confronti imminenti.

Per ulteriori informazioni, vedere la [funzione 3.3.1 omp_get_wtime](../3-run-time-library-functions.md#331-omp_get_wtime-function).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_in_parallel"></a><a name="omp-in-parallel"></a> omp_in_parallel

Restituisce un valore diverso da zero se chiamato dall'interno di un'area parallela.

```cpp
int omp_in_parallel( );
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.1.6 omp_in_parallel Function](../3-run-time-library-functions.md#316-omp_in_parallel-function).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_init_lock"></a><a name="omp-init-lock"></a> omp_init_lock

Inizializza un blocco semplice.

```cpp
void omp_init_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Variabile di tipo `omp_lock_t`.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.2.1 omp_init_lock e funzioni di omp_init_nest_lock](../3-run-time-library-functions.md#321-omp_init_lock-and-omp_init_nest_lock-functions).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_init_nest_lock"></a><a name="omp-init-nest-lock"></a> omp_init_nest_lock

Inizializza un blocco.

```cpp
void omp_init_nest_lock(
   omp_nest_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Variabile di tipo `omp_nest_lock_t`.

### <a name="remarks"></a>Commenti

Il numero di annidamento iniziale è pari a zero.

Per ulteriori informazioni, vedere [3.2.1 omp_init_lock e funzioni di omp_init_nest_lock](../3-run-time-library-functions.md#321-omp_init_lock-and-omp_init_nest_lock-functions).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_set_dynamic"></a><a name="omp-set-dynamic"></a> omp_set_dynamic

Indica che il numero di thread disponibili nelle aree parallele future può essere regolato in base al tempo di esecuzione.

```cpp
void omp_set_dynamic(
   int val
);
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Valore che indica se il numero di thread disponibili nelle aree parallele future può essere regolato dal runtime. Se è diverso da zero, il runtime può regolare il numero di thread, se zero, il runtime non modificherà dinamicamente il numero di thread.

### <a name="remarks"></a>Commenti

Il numero di thread non supererà mai il valore impostato da [omp_set_num_threads](#omp-set-num-threads) o da [OMP_NUM_THREADS](openmp-environment-variables.md#omp-num-threads).

Utilizzare [omp_get_dynamic](#omp-get-dynamic) per visualizzare l'impostazione corrente di `omp_set_dynamic` .

L'impostazione per `omp_set_dynamic` eseguirà l'override dell'impostazione della variabile di ambiente [OMP_DYNAMIC](openmp-environment-variables.md#omp-dynamic) .

Per ulteriori informazioni, vedere [3.1.7 omp_set_dynamic Function](../3-run-time-library-functions.md#317-omp_set_dynamic-function).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_set_lock"></a><a name="omp-set-lock"></a> omp_set_lock

Blocca l'esecuzione del thread fino a quando non è disponibile un blocco.

```cpp
void omp_set_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Variabile di tipo `omp_lock_t` inizializzata con [omp_init_lock](#omp-init-lock).

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.2.3 omp_set_lock e funzioni di omp_set_nest_lock](../3-run-time-library-functions.md#323-omp_set_lock-and-omp_set_nest_lock-functions).

### <a name="examples"></a>Esempio

Vedere [omp_init_lock](#omp-init-lock) per un esempio di utilizzo di `omp_set_lock` .

## <a name="omp_set_nest_lock"></a><a name="omp-set-nest-lock"></a> omp_set_nest_lock

Blocca l'esecuzione del thread fino a quando non è disponibile un blocco.

```cpp
void omp_set_nest_lock(
   omp_nest_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Variabile di tipo `omp_nest_lock_t` inizializzata con [omp_init_nest_lock](#omp-init-nest-lock).

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.2.3 omp_set_lock e funzioni di omp_set_nest_lock](../3-run-time-library-functions.md#323-omp_set_lock-and-omp_set_nest_lock-functions).

### <a name="examples"></a>Esempio

Vedere [omp_init_nest_lock](#omp-init-nest-lock) per un esempio di utilizzo di `omp_set_nest_lock` .

## <a name="omp_set_nested"></a><a name="omp-set-nested"></a> omp_set_nested

Abilita il parallelismo annidato.

```cpp
void omp_set_nested(
   int val
);
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Un valore diverso da zero Abilita il parallelismo annidato, mentre zero disabilita il parallelismo annidato.

### <a name="remarks"></a>Commenti

Il parallelismo annidato OMP può essere attivato con `omp_set_nested` oppure impostando la variabile di ambiente [OMP_NESTED](openmp-environment-variables.md#omp-nested) .

L'impostazione per `omp_set_nested` eseguirà l'override dell'impostazione della `OMP_NESTED` variabile di ambiente.

L'abilitazione della variabile di ambiente può interrompere un programma operativo altrimenti, perché il numero di thread aumenta in modo esponenziale durante la nidificazione di aree parallele. Ad esempio, una funzione che viene ricurse sei volte con il numero di thread OMP impostato su 4 richiede 4.096 (4 alla potenza di 6) thread. Ad eccezione delle applicazioni associate a I/O, le prestazioni di un'applicazione in genere peggiorano se sono presenti più thread rispetto ai processori.

Utilizzare [omp_get_nested](#omp-get-nested) per visualizzare l'impostazione corrente di `omp_set_nested` .

Per ulteriori informazioni, vedere [3.1.9 omp_set_nested Function](../3-run-time-library-functions.md#319-omp_set_nested-function).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_set_num_threads"></a><a name="omp-set-num-threads"></a> omp_set_num_threads

Imposta il numero di thread nelle aree parallele future, a meno che non venga sottoposto a override da una clausola [num_threads](openmp-clauses.md#num-threads) .

```cpp
void omp_set_num_threads(
   int num_threads
);
```

### <a name="parameters"></a>Parametri

*num_threads*<br/>
Numero di thread nell'area parallela.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere la [funzione 3.1.1 omp_set_num_threads](../3-run-time-library-functions.md#311-omp_set_num_threads-function).

### <a name="example"></a>Esempio

Vedere [omp_get_num_threads](#omp-get-num-threads) per un esempio di utilizzo di `omp_set_num_threads` .

## <a name="omp_test_lock"></a><a name="omp-test-lock"></a> omp_test_lock

Tenta di impostare un blocco ma non blocca l'esecuzione del thread.

```cpp
int omp_test_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Variabile di tipo `omp_lock_t` inizializzata con [omp_init_lock](#omp-init-lock).

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.2.5 omp_test_lock e funzioni di omp_test_nest_lock](../3-run-time-library-functions.md#325-omp_test_lock-and-omp_test_nest_lock-functions).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_test_nest_lock"></a><a name="omp-test-nest-lock"></a> omp_test_nest_lock

Tenta di impostare un blocco annidabile ma non blocca l'esecuzione del thread.

```cpp
int omp_test_nest_lock(
   omp_nest_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Variabile di tipo `omp_nest_lock_t` inizializzata con [omp_init_nest_lock](#omp-init-nest-lock).

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.2.5 omp_test_lock e funzioni di omp_test_nest_lock](../3-run-time-library-functions.md#325-omp_test_lock-and-omp_test_nest_lock-functions).

### <a name="example"></a>Esempio

```cpp
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

## <a name="omp_unset_lock"></a><a name="omp-unset-lock"></a> omp_unset_lock

Rilascia un blocco.

```cpp
void omp_unset_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Variabile di tipo `omp_lock_t` inizializzata con [omp_init_lock](#omp-init-lock), di proprietà del thread e di esecuzione nella funzione.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.2.4 omp_unset_lock e funzioni di omp_unset_nest_lock](../3-run-time-library-functions.md#324-omp_unset_lock-and-omp_unset_nest_lock-functions).

### <a name="example"></a>Esempio

Vedere [omp_init_lock](#omp-init-lock) per un esempio di utilizzo di `omp_unset_lock` .

## <a name="omp_unset_nest_lock"></a><a name="omp-unset-nest-lock"></a> omp_unset_nest_lock

Rilascia un blocco annidabile.

```cpp
void omp_unset_nest_lock(
   omp_nest_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Variabile di tipo `omp_nest_lock_t` inizializzata con [omp_init_nest_lock](#omp-init-nest-lock), di proprietà del thread e di esecuzione nella funzione.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [3.2.4 omp_unset_lock e funzioni di omp_unset_nest_lock](../3-run-time-library-functions.md#324-omp_unset_lock-and-omp_unset_nest_lock-functions).

### <a name="example"></a>Esempio

Vedere [omp_init_nest_lock](#omp-init-nest-lock) per un esempio di utilizzo di `omp_unset_nest_lock` .
