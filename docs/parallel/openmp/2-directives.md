---
title: 2. Direttive
ms.date: 01/18/2019
ms.assetid: d1a69374-6c03-45fb-8c86-e91cea8adae8
ms.openlocfilehash: 125d2d83b277e62d007e3a208e426ea717d52790
ms.sourcegitcommit: 382e247c0f1b4cb7c2dab837b8b6fdff24bff47a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/28/2019
ms.locfileid: "55087340"
---
# <a name="2-directives"></a>2. Direttive

Le direttive sono basate su `#pragma` direttive definite negli standard C e C++.  I compilatori che supportano il OpenMP C e C++ API includerà un'opzione della riga di comando che consente di attivare e consente l'interpretazione di tutte le direttive del compilatore OpenMP.

## <a name="21-directive-format"></a>2.1 formato direttive

La sintassi di una direttiva OpenMP è formalmente specificata per il controllo grammaticale nel [appendice C](c-openmp-c-and-cpp-grammar.md)e informale come indicato di seguito:

```cpp
#pragma omp directive-name  [clause[ [,] clause]...] new-line
```

Ogni direttiva inizia con `#pragma omp`, per ridurre il rischio di conflitti con altre direttive pragma (estensioni del fornitore o non OpenMP e OpenMP) con gli stessi nomi. Il resto della direttiva segue le convenzioni degli standard C e C++ per le direttive del compilatore. In particolare, lo spazio vuoto può essere utilizzato prima e dopo il `#`, e talvolta gli spazi vuoti devono essere usati per separare le parole in una direttiva. Pre-elaborazione token dopo il `#pragma omp` sono soggette a sostituzione della macro.

Le direttive sono tra maiuscole e minuscole. L'ordine in cui le clausole vengono visualizzati nelle direttive non è significativo. Le clausole in istruzioni possono essere ripetute in base alle esigenze, soggetto alle restrizioni elencate nella descrizione di ogni clausola. Se *elenco di variabili* viene visualizzato in una clausola, è necessario specificare solo le variabili. Un solo *nome-direttiva* può essere specificato per ogni direttiva.  Ad esempio, non è consentita la direttiva seguente:

```cpp
/* ERROR - multiple directive names not allowed */
#pragma omp parallel barrier
```

Una direttiva OpenMP verrà applicata al massimo una successiva istruzione, che deve essere un blocco strutturato.

## <a name="22-conditional-compilation"></a>2.2 compilazione condizionale

Il `_OPENMP` nome della macro viene definita da implementazioni conformi OpenMP come costante decimale *yyyymm*, che sarà l'anno e mese della specifica approvata. Questa macro non deve essere oggetto di un `#define` o un `#undef` pre-elaborazione della direttiva.

```cpp
#ifdef _OPENMP
iam = omp_get_thread_num() + index;
#endif
```

Se i fornitori di definiscono le estensioni e OpenMP, si possono specificare altre macro predefinite.

## <a name="23-parallel-construct"></a>2.3 costrutto parallel

La direttiva seguente definisce un'area parallela, ovvero un'area del programma che deve essere eseguito dal numero di thread in parallelo. Questa direttiva è il costrutto fondamentale che avvia l'esecuzione parallela.

```cpp
#pragma omp parallel [clause[ [, ]clause] ...] new-line   structured-block
```

Il *clausola* è uno dei seguenti:

- `if(` *scalar-expression* `)`
- `private(` *variable-list* `)`
- `firstprivate(` *variable-list* `)`
- `default(shared | none)`
- `shared(` *variable-list* `)`
- `copyin(` *variable-list* `)`
- `reduction(` *operator* `:`  *variable-list* `)`
- `num_threads(` *integer-expression* `)`

Quando un thread arriva a un costrutto parallelo, viene creato un team di thread se viene soddisfatta una delle situazioni seguenti:

- Non `if` clausola è presente.
- Il `if` espressione restituisce un valore diverso da zero.

Questo thread diventa il thread master del team, con un numero di thread pari a 0, e tutti i thread del team, tra cui il thread master, eseguono l'area in parallelo. Se il valore della `if` espressione è uguale a zero, l'area viene serializzata.

Per determinare il numero di thread che vengono richiesti, le regole seguenti verranno considerate in ordine. Verrà applicata la regola prima la cui condizione viene soddisfatta:

1. Se il `num_threads` clausola è presente, quindi il valore dell'espressione integer è il numero di thread richiesto.

1. Se il `omp_set_num_threads` funzione della libreria è stato chiamato, quindi il valore dell'argomento nella chiamata eseguita più di recente è il numero di thread richiesto.

1. Se la variabile di ambiente `OMP_NUM_THREADS` è definito, il valore di questa variabile di ambiente è il numero di thread richiesto.

1. Se nessuno dei metodi precedenti viene utilizzato, il numero di thread richiesti è definito dall'implementazione.

Se il `num_threads` clausola è presenta, sostituisce il numero di thread richiesti per il `omp_set_num_threads` funzione della libreria o `OMP_NUM_THREADS` variabile di ambiente solo per tale area viene applicato a. In un secondo momento aree parallele non sono interessate da esso.

Il numero di thread che eseguono l'area parallela dipende anche se è abilitata la regolazione dinamica del numero di thread. Se la regolazione dinamica viene disabilitata, il numero di thread richiesti eseguirà l'area parallela. Se la regolazione dinamica è abilitata il numero di thread richiesto è il numero massimo di thread che può essere eseguita l'area parallela.

Se un'area parallela viene rilevata durante la regolazione dinamica del numero di thread è disabilitata e il numero di thread richiesti per l'area parallelo è maggiore del numero che può fornire il sistema in fase di esecuzione, il comportamento del programma è definito dall'implementazione. Un'implementazione potrebbe, ad esempio, interrompere l'esecuzione del programma, o potrebbe serializzare tale area.

Il `omp_set_dynamic` funzione di libreria e `OMP_DYNAMIC` variabile di ambiente può essere utilizzata per abilitare e disabilitare la regolazione dinamica del numero di thread.

Il numero di processori fisici effettivamente che ospita i thread in qualsiasi momento è definito dall'implementazione. Una volta creato, il numero di thread del team rimane costante per la durata di tale area parallela. Può essere modificata in modo esplicito dall'utente o automaticamente dal sistema in fase di esecuzione da un'area parallela a un'altra.

Le istruzioni contenute in extent dinamica dell'area parallelo vengono eseguite da ogni thread, e ogni thread possono eseguire un percorso di istruzioni che è diverso dagli altri thread. Direttive rilevate di fuori l'ambito lessicale di un'area parallela sono detti direttive orfane.

È presente una barriera implicita alla fine di un'area parallela. Solo i thread master del team continua l'esecuzione alla fine di un'area parallela.

Se un thread in un team l'esecuzione di un'area parallela viene rilevato un altro costrutto parallelo, crea un nuovo team e diventa il master di tale nuovo team. Aree parallele annidate vengono serializzate per impostazione predefinita. Di conseguenza, per impostazione predefinita, un'area parallela nidificata viene eseguita da un team composto da un thread. Il comportamento predefinito può essere modificato tramite la funzione della libreria runtime `omp_set_nested` o la variabile di ambiente `OMP_NESTED`. Tuttavia, il numero di thread in un team che eseguono un'area parallela annidata è definito dall'implementazione.

