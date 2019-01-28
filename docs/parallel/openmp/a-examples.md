---
title: Un  Esempi
ms.date: 01/18/2019
ms.assetid: c0f6192f-a205-449b-b84c-cb30dbcc8b8f
ms.openlocfilehash: 061490d34829175bfbdcd84d6208aa396bb19671
ms.sourcegitcommit: 382e247c0f1b4cb7c2dab837b8b6fdff24bff47a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/28/2019
ms.locfileid: "55087301"
---
# <a name="a-examples"></a>Un  Esempi

Di seguito è riportati esempi dei costrutti definiti in questo documento. Un'istruzione che segue una direttiva è composta solo quando necessario e viene applicato un rientro un'istruzione non composta da una direttiva che la precede.

## <a name="a1-a-simple-loop-in-parallel"></a>A.1 semplici a loop in parallelo

Nell'esempio seguente viene illustrato come parallelizzare un ciclo utilizzando la [parallele per](2-directives.md#251-parallel-for-construct) direttiva. La variabile di iterazione del ciclo è privata per impostazione predefinita, in modo che non è necessario specificarlo in modo esplicito in una clausola private.

```cpp
#pragma omp parallel for
    for (i=1; i<n; i++)
        b[i] = (a[i] + a[i-1]) / 2.0;
```

## <a name="a2-conditional-compilation"></a>Compilazione condizionale A.2

Gli esempi seguenti illustrano l'uso di compilazione condizionale utilizzando la macro OpenMP [OpenMP](2-directives.md#22-conditional-compilation). Compilazione di OpenMP, con la `_OPENMP` macro viene definita.

```cpp
# ifdef _OPENMP
    printf_s("Compiled by an OpenMP-compliant implementation.\n");
# endif
```

L'operatore del preprocessore definita consente più di una macro da sottoporre a test in una singola direttiva.

```cpp
# if defined(_OPENMP) && defined(VERBOSE)
    printf_s("Compiled by an OpenMP-compliant implementation.\n");
# endif
```

## <a name="a3-parallel-regions"></a>A.3 aree parallele

