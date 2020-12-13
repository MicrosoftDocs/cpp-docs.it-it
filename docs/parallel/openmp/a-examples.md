---
description: 'Altre informazioni su: A. esempi'
title: R. Esempi
ms.date: 01/18/2019
ms.assetid: c0f6192f-a205-449b-b84c-cb30dbcc8b8f
ms.openlocfilehash: d52b59f9f83cf791c03fb49ca726273a2c977e58
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342543"
---
# <a name="a-examples"></a>R. Esempio

Di seguito sono riportati alcuni esempi dei costrutti definiti in questo documento. Un'istruzione che segue una direttiva è composta solo quando è necessario e un'istruzione non composta viene rientrata da una direttiva che la precede.

## <a name="a1-a-simple-loop-in-parallel"></a>A. 1 un ciclo semplice in parallelo

Nell'esempio seguente viene illustrato come parallelizzare un ciclo utilizzando la direttiva [parallel for](2-directives.md#251-parallel-for-construct) . Per impostazione predefinita, la variabile di iterazione del ciclo è privata, pertanto non è necessario specificarla in modo esplicito in una clausola privata.

```cpp
#pragma omp parallel for
    for (i=1; i<n; i++)
        b[i] = (a[i] + a[i-1]) / 2.0;
```

## <a name="a2-conditional-compilation"></a>A. 2 compilazione condizionale

Negli esempi seguenti viene illustrato l'utilizzo della compilazione condizionale utilizzando la macro OpenMP [_OPENMP](2-directives.md#22-conditional-compilation). Con la compilazione OpenMP, la `_OPENMP` macro viene definita.

```cpp
# ifdef _OPENMP
    printf_s("Compiled by an OpenMP-compliant implementation.\n");
# endif
```

L'operatore del preprocessore definito consente di testare più di una macro in un'unica direttiva.

```cpp
# if defined(_OPENMP) && defined(VERBOSE)
    printf_s("Compiled by an OpenMP-compliant implementation.\n");
# endif
```

## <a name="a3-parallel-regions"></a>A. 3 aree parallele