Restrizioni per il `parallel` direttiva sono i seguenti:

- Al massimo uno `if` clausola può apparire nella direttiva.

- Non è specificato se qualsiasi lato effetti all'interno di se espressione o `num_threads` espressione verificarsi.

- Oggetto `throw` eseguita all'interno di un'area parallela deve provocare l'esecuzione ripresa entro l'ambito dinamico dello stesso blocco strutturato e devono essere intercettata dallo stesso thread che ha generato l'eccezione.

- Una sola `num_threads` clausola può apparire nella direttiva. Il `num_threads` espressione viene valutata all'esterno del contesto dell'area parallela e deve restituire un valore intero positivo.

- L'ordine di valutazione del `if` e `num_threads` clausole non è specificato.

### <a name="cross-references"></a>Riferimenti incrociati

- `private`, `firstprivate`, `default`, `shared`, `copyin`, e `reduction` clausole ([sezione 2.7.2](#272-data-sharing-attribute-clauses))
- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads) variabile di ambiente
- [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function) library function
- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic) variabile di ambiente
- [omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function) function
- [OMP_NESTED](4-environment-variables.md#44-omp_nested) variabile di ambiente
- [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function) funzione della libreria

## <a name="24-work-sharing-constructs"></a>2.4 costrutti di condivisione del lavoro

Un costrutto di condivisione del lavoro distribuisce l'esecuzione dell'istruzione associato tra i membri del team che ha rilevato. Le direttive di condivisione del lavoro non avviare nuovi thread e non vi è alcuna barriera implicita in ingresso a un costrutto di condivisione del lavoro.

Costruisce la sequenza di condivisione del lavoro e `barrier` direttive rilevate devono essere uguale per ogni thread in un team.

OpenMP definisce i seguenti costrutti di condivisione del lavoro e questi costrutti sono descritte nelle sezioni che seguono:

- [per](#241-for-construct) (direttiva)
- [Nelle sezioni](#242-sections-construct) (direttiva)
- [singolo](#243-single-construct) (direttiva)

### <a name="241-for-construct"></a>2.4.1 costrutto for

Il `for` direttiva identifica un costrutto di condivisione del lavoro iterativo che specifica che le iterazioni del ciclo associato verranno eseguite in parallelo. Le iterazioni del `for` ciclo vengono distribuite tra i thread che già esistono nel team l'esecuzione di un costrutto parallelo a cui si esegue l'associazione. La sintassi del `for` costrutto è come segue:

```cpp
#pragma omp for [clause[[,] clause] ... ] new-line for-loop
```

La clausola è uno dei seguenti:

- `private(` *variable-list* `)`
- `firstprivate(` *variable-list* `)`
- `lastprivate(` *variable-list* `)`
- `reduction(` *operator* `:` *variable-list* `)`
- `ordered`
- `schedule(` *kind* [`,` *chunk_size*] `)`
- `nowait`

Il `for` direttiva specifica limitazioni sulla struttura dell'elemento corrispondente `for` ciclo. In particolare, il corrispondente `for` ciclo deve avere forma canonica:

`for (` *Init-expr* `;` *var logico op b* `;` *incr-expr* `)`

*init-expr*<br/>
Uno dei seguenti:

- *var* = *lb*
- *integer-type var* = *lb*

*incr-expr*<br/>
Uno dei seguenti:

- `++` *var*
- *var* `++`
- `--` *var*
- *var* `--`
- *var* `+=` *incr*
- *var* `-=` *incr*
- *var* `=` *var* `+` *incr*
- *var* `=` *incr* `+` *var*
- *var* `=` *var* `-` *incr*

*var*<br/>
Una variabile integer con segno. Se questa variabile in caso contrario, potrebbe essere condivisi, in modo implicito renderlo privato per la durata del `for`. Non modificare questa variabile all'interno del corpo del `for` istruzione. Se non si specifica la variabile `lastprivate`, il relativo valore dopo il ciclo è indeterminato.

*logical-op*<br/>
Uno dei seguenti:

- `<`
- `<=`
- `>`
- `>=`

*bilanciamento del carico*, *b*, e *incr*<br>
Le espressioni integer invariante del ciclo. Non è presente alcuna sincronizzazione durante la valutazione di queste espressioni, tutti gli effetti collaterali valutati produrre risultati imprevisti.

La forma canonica consente il numero di iterazioni del ciclo deve essere calcolata in ingresso per il ciclo. Il calcolo viene eseguito con i valori nel tipo di *var*, dopo le promozioni integrali. In particolare, se pari *b* `-` *lb* `+` *incr* non può essere rappresentato nel cui tipo, il risultato è indeterminato. Inoltre, se *logiche-op* viene `<` o `<=`, quindi *incr-expr* causano *var* per aumentare a ogni iterazione del ciclo.   Se *logiche-op* viene `>` oppure `>=`, quindi *incr-expr* deve provocare *var* per ottenere più piccoli in ogni iterazione del ciclo.

Il `schedule` clausola che specifica come iterazioni del `for` ciclo sono divise tra i thread del team. La correttezza di un programma non deve dipendere thread che esegue un'iterazione specifica. Il valore di *chunk_size*, se specificato, deve essere un'espressione integer invariante ciclo con un valore positivo. Non è presente alcuna sincronizzazione durante la valutazione dell'espressione, valutati effetti collaterali produrre risultati imprevisti. La pianificazione *tipo* può essere uno dei valori seguenti:

Tabella 2-1: `schedule` clausola *tipo* valori

|||
|-|-|
|statico|Quando `schedule(static,` *chunk_size* `)` viene specificato, le iterazioni sono suddivisi in blocchi di dimensioni specificato dalla *chunk_size*. I blocchi vengono assegnati staticamente ai thread del team in modo round robin in base all'ordine il numero di thread. Se non si specifica *chunk_size* viene specificato, lo spazio di iterazione è suddiviso in blocchi che equivalgono circa le dimensioni, con un blocco assegnato a ogni thread.|
|dynamic|Quando `schedule(dynamic,` *chunk_size* `)` viene specificato, le iterazioni sono suddivisi in una serie di blocchi, ognuno dei quali contiene *chunk_size* iterazioni. Ogni blocco viene assegnato a un thread in attesa di un'assegnazione. Il thread viene eseguito il blocco di iterazioni e quindi attende la relativa assegnazione successivo, fino a quando nessun blocco rimarrà impostata per essere assegnati. L'ultimo blocco per l'assegnazione può avere un numero inferiore di iterazioni. Se non si specifica *chunk_size* viene specificato, l'impostazione predefinita è 1.|
|PGO|Quando `schedule(guided,` *chunk_size* `)` viene specificato, le iterazioni vengono assegnate ai thread in blocchi con riducendo le dimensioni. Quando un thread termina il blocco assegnato di iterazioni, viene dinamicamente assegnata un altro blocco, fino a quando non rimane nessuna. Per un *chunk_size* pari a 1, la dimensione di ciascun blocco è approssimativamente il numero di iterazioni non assegnati diviso per il numero di thread. Queste dimensioni diminuiscono quasi esponenzialmente su 1. Per un *chunk_size* con il valore *k* maggiore di 1, le dimensioni quasi in modo esponenziale a diminuire *k*, ad eccezione del fatto che l'ultimo blocco potrà avere meno di *k* iterazioni. Se non si specifica *chunk_size* viene specificato, l'impostazione predefinita è 1.|
|runtime|Quando si `schedule(runtime)` viene specificato, la decisione relativa a pianificazione viene posticipata fino alla fase di esecuzione. La pianificazione *genere* e le dimensioni dei blocchi possono essere scelte in fase di esecuzione impostando la variabile di ambiente `OMP_SCHEDULE`. Se non viene impostata questa variabile di ambiente, la pianificazione risulta viene definito dall'implementazione. Quando `schedule(runtime)` omette *chunk_size* non deve essere specificata.|

In assenza di un controllo definito in modo esplicito `schedule` clausola, il valore predefinito `schedule` è definito dall'implementazione.

Un programma conformi OpenMP non si basa su una determinata pianificazione per l'esecuzione corretta. Un programma non deve basarsi su una pianificazione *genere* conformi con precisione e la descrizione specificata in precedenza, perché è possibile disporre di variazioni nelle implementazioni della pianificazione stessa *tipo* tra compilatori diversi. Le descrizioni sono utilizzabile per selezionare la pianificazione appropriata per una determinata situazione.

Il `ordered` clausola deve essere presente quando `ordered` direttive di associare il `for` costruire.

È una barriera implicita alla fine di una `for` costruire, a meno che un `nowait` è specificata alcuna clausola.

Restrizioni per il `for` direttiva sono i seguenti:

- Il `for` ciclo deve essere un blocco strutturato e, inoltre, l'esecuzione non deve terminare da un `break` istruzione.

- I valori del ciclo controllano le espressioni del `for` ciclo associato un `for` direttiva deve essere uguale per tutti i thread del team.

- Il `for` variabile di iterazione del ciclo deve presentare un tipo intero con segno.

- Una sola `schedule` clausola può apparire in un `for` direttiva.

- Una sola `ordered` clausola può apparire in un `for` direttiva.

- Una sola `nowait` clausola può apparire in un `for` direttiva.

- È se non specificato o frequenza eventuali effetti all'interno di *chunk_size*, *lb*, *b*, oppure *incr* espressioni si verificano.

- Il valore della *chunk_size* espressione deve essere uguale per tutti i thread del team.

#### <a name="cross-references"></a>Riferimenti incrociati

- `private`, `firstprivate`, `lastprivate`, e `reduction` clausole ([sezione 2.7.2](#272-data-sharing-attribute-clauses))
- [OMP_SCHEDULE](4-environment-variables.md#41-omp_schedule) variabile di ambiente
- [ordinati](#266-ordered-construct) costruire
- [pianificazione](d-using-the-schedule-clause.md) clausola

### <a name="242-sections-construct"></a>2.4.2 nelle sezioni costrutto

Il `sections` direttiva identifica un costrutto di condivisione del lavoro noniterative che specifica un set di costrutti che devono essere suddivisi tra i thread in un team. Ogni sezione viene eseguita una sola volta da un thread del team. La sintassi del `sections` direttiva è come segue:

```cpp
#pragma omp sections [clause[[,] clause] ...] new-line
   {
   [#pragma omp section new-line]
      structured-block
   [#pragma omp section new-linestructured-block ]
...
}
```

La clausola è uno dei seguenti:

- `private(` *variable-list* `)`
- `firstprivate(` *variable-list* `)`
- `lastprivate(` *variable-list* `)`
- `reduction(` *operator* `:`  *variable-list* `)`
- `nowait`

Ogni sezione è preceduta da un `section` direttiva, sebbene il `section` direttiva è facoltativa per la prima sezione. Il `section` direttive devono essere racchiuso tra l'ambito lessicale del `sections` direttiva. È una barriera implicita alla fine di una `sections` costruire, a meno che un `nowait` è specificato.

Restrizioni per il `sections` direttiva sono i seguenti:

- Oggetto `section` direttiva non deve trovarsi all'esterno dell'ambito lessicale del `sections` direttiva.

- Una sola `nowait` clausola può apparire in un `sections` direttiva.

#### <a name="cross-references"></a>Riferimenti incrociati

- `private`, `firstprivate`, `lastprivate`, e `reduction` clausole ([sezione 2.7.2](#272-data-sharing-attribute-clauses))

### <a name="243-single-construct"></a>2.4.3 costrutto single

Il `single` direttiva identifica un costrutto che specifica che il blocco strutturato associato viene eseguito da un solo thread del team (non necessariamente il thread principale). La sintassi del `single` direttiva è come segue:

```cpp
#pragma omp single [clause[[,] clause] ...] new-linestructured-block
```

La clausola è uno dei seguenti:

- `private(` *variable-list* `)`
- `firstprivate(` *variable-list* `)`
- `copyprivate(` *variable-list* `)`
- `nowait`

È presente una barriera implicita dopo il `single` costruire, a meno che un `nowait` è specificata alcuna clausola.

Restrizioni per il `single` direttiva sono i seguenti:

- Una sola `nowait` clausola può apparire in un `single` direttiva.
- Il `copyprivate` clausola non deve essere usata con il `nowait` clausola.

#### <a name="cross-references"></a>Riferimenti incrociati

- `private`, `firstprivate`, e `copyprivate` clausole ([sezione 2.7.2](#272-data-sharing-attribute-clauses))

## <a name="25-combined-parallel-work-sharing-constructs"></a>2.5 combinati costrutti di condivisione del lavoro paralleli

Costrutti di condivisione lavoro paralleli combinati sono tasti di scelta rapida per la specifica di un'area parallela che ha solo un costrutto di condivisione del lavoro. La semantica di queste direttive è equivale a specificare in modo esplicito un `parallel` direttiva seguita da un singolo costrutto di condivisione del lavoro.

Le sezioni seguenti descrivono i costrutti di condivisione del lavoro paralleli combinati:

- [parallelo per](#251-parallel-for-construct) (direttiva)
- [le sezioni in parallelo](#252-parallel-sections-construct) (direttiva)

### <a name="251-parallel-for-construct"></a>2.5.1 costrutto parallel for

Il `parallel for` direttiva è una scelta rapida per un `parallel` area contenente una sola `for` direttiva. La sintassi del `parallel for` direttiva è come segue:

```cpp
#pragma omp parallel for [clause[[,] clause] ...] new-linefor-loop
```

Questa direttiva consente tutte le clausole del `parallel` direttiva e il `for` direttiva, ad eccezione di `nowait` clausola, con un significato identico e restrizioni. La semantica è lo stesso ottenuto specificando in modo esplicito un `parallel` direttiva seguita immediatamente da un `for` direttiva.

#### <a name="cross-references"></a>Riferimenti incrociati

- [Parallel](#23-parallel-construct) (direttiva)
- [per](#241-for-construct) (direttiva)
- [Clausole di attributi dei dati](#272-data-sharing-attribute-clauses)

### <a name="252-parallel-sections-construct"></a>2.5.2 sezioni parallele costrutto

Il `parallel sections` direttiva fornisce un modulo di scelta rapida per specificare un `parallel` area che dispone di una sola `sections` direttiva. La semantica è lo stesso ottenuto specificando in modo esplicito un `parallel` direttiva seguita immediatamente da un `sections` direttiva. La sintassi del `parallel sections` direttiva è come segue:

```cpp
#pragma omp parallel sections  [clause[[,] clause] ...] new-line
   {
   [#pragma omp section new-line]
      structured-block
   [#pragma omp section new-linestructured-block  ]
   ...
}
```

Il *clausola* può essere una delle clausole accettate dal `parallel` e `sections` direttive, ad eccezione di `nowait` clausola.

#### <a name="cross-references"></a>Riferimenti incrociati

- [Parallel](#23-parallel-construct) (direttiva)
- [Nelle sezioni](#242-sections-construct) (direttiva)

## <a name="26-master-and-synchronization-directives"></a>2.6 direttive Master e sincronizzazione

Le sezioni seguenti descrivono:

- [master](#261-master-construct) costruire
- [critico](#262-critical-construct) costruire
- [barriera](#263-barrier-directive) (direttiva)
- [atomic](#264-atomic-construct) costruire
- [scaricamento](#265-flush-directive) (direttiva)
- [ordinati](#266-ordered-construct) costruire

### <a name="261-master-construct"></a>2.6.1 costrutto master

Il `master` direttiva identifica un costrutto che specifica un blocco strutturato che viene eseguito dal thread master del team. La sintassi del `master` direttiva è come segue:

```cpp
#pragma omp master new-linestructured-block
```

Blocco strutturato associato non eseguire altri thread del team. Non vi è alcuna barriera implicita in ingresso a o Esci dal costrutto master.

### <a name="262-critical-construct"></a>2.6.2 costrutto critical

Il `critical` direttiva identifica un costrutto che limita l'esecuzione del blocco strutturato associato a un solo thread alla volta. La sintassi del `critical` direttiva è come segue:

```cpp
#pragma omp critical [(name)]  new-linestructured-block
```

Facoltativo *nome* può essere usato per identificare l'area critica. Gli identificatori utilizzati per identificare un'area critica con collegamento esterno e sono in uno spazio dei nomi separato dagli spazi dei nomi utilizzati da etichette, i tag, i membri e identificatori comuni.

Un thread attende all'inizio di un'area critica nessun altro thread durante l'esecuzione di un'area critica (in un punto qualsiasi all'interno del programma) con lo stesso nome. Tutto senza nome `critical` direttive di eseguire il mapping per lo stesso nome specificato.

### <a name="263-barrier-directive"></a>2.6.3 direttiva barrier

Il `barrier` direttiva Sincronizza tutti i thread in un team. Quando si verifica, ogni thread del team attende che tutti gli altri hanno raggiunto questo punto. La sintassi del `barrier` direttiva è come segue:

```cpp
#pragma omp barrier new-line
```

Dopo che tutti i thread del team hanno rilevato la barriera, ogni thread del team avvia l'esecuzione di istruzioni dopo la direttiva barrier in parallelo. Poiché il `barrier` direttiva non ha un'istruzione del linguaggio C come parte della relativa sintassi, esistono alcune restrizioni nella relativa posizione all'interno di un programma. Per altre informazioni sulla grammatica formale, vedere [appendice C](c-openmp-c-and-cpp-grammar.md). L'esempio seguente illustra queste restrizioni.

```cpp
/* ERROR - The barrier directive cannot be the immediate
*          substatement of an if statement
*/
if (x!=0)
   #pragma omp barrier
...

/* OK - The barrier directive is enclosed in a
*      compound statement.
*/
if (x!=0) {
   #pragma omp barrier
}
```

### <a name="264-atomic-construct"></a>2.6.4 costrutto atomic

Il `atomic` direttiva garantisce che una determinata posizione di memoria viene aggiornata in modo atomico, anziché esporre la possibilità di più thread di scrittura simultanee. La sintassi del `atomic` direttiva è come segue:

```cpp
#pragma omp atomic new-lineexpression-stmt
```

L'istruzione di espressione deve essere uno dei formati seguenti:

- *x binop* `=` *expr*
- *x* `++`
- `++` *x*
- *x* `--`
- `--` *x*

Nelle espressioni di precedente:

- *x* è un'espressione di lvalue con un tipo scalare.

- *Expr* è un'espressione con un tipo scalare, e non fa riferimento l'oggetto specificato da *x*.

- *binop* non è un operatore di overload ed è uno dei `+`, `*`, `-`, `/`, `&`, `^`, `|`, `<<`, o `>>`.

Anche se è definito dall'implementazione se un'implementazione sostituisce tutte `atomic` direttive con `critical` direttive che hanno lo stesso oggetto univoco *name*, il `atomic` consente migliore ottimizzazione (direttiva) . Spesso le istruzioni di hardware sono disponibili in grado di eseguire l'aggiornamento atomico con un sovraccarico minimo.

Solo il carico e l'archivio dell'oggetto definito dal *x* sono atomica, la valutazione del *expr* non è atomico. Per evitare situazioni di race condition, è consigliabile proteggere tutti gli aggiornamenti della posizione in parallelo tramite il `atomic` direttiva, ad eccezione di quelli che notoriamente privi di race condition.

Restrizioni per il `atomic` direttiva sono i seguenti:

- Tutti i riferimenti atomici nel percorso di archiviazione x in tutto il programma deve essere un tipo compatibile.

#### <a name="examples"></a>Esempi

```cpp
extern float a[], *p = a, b;
/* Protect against races among multiple updates. */
#pragma omp atomic
a[index[i]] += b;
/* Protect against races with updates through a. */
#pragma omp atomic
p[i] -= 1.0f;

extern union {int n; float x;} u;
/* ERROR - References through incompatible types. */
#pragma omp atomic
u.n++;
#pragma omp atomic
u.x -= 1.0f;
```

### <a name="265-flush-directive"></a>2.6.5 direttiva flush

Il `flush` direttiva, esplicita o implicita, specifica un punto di sequenza "cross-thread" in corrispondenza del quale l'implementazione è necessario per assicurare che tutti i thread in un team abbiano una visualizzazione coerente di determinati oggetti (specificati di seguito) in memoria. Ciò significa che precedenti versioni di valutazione delle espressioni che fanno riferimento a tali oggetti sono state completate e le valutazioni successive non hanno ancora iniziato. Ad esempio, i compilatori devono ripristinare i valori degli oggetti da registri alla memoria e hardware potrebbe essere necessario scaricare i buffer di scrittura per la memoria e ricaricare i valori degli oggetti dalla memoria.

La sintassi del `flush` direttiva è come segue:

```cpp
#pragma omp flush [(variable-list)]  new-line
```

Se tutti gli oggetti che richiedono la sincronizzazione possono essere designati da variabili, quindi tali variabili possono essere specificate in facoltativo *elenco di variabili*. Se è presente in un puntatore il *elenco di variabili*, il puntatore viene scaricato, non l'oggetto cui fa riferimento per il puntatore del mouse.

Oggetto `flush` direttiva senza una *elenco di variabili* Sincronizza oggetti condivisi tutto tranne gli oggetti accessibili con durata di archiviazione automatica. (È probabile che presentano un overhead maggiore rispetto a un `flush` con un *elenco di variabili*.) Oggetto `flush` direttiva senza una *elenco di variabili* è implicita per le direttive seguenti:

- `barrier`
- In entrata e l'uscita da `critical`
- In entrata e l'uscita da `ordered`
- In entrata e l'uscita da `parallel`
- All'uscita da `for`
- All'uscita da `sections`
- All'uscita da `single`
- In entrata e l'uscita da `parallel for`
- In entrata e l'uscita da `parallel sections`

La direttiva non è implicita se un `nowait` clausola è presente. Si noti che il `flush` direttiva non è implicita per le seguenti operazioni:

- Movimento per `for`
- In ingresso da o Esci dal `master`
- Movimento per `sections`
- Movimento per `single`

Un riferimento che accede al valore di un oggetto con un tipo qualificato volatile si comporta come se vi fosse un `flush` direttiva che specifica l'oggetto in corrispondenza del punto di sequenza precedente. Un riferimento che modifica il valore di un oggetto con un tipo qualificato volatile si comporta come se vi fosse un `flush` direttiva che specifica l'oggetto in corrispondenza del punto di sequenza successivo.

Poiché il `flush` direttiva non ha un'istruzione del linguaggio C come parte della relativa sintassi, esistono alcune restrizioni nella relativa posizione all'interno di un programma. Per altre informazioni sulla grammatica formale, vedere [appendice C](c-openmp-c-and-cpp-grammar.md). L'esempio seguente illustra queste restrizioni.

```cpp
/* ERROR - The flush directive cannot be the immediate
*          substatement of an if statement.
*/
if (x!=0)
   #pragma omp flush (x)
...

/* OK - The flush directive is enclosed in a
*      compound statement
*/
if (x!=0) {
   #pragma omp flush (x)
}
```

Restrizioni per il `flush` direttiva sono i seguenti:

- Una variabile specificata un `flush` direttiva non deve avere un tipo di riferimento.

### <a name="266-ordered-construct"></a>2.6.6 ordered costrutto

Il seguente blocco strutturato un `ordered` direttiva viene eseguita nell'ordine in cui le iterazioni vengono eseguite in un ciclo sequenziale. La sintassi del `ordered` direttiva è come segue:

```cpp
#pragma omp ordered new-linestructured-block
```

Un' `ordered` direttiva deve essere entro l'ambito dinamico di un `for` o `parallel for` costruire. Il `for` oppure `parallel for` direttiva a cui il `ordered` associa costrutto deve avere un `ordered` clausola specificata come descritto in [sezione 2.4.1](#241-for-construct). L'esecuzione di un `for` oppure `parallel for` costruire con un `ordered` clausola `ordered` costrutti vengono eseguiti esclusivamente nell'ordine in cui verrebbero eseguite durante l'esecuzione sequenza del ciclo.

Restrizioni per il `ordered` direttiva sono i seguenti:

- Un'iterazione di un ciclo con un `for` costrutto non deve eseguire più volte la stessa direttiva ordinata e non è necessario eseguire più `ordered` direttiva.

## <a name="27-data-environment"></a>2.7 ambiente dei dati

Questa sezione viene presentata una direttiva e numerose clausole per controllare l'ambiente dei dati durante l'esecuzione di aree parallele, come indicato di seguito:

- Oggetto [threadprivate](#271-threadprivate-directive) direttiva viene fornita per rendere locale a un thread di ambito file, dell'ambito dello spazio dei nomi o variabili statico dall'ambito del blocco.

- Le clausole che possono essere specificate per le direttive per controllare gli attributi di condivisione delle variabili per la durata dei costrutti di condivisione del lavoro o paralleli sono descritte nel [sezione 2.7.2](#272-data-sharing-attribute-clauses).

### <a name="271-threadprivate-directive"></a>2.7.1 direttiva threadprivate

Il `threadprivate` directive rende il file-ambito denominato, dell'ambito dello spazio dei nomi o variabili statico dall'ambito del blocco specificate nel *elenco di variabili* privata di un thread. *elenco variabile* è un elenco delimitato da virgole di variabili che non hanno un tipo incompleto. La sintassi del `threadprivate` direttiva è come segue:

```cpp
#pragma omp threadprivate(variable-list) new-line
```

Ogni copia di un `threadprivate` variabile viene inizializzata una sola volta, in un punto specificato nel programma prima il primo riferimento a tale copia e nel modo consueto (ad esempio, come verrebbe inizializzata la copia master durante l'esecuzione del programma seriale). Si noti che se un oggetto viene fatto riferimento in un inizializzatore esplicito di un `threadprivate` variabile e il valore dell'oggetto viene modificato prima il primo riferimento a una copia della variabile, quindi il comportamento non è specificato.

Come con qualsiasi variabile privata, un thread non deve fare riferimento a copia di un altro thread di un `threadprivate` oggetto. Durante le aree seriali e master aree del programma, i riferimenti sarà alla copia del thread principale dell'oggetto.

Dopo l'esecuzione della prima area parallela, i dati nel `threadprivate` oggetti è garantita in modo permanente solo se dinamica thread meccanismo è stato disabilitato e se il numero di thread rimane invariato per tutte le aree parallele.

Le restrizioni per il `threadprivate` direttiva sono i seguenti:

- Oggetto `threadprivate` direttiva per le variabili di ambito file o di ambito dello spazio dei nomi deve trovarsi all'esterno di qualsiasi definizione o dichiarazione e deve precedere lessicalmente tutti i riferimenti a nessuna delle variabili nel relativo elenco.

- Ogni variabile nel *variabile-list* di un `threadprivate` direttiva in ambito file o spazio dei nomi deve fare riferimento a una dichiarazione di variabile nell'ambito del file o spazio dei nomi che deve precede la direttiva.

- Oggetto `threadprivate` direttiva per le variabili statico dall'ambito del blocco deve essere visualizzati nell'ambito della variabile e non in un ambito annidato. La direttiva deve precedere lessicalmente tutti i riferimenti a nessuna delle variabili nel relativo elenco.

- Ogni variabile nel *variabile-list* di un `threadprivate` direttiva nell'ambito del blocco deve fare riferimento a una dichiarazione di variabile nello stesso ambito che deve precede la direttiva. La dichiarazione di variabile debba usare l'identificatore di classe di archiviazione statica.

- Se una variabile viene specificata una `threadprivate` direttiva in un'unità di conversione, è necessario specificarlo un `threadprivate` direttiva in ogni unità di conversione in cui è dichiarata.

- Oggetto `threadprivate` variabile non deve comparire in qualsiasi clausola, ad eccezione di `copyin`, `copyprivate`, `schedule`, `num_threads`, o `if` clausola.

- L'indirizzo di un `threadprivate` variabile non è una costante di indirizzo.

- Oggetto `threadprivate` variabile non deve avere un tipo incompleto o un tipo riferimento.

- Oggetto `threadprivate` variabile con tipo di classe non POD deve avere un costruttore di copia accessibile e non ambiguo se è dichiarata con un inizializzatore esplicito.

Nell'esempio seguente viene illustrato come modificare una variabile che viene visualizzato in un inizializzatore di può causare un comportamento non specificato, nonché come evitare questo problema usando un costruttore di copia e un oggetto ausiliario.

```cpp
int x = 1;
T a(x);
const T b_aux(x); /* Capture value of x = 1 */
T b(b_aux);
#pragma omp threadprivate(a, b)

void f(int n) {
   x++;
   #pragma omp parallel for
   /* In each thread:
   * Object a is constructed from x (with value 1 or 2?)
   * Object b is copy-constructed from b_aux
   */
   for (int i=0; i<n; i++) {
      g(a, b); /* Value of a is unspecified. */
   }
}
```

#### <a name="cross-references"></a>Riferimenti incrociati

- [thread dinamico](3-run-time-library-functions.md#317-omp_set_dynamic-function)
- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic) variabile di ambiente

### <a name="272-data-sharing-attribute-clauses"></a>2.7.2 le clausole di attributi per la condivisione dei dati

Diverse direttive accettano le clausole che consentono all'utente di controllare gli attributi di condivisione delle variabili per la durata dell'area. Condivisione delle clausole di attributi si applicano solo a variabili nell'ambito lessicale della direttiva in cui viene visualizzata la clausola. Non tutte le clausole seguenti sono consentite su tutte le direttive. L'elenco di clausole che sono validi in una direttiva specifica sono descritti con la direttiva.

Se una variabile è visibile quando un'operazione parallela o viene rilevato il costrutto di condivisione del lavoro e la variabile non è specificata nella clausola di attributi di una condivisione o `threadprivate` direttiva, quindi la variabile è condivisa. Le variabili statiche dichiarate entro l'ambito dinamico di un'area parallela vengono condivisi. Heap memoria allocata (ad esempio, usando `malloc()` in C o C++ o il `new` operatore in C++) è condivisa. (Il puntatore alla memoria, tuttavia, possa essere privati o condivisi.) Le variabili con durata di archiviazione automatica dichiarata all'interno di extent dinamica di un'area parallela sono private.

La maggior parte delle clausole di accettare un *elenco di variabili* argomento, ovvero un elenco delimitato da virgole di variabili che sono visibili. Se si fa riferimento una variabile una clausola di attributi di condivisione dei dati è un tipo derivato da un modello e non sono presenti altri riferimenti a tale variabile nel programma, il comportamento sarà indefinito.

Tutte le variabili che vengono visualizzati all'interno di clausole di direttiva devono essere visibile. Le clausole possono essere ripetute in base alle necessità, ma nessuna variabile è possibile specificare più di una clausola, ad eccezione del fatto che una variabile può essere specificata sia in un `firstprivate` e un `lastprivate` clausola.

Le sezioni seguenti descrivono le clausole di attributi per la condivisione dei dati:

- [private](#2721-private)
- [firstprivate](#2722-firstprivate)
- [lastprivate](#2723-lastprivate)
- [shared](#2724-shared)
- [default](#2725-default)
- [reduction](#2726-reduction)
- [copyin](#2727-copyin)
- [copyprivate](#2728-copyprivate)

#### <a name="2721-private"></a>2.7.2.1 private

Il `private` clausola vengono dichiarate le variabili nell'elenco variabili per essere privata per ogni thread in un team. La sintassi del `private` clausola è il seguente:

```cpp
private(variable-list)
```

Il comportamento di una variabile specificata un `private` clausola è come indicato di seguito. Un nuovo oggetto con durata di archiviazione automatica viene allocato per il costrutto. La dimensione e l'allineamento del nuovo oggetto sono determinati dal tipo della variabile. Questa allocazione avviene una volta per ogni thread del team e viene richiamato un costruttore predefinito per un oggetto della classe se necessario; in caso contrario, il valore iniziale è indeterminato.  L'oggetto originale fa riferimento la variabile ha un valore indeterminato al momento dell'accesso a un costrutto non deve essere modificata all'interno di extent dinamico del costrutto e ha un valore indeterminato all'uscita dal costrutto.

Dell'extent lessicale del costrutto direttivo, la variabile fa riferimento il nuovo oggetto privato allocato dal thread.

Le restrizioni per il `private` clausola sono i seguenti:

- Una variabile con un tipo di classe specificato in un `private` clausola deve avere un costruttore predefinito accessibile e non ambigua.

- Una variabile specificata una `private` clausola non deve contenere un `const`-tipo completo, a meno che non dispone di una classe di tipo con un `mutable` membro.

- Una variabile specificata un `private` clausola non deve avere un tipo incompleto o un tipo riferimento.

- Le variabili incluse nella `reduction` clausola di un `parallel` direttiva non è possibile specificare un `private` clausola in una direttiva condivisione del lavoro associata a un costrutto parallelo.

#### <a name="2722-firstprivate"></a>2.7.2.2 firstprivate

Il `firstprivate` clausola offre un soprainsieme delle funzionalità fornite dal `private` clausola. La sintassi del `firstprivate` clausola è il seguente:

```cpp
firstprivate(variable-list)
```

Le variabili specificate nella *variabile-list* hanno `private` semantica clausola, come descritto in [sezione 2.7.2.1](#2721-private). La costruzione o l'inizializzazione avviene come se sono state eseguita una sola volta per ogni thread, prima dell'esecuzione del thread del costrutto. Per un `firstprivate` clausola in un costrutto parallelo, il valore iniziale del nuovo oggetto privato è il valore dell'oggetto originale presente immediatamente prima del costrutto parallelo per il thread che lo rileva. Per un `firstprivate` clausola in un costrutto di condivisione del lavoro, il valore iniziale del nuovo oggetto privato per ogni thread che esegue il costrutto di condivisione del lavoro è il valore dell'oggetto originale che esiste prima del punto nel tempo che lo stesso thread incontra il costrutto di condivisione del lavoro. Inoltre, per gli oggetti C++, il nuovo oggetto privato per ogni thread è copia costruita dall'oggetto originale.

Le restrizioni per il `firstprivate` clausola sono i seguenti:

- Una variabile specificata un `firstprivate` clausola non deve avere un tipo incompleto o un tipo riferimento.

- Una variabile con un tipo di classe specificato come `firstprivate` devono avere un costruttore di copia accessibile e non ambigua.

- Le variabili che appartengono all'interno di un'area parallela o che vengono visualizzate nel `reduction` clausola di una `parallel` direttiva non è possibile specificare un `firstprivate` clausola in una direttiva condivisione del lavoro associata a un costrutto parallelo.

#### <a name="2723-lastprivate"></a>2.7.2.3 lastprivate

Il `lastprivate` clausola offre un soprainsieme delle funzionalità fornite dal `private` clausola. La sintassi del `lastprivate` clausola è il seguente:

```cpp
lastprivate(variable-list)
```

Le variabili specificate nella *variabile-list* hanno `private` semantica clausola. Quando un `lastprivate` viene visualizzata nella direttiva che identifica un costrutto di condivisione del lavoro, il valore di ogni clausola `lastprivate` è assegnare la variabile da in modo sequenziale ultima iterazione del ciclo associato o la direttiva di sezione ultima livello lessicale, il oggetto originale della variabile. Le variabili che non è assegnate un valore dall'ultima iterazione del `for` oppure `parallel for`, o dal livello lessicale ultima sezione del `sections` o `parallel sections` direttiva, presentano valori indeterminati dopo il costrutto. Oggetti secondari non assegnati anche avere un valore indeterminato dopo il costrutto.

Le restrizioni per il `lastprivate` clausola sono i seguenti:

- Tutte le restrizioni per `private` applicare.

- Una variabile con un tipo di classe specificato come `lastprivate` deve avere un operatore di assegnazione copia accessibile e non ambigua.

- Le variabili che appartengono all'interno di un'area parallela o che vengono visualizzate nel `reduction` clausola di una `parallel` direttiva non è possibile specificare un `lastprivate` clausola in una direttiva condivisione del lavoro associata a un costrutto parallelo.

#### <a name="2724-shared"></a>2.7.2.4 shared

Questa clausola condivide le variabili incluse nella *elenco di variabili* tra tutti i thread in un team. La stessa area di archiviazione per accedano a tutti i thread all'interno di un team `shared` variabili.

La sintassi del `shared` clausola è il seguente:

```cpp
shared(variable-list)
```

#### <a name="2725-default"></a>2.7.2.5 default

Il `default` clausola consente all'utente interessano gli attributi di condivisione dei dati delle variabili. La sintassi del `default` clausola è il seguente:

```cpp
default(shared | none)
```

Che specifica `default(shared)` equivale a elencare in modo esplicito ogni variabile attualmente visibile in un `shared` clausola, a meno che non è `threadprivate` o `const`-completo. In assenza di esplicita `default` clausola, il comportamento predefinito è identico se `default(shared)` sono state specificate.

Specifica di `default(none)` richiede che almeno uno dei seguenti deve essere true per ogni riferimento a una variabile nell'ambito lessicale di costrutto parallelo:

- La variabile è elencata in modo esplicito in una clausola di attributi di condivisione dei dati di un costrutto che contiene il riferimento.

- La variabile è dichiarata all'interno di un costrutto parallelo.

- La variabile è `threadprivate`.

- La variabile ha una `const`-tipo completo.

- La variabile è la variabile di controllo per un `for` ciclo che seguirà immediatamente un `for` o `parallel for` direttiva e il riferimento alla variabile viene visualizzata all'interno del ciclo.

Specifica una variabile in un `firstprivate`, `lastprivate`, o `reduction` clausola di una direttiva racchiusa provoca un riferimento implicito per la variabile nel contesto di inclusione. Tali riferimenti impliciti sono inoltre soggetti a requisiti elencati in precedenza.

Una sola `default` clausola può essere specificata su un `parallel` direttiva.

Predefinito della variabile possono essere sottoposto a override di attributi per la condivisione dei dati usando il `private`, `firstprivate`, `lastprivate`, `reduction`, e `shared` clausole, come illustrato nell'esempio seguente:

```cpp
#pragma  omp  parallel  for  default(shared)  firstprivate(i)\
   private(x)  private(r)  lastprivate(i)
```

#### <a name="2726-reduction"></a>2.7.2.6 reduction

Questa clausola esegue una riduzione delle variabili scalari vengono visualizzati nella *variabile-list*, con l'operatore *op*. La sintassi del `reduction` clausola è il seguente:

`reduction(` *op* `:` *variable-list* `)`

Una riduzione viene in genere specificata per un'istruzione con uno dei formati seguenti:

- *x* `=` *x* *op* *expr*
- *x* *binop* `=` *expr*
- *x* `=` *expr* *op* *x*  (except for subtraction)
- *x* `++`
- `++` *x*
- *x* `--`
- `--` *x*

dove:

*x*<br/>
Uno dei valori di variabili di riduzione specificate nell'elenco.

*variable-list*<br/>
Elenco delimitato da virgole di variabili di riduzione scalare.

*expr*<br/>
Un'espressione con tipo scalare che non fa riferimento *x*.

*op*<br/>
Non un operatore di overload, ma uno dei `+`, `*`, `-`, `&`, `^`, `|`, `&&`, o `||`.

*binop*<br/>
Non un operatore di overload, ma uno dei `+`, `*`, `-`, `&`, `^`, o `|`.

Di seguito è riportato un esempio del `reduction` clausola:

```cpp
#pragma omp parallel for reduction(+: a, y) reduction(||: am)
for (i=0; i<n; i++) {
   a += b[i];
   y = sum(y, c[i]);
   am = am || b[i] == c[i];
}
```

Come illustrato nell'esempio, un operatore può essere nascosta all'interno di una chiamata di funzione. L'utente deve prestare attenzione che l'operatore specificato nel `reduction` clausola corrisponde all'operazione di riduzione.

Anche se l'operando destro del `||` operatore non ha effetti collaterali in questo esempio, è consentiti, ma deve essere utilizzate con cautela. In questo contesto, un effetto collaterale che ha garantito che non si verificano durante l'esecuzione sequenziale del ciclo può verificarsi durante l'esecuzione parallela. Questa differenza può verificarsi perché l'ordine di esecuzione delle iterazioni è indeterminato.

L'operatore viene usato per determinare il valore iniziale di tutte le variabili private usato dal compilatore per la riduzione e per determinare l'operatore di finalizzazione. Specificare in modo esplicito l'operatore consente l'istruzione di riduzione di fuori l'ambito lessicale del costrutto. Un numero qualsiasi di `reduction` clausole possono essere specificate nella direttiva, ma potrebbe sembrare una variabile in uno `reduction` clausola per tale direttiva.

Una copia privata di ogni variabile nel *variabile-list* viene creato, uno per ogni thread, come se il `private` clausola fosse stata usata. La copia privata viene inizializzata in base all'operatore (vedere la tabella seguente).

Alla fine dell'area per il quale il `reduction` clausola è stata specificata, l'oggetto originale viene aggiornato per riflettere il risultato della combinazione il valore originale con il valore finale della ognuno delle copie private usando l'operatore specificato. Gli operatori di riduzione sono tutti associativi (ad eccezione di sottrazione), e il compilatore può liberamente riassociare il calcolo del valore finale. (Per formare il valore finale vengono aggiunti i risultati parziali di una riduzione di sottrazione).

Il valore dell'oggetto originale diventa indeterminato quando il primo thread che raggiunge la clausola che lo contiene e rimarrà tale finché non viene completato il calcolo di riduzione.  In genere, il calcolo sarà completato al termine del costrutto; Tuttavia, se il `reduction` clausola viene utilizzata in un costrutto a cui `nowait` viene anche applicato, il valore dell'oggetto originale rimane indeterminato fino a quando non è stata eseguita una sincronizzazione ostacolo per garantire che tutti i thread sono state completate le `reduction`clausola.

Nella tabella seguente sono elencati gli operatori validi e i relativi valori di inizializzazione canonico. Il valore di inizializzazione effettivo sarà coerenza con il tipo di dati della variabile di riduzione.

|Operatore|Inizializzazione|
|--------------|--------------------|
|`+`|0|
|`*`|1|
|`-`|0|
|`&`|~0|
|`|`|0|
|`^`|0|
|`&&`|1|
|`||`|0|

Le restrizioni per il `reduction` clausola sono i seguenti:

- Il tipo delle variabili nella `reduction` clausola deve essere valido per l'operatore di riduzione, ad eccezione del fatto che i tipi di puntatore e tipi di riferimento non sono consentiti.

- Una variabile specificata nella `reduction` clausola non deve essere `const`-completo.

- Le variabili che appartengono all'interno di un'area parallela o che vengono visualizzate nel `reduction` clausola di una `parallel` direttiva non è possibile specificare un `reduction` clausola in una direttiva condivisione del lavoro associata a un costrutto parallelo.

   ```cpp
   #pragma omp parallel private(y)
   { /* ERROR - private variable y cannot be specified
                in a reduction clause */
      #pragma omp for reduction(+: y)
      for (i=0; i<n; i++)
         y += b[i];
   }

   /* ERROR - variable x cannot be specified in both
              a shared and a reduction clause */
   #pragma omp parallel for shared(x) reduction(+: x)
   ```

#### <a name="2727-copyin"></a>2.7.2.7 copyin

Il `copyin` clausola fornisce un meccanismo per assegnare lo stesso valore per `threadprivate` variabili per ogni thread del team l'esecuzione di tale area. Per ogni variabile specificata un `copyin` clausola, il valore della variabile nel thread master del team a cui viene copiato, come se fosse assegnazione, per le copie di thread privato all'inizio dell'area parallela. La sintassi del `copyin` clausola è il seguente:

```cpp

copyin(
variable-list
)
```

Le restrizioni per il `copyin` clausola sono i seguenti:

- Una variabile specificata nella `copyin` clausola deve avere un operatore di assegnazione copia accessibile e non ambigua.

- Una variabile specificata nella `copyin` clausola deve essere un `threadprivate` variabile.

#### <a name="2728-copyprivate"></a>2.7.2.8 copyprivate

Il `copyprivate` clausola fornisce un meccanismo per usare una variabile privata per la trasmissione di un valore da un membro di un team agli altri membri. Rappresenta un'alternativa all'uso di una variabile condivisa per il valore quando si fornisce questo tipo una variabile condivisa sarebbe difficile (ad esempio, in una ricorsione che richiedono una variabile diversa a ogni livello). Il `copyprivate` clausola può apparire solo il `single` direttiva.

La sintassi del `copyprivate` clausola è il seguente:

```cpp

copyprivate(
variable-list
)
```

L'effetto del `copyprivate` clausola sulle variabili nel relativo elenco di variabili si verifica dopo l'esecuzione del blocco strutturato associato il `single` costruire, e prima di thread del team hanno lasciato la barriera alla fine del costrutto. Quindi, in tutti gli altri thread del team, per ogni variabile nel *elenco di variabili*, tale variabile diventa definita (come se fosse assegnazione) con il valore dell'oggetto corrispondente strutturata di variabile nel thread che ha eseguito il costrutto blocco.

Restrizioni per il `copyprivate` clausola sono i seguenti:

- Una variabile specificata nella `copyprivate` clausola non deve comparire in una `private` o `firstprivate` clausola per lo stesso `single` direttiva.

- Se un `single` direttiva con un `copyprivate` clausola viene rilevata nell'extent dinamica di un'area parallela, tutte le variabili specificate nel `copyprivate` clausola deve essere privata nel contesto di inclusione.

- Una variabile specificata nella `copyprivate` clausola deve avere un operatore di assegnazione di copia non ambiguo accessibile.

## <a name="28-directive-binding"></a>2.8 associazione di direttive

Associazione dinamica di direttive deve essere conformi alle regole seguenti:

- Il `for`, `sections`, `single`, `master`, e `barrier` associare le direttive per il contenitore in modo dinamico `parallel`, se ne esiste uno, indipendentemente dal valore di qualsiasi `if` clausola che possono essere presente su esso direttiva. Se nessuna area parallela è in fase di esecuzione, le direttive vengono eseguite da un team composto da solo il thread master.

- Il `ordered` direttiva associa per l'inclusione in modo dinamico `for`.

- Il `atomic` direttiva applica accesso esclusivo alle `atomic` direttive in tutti i thread, non solo il team corrente.

- Il `critical` direttiva applica accesso esclusivo alle `critical` direttive in tutti i thread, non solo il team corrente.

- Una direttiva mai possibile associare in modo dinamico a qualsiasi direttiva di fuori il più vicino che li racchiude `parallel`.

## <a name="29-directive-nesting"></a>2.9 annidamento di direttive

Annidamento dinamico delle direttive deve essere conformi alle regole seguenti:

- Oggetto `parallel` direttiva in modo dinamico all'interno di altro `parallel` logicamente stabilisce un nuovo team, che è costituito dal solo il thread corrente, a meno che non annidati di parallelismo è abilitato.

- `for`, `sections`, e `single` direttive che associano agli stessi `parallel` non possono essere annidati all'interno di altre.

- `critical` direttive con lo stesso nome non sono autorizzate a essere annidato all'interno di altre. Si noti che questa restrizione non è sufficiente per impedire un deadlock.

- `for`, `sections`, e `single` direttive non sono consentite nella portata dinamica della `critical`, `ordered`, e `master` aree se eseguire l'associazione di direttive allo stesso `parallel` come le aree.

- `barrier` non sono consentite le direttive dell'extent dinamico dei `for`, `ordered`, `sections`, `single`, `master`, e `critical` aree se eseguire l'associazione di direttive allo stesso `parallel` come le aree.

- `master` non sono consentite le direttive dell'extent dinamico dei `for`, `sections`, e `single` direttive se il `master` direttive associati allo stesso `parallel` come direttive di condivisione del lavoro.

- `ordered` non sono consentite le direttive dell'extent dinamica di `critical` aree se eseguire l'associazione di direttive allo stesso `parallel` come le aree.

- Le direttive che sono consentita quando eseguita in modo dinamico all'interno di un'area parallela sono consentita anche se eseguita all'esterno di un'area parallela. Quando viene eseguita in modo dinamico di fuori di un'area parallela specificata dall'utente, la direttiva viene eseguita da un team composto da solo il thread master.