Il [parallele](2-directives.md#23-parallel-construct) direttiva è utilizzabile in programmi paralleli grossolana. Nell'esempio seguente, ogni thread nell'area parallelo decide quale parte della matrice globale `x` a lavorarvi, in base al numero di thread:

```cpp
#pragma omp parallel shared(x, npoints) private(iam, np, ipoints)
{
    iam = omp_get_thread_num();
    np =  omp_get_num_threads();
    ipoints = npoints / np;
    subdomain(x, iam, ipoints);
}
```

## <a name="a4-the-nowait-clause"></a>A.4 della clausola nowait

Se sono presenti numerosi cicli indipendenti in un'area parallela, è possibile usare la [nowait](2-directives.md#241-for-construct) clausola la barriera implicita alla fine di evitare il `for` direttiva, come indicato di seguito:

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

## <a name="a5-the-critical-directive"></a>A.5 della direttiva critical

Nell'esempio seguente include numerose [critici](2-directives.md#262-critical-construct) direttive. Nell'esempio viene illustrato un modello di Accodamento messaggi in cui un'attività viene rimosso dalla coda e lavorando. Per proteggersi da molti thread di rimozione dalla coda la stessa attività, l'operazione di annullamento deve essere un `critical` sezione. Due code in questo esempio sono indipendenti, che sono protette dal `critical` con nomi diversi, direttive *xaxis* e *AsseY*.

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

## <a name="a6-the-lastprivate-clause"></a>A.6 della clausola lastprivate

In alcuni casi l'esecuzione corretta dipende dal valore che assegna l'ultima iterazione di un ciclo a una variabile. Tali programmi necessario elencare tutte le variabili come argomenti per un [lastprivate](2-directives.md#2723-lastprivate) clausola in modo che i valori delle variabili sono quello utilizzato quando il ciclo viene eseguito in modo sequenziale.

```cpp
#pragma omp parallel
{
   #pragma omp for lastprivate(i)
      for (i=0; i<n-1; i++)
         a[i] = b[i] + b[i+1];
}
a[i]=b[i];
```

Nell'esempio precedente, il valore di `i` sarà uguale alla fine dell'area parallela `n-1`, come nel caso sequenza.

## <a name="a7-the-reduction-clause"></a>A.7 clausola reduction

Nell'esempio seguente viene illustrato il [riduzione](2-directives.md#2726-reduction) clausola:

```cpp
#pragma omp parallel for private(i) shared(x, y, n) \
                         reduction(+: a, b)
    for (i=0; i<n; i++) {
        a = a + x[i];
        b = b + y[i];
    }
```

## <a name="a8-parallel-sections"></a>A.8 sezioni parallele

Nell'esempio seguente (per [sezione 2.4.2](2-directives.md#242-sections-construct)), le funzioni *xaxis*, *AsseY*, e *AsseZ* possono essere eseguiti contemporaneamente. Il primo `section` direttiva è facoltativa.  Tutti i `section` direttive devono essere visualizzato nell'ambito lessicale del `parallel sections` costruire.

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

## <a name="a9-single-directives"></a>A.9 delle direttive Single

Nell'esempio seguente viene illustrato il [singolo](2-directives.md#243-single-construct) direttiva. Nell'esempio, un solo thread (in genere il primo thread che rileva il `single` direttiva) viene stampato il messaggio di stato. L'utente deve fare supposizioni a su quale thread eseguirà il `single` sezione. Tutti gli altri thread ignorerà il `single` sezione e terminare con una barriera alla fine del `single` costruire. Se altri thread possa procedere senza attendere che il thread in esecuzione la `single` sezione, una `nowait` clausola può essere specificata nel `single` direttiva.

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

## <a name="a10-sequential-ordering"></a>A.10 dell'ordinamento sequenziale

[Le sezioni ordinate](2-directives.md#266-ordered-construct) sono utili per l'ordinamento in sequenza l'output dal lavoro eseguito in parallelo. Il seguente programma stampa gli indici in ordine sequenziale:

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

## <a name="a11-a-fixed-number-of-threads"></a>A.11 un numero fisso di thread

Alcuni programmi si basano su un numero fisso predefinito di thread da eseguire in modo corretto.  Poiché l'impostazione predefinita per la regolazione dinamica del numero di thread è definito dall'implementazione, tali programmi possono scegliere di disattivare la funzionalità di thread dinamico e impostare il numero di thread in modo esplicito per mantenere la portabilità. Nell'esempio seguente viene illustrato come eseguire questa operazione usando [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function), e [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function):

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

In questo esempio, il programma viene eseguita correttamente solo se viene eseguita da 16 thread. Se l'implementazione non è in grado di supportare 16 thread, il comportamento di questo esempio è definito dall'implementazione.

Il numero di thread in esecuzione un'area parallela rimanga costante durante un'area parallela, indipendentemente dal fatto l'impostazione dinamico dei thread. Il meccanismo di thread dinamico determina il numero di thread da usare all'inizio dell'area parallela e mantiene il costante per la durata dell'area.

## <a name="a12-the-atomic-directive"></a>A.12 della direttiva atomic

Nell'esempio seguente consente di evitare situazioni di race condition (aggiornamenti simultanei di un elemento della *x* dal numero di thread) utilizzando il [atomica](2-directives.md#264-atomic-construct) direttiva:

```cpp
#pragma omp parallel for shared(x, y, index, n)
    for (i=0; i<n; i++)
    {
        #pragma omp atomic
            x[index[i]] += work1(i);
        y[i] += work2(i);
    }
```

Il vantaggio dell'uso di `atomic` direttiva in questo esempio è quello di consentire gli aggiornamenti di due diversi elementi di x in parallelo. Se un [critici](2-directives.md#262-critical-construct) direttiva viene utilizzata, invece, tutti gli aggiornamenti agli elementi del *x* vengono eseguite in serie (ma non in qualsiasi ordine garantito).

Il `atomic` direttiva si applica solo all'istruzione C o C++ lo segue immediatamente.  Di conseguenza, gli elementi della *y* non vengono aggiornati in modo atomico in questo esempio.

## <a name="a13-a-flush-directive-with-a-list"></a>A.13 una direttiva flush con un elenco

L'esempio seguente usa il `flush` direttiva per la sincronizzazione da punto a punto degli oggetti specifici tra coppie di thread:

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

## <a name="a14-a-flush-directive-without-a-list"></a>A.14 una direttiva flush senza elenco

Nell'esempio seguente (per [sezione 2.6.5](2-directives.md#265-flush-directive)) consente di distinguere gli oggetti condivisi interessati da un `flush` direttiva con alcun elenco dagli oggetti condivisi che non sono interessati:

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

## <a name="a15-the-number-of-threads-used"></a>A.15 il numero di thread utilizzati

Si consideri l'esempio seguente non corretto (per [sezione 3.1.2](3-run-time-library-functions.md#312-omp_get_num_threads-function)):

```cpp
np = omp_get_num_threads(); // misplaced
#pragma omp parallel for schedule(static)
    for (i=0; i<np; i++)
        work(i);
```

Il `omp_get_num_threads()` chiamata restituisce 1 nella sezione del codice, seriale così *np* sarà sempre uguale a 1 nell'esempio precedente. Per determinare il numero di thread che verranno distribuiti per l'area parallela, la chiamata deve essere all'interno dell'area parallela.

Nell'esempio seguente illustra come riscrivere questo programma senza includere una query per il numero di thread:

```cpp
#pragma omp parallel private(i)
{
    i = omp_get_thread_num();
    work(i);
}
```

## <a name="a16-locks"></a>A.16 blocchi

Nell'esempio seguente (per [sezione 3.2](3-run-time-library-functions.md#32-lock-functions)), l'argomento alle funzioni di blocco deve avere tipo `omp_lock_t`, e che non è necessario lo scaricamento.  Le funzioni di blocco causano il thread sia inattivo durante l'attesa della voce per la prima sezione critica, ma di eseguire altre attività durante l'attesa di ingresso al secondo.  Il `omp_set_lock` blocchi di funzione, ma la `omp_test_lock` non di funzione, consentendo il lavoro in `skip()` da eseguire.

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

## <a name="a17-nestable-locks"></a>A.17 blocchi annidabili

Nell'esempio seguente (per [sezione 3.2](3-run-time-library-functions.md#32-lock-functions)) viene illustrato come utilizzare un blocco annidabile per sincronizzare gli aggiornamenti a una struttura di intera e a uno dei relativi membri.

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

## <a name="a18-nested-for-directives"></a>Nested A.18 direttive for

L'esempio seguente `for` [annidamento di direttive](2-directives.md#29-directive-nesting) è conforme perché l'interno ed esterno `for` direttive associare alle diverse aree parallele:

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

È anche compatibile con una variante seguente dell'esempio precedente:

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

## <a name="a19-examples-showing-incorrect-nesting-of-work-sharing-directives"></a>A.19 esempi sull'annidamento non corretto di condivisione del lavoro direttive

Gli esempi in questa sezione illustrano le [annidamento di direttive](2-directives.md#29-directive-nesting) regole.

Nell'esempio seguente non è conforme perché l'interno ed esterno `for` direttive sono annidate e associare allo stesso `parallel` direttiva:

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

La seguente versione dinamicamente nidificata dell'esempio precedente è anche conforme:

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

Nell'esempio seguente non è conforme perché il `for` e `single` direttive sono nidificate e vengono associate alla stessa area parallela:

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

Nell'esempio seguente non è conforme perché una `barrier` direttiva all'interno di un `for` può causare deadlock:

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

Nell'esempio seguente non è conforme perché il `barrier` comporta un deadlock dovuto al fatto che un solo thread alla volta può accedere alla sezione critica:

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

Nell'esempio seguente non è conforme perché il `barrier` comporta un deadlock dovuto al fatto che solo un thread esegue il `single` sezione:

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

## <a name="a20-bind-barrier-directives"></a>Direttive A.20 associazione barrier

L'associazione di direttive le regole di chiamata per un `barrier` direttiva a cui associarsi di inclusione più vicina `parallel` direttiva. Per ulteriori informazioni sull'associazione di direttive, vedere [sezione 2.8](2-directives.md#28-directive-binding).

Nell'esempio seguente, la chiamata da *principale* al *sub2* è conforme perché il `barrier` (in *sub3*) associa all'area parallela in *sub2* . La chiamata da *principale* al *sub1* è conforme perché il `barrier` associa all'area parallela nella subroutine *sub2*.  La chiamata da *principale* al *sub3* è conforme perché il `barrier` non viene associato a un'area parallela e viene ignorato. Inoltre, il `barrier` Sincronizza solo il team di thread in tale area contenitore e non tutti i thread creati nella *sub1*.

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

## <a name="a21-scope-variables-with-the-private-clause"></a>Variabili di ambito A.21 con la clausola private

I valori della `i` e `j` nell'esempio seguente non sono definiti in uscita dall'area parallela:

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

Per altre informazioni sul `private` clausola, vedere [sezione 2.7.2.1](2-directives.md#2721-private).

## <a name="a22-the-defaultnone-clause"></a>A.22 la clausola default (None)

Nell'esempio seguente consente di distinguere le variabili che sono interessate dal `default(none)` clausola dalle variabili che non sono:

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

Per altre informazioni sul `default` clausola, vedere [sezione 2.7.2.5](2-directives.md#2725-default).

## <a name="a23-examples-of-the-ordered-directive"></a>A.23 esempi della direttiva ordered

È possibile disporre di molte sezioni ordinate con un `for` specificato con il `ordered` clausola. Nel primo esempio non è conforme perché l'API consente di specificare la regola seguente:

"Un'iterazione di un ciclo con un `for` costrutto non deve eseguire lo stesso `ordered` direttiva più di una sola volta e non deve eseguire più `ordered` direttiva." (Vedere [sezione 2.6.6](2-directives.md#266-ordered-construct).)

In questo esempio non conforme, tutte le iterazioni vengono eseguite due sezioni ordinate:

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

Nel seguente esempio conforme un `for` con più di una sezione ordinata:

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

## <a name="a24-example-of-the-private-clause"></a>A.24 esempio della clausola private

Il [privato](2-directives.md#2721-private) clausola di un'area parallela è attivo solo per l'ambito lessicale dell'area, non per l'estensione dell'area dinamica.  Pertanto, nell'esempio seguente, indipendentemente dall'utilizzo della variabile *una* all'interno di `for` ciclo nella routine *f* fa riferimento a una copia privata del *un*, mentre un utilizzo in routine *g* fa riferimento a globale *un*.

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

## <a name="a25-examples-of-the-copyprivate-data-attribute-clause"></a>A.25 esempi della clausola di attributi di dati copyprivate

**Esempio 1:** Il [copyprivate](2-directives.md#2728-copyprivate) clausola può essere utilizzata per trasmettere i valori acquisiti da un thread singolo direttamente a tutte le istanze delle variabili private in altri thread.

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

Se routine *init* viene chiamato da un'area seriale, il comportamento non è influenzato dalla presenza delle direttive. Dopo la chiamata per il *get_values* routine è stata eseguita da un solo thread, nessun thread lascia il costrutto finché gli oggetti privati designati dal *una*, *b*, *x*, e *y* diventano definiti in tutti i thread con i valori letti.

**Esempio 2:** Contrariamente all'esempio precedente, si supponga che deve essere eseguita la lettura da un thread specifico, ad esempio il thread master. In questo caso, il `copyprivate` clausola non può essere utilizzata per eseguire direttamente la trasmissione, ma può essere utilizzato per fornire l'accesso a un oggetto condiviso temporaneo.

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

**Esempio 3:** Si supponga che il numero di oggetti di blocco richiesti in un'area parallela non è possibile determinare facilmente prima di poterlo. Il `copyprivate` clausola può essere utilizzata per fornire l'accesso agli oggetti di blocco condiviso che vengono allocate in tale area parallela.

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

## <a name="a26-the-threadprivate-directive"></a>A.26 della direttiva threadprivate

Gli esempi seguenti illustrano come usare il [threadprivate](2-directives.md#271-threadprivate-directive) direttiva per fornire un contatore separato a ogni thread.

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

## <a name="a27-c99-variable-length-arrays"></a>A.27 matrici di lunghezza variabile C99

L'esempio seguente illustra come usare matrici di lunghezza variabile C99 (VLAs) in un [firstprivate](2-directives.md#2722-firstprivate) direttiva.

> [!NOTE]
> Matrici di lunghezza variabile non sono attualmente supportate in Visual C++.

```cpp
void f(int m, int C[m][m])
{
    double v1[m];
    ...
    #pragma omp parallel firstprivate(C, v1)
    ...
}
```

## <a name="a28-the-numthreads-clause"></a>A.28 della clausola num_threads

Nell'esempio seguente viene illustrato il [num_threads](2-directives.md#23-parallel-construct) clausola. L'area parallela viene eseguita con un massimo di 10 thread.

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

## <a name="a29-work-sharing-constructs-inside-a-critical-construct"></a>A.29 costrutti di condivisione del lavoro in un costrutto critical

Nell'esempio seguente viene illustrato come utilizzare un costrutto di condivisione del lavoro all'interno di un `critical` costruire. In questo esempio è conforme perché la condivisione del lavoro costruire e `critical` costrutto non associare alla stessa area parallela.

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

## <a name="a30-reprivatization"></a>A.30 riprivatizzazione

Nell'esempio seguente viene illustrato il riprivatizzazione delle variabili. Variabili private possono essere contrassegnate `private` nuovamente in un'istruzione nidificata. Non è necessario condividere tali variabili nell'area parallela che lo contiene.

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

## <a name="a31-thread-safe-lock-functions"></a>A.31 funzioni di blocco Thread-safe

L'esempio C++ seguente illustra come inizializzare una matrice di blocchi in un'area parallela usando [funzioni omp_init_lock](3-run-time-library-functions.md#321-omp_init_lock-and-omp_init_nest_lock-functions).

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