La direttiva [Parallel](2-directives.md#23-parallel-construct) può essere utilizzata in programmi paralleli a granularità grossolana. Nell'esempio seguente ogni thread nell'area parallela decide quale parte della matrice globale `x` usare, in base al numero di thread:

```cpp
#pragma omp parallel shared(x, npoints) private(iam, np, ipoints)
{
    iam = omp_get_thread_num();
    np =  omp_get_num_threads();
    ipoints = npoints / np;
    subdomain(x, iam, ipoints);
}
```

## <a name="a4-the-nowait-clause"></a>A. 4 la clausola NOWAIT

Se sono presenti molti cicli indipendenti in un'area parallela, è possibile usare la clausola [nowait](2-directives.md#241-for-construct) per evitare la barriera implicita alla fine della `for` direttiva, come indicato di seguito:

```cpp
#pragma omp parallel
{
    #pragma omp for nowait
        for (i=1; i<n; i++)
             b[i] = (a[i] + a[i-1]) / 2.0;
    #pragma omp for nowait
        for (i=0; i<m; i++)
            y[i] = sqrt(z[i]);
}
```

## <a name="a5-the-critical-directive"></a>A. 5 direttiva critical

Nell'esempio seguente sono incluse diverse direttive [critiche](2-directives.md#262-critical-construct) . Nell'esempio viene illustrato un modello di Accodamento in cui un'attività viene rimessa in coda e lavorata. Per proteggersi da molti thread che deaccodano la stessa attività, l'operazione di annullamento della coda deve trovarsi in una `critical` sezione. Poiché le due code in questo esempio sono indipendenti, sono protette da `critical` direttive con nomi diversi, *xaxis* e *asseY*.

```cpp
#pragma omp parallel shared(x, y) private(x_next, y_next)
{
    #pragma omp critical ( xaxis )
        x_next = dequeue(x);
    work(x_next);
    #pragma omp critical ( yaxis )
        y_next = dequeue(y);
    work(y_next);
}
```

## <a name="a6-the-lastprivate-clause"></a>A. 6 la clausola lastprivate

L'esecuzione corretta a volte dipende dal valore che l'ultima iterazione di un ciclo assegna a una variabile. Tali programmi devono elencare tutte le variabili come argomenti di una clausola [lastprivate](2-directives.md#2723-lastprivate) , in modo che i valori delle variabili siano uguali a quelli del ciclo eseguito in sequenza.

```cpp
#pragma omp parallel
{
   #pragma omp for lastprivate(i)
      for (i=0; i<n-1; i++)
         a[i] = b[i] + b[i+1];
}
a[i]=b[i];
```

Nell'esempio precedente, il valore di `i` alla fine dell'area parallela è uguale `n-1` , come nel caso sequenziale.

## <a name="a7-the-reduction-clause"></a>A. 7 clausola reduction

Nell'esempio seguente viene illustrata la clausola [Reduction](2-directives.md#2726-reduction) :

```cpp
#pragma omp parallel for private(i) shared(x, y, n) \
                         reduction(+: a, b)
    for (i=0; i<n; i++) {
        a = a + x[i];
        b = b + y[i];
    }
```

## <a name="a8-parallel-sections"></a>A. 8 sezioni parallele

Nell'esempio seguente (per la [sezione 2.4.2](2-directives.md#242-sections-construct)), le funzioni *xaxis*, *asseY* e *Zaxis* possono essere eseguite contemporaneamente. La prima `section` direttiva è facoltativa.  Tutte le `section` direttive devono essere visualizzate nell'ambito lessicale del `parallel sections` costrutto.

```cpp
#pragma omp parallel sections
{
    #pragma omp section
        xaxis();
    #pragma omp section
        yaxis();
    #pragma omp section
        zaxis();
}
```

## <a name="a9-single-directives"></a>A. 9 direttive singole

Nell'esempio seguente viene illustrata la direttiva [singola](2-directives.md#243-single-construct) . Nell'esempio, un solo thread, in genere il primo thread che rileva la direttiva, `single` stampa il messaggio di stato. L'utente non deve creare presupposti per il thread che eseguirà la `single` sezione. Tutti gli altri thread ignoreranno la `single` sezione e si arresteranno in corrispondenza della barriera alla fine del `single` costrutto. Se gli altri thread possono continuare senza attendere il thread che esegue la `single` sezione, `nowait` è possibile specificare una clausola sulla `single` direttiva.

```cpp
#pragma omp parallel
{
    #pragma omp single
        printf_s("Beginning work1.\n");
    work1();
    #pragma omp single
        printf_s("Finishing work1.\n");
    #pragma omp single nowait
        printf_s("Finished work1 and beginning work2.\n");
    work2();
}
```

## <a name="a10-sequential-ordering"></a>A. 10 ordinamento sequenziale

Le [sezioni ordinate](2-directives.md#266-ordered-construct) sono utili per ordinare in sequenza l'output del lavoro eseguito in parallelo. Il programma seguente stampa gli indici in ordine sequenziale:

```cpp
#pragma omp for ordered schedule(dynamic)
    for (i=lb; i<ub; i+=st)
        work(i);
void work(int k)
{
    #pragma omp ordered
        printf_s(" %d", k);
}
```

## <a name="a11-a-fixed-number-of-threads"></a>A. 11 numero fisso di thread

Alcuni programmi si basano su un numero fisso e prespecificato di thread per l'esecuzione corretta.  Poiché l'impostazione predefinita per la regolazione dinamica del numero di thread è definita dall'implementazione, tali programmi possono scegliere di disattivare la funzionalità dei thread dinamici e di impostare il numero di thread in modo esplicito per mantenete la portabilità. Nell'esempio seguente viene illustrato come eseguire questa operazione utilizzando [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function)e [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function):

```cpp
omp_set_dynamic(0);
omp_set_num_threads(16);
#pragma omp parallel shared(x, npoints) private(iam, ipoints)
{
    if (omp_get_num_threads() != 16)
      abort();
    iam = omp_get_thread_num();
    ipoints = npoints/16;
    do_by_16(x, iam, ipoints);
}
```

In questo esempio, il programma viene eseguito correttamente solo se viene eseguito da 16 thread. Se l'implementazione non è in grado di supportare 16 thread, il comportamento di questo esempio è definito dall'implementazione.

Il numero di thread che eseguono un'area parallela rimane costante durante un'area parallela, indipendentemente dall'impostazione dei thread dinamici. Il meccanismo dei thread dinamici determina il numero di thread da usare all'inizio dell'area parallela e lo mantiene costante per la durata dell'area.

## <a name="a12-the-atomic-directive"></a>A. 12 la direttiva Atomic

Nell'esempio seguente viene evitata la race condition (aggiornamenti simultanei di un elemento di *x* per molti thread) tramite la direttiva [Atomic](2-directives.md#264-atomic-construct) :

```cpp
#pragma omp parallel for shared(x, y, index, n)
    for (i=0; i<n; i++)
    {
        #pragma omp atomic
            x[index[i]] += work1(i);
        y[i] += work2(i);
    }
```

Il vantaggio dell'utilizzo della `atomic` direttiva in questo esempio è che consente l'esecuzione in parallelo degli aggiornamenti di due diversi elementi di x. Se invece viene utilizzata una direttiva [critica](2-directives.md#262-critical-construct) , tutti gli aggiornamenti agli elementi di *x* vengono eseguiti in modo seriale (anche se non in un ordine garantito).

La `atomic` direttiva si applica solo all'istruzione C o C++ che la segue immediatamente.  Di conseguenza, gli elementi di *y* non vengono aggiornati in modo atomico in questo esempio.

## <a name="a13-a-flush-directive-with-a-list"></a>A. 13 una direttiva flush con un elenco

Nell'esempio seguente viene usata la `flush` direttiva per la sincronizzazione da punto a punto di oggetti specifici tra coppie di thread:

```cpp
int   sync[NUMBER_OF_THREADS];
float work[NUMBER_OF_THREADS];
#pragma omp parallel private(iam,neighbor) shared(work,sync)
{
    iam = omp_get_thread_num();
    sync[iam] = 0;
    #pragma omp barrier

    // Do computation into my portion of work array
    work[iam] = ...;

    //  Announce that I am done with my work
    // The first flush ensures that my work is
    // made visible before sync.
    // The second flush ensures that sync is made visible.
    #pragma omp flush(work)
    sync[iam] = 1;
    #pragma omp flush(sync)

    // Wait for neighbor
    neighbor = (iam>0 ? iam : omp_get_num_threads()) - 1;
    while (sync[neighbor]==0)
    {
        #pragma omp flush(sync)
    }

    // Read neighbor's values of work array
    ... = work[neighbor];
}
```

## <a name="a14-a-flush-directive-without-a-list"></a>A. 14 una direttiva di scaricamento senza elenco

L'esempio seguente (per la [sezione 2.6.5](2-directives.md#265-flush-directive)) distingue gli oggetti condivisi interessati da una `flush` direttiva senza elenco dagli oggetti condivisi che non sono interessati:

```cpp
// omp_flush_without_list.c
#include <omp.h>

int x, *p = &x;

void f1(int *q)
{
    *q = 1;
    #pragma omp flush
    // x, p, and *q are flushed
    //   because they are shared and accessible
    // q is not flushed because it is not shared.
}

void f2(int *q)
{
    #pragma omp barrier
    *q = 2;

    #pragma omp barrier
    // a barrier implies a flush
    // x, p, and *q are flushed
    //   because they are shared and accessible
    // q is not flushed because it is not shared.
}

int g(int n)
{
    int i = 1, j, sum = 0;
    *p = 1;

    #pragma omp parallel reduction(+: sum) num_threads(10)
    {
        f1(&j);
        // i, n and sum were not flushed
        //   because they were not accessible in f1
        // j was flushed because it was accessible
        sum += j;
        f2(&j);
        // i, n, and sum were not flushed
        //   because they were not accessible in f2
        // j was flushed because it was accessible
        sum += i + j + *p + n;
    }
    return sum;
}

int main()
{
}
```

## <a name="a15-the-number-of-threads-used"></a>A. 15 numero di thread utilizzati

Si consideri l'esempio errato seguente (per la [sezione 3.1.2](3-run-time-library-functions.md#312-omp_get_num_threads-function)):

```cpp
np = omp_get_num_threads(); // misplaced
#pragma omp parallel for schedule(static)
    for (i=0; i<np; i++)
        work(i);
```

La `omp_get_num_threads()` chiamata restituisce 1 nella sezione seriale del codice, quindi *NP* sarà sempre uguale a 1 nell'esempio precedente. Per determinare il numero di thread che verranno distribuiti per l'area parallela, la chiamata deve trovarsi all'interno dell'area parallela.

Nell'esempio seguente viene illustrato come riscrivere il programma senza includere una query per il numero di thread:

```cpp
#pragma omp parallel private(i)
{
    i = omp_get_thread_num();
    work(i);
}
```

## <a name="a16-locks"></a>A. 16 blocchi

Nell'esempio seguente (per la [sezione 3,2](3-run-time-library-functions.md#32-lock-functions)), l'argomento per le funzioni di blocco deve avere il tipo `omp_lock_t` e non è necessario scaricarlo.  Le funzioni di blocco comportano l'inattività dei thread in attesa dell'immissione nella prima sezione critica, ma per eseguire altre operazioni in attesa di una voce al secondo.  La `omp_set_lock` funzione si blocca, ma la `omp_test_lock` funzione non consente di eseguire il lavoro `skip()` .

```cpp
// omp_using_locks.c
// compile with: /openmp /c
#include <stdio.h>
#include <omp.h>

void work(int);
void skip(int);

int main() {
   omp_lock_t lck;
   int id;

   omp_init_lock(&lck);
   #pragma omp parallel shared(lck) private(id)
   {
      id = omp_get_thread_num();

      omp_set_lock(&lck);
      printf_s("My thread id is %d.\n", id);

      // only one thread at a time can execute this printf
      omp_unset_lock(&lck);

      while (! omp_test_lock(&lck)) {
         skip(id);   // we do not yet have the lock,
                     // so we must do something else
      }
      work(id);     // we now have the lock
                    // and can do the work
      omp_unset_lock(&lck);
   }
   omp_destroy_lock(&lck);
}
```

## <a name="a17-nestable-locks"></a>A. 17 blocchi annidabili

Nell'esempio seguente (per la [sezione 3,2](3-run-time-library-functions.md#32-lock-functions)) viene illustrato come è possibile utilizzare un blocco annidabile per sincronizzare gli aggiornamenti sia con una struttura intera che con uno dei relativi membri.

```cpp
#include <omp.h>
typedef struct {int a,b; omp_nest_lock_t lck;} pair;

void incr_a(pair *p, int a)
{
    // Called only from incr_pair, no need to lock.
    p->a += a;
}

void incr_b(pair *p, int b)
{
    // Called both from incr_pair and elsewhere,
    // so need a nestable lock.

    omp_set_nest_lock(&p->lck);
    p->b += b;
    omp_unset_nest_lock(&p->lck);
}

void incr_pair(pair *p, int a, int b)
{
    omp_set_nest_lock(&p->lck);
    incr_a(p, a);
    incr_b(p, b);
    omp_unset_nest_lock(&p->lck);
}

void f(pair *p)
{
    extern int work1(), work2(), work3();
    #pragma omp parallel sections
    {
        #pragma omp section
            incr_pair(p, work1(), work2());
        #pragma omp section
            incr_b(p, work3());
    }
}
```

## <a name="a18-nested-for-directives"></a>A. 18 direttive for annidate

L'esempio seguente di `for` [annidamento delle direttive](2-directives.md#29-directive-nesting) è conforme perché le direttive Inner ed outer sono `for` associate a aree parallele diverse:

```cpp
#pragma omp parallel default(shared)
{
    #pragma omp for
        for (i=0; i<n; i++)
        {
            #pragma omp parallel shared(i, n)
            {
                #pragma omp for
                    for (j=0; j<n; j++)
                        work(i, j);
            }
        }
}
```

È inoltre conforme la variante seguente dell'esempio precedente:

```cpp
#pragma omp parallel default(shared)
{
    #pragma omp for
        for (i=0; i<n; i++)
            work1(i, n);
}

void work1(int i, int n)
{
    int j;
    #pragma omp parallel default(shared)
    {
        #pragma omp for
            for (j=0; j<n; j++)
                work2(i, j);
    }
    return;
}
```

## <a name="a19-examples-showing-incorrect-nesting-of-work-sharing-directives"></a>A. 19 esempi che illustrano l'annidamento non corretto di direttive per la condivisione del lavoro

Negli esempi di questa sezione vengono illustrate le regole di [annidamento delle direttive](2-directives.md#29-directive-nesting) .

L'esempio seguente non è conforme perché le direttive Inner ed Outer `for` sono annidate e vengono associate alla stessa `parallel` direttiva:

```cpp
void wrong1(int n)
{
  #pragma omp parallel default(shared)
  {
      int i, j;
      #pragma omp for
      for (i=0; i<n; i++) {
          #pragma omp for
              for (j=0; j<n; j++)
                 work(i, j);
     }
   }
}
```

Anche la seguente versione dinamicamente nidificata dell'esempio precedente è non conforme:

```cpp
void wrong2(int n)
{
  #pragma omp parallel default(shared)
  {
    int i;
    #pragma omp for
      for (i=0; i<n; i++)
        work1(i, n);
  }
}

void work1(int i, int n)
{
  int j;
  #pragma omp for
    for (j=0; j<n; j++)
      work2(i, j);
}
```

L'esempio seguente non è conforme perché le `for` `single` direttive e sono annidate e vengono associate alla stessa area parallela:

```cpp
void wrong3(int n)
{
  #pragma omp parallel default(shared)
  {
    int i;
    #pragma omp for
      for (i=0; i<n; i++) {
        #pragma omp single
          work(i);
      }
  }
}
```

L'esempio seguente non è conforme perché una `barrier` direttiva all'interno di `for` può causare un deadlock:

```cpp
void wrong4(int n)
{
  #pragma omp parallel default(shared)
  {
    int i;
    #pragma omp for
      for (i=0; i<n; i++) {
        work1(i);
        #pragma omp barrier
        work2(i);
      }
  }
}
```

L'esempio seguente non è conforme perché il `barrier` risultato è un deadlock a causa del fatto che un solo thread alla volta può entrare nella sezione critica:

```cpp
void wrong5()
{
  #pragma omp parallel
  {
    #pragma omp critical
    {
       work1();
       #pragma omp barrier
       work2();
    }
  }
}
```

L'esempio seguente non è conforme perché il `barrier` risultato è un deadlock a causa del fatto che un solo thread esegue la `single` sezione:

```cpp
void wrong6()
{
  #pragma omp parallel
  {
    setup();
    #pragma omp single
    {
      work1();
      #pragma omp barrier
      work2();
    }
    finish();
  }
}
```

## <a name="a20-bind-barrier-directives"></a>A. 20 direttive per la barriera di associazione

Le regole di associazione della direttiva chiamano una `barrier` direttiva per l'associazione alla direttiva di inclusione più vicina `parallel` . Per ulteriori informazioni sull'associazione di direttive, vedere la [sezione 2,8](2-directives.md#28-directive-binding).

Nell'esempio seguente la chiamata da *Main* a *sub2* è conforme perché `barrier` (in *SUB3*) viene associata all'area parallela in *sub2*. La chiamata da *Main* a *Sub1* è conforme perché viene `barrier` associata all'area parallela in *sub2* subroutine.  La chiamata da *Main* a *SUB3* è conforme perché `barrier` non è associata ad alcuna area parallela e viene ignorata. Inoltre, `barrier` Sincronizza solo il team dei thread nell'area parallela di inclusione e non tutti i thread creati in *Sub1*.

```cpp
int main()
{
    sub1(2);
    sub2(2);
    sub3(2);
}

void sub1(int n)
{
    int i;
    #pragma omp parallel private(i) shared(n)
    {
        #pragma omp for
        for (i=0; i<n; i++)
            sub2(i);
    }
}

void sub2(int k)
{
     #pragma omp parallel shared(k)
     sub3(k);
}

void sub3(int n)
{
    work(n);
    #pragma omp barrier
    work(n);
}
```

## <a name="a21-scope-variables-with-the-private-clause"></a>A. 21 variabili di ambito con la clausola private

I valori di `i` e `j` nell'esempio seguente non sono definiti all'uscita dall'area parallela:

```cpp
int i, j;
i = 1;
j = 2;
#pragma omp parallel private(i) firstprivate(j)
{
  i = 3;
  j = j + 2;
}
printf_s("%d %d\n", i, j);
```

Per ulteriori informazioni sulla `private` clausola, vedere la [sezione 2.7.2.1](2-directives.md#2721-private).

## <a name="a22-the-defaultnone-clause"></a>A. 22 la clausola default (None)

Nell'esempio seguente vengono distinte le variabili interessate dalla `default(none)` clausola dalle variabili che non sono:

```cpp
// openmp_using_clausedefault.c
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int x, y, z[1000];
#pragma omp threadprivate(x)

void fun(int a) {
   const int c = 1;
   int i = 0;

   #pragma omp parallel default(none) private(a) shared(z)
   {
      int j = omp_get_num_thread();
             //O.K.  - j is declared within parallel region
      a = z[j];       // O.K.  - a is listed in private clause
                      //      - z is listed in shared clause
      x = c;          // O.K.  - x is threadprivate
                      //      - c has const-qualified type
      z[i] = y;       // C3052 error - cannot reference i or y here

      #pragma omp for firstprivate(y)
         for (i=0; i<10 ; i++) {
            z[i] = y;  // O.K. - i is the loop control variable
                       // - y is listed in firstprivate clause
          }
       z[i] = y;   // Error - cannot reference i or y here
   }
}
```

Per ulteriori informazioni sulla `default` clausola, vedere la [sezione 2.7.2.5](2-directives.md#2725-default).

## <a name="a23-examples-of-the-ordered-directive"></a>A. 23 esempi della direttiva ordered

È possibile disporre di molte sezioni ordinate con un `for` oggetto specificato con la `ordered` clausola. Il primo esempio è non conforme perché l'API specifica la regola seguente:

"Un'iterazione di un ciclo con un `for` costrutto non deve eseguire più di una volta la stessa `ordered` direttiva e non deve eseguire più di una `ordered` direttiva". Vedere la [sezione 2.6.6](2-directives.md#266-ordered-construct).

In questo esempio non conforme, tutte le iterazioni eseguono due sezioni ordinate:

```cpp
#pragma omp for ordered
for (i=0; i<n; i++)
{
    ...
    #pragma omp ordered
    { ... }
    ...
    #pragma omp ordered
    { ... }
    ...
}
```

Il seguente esempio conforme Mostra un oggetto `for` con più di una sezione ordinata:

```cpp
#pragma omp for ordered
for (i=0; i<n; i++)
{
    ...
    if (i <= 10)
    {
        ...
        #pragma omp ordered
        { ... }
    }
    ...
    (i > 10)
    {
        ...
        #pragma omp ordered
        { ... }
    }
    ...
}
```

## <a name="a24-example-of-the-private-clause"></a>A. 24 esempio della clausola private

La clausola [private](2-directives.md#2721-private) di un'area parallela è valida solo per l'extent lessicale dell'area, non per l'extent dinamico dell'area.  Nell'esempio seguente, quindi, qualsiasi uso della variabile *a* all'interno del ciclo della `for` routine *f* fa riferimento a una copia privata di *un oggetto*, mentre un utilizzo nella routine *g* si riferisce a Global *a*.

```cpp
int a;

void f(int n)
{
    a = 0;

    #pragma omp parallel for private(a)
    for (int i=1; i<n; i++)
    {
        a = i;
        g(i, n);
        d(a);     // Private copy of "a"
        ...
    }
    ...

void g(int k, int n)
{
    h(k,a); // The global "a", not the private "a" in f
}
```

## <a name="a25-examples-of-the-copyprivate-data-attribute-clause"></a>A. 25 esempi della clausola copyprivate Data Attribute

**Esempio 1:** La clausola [copyprivate](2-directives.md#2728-copyprivate) può essere usata per trasmettere i valori acquisiti da un singolo thread direttamente a tutte le istanze delle variabili private negli altri thread.

```cpp
float x, y;
#pragma omp threadprivate(x, y)

void init( )
{
    float a;
    float b;

    #pragma omp single copyprivate(a,b,x,y)
    {
        get_values(a,b,x,y);
    }

    use_values(a, b, x, y);
}
```

Se la routine *init* viene chiamata da un'area seriale, il comportamento non è influenzato dalla presenza delle direttive. Dopo che la chiamata al *get_Values* routine è stata eseguita da un thread, nessun thread lascia il costrutto finché gli oggetti privati designati da *a*, *b*, *x* e *y* in tutti i thread non vengono definiti con i valori letti.

**Esempio 2:** Diversamente dall'esempio precedente, si supponga che la lettura debba essere eseguita da un thread specifico, ad esempio il thread master. In questo caso, la `copyprivate` clausola non può essere utilizzata per eseguire direttamente la trasmissione, ma può essere utilizzata per fornire l'accesso a un oggetto condiviso temporaneo.

```cpp
float read_next( )
{
    float * tmp;
    float return_val;

    #pragma omp single copyprivate(tmp)
    {
        tmp = (float *) malloc(sizeof(float));
    }

    #pragma omp master
    {
        get_float( tmp );
    }

    #pragma omp barrier
    return_val = *tmp;
    #pragma omp barrier

    #pragma omp single
    {
       free(tmp);
    }

    return return_val;
}
```

**Esempio 3:** Si supponga che il numero di oggetti Lock necessari in un'area parallela non possa essere facilmente determinato prima di immetterlo. La `copyprivate` clausola può essere usata per fornire l'accesso agli oggetti di blocco condivisi allocati all'interno dell'area parallela.

```cpp
#include <omp.h>

omp_lock_t *new_lock()
{
    omp_lock_t *lock_ptr;

    #pragma omp single copyprivate(lock_ptr)
    {
        lock_ptr = (omp_lock_t *) malloc(sizeof(omp_lock_t));
        omp_init_lock( lock_ptr );
    }

    return lock_ptr;
}
```

## <a name="a26-the-threadprivate-directive"></a>A. 26 Direttiva threadprivate

Gli esempi seguenti illustrano come usare la direttiva [threadprivate](2-directives.md#271-threadprivate-directive) per assegnare a ogni thread un contatore separato.

### <a name="example-1"></a>Esempio 1

```cpp
int counter = 0;
#pragma omp threadprivate(counter)

int sub()
{
    counter++;
    return(counter);
}
```

### <a name="example-2"></a>Esempio 2

```cpp
int sub()
{
    static int counter = 0;
    #pragma omp threadprivate(counter)
    counter++;
    return(counter);
}
```

## <a name="a27-c99-variable-length-arrays"></a>A. 27 matrici di lunghezza variabile C99

Nell'esempio seguente viene illustrato come usare il metodo VLAs (C99 variable length Array) in una direttiva [firstprivate](2-directives.md#2722-firstprivate) .

> [!NOTE]
> Le matrici a lunghezza variabile non sono attualmente supportate in Visual C++.

```cpp
void f(int m, int C[m][m])
{
    double v1[m];
    ...
    #pragma omp parallel firstprivate(C, v1)
    ...
}
```

## <a name="a28-the-num_threads-clause"></a>A. 28 la clausola num_threads

Nell'esempio seguente viene illustrata la clausola [num_threads](2-directives.md#23-parallel-construct) . L'area parallela viene eseguita con un massimo di 10 thread.

```cpp
#include <omp.h>
main()
{
    omp_set_dynamic(1);
    ...
    #pragma omp parallel num_threads(10)
    {
        ... parallel region ...
    }
}
```

## <a name="a29-work-sharing-constructs-inside-a-critical-construct"></a>A. 29 costrutti di condivisione del lavoro all'interno di un costrutto critico

Nell'esempio seguente viene illustrato l'utilizzo di un costrutto di condivisione del lavoro all'interno di un `critical` costrutto. Questo esempio è conforme perché il costrutto di condivisione del lavoro e il `critical` costrutto non vengono associati alla stessa area parallela.

```cpp
void f()
{
  int i = 1;
  #pragma omp parallel sections
  {
    #pragma omp section
    {
      #pragma omp critical (name)
      {
        #pragma omp parallel
        {
          #pragma omp single
          {
            i++;
          }
        }
      }
    }
  }
}
```

## <a name="a30-reprivatization"></a>A. 30 riprivatizzazione

Nell'esempio seguente viene illustrata la riprivatizzazione delle variabili. Le variabili private possono essere contrassegnate `private` nuovamente in una direttiva nidificata. Non è necessario condividere tali variabili nell'area parallela di inclusione.

```cpp
int i, a;
...
#pragma omp parallel private(a)
{
  ...
  #pragma omp parallel for private(a)
  for (i=0; i<10; i++)
     {
       ...
     }
}
```

## <a name="a31-thread-safe-lock-functions"></a>A. 31 funzioni di blocco thread-safe

Nell'esempio C++ riportato di seguito viene illustrato come inizializzare una matrice di blocchi in un'area parallela utilizzando [omp_init_lock](3-run-time-library-functions.md#321-omp_init_lock-and-omp_init_nest_lock-functions).

```cpp
// A_13_omp_init_lock.cpp
// compile with: /openmp
#include <omp.h>

omp_lock_t *new_locks() {
   int i;
   omp_lock_t *lock = new omp_lock_t[1000];
   #pragma omp parallel for private(i)
   for (i = 0 ; i < 1000 ; i++)
      omp_init_lock(&lock[i]);

   return lock;
}

int main () {}
```
