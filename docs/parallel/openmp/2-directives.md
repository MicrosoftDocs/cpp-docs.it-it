---
title: 2. Direttive
ms.date: 01/18/2019
ms.assetid: d1a69374-6c03-45fb-8c86-e91cea8adae8
ms.openlocfilehash: 125d2d83b277e62d007e3a208e426ea717d52790
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78882859"
---
# <a name="2-directives"></a>2. Direttive

Le direttive sono basate su direttive `#pragma` definite negli standard C C++ e.  I compilatori che supportano OpenMP C C++ e API includeranno un'opzione della riga di comando che attiva e consente l'interpretazione di tutte le direttive del compilatore OpenMP.

## <a name="21-directive-format"></a>2,1 formato della direttiva

La sintassi di una direttiva OpenMP viene formalmente specificata dalla grammatica nell' [Appendice C](c-openmp-c-and-cpp-grammar.md)e, in modo informale, come segue:

```cpp
#pragma omp directive-name  [clause[ [,] clause]...] new-line
```

Ogni direttiva inizia con `#pragma omp`, per ridurre il rischio di conflitti con le direttive pragma (non OpenMP o Vendor Extensions per OpenMP) con gli stessi nomi. Il resto della direttiva segue le convenzioni del linguaggio C e C++ degli standard per le direttive del compilatore. In particolare, gli spazi vuoti possono essere utilizzati prima e dopo l'`#`e in alcuni casi è necessario utilizzare gli spazi vuoti per separare le parole in una direttiva. I token di pre-elaborazione che seguono il `#pragma omp` sono soggetti alla sostituzione della macro.

Le direttive fanno distinzione tra maiuscole e minuscole. L'ordine in cui le clausole vengono visualizzate nelle direttive non è significativo. Le clausole sulle direttive possono essere ripetute in base alle esigenze, in base alle restrizioni elencate nella descrizione di ogni clausola. Se in una clausola viene visualizzata l'opzione *Variable-list* , è necessario specificare solo le variabili. È possibile specificare solo un *nome di direttiva* per ogni direttiva.  Ad esempio, la direttiva seguente non è consentita:

```cpp
/* ERROR - multiple directive names not allowed */
#pragma omp parallel barrier
```

Una direttiva OpenMP si applica al massimo un'istruzione successiva, che deve essere un blocco strutturato.

## <a name="22-conditional-compilation"></a>2,2 compilazione condizionale

Il nome della macro `_OPENMP` viene definito dalle implementazioni conformi a OpenMP come la costante decimale *YYYYMM*, che sarà l'anno e il mese della specifica approvata. Questa macro non deve essere l'oggetto di un `#define` o una direttiva di pre-elaborazione `#undef`.

```cpp
#ifdef _OPENMP
iam = omp_get_thread_num() + index;
#endif
```

Se i fornitori definiscono estensioni a OpenMP, possono specificare altre macro predefinite.

## <a name="23-parallel-construct"></a>2,3 costrutto parallelo

La direttiva seguente definisce un'area parallela, ovvero un'area del programma che deve essere eseguita da molti thread in parallelo. Questa direttiva è il costrutto fondamentale che avvia l'esecuzione parallela.

```cpp
#pragma omp parallel [clause[ [, ]clause] ...] new-line   structured-block
```

La *clausola* è uno dei seguenti:

- `if(` *scalare-espressione* `)`
- `private(` *elenco variabili* `)`
- `firstprivate(` *elenco variabili* `)`
- `default(shared | none)`
- `shared(` *elenco variabili* `)`
- `copyin(` *elenco variabili* `)`
- *operatore* `reduction(` `:`*elenco di variabili* `)`
- `num_threads(` *espressione integer* `)`

Quando un thread raggiunge un costrutto parallelo, viene creato un team di thread se si verifica uno dei casi seguenti:

- Non è presente alcuna clausola `if`.
- L'espressione `if` restituisce un valore diverso da zero.

Questo thread diventa il thread master del team, con un numero di thread pari a 0 e tutti i thread del team, incluso il thread master, eseguono l'area in parallelo. Se il valore dell'espressione `if` è zero, l'area viene serializzata.

Per determinare il numero di thread richiesti, le regole seguenti verranno considerate in ordine. Verrà applicata la prima regola di cui viene soddisfatta la condizione:

1. Se la clausola `num_threads` è presente, il valore dell'espressione Integer è il numero di thread richiesti.

1. Se è stata chiamata la funzione della libreria `omp_set_num_threads`, il valore dell'argomento nella chiamata eseguita più di recente è il numero di thread richiesti.

1. Se la variabile di ambiente `OMP_NUM_THREADS` è definita, il valore di questa variabile di ambiente è il numero di thread richiesti.

1. Se non viene usato nessuno dei metodi precedenti, il numero di thread richiesti è definito dall'implementazione.

Se la clausola `num_threads` è presente, sostituisce il numero di thread richiesti dalla funzione della libreria `omp_set_num_threads` o dalla variabile di ambiente `OMP_NUM_THREADS` solo per l'area parallela a cui è applicato. Le aree parallele successive non sono interessate.

Il numero di thread che eseguono l'area parallela dipende anche dal fatto che la regolazione dinamica del numero di thread sia abilitata. Se la regolazione dinamica è disabilitata, il numero richiesto di thread eseguirà l'area parallela. Se la regolazione dinamica è abilitata, il numero di thread richiesto è il numero massimo di thread che possono eseguire l'area parallela.

Se viene rilevata un'area parallela mentre la regolazione dinamica del numero di thread è disabilitata e il numero di thread richiesti per l'area parallela è superiore al numero che il sistema di runtime può fornire, il comportamento del programma è definito dall'implementazione. Un'implementazione può, ad esempio, interrompere l'esecuzione del programma o potrebbe serializzare l'area parallela.

È possibile utilizzare la funzione della libreria `omp_set_dynamic` e la variabile di ambiente `OMP_DYNAMIC` per abilitare e disabilitare la regolazione dinamica del numero di thread.

Il numero di processori fisici che ospitano effettivamente i thread in un determinato momento è definito dall'implementazione. Una volta creato, il numero di thread nel team rimane costante per la durata dell'area parallela. Può essere modificato in modo esplicito dall'utente o automaticamente dal sistema di runtime da un'area parallela a un'altra.

Le istruzioni contenute nell'extent dinamico dell'area parallela vengono eseguite da ogni thread e ogni thread può eseguire un percorso di istruzioni diverso dagli altri thread. Le direttive rilevate al di fuori dell'extent lessicale di un'area parallela sono denominate direttive orfane.

Esiste una barriera implicita alla fine di un'area parallela. Solo il thread master del team continua l'esecuzione alla fine di un'area parallela.

Se un thread in un team che esegue un'area parallela incontra un altro costrutto parallelo, viene creato un nuovo team che diventa il master del nuovo team. Per impostazione predefinita, le aree parallele nidificate vengono serializzate. Di conseguenza, per impostazione predefinita, un'area parallela nidificata viene eseguita da un team composto da un solo thread. Il comportamento predefinito può essere modificato tramite la funzione della libreria di runtime `omp_set_nested` o la variabile di ambiente `OMP_NESTED`. Tuttavia, il numero di thread in un team che esegue un'area parallela annidata è definito dall'implementazione.

Di seguito sono riportate le restrizioni per la direttiva `parallel`:

- Nella direttiva può essere presente al massimo una clausola `if`.

- Non è specificato se si verificano effetti collaterali nell'espressione if o `num_threads`.

- Un `throw` eseguito all'interno di un'area parallela deve causare la ripresa dell'esecuzione all'interno dell'extent dinamico dello stesso blocco strutturato e deve essere rilevata dallo stesso thread che ha generato l'eccezione.

- Nella direttiva può essere presente solo una singola clausola `num_threads`. L'espressione `num_threads` viene valutata all'esterno del contesto dell'area parallela e deve restituire un valore integer positivo.

- L'ordine di valutazione delle clausole `if` e `num_threads` non è specificato.

### <a name="cross-references"></a>Riferimenti incrociati

- clausole `private`, `firstprivate`, `default`, `shared`, `copyin`e `reduction` ([sezione 2.7.2](#272-data-sharing-attribute-clauses))
- Variabile di ambiente [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads)
- funzione della libreria [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function)
- Variabile di ambiente [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic)
- funzione [omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function)
- Variabile di ambiente [OMP_NESTED](4-environment-variables.md#44-omp_nested)
- funzione della libreria [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function)

## <a name="24-work-sharing-constructs"></a>2,4 costrutti di condivisione del lavoro

Un costrutto di condivisione del lavoro distribuisce l'esecuzione dell'istruzione associata tra i membri del team che lo incontrano. Le direttive di condivisione del lavoro non avviano nuovi thread e non esiste alcuna barriera implicita sulla voce per un costrutto di condivisione del lavoro.

La sequenza dei costrutti di condivisione del lavoro e delle direttive `barrier` rilevate deve essere la stessa per ogni thread in un team.

OpenMP definisce i costrutti di condivisione del lavoro seguenti e questi costrutti sono descritti nelle sezioni che seguono:

- [for](#241-for-construct) (direttiva)
- [sections](#242-sections-construct) (direttiva)
- [Single](#243-single-construct) (direttiva)

### <a name="241-for-construct"></a>2.4.1 per costrutto

La direttiva `for` identifica un costrutto di condivisione del lavoro iterativo che specifica che le iterazioni del ciclo associato verranno eseguite in parallelo. Le iterazioni del ciclo `for` vengono distribuite tra thread già esistenti nel team che esegue il costrutto parallelo a cui è associato. La sintassi del costrutto di `for` è la seguente:

```cpp
#pragma omp for [clause[[,] clause] ... ] new-line for-loop
```

La clausola è uno dei seguenti:

- `private(` *elenco variabili* `)`
- `firstprivate(` *elenco variabili* `)`
- `lastprivate(` *elenco variabili* `)`
- *operatore* `reduction(` `:` *elenco di variabili* `)`
- `ordered`
- `schedule(` *Kind* [`,` *chunk_size*] `)`
- `nowait`

La direttiva `for` impone restrizioni sulla struttura del ciclo `for` corrispondente. In particolare, il ciclo di `for` corrispondente deve avere una forma canonica:

`for (` *init-expr* `;` *var Logical-op b* `;` *incr-expr* `)`

*init-expr*<br/>
Uno dei seguenti:

- *var* = *lb*
- *var di tipo integer* = *lb*

*incr-expr*<br/>
Uno dei seguenti:

- `++` *var*
- `++` *var*
- `--` *var*
- `--` *var*
- *var* `+=` *incr*
- *var* `-=` *incr*
- *var* `=` *var* `+` *incr*
- *var* `=` *incr* `+` *var*
- *var* `=` *var* `-` *incr*

*var*<br/>
Variabile di tipo integer con segno. Se questa variabile viene altrimenti condivisa, viene implicitamente privata per la durata del `for`. Non modificare questa variabile all'interno del corpo dell'istruzione `for`. A meno che la variabile non sia specificata `lastprivate`, il relativo valore dopo il ciclo è indeterminato.

*operazione logica*<br/>
Uno dei seguenti:

- `<`
- `<=`
- `>`
- `>=`

*lb*, *b*e *incr*<br>
Espressioni Integer invarianti del ciclo. Non viene eseguita alcuna sincronizzazione durante la valutazione di queste espressioni, pertanto tutti gli effetti collaterali valutati producono risultati indeterminati.

Il formato canonico consente di calcolare il numero di iterazioni del ciclo in una voce del ciclo. Questo calcolo viene effettuato con i valori nel tipo di *var*, dopo le promozioni integrali. In particolare, se il valore di *b* `-` *lb* `+` *incr* non può essere rappresentato in quel tipo, il risultato è indeterminato. Inoltre, se *Logical-op* è `<` o `<=`, *incr-expr* deve causare l'aumento di *var* a ogni iterazione del ciclo.   Se *Logical-op* è `>` o `>=`, *incr-expr* deve causare la minore quantità di *var* a ogni iterazione del ciclo.

La clausola `schedule` specifica il modo in cui le iterazioni del ciclo `for` sono divise tra i thread del team. La correttezza di un programma non deve dipendere dal thread che esegue una determinata iterazione. Il valore di *chunk_size*, se specificato, deve essere un'espressione Integer invariante del ciclo con un valore positivo. Non viene eseguita alcuna sincronizzazione durante la valutazione dell'espressione, pertanto tutti gli effetti collaterali valutati producono risultati indeterminati. Il *tipo* di pianificazione può essere uno dei valori seguenti:

Tabella 2-1: valori *Kind* della clausola `schedule`

|||
|-|-|
|statiche|Quando si specifica `schedule(static,` *chunk_size* `)`, le iterazioni vengono divise in blocchi di dimensioni specificate da *chunk_size*. I blocchi vengono assegnati staticamente ai thread del team in base a una modalità Round Robin nell'ordine del numero del thread. Quando non viene specificato alcun *chunk_size* , lo spazio di iterazione è diviso in blocchi di dimensioni approssimativamente uguali, con un blocco assegnato a ogni thread.|
|dynamic|Quando si specifica `schedule(dynamic,` *chunk_size* `)`, le iterazioni sono divise in una serie di blocchi, ognuno dei quali contiene *chunk_size* iterazioni. Ogni blocco viene assegnato a un thread in attesa di un'assegnazione. Il thread esegue il blocco di iterazioni e quindi attende la successiva assegnazione, fino a quando non rimane alcun blocco da assegnare. L'ultimo blocco da assegnare può avere un numero inferiore di iterazioni. Quando non viene specificato alcun *chunk_size* , il valore predefinito è 1.|
|guidato|Quando si specifica `schedule(guided,` *chunk_size* `)`, le iterazioni vengono assegnate ai thread in blocchi con dimensioni decrescenti. Quando un thread termina il blocco di iterazioni assegnato, viene assegnato dinamicamente a un altro blocco, fino a quando non ne viene lasciato nessuno. Per un *chunk_size* di 1, le dimensioni di ogni blocco corrispondono approssimativamente al numero di iterazioni non assegnate divise per il numero di thread. Queste dimensioni diminuiscono quasi esponenzialmente a 1. Per un *chunk_size* con valore *k* maggiore di 1, le dimensioni diminuiscono in modo quasi esponenziale fino a *k*, ad eccezione del fatto che l'ultimo blocco può contenere meno di *k* iterazioni. Quando non viene specificato alcun *chunk_size* , il valore predefinito è 1.|
|runtime|Quando si specifica `schedule(runtime)`, la decisione relativa alla pianificazione viene posticipata fino al runtime. Il *tipo* di pianificazione e le dimensioni dei blocchi possono essere scelti in fase di esecuzione impostando la variabile di ambiente `OMP_SCHEDULE`. Se questa variabile di ambiente non è impostata, la pianificazione risultante è definita dall'implementazione. Quando si specifica `schedule(runtime)`, *chunk_size* non deve essere specificato.|

In assenza di una clausola `schedule` definita in modo esplicito, il `schedule` predefinito è definito dall'implementazione.

Un programma conforme a OpenMP non deve basarsi su una pianificazione specifica per l'esecuzione corretta. Un programma non deve basarsi su un *tipo* di pianificazione conforme esattamente alla descrizione indicata sopra, perché è possibile avere variazioni nelle implementazioni dello stesso *tipo* di pianificazione tra diversi compilatori. È possibile utilizzare le descrizioni per selezionare la pianificazione appropriata per una determinata situazione.

Quando le direttive `ordered` vengono associate al costrutto `for`, è necessario che la clausola `ordered` sia presente.

Esiste una barriera implicita alla fine di un costrutto di `for` a meno che non venga specificata una clausola `nowait`.

Di seguito sono riportate le restrizioni per la direttiva `for`:

- Il ciclo di `for` deve essere un blocco strutturato e, inoltre, l'esecuzione non deve terminare con un'istruzione `break`.

- I valori delle espressioni di controllo del ciclo del ciclo `for` associato a una direttiva di `for` devono essere uguali per tutti i thread del team.

- La variabile di iterazione del ciclo `for` deve avere un tipo integer con segno.

- In una direttiva `for` è possibile visualizzare solo una singola clausola `schedule`.

- In una direttiva `for` è possibile visualizzare solo una singola clausola `ordered`.

- In una direttiva `for` è possibile visualizzare solo una singola clausola `nowait`.

- Non è specificato se o con quale frequenza si verificano gli effetti collaterali all'interno delle espressioni *chunk_size*, *lb*, *b*o *incr* .

- Il valore dell'espressione *chunk_size* deve essere lo stesso per tutti i thread del team.

#### <a name="cross-references"></a>Riferimenti incrociati

- clausole `private`, `firstprivate`, `lastprivate`e `reduction` ([sezione 2.7.2](#272-data-sharing-attribute-clauses))
- Variabile di ambiente [OMP_SCHEDULE](4-environment-variables.md#41-omp_schedule)
- costrutto [ordinato](#266-ordered-construct)
- clausola [Schedule](d-using-the-schedule-clause.md)

### <a name="242-sections-construct"></a>2.4.2 Costrutto sections

La direttiva `sections` identifica un costrutto di condivisione del lavoro non iterativo che specifica un set di costrutti che devono essere divisi tra i thread di un team. Ogni sezione viene eseguita una sola volta da un thread del team. La sintassi della direttiva `sections` è la seguente:

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

- `private(` *elenco variabili* `)`
- `firstprivate(` *elenco variabili* `)`
- `lastprivate(` *elenco variabili* `)`
- *operatore* `reduction(` `:`*elenco di variabili* `)`
- `nowait`

Ogni sezione è preceduta da una direttiva `section`, anche se la direttiva `section` è facoltativa per la prima sezione. Le direttive `section` devono essere incluse nell'ambito lessicale della direttiva `sections`. Esiste una barriera implicita alla fine di un costrutto di `sections`, a meno che non venga specificata una `nowait`.

Di seguito sono riportate le restrizioni per la direttiva `sections`:

- Una direttiva `section` non deve essere visualizzata al di fuori dell'extent lessicale della direttiva `sections`.

- In una direttiva `sections` è possibile visualizzare solo una singola clausola `nowait`.

#### <a name="cross-references"></a>Riferimenti incrociati

- clausole `private`, `firstprivate`, `lastprivate`e `reduction` ([sezione 2.7.2](#272-data-sharing-attribute-clauses))

### <a name="243-single-construct"></a>2.4.3 costrutto singolo

La direttiva `single` identifica un costrutto che specifica che il blocco strutturato associato viene eseguito da un solo thread del team (non necessariamente il thread master). La sintassi della direttiva `single` è la seguente:

```cpp
#pragma omp single [clause[[,] clause] ...] new-linestructured-block
```

La clausola è uno dei seguenti:

- `private(` *elenco variabili* `)`
- `firstprivate(` *elenco variabili* `)`
- `copyprivate(` *elenco variabili* `)`
- `nowait`

Esiste una barriera implicita dopo il costrutto di `single`, a meno che non venga specificata una clausola `nowait`.

Di seguito sono riportate le restrizioni per la direttiva `single`:

- In una direttiva `single` è possibile visualizzare solo una singola clausola `nowait`.
- La clausola `copyprivate` non deve essere utilizzata con la clausola `nowait`.

#### <a name="cross-references"></a>Riferimenti incrociati

- clausole `private`, `firstprivate`e `copyprivate` ([sezione 2.7.2](#272-data-sharing-attribute-clauses))

## <a name="25-combined-parallel-work-sharing-constructs"></a>2,5 costrutti di condivisione del lavoro paralleli combinati

I costrutti di condivisione del lavoro paralleli combinati sono collegamenti per specificare un'area parallela con un solo costrutto di condivisione del lavoro. La semantica di queste direttive equivale a specificare in modo esplicito una direttiva `parallel` seguita da un singolo costrutto di condivisione del lavoro.

Nelle sezioni seguenti vengono descritti i costrutti di condivisione del lavoro paralleli combinati:

- [parallel for](#251-parallel-for-construct) (direttiva)
- [Parallel sections](#252-parallel-sections-construct) (direttiva)

### <a name="251-parallel-for-construct"></a>2.5.1 parallelo per costrutto

La direttiva `parallel for` è un collegamento per un'area `parallel` che contiene una sola direttiva di `for`. La sintassi della direttiva `parallel for` è la seguente:

```cpp
#pragma omp parallel for [clause[[,] clause] ...] new-linefor-loop
```

Questa direttiva consente tutte le clausole della direttiva `parallel` e della direttiva `for`, ad eccezione della clausola `nowait`, con significati e restrizioni identici. La semantica equivale a specificare in modo esplicito una direttiva `parallel` seguita immediatamente da una direttiva `for`.

#### <a name="cross-references"></a>Riferimenti incrociati

- [Parallel](#23-parallel-construct) (direttiva)
- [for](#241-for-construct) (direttiva)
- [Clausole degli attributi dati](#272-data-sharing-attribute-clauses)

### <a name="252-parallel-sections-construct"></a>costrutto 2.5.2 Parallel Sections

La direttiva `parallel sections` fornisce un modulo di scelta rapida per specificare un'area `parallel` con una sola direttiva di `sections`. La semantica equivale a specificare in modo esplicito una direttiva `parallel` seguita immediatamente da una direttiva `sections`. La sintassi della direttiva `parallel sections` è la seguente:

```cpp
#pragma omp parallel sections  [clause[[,] clause] ...] new-line
   {
   [#pragma omp section new-line]
      structured-block
   [#pragma omp section new-linestructured-block  ]
   ...
}
```

La *clausola* può essere una delle clausole accettate dalle direttive `parallel` e `sections`, ad eccezione della clausola `nowait`.

#### <a name="cross-references"></a>Riferimenti incrociati

- [Parallel](#23-parallel-construct) (direttiva)
- [sections](#242-sections-construct) (direttiva)

## <a name="26-master-and-synchronization-directives"></a>2,6 direttive master e di sincronizzazione

Le sezioni seguenti descrivono:

- costrutto [Master](#261-master-construct)
- costrutto [critico](#262-critical-construct)
- [Barrier](#263-barrier-directive) (direttiva)
- costrutto [atomico](#264-atomic-construct)
- [Flush](#265-flush-directive) (direttiva)
- costrutto [ordinato](#266-ordered-construct)

### <a name="261-master-construct"></a>costrutto Master 2.6.1

La direttiva `master` identifica un costrutto che specifica un blocco strutturato eseguito dal thread master del team. La sintassi della direttiva `master` è la seguente:

```cpp
#pragma omp master new-linestructured-block
```

Gli altri thread del team non eseguono il blocco strutturato associato. Non esiste alcuna barriera implicita in ingresso o in uscita dal costrutto master.

### <a name="262-critical-construct"></a>costrutto critico 2.6.2

La direttiva `critical` identifica un costrutto che limita l'esecuzione del blocco strutturato associato a un singolo thread alla volta. La sintassi della direttiva `critical` è la seguente:

```cpp
#pragma omp critical [(name)]  new-linestructured-block
```

Per identificare l'area critica, è possibile usare un *nome* facoltativo. Gli identificatori usati per identificare un'area critica hanno un collegamento esterno e si trovano in uno spazio dei nomi distinto dagli spazi dei nomi usati da etichette, tag, membri e identificatori normali.

Un thread attende all'inizio di un'area critica finché nessun altro thread sta eseguendo un'area critica (in qualsiasi punto del programma) con lo stesso nome. Tutte le direttive `critical` senza nome vengono mappate allo stesso nome non specificato.

### <a name="263-barrier-directive"></a>direttiva 2.6.3 Barrier

La direttiva `barrier` Sincronizza tutti i thread in un team. Quando viene rilevata, ogni thread del team attende che tutti gli altri abbiano raggiunto questo punto. La sintassi della direttiva `barrier` è la seguente:

```cpp
#pragma omp barrier new-line
```

Dopo che tutti i thread del team hanno rilevato la barriera, ogni thread del team inizia a eseguire le istruzioni dopo la direttiva Barrier in parallelo. Poiché la direttiva `barrier` non dispone di un'istruzione del linguaggio C come parte della relativa sintassi, esistono alcune restrizioni relative alla posizione all'interno di un programma. Per ulteriori informazioni sulla grammatica formale, vedere [Appendice C](c-openmp-c-and-cpp-grammar.md). Nell'esempio seguente vengono illustrate queste restrizioni.

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

### <a name="264-atomic-construct"></a>costrutto atomico 2.6.4

La direttiva `atomic` garantisce che una posizione di memoria specifica venga aggiornata in modo atomico, anziché esporla alla possibilità di più thread di scrittura simultanei. La sintassi della direttiva `atomic` è la seguente:

```cpp
#pragma omp atomic new-lineexpression-stmt
```

L'istruzione expression deve avere uno dei seguenti formati:

- *x binop* `=` *expr*
- *x* `++`
- `++` *x*
- *x* `--`
- `--` *x*

Nelle espressioni precedenti:

- *x* è un'espressione lvalue con tipo scalare.

- *expr* è un'espressione con tipo scalare e non fa riferimento all'oggetto designato da *x*.

- *binop* non è un operatore di overload e è uno dei `+`, `*`, `-`, `/`, `&`, `^`, `|`, `<<`o `>>`.

Sebbene sia definito dall'implementazione se un'implementazione sostituisce tutte le direttive `atomic` con `critical` direttive con lo stesso *nome*univoco, la direttiva `atomic` consente una migliore ottimizzazione. Spesso sono disponibili istruzioni hardware che consentono di eseguire l'aggiornamento atomico con il minor sovraccarico.

Solo il carico e l'archivio dell'oggetto designato da *x* sono atomici; la valutazione di *expr* non è atomica. Per evitare race condition, tutti gli aggiornamenti della posizione in parallelo devono essere protetti con la direttiva `atomic`, ad eccezione di quelli noti come privi di race condition.

Di seguito sono riportate le restrizioni per la direttiva `atomic`:

- Per tutti i riferimenti atomici al percorso di archiviazione x in tutto il programma è necessario disporre di un tipo compatibile.

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

### <a name="265-flush-directive"></a>2.6.5 (direttiva flush)

La direttiva `flush`, esplicita o implicita, specifica un punto di sequenza "cross-thread" in cui è necessaria l'implementazione per garantire che tutti i thread di un team abbiano una visualizzazione coerente di determinati oggetti (specificati di seguito) in memoria. Ciò significa che le valutazioni precedenti delle espressioni che fanno riferimento a tali oggetti sono complete e le valutazioni successive non sono ancora state avviate. I compilatori devono, ad esempio, ripristinare i valori degli oggetti dai registri alla memoria e l'hardware potrebbe dover scaricare i buffer di scrittura nella memoria e ricaricare i valori degli oggetti dalla memoria.

La sintassi della direttiva `flush` è la seguente:

```cpp
#pragma omp flush [(variable-list)]  new-line
```

Se gli oggetti che richiedono la sincronizzazione possono essere tutti designati dalle variabili, è possibile specificare tali variabili nell' *elenco*di variabili facoltative. Se un puntatore è presente nell' *elenco di variabili*, il puntatore viene scaricato, non l'oggetto a cui fa riferimento il puntatore.

Una direttiva `flush` senza un *elenco di variabili* Sincronizza tutti gli oggetti condivisi ad eccezione degli oggetti inaccessibili con durata di archiviazione automatica. È probabile che si disponga di un overhead maggiore rispetto a un `flush` con un *elenco di variabili*. Una direttiva `flush` senza un *elenco di variabili* è implicita per le direttive seguenti:

- `barrier`
- All'ingresso e all'uscita da `critical`
- All'ingresso e all'uscita da `ordered`
- All'ingresso e all'uscita da `parallel`
- All'uscita da `for`
- All'uscita da `sections`
- All'uscita da `single`
- All'ingresso e all'uscita da `parallel for`
- All'ingresso e all'uscita da `parallel sections`

La direttiva non è implicita se è presente una clausola `nowait`. Si noti che la direttiva `flush` non è implicita per uno dei seguenti elementi:

- Alla voce `for`
- Alla voce o uscita da `master`
- Alla voce `sections`
- Alla voce `single`

Un riferimento che accede al valore di un oggetto con un tipo qualificato volatile si comporta come se fosse presente una direttiva `flush` che specifica l'oggetto in corrispondenza del punto di sequenza precedente. Un riferimento che modifica il valore di un oggetto con un tipo qualificato volatile si comporta come se fosse presente una direttiva `flush` che specifica l'oggetto in corrispondenza del punto di sequenza successivo.

Poiché la direttiva `flush` non dispone di un'istruzione del linguaggio C come parte della relativa sintassi, esistono alcune restrizioni relative alla posizione all'interno di un programma. Per ulteriori informazioni sulla grammatica formale, vedere [Appendice C](c-openmp-c-and-cpp-grammar.md). Nell'esempio seguente vengono illustrate queste restrizioni.

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

Di seguito sono riportate le restrizioni per la direttiva `flush`:

- Una variabile specificata in una direttiva `flush` non deve avere un tipo di riferimento.

### <a name="266-ordered-construct"></a>costrutto ordinato 2.6.6

Il blocco strutturato che segue una direttiva `ordered` viene eseguito nell'ordine in cui le iterazioni vengono eseguite in un ciclo sequenziale. La sintassi della direttiva `ordered` è la seguente:

```cpp
#pragma omp ordered new-linestructured-block
```

Una direttiva `ordered` deve rientrare nell'extent dinamico di un costrutto di `for` o di `parallel for`. Il `for` o la direttiva `parallel for` a cui il costrutto `ordered` associa deve avere una clausola `ordered` specificata come descritto nella [sezione 2.4.1](#241-for-construct). Durante l'esecuzione di un costrutto di `for` o `parallel for` con una clausola `ordered`, i costrutti `ordered` vengono eseguiti rigorosamente nell'ordine in cui verrebbero eseguiti in un'esecuzione sequenziale del ciclo.

Di seguito sono riportate le restrizioni per la direttiva `ordered`:

- Un'iterazione di un ciclo con un costrutto di `for` non deve eseguire più di una volta la stessa direttiva ordinata e non deve eseguire più di una direttiva di `ordered`.

## <a name="27-data-environment"></a>ambiente dati 2,7

In questa sezione vengono presentate una direttiva e diverse clausole per controllare l'ambiente dei dati durante l'esecuzione di aree parallele, come indicato di seguito:

- Viene fornita una direttiva [threadprivate](#271-threadprivate-directive) per fare in modo che le variabili di ambito del file, dello spazio dei nomi o dell'ambito di blocco statico siano locali in un thread.

- Le clausole che è possibile specificare nelle direttive per controllare gli attributi di condivisione delle variabili per la durata dei costrutti paralleli o di condivisione di lavoro sono descritte nella [sezione 2.7.2](#272-data-sharing-attribute-clauses).

### <a name="271-threadprivate-directive"></a>2.7.1 threadprivate (direttiva)

La direttiva `threadprivate` rende le variabili dell'ambito del file denominato, dello spazio dei nomi o dell'ambito del blocco statico specificate nell' *elenco di variabili* privato a un thread. *Variable-list* è un elenco delimitato da virgole di variabili che non hanno un tipo incompleto. La sintassi della direttiva `threadprivate` è la seguente:

```cpp
#pragma omp threadprivate(variable-list) new-line
```

Ogni copia di una variabile di `threadprivate` viene inizializzata una sola volta, in un punto non specificato del programma prima del primo riferimento a tale copia e nel modo consueto, ad esempio, perché la copia master verrebbe inizializzata in un'esecuzione seriale del programma. Si noti che se si fa riferimento a un oggetto in un inizializzatore esplicito di una `threadprivate` variabile e il valore dell'oggetto viene modificato prima del primo riferimento a una copia della variabile, il comportamento non è specificato.

Come per qualsiasi variabile privata, un thread non deve fare riferimento alla copia di un altro thread di un oggetto `threadprivate`. Durante le aree seriali e le aree master del programma, i riferimenti saranno alla copia del thread master dell'oggetto.

Dopo l'esecuzione della prima area parallela, i dati negli oggetti `threadprivate` sono garantiti per la persistenza solo se il meccanismo dei thread dinamici è stato disabilitato e se il numero di thread rimane invariato per tutte le aree parallele.

Di seguito sono riportate le restrizioni per la direttiva `threadprivate`:

- Una direttiva `threadprivate` per le variabili dell'ambito di file o dello spazio dei nomi deve trovarsi all'esterno di qualsiasi definizione o dichiarazione e deve precedere in modo lessicale tutti i riferimenti a una qualsiasi delle variabili presenti nell'elenco.

- Ogni variabile nell' *elenco di variabili* di una direttiva `threadprivate` nell'ambito di un file o di uno spazio dei nomi deve fare riferimento a una dichiarazione di variabile nell'ambito del file o dello spazio dei nomi che precede a livello lessicale la direttiva.

- Una direttiva `threadprivate` per le variabili di ambito del blocco statico deve essere presente nell'ambito della variabile e non in un ambito annidato. La direttiva deve precedere in modo lessicale tutti i riferimenti a una qualsiasi delle variabili nell'elenco.

- Ogni variabile nell' *elenco di variabili* di una direttiva `threadprivate` nell'ambito del blocco deve fare riferimento a una dichiarazione di variabile nello stesso ambito che precede a livello lessicale la direttiva. La dichiarazione di variabile deve usare l'identificatore della classe di archiviazione statica.

- Se una variabile viene specificata in una direttiva `threadprivate` in un'unità di conversione, è necessario specificarla in una direttiva `threadprivate` in ogni unità di conversione in cui è dichiarata.

- Una variabile `threadprivate` non deve essere presente in alcuna clausola ad eccezione di `copyin`, `copyprivate`, `schedule`, `num_threads`o la clausola `if`.

- L'indirizzo di una variabile di `threadprivate` non è una costante di indirizzo.

- Una variabile `threadprivate` non deve avere un tipo incompleto o un tipo di riferimento.

- Una variabile `threadprivate` con un tipo di classe non POD deve avere un costruttore di copia accessibile e non ambiguo se è dichiarata con un inizializzatore esplicito.

Nell'esempio seguente viene illustrato come modificare una variabile visualizzata in un inizializzatore può causare un comportamento non specificato e anche come evitare questo problema utilizzando un oggetto ausiliario e un costruttore di copia.

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

- [thread dinamici](3-run-time-library-functions.md#317-omp_set_dynamic-function)
- Variabile di ambiente [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic)

### <a name="272-data-sharing-attribute-clauses"></a>clausole degli attributi di condivisione dati 2.7.2

Diverse direttive accettano clausole che consentono a un utente di controllare gli attributi di condivisione delle variabili per la durata dell'area. Le clausole degli attributi di condivisione si applicano solo alle variabili nell'ambito lessicale della direttiva in cui viene visualizzata la clausola. Non tutte le clausole seguenti sono consentite in tutte le direttive. L'elenco di clausole valide per una determinata direttiva viene descritto con la direttiva.

Se una variabile è visibile quando viene rilevato un costrutto di condivisione di lavoro o parallelo e la variabile non è specificata in una clausola Attribute di condivisione o in `threadprivate` direttiva, la variabile è condivisa. Le variabili statiche dichiarate nell'ambito dinamico di un'area parallela vengono condivise. La memoria allocata dell'heap, ad esempio l'uso di C++ `malloc()` in C o o C++l'operatore di `new` in, è condivisa. Il puntatore a questa memoria, tuttavia, può essere privato o condiviso. Le variabili con durata di archiviazione automatica dichiarata nell'ambito dinamico di un'area parallela sono private.

La maggior parte delle clausole accetta un argomento di *elenco* di variabili, ovvero un elenco delimitato da virgole di variabili visibili. Se una variabile a cui viene fatto riferimento in una clausola dell'attributo di condivisione dei dati ha un tipo derivato da un modello e non sono presenti altri riferimenti a tale variabile nel programma, il comportamento non è definito.

Tutte le variabili visualizzate all'interno delle clausole di direttiva devono essere visibili. Le clausole possono essere ripetute in base alle esigenze, ma nessuna variabile può essere specificata in più di una clausola, ad eccezione del fatto che una variabile può essere specificata sia in una `firstprivate` che in una clausola di `lastprivate`.

Le sezioni seguenti descrivono le clausole degli attributi di condivisione dei dati:

- [private](#2721-private)
- [firstprivate](#2722-firstprivate)
- [lastprivate](#2723-lastprivate)
- [condiviso](#2724-shared)
- [default](#2725-default)
- [reduction](#2726-reduction)
- [copyin](#2727-copyin)
- [copyprivate](#2728-copyprivate)

#### <a name="2721-private"></a>2.7.2.1 private

La clausola `private` dichiara le variabili in un elenco di variabili da privato a ogni thread in un team. La sintassi della clausola `private` è la seguente:

```cpp
private(variable-list)
```

Di seguito è riportato il comportamento di una variabile specificata in una clausola `private`. Per il costrutto viene allocato un nuovo oggetto con durata di archiviazione automatica. Le dimensioni e l'allineamento del nuovo oggetto sono determinati dal tipo della variabile. Questa allocazione viene eseguita una volta per ogni thread del team e viene richiamato un costruttore predefinito per un oggetto classe, se necessario. in caso contrario, il valore iniziale è indeterminato.  L'oggetto originale a cui fa riferimento la variabile presenta un valore indeterminato al momento della voce al costrutto, non deve essere modificato all'interno dell'extent dinamico del costrutto e presenta un valore indeterminato al momento dell'uscita dal costrutto.

Nell'ambito lessicale del costrutto di direttiva, la variabile fa riferimento al nuovo oggetto privato allocato dal thread.

Di seguito sono riportate le restrizioni per la clausola `private`:

- Una variabile con un tipo di classe specificato in una clausola `private` deve disporre di un costruttore predefinito accessibile e non ambiguo.

- Una variabile specificata in una clausola `private` non deve avere un tipo qualificato `const`a meno che non disponga di un tipo di classe con un membro `mutable`.

- Una variabile specificata in una clausola `private` non deve avere un tipo incompleto o un tipo di riferimento.

- Le variabili visualizzate nella clausola `reduction` di una direttiva `parallel` non possono essere specificate in una clausola `private` in una direttiva di condivisione del lavoro associata al costrutto parallelo.

#### <a name="2722-firstprivate"></a>2.7.2.2 firstprivate

La clausola `firstprivate` fornisce un superset della funzionalità fornita dalla clausola `private`. La sintassi della clausola `firstprivate` è la seguente:

```cpp
firstprivate(variable-list)
```

Le variabili specificate nell' *elenco di variabili* hanno una semantica di `private` clausola, come descritto nella [sezione 2.7.2.1](#2721-private). L'inizializzazione o la costruzione avviene come se fosse stata eseguita una volta per ogni thread, prima dell'esecuzione del thread del costrutto. Per una clausola `firstprivate` in un costrutto parallelo, il valore iniziale del nuovo oggetto privato è il valore dell'oggetto originale esistente immediatamente prima del costrutto parallelo per il thread che lo rileva. Per una clausola `firstprivate` in un costrutto di condivisione del lavoro, il valore iniziale del nuovo oggetto privato per ogni thread che esegue il costrutto di condivisione del lavoro è il valore dell'oggetto originale esistente prima del momento in cui lo stesso thread rileva il costrutto di condivisione del lavoro. Per C++ gli oggetti, inoltre, il nuovo oggetto privato per ogni thread viene creato copia dall'oggetto originale.

Di seguito sono riportate le restrizioni per la clausola `firstprivate`:

- Una variabile specificata in una clausola `firstprivate` non deve avere un tipo incompleto o un tipo di riferimento.

- Una variabile con un tipo di classe specificato come `firstprivate` deve avere un costruttore di copia accessibile e non ambiguo.

- Le variabili private all'interno di un'area parallela o visualizzate nella clausola `reduction` di una direttiva `parallel` non possono essere specificate in una clausola `firstprivate` in una direttiva di condivisione del lavoro associata al costrutto parallelo.

#### <a name="2723-lastprivate"></a>2.7.2.3 lastprivate

La clausola `lastprivate` fornisce un superset della funzionalità fornita dalla clausola `private`. La sintassi della clausola `lastprivate` è la seguente:

```cpp
lastprivate(variable-list)
```

Le variabili specificate nell' *elenco di variabili* hanno una semantica di `private` clausola. Quando una clausola `lastprivate` viene visualizzata sulla direttiva che identifica un costrutto di condivisione del lavoro, il valore di ogni variabile di `lastprivate` dall'ultima iterazione sequenziale del ciclo associato o della direttiva dell'ultima sezione lessicale viene assegnato all'oggetto originale della variabile. Le variabili a cui non è assegnato un valore dall'ultima iterazione del `for` o `parallel for`, o dalla sezione dell'ultima lessicale della direttiva `sections` o `parallel sections`, presentano valori indeterminati dopo il costrutto. I sottooggetti non assegnati hanno anche un valore indeterminato dopo il costrutto.

Di seguito sono riportate le restrizioni per la clausola `lastprivate`:

- Si applicano tutte le restrizioni per `private`.

- Una variabile con un tipo di classe specificato come `lastprivate` deve avere un operatore di assegnazione di copia accessibile e non ambiguo.

- Le variabili private all'interno di un'area parallela o visualizzate nella clausola `reduction` di una direttiva `parallel` non possono essere specificate in una clausola `lastprivate` in una direttiva di condivisione del lavoro associata al costrutto parallelo.

#### <a name="2724-shared"></a>2.7.2.4 shared

Questa clausola condivide le variabili visualizzate nell' *elenco di variabili* tra tutti i thread di un team. Tutti i thread all'interno di un team accedono alla stessa area di archiviazione per le variabili `shared`.

La sintassi della clausola `shared` è la seguente:

```cpp
shared(variable-list)
```

#### <a name="2725-default"></a>2.7.2.5 default

La clausola `default` consente all'utente di influenzare gli attributi di condivisione dei dati delle variabili. La sintassi della clausola `default` è la seguente:

```cpp
default(shared | none)
```

Specificare `default(shared)` equivale a elencare in modo esplicito ogni variabile attualmente visibile in una clausola `shared`, a meno che non sia `threadprivate` o `const`. In assenza di una clausola `default` esplicita, il comportamento predefinito è identico a quello di `default(shared)` specificati.

Per specificare `default(none)` è necessario che almeno uno dei seguenti sia true per ogni riferimento a una variabile nell'ambito lessicale del costrutto parallelo:

- La variabile viene elencata in modo esplicito in una clausola Attribute di condivisione dei dati di un costrutto che contiene il riferimento.

- La variabile viene dichiarata all'interno del costrutto parallelo.

- La variabile è `threadprivate`.

- La variabile ha un tipo qualificato `const`.

- La variabile è la variabile di controllo del ciclo per un ciclo `for` che segue immediatamente una direttiva `for` o `parallel for` e il riferimento alla variabile viene visualizzato all'interno del ciclo.

Se si specifica una variabile in una clausola `firstprivate`, `lastprivate`o `reduction` di una direttiva racchiusa, viene generato un riferimento implicito alla variabile nel contesto di inclusione. Tali riferimenti impliciti sono anche soggetti ai requisiti elencati sopra.

In una direttiva `parallel` è possibile specificare una sola clausola `default`.

È possibile eseguire l'override dell'attributo di condivisione dati predefinito di una variabile utilizzando le clausole `private`, `firstprivate`, `lastprivate`, `reduction`e `shared`, come illustrato nell'esempio seguente:

```cpp
#pragma  omp  parallel  for  default(shared)  firstprivate(i)\
   private(x)  private(r)  lastprivate(i)
```

#### <a name="2726-reduction"></a>2.7.2.6 reduction

Questa clausola esegue una riduzione sulle variabili scalari visualizzate nell' *elenco di variabili*con operatore *op*. La sintassi della clausola `reduction` è la seguente:

`reduction(` *op* `:` *variabile-list* `)`

Una riduzione viene in genere specificata per un'istruzione con uno dei formati seguenti:

- *x* `=` *op* *expr*
- *x* *binop* `=` *expr*
- *x* `=` *expr* *op* *x* (ad eccezione della sottrazione)
- *x* `++`
- `++` *x*
- *x* `--`
- `--` *x*

dove:

*x*<br/>
Una delle variabili di riduzione specificate nell'elenco.

*elenco di variabili*<br/>
Elenco delimitato da virgole di variabili di riduzione scalare.

*expr*<br/>
Espressione con tipo scalare che non fa riferimento a *x*.

*op*<br/>
Non è un operatore di overload, ma uno dei `+`, `*`, `-`, `&`, `^`, `|`, `&&`o `||`.

*binop*<br/>
Non è un operatore di overload, ma uno dei `+`, `*`, `-`, `&`, `^`o `|`.

Di seguito è riportato un esempio della clausola `reduction`:

```cpp
#pragma omp parallel for reduction(+: a, y) reduction(||: am)
for (i=0; i<n; i++) {
   a += b[i];
   y = sum(y, c[i]);
   am = am || b[i] == c[i];
}
```

Come illustrato nell'esempio, un operatore può essere nascosto all'interno di una chiamata di funzione. L'utente deve prestare attenzione che l'operatore specificato nella clausola `reduction` corrisponda all'operazione di riduzione.

Sebbene l'operando di destra dell'operatore `||` non abbia effetti collaterali in questo esempio, è consentito, ma deve essere utilizzato con cautela. In questo contesto, un effetto collaterale che non si verifica durante l'esecuzione sequenziale del ciclo potrebbe verificarsi durante l'esecuzione parallela. Questa differenza può verificarsi perché l'ordine di esecuzione delle iterazioni è indeterminato.

L'operatore viene utilizzato per determinare il valore iniziale di tutte le variabili private utilizzate dal compilatore per la riduzione e per determinare l'operatore di finalizzazione. Se l'operatore viene specificato in modo esplicito, l'istruzione di riduzione esula dall'extent lessicale del costrutto. Nella direttiva è possibile specificare un numero qualsiasi di clausole di `reduction`, ma una variabile può essere visualizzata al massimo in una clausola `reduction` per la direttiva.

Viene creata una copia privata di ogni variabile in *elenco di variabili* , una per ogni thread, come se fosse stata utilizzata la clausola `private`. La copia privata viene inizializzata in base all'operatore (vedere la tabella seguente).

Alla fine dell'area per cui è stata specificata la clausola `reduction`, l'oggetto originale viene aggiornato in modo da riflettere il risultato della combinazione del valore originale con il valore finale di ogni copia privata utilizzando l'operatore specificato. Gli operatori di riduzione sono tutti associativi (ad eccezione della sottrazione) e il compilatore può riassociare liberamente il calcolo del valore finale. I risultati parziali di una riduzione della sottrazione vengono aggiunti per formare il valore finale.

Il valore dell'oggetto originale diventa indeterminato quando il primo thread raggiunge la clausola contenitore e rimane così fino al completamento del calcolo della riduzione.  In genere, il calcolo verrà completato alla fine del costrutto; Tuttavia, se la clausola `reduction` viene utilizzata in un costrutto a cui viene applicato anche `nowait`, il valore dell'oggetto originale rimane indeterminato fino a quando non viene eseguita una sincronizzazione della barriera per garantire che tutti i thread abbiano completato la clausola `reduction`.

Nella tabella seguente sono elencati gli operatori validi e i rispettivi valori di inizializzazione canonici. Il valore di inizializzazione effettivo sarà coerente con il tipo di dati della variabile di riduzione.

|Operatore|Initialization|
|--------------|--------------------|
|`+`|0|
|`*`|1|
|`-`|0|
|`&`|~0|
|`|`|0|
|`^`|0|
|`&&`|1|
|`||`|0|

Di seguito sono riportate le restrizioni per la clausola `reduction`:

- Il tipo delle variabili nella clausola `reduction` deve essere valido per l'operatore di riduzione, ad eccezione del fatto che i tipi di puntatore e i tipi di riferimento non sono mai consentiti.

- Una variabile specificata nella clausola `reduction` non deve essere qualificata `const`.

- Le variabili private all'interno di un'area parallela o visualizzate nella clausola `reduction` di una direttiva `parallel` non possono essere specificate in una clausola `reduction` in una direttiva di condivisione del lavoro associata al costrutto parallelo.

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

La clausola `copyin` fornisce un meccanismo per assegnare lo stesso valore a `threadprivate` variabili per ogni thread del team che esegue l'area parallela. Per ogni variabile specificata in una clausola `copyin`, il valore della variabile nel thread master del team viene copiato, come se venisse assegnato, alla copia thread-private all'inizio dell'area parallela. La sintassi della clausola `copyin` è la seguente:

```cpp

copyin(
variable-list
)
```

Di seguito sono riportate le restrizioni per la clausola `copyin`:

- Una variabile specificata nella clausola `copyin` deve avere un operatore di assegnazione di copia accessibile e non ambiguo.

- Una variabile specificata nella clausola `copyin` deve essere una variabile `threadprivate`.

#### <a name="2728-copyprivate"></a>2.7.2.8 copyprivate

La clausola `copyprivate` fornisce un meccanismo per utilizzare una variabile privata per trasmettere un valore da un membro di un team agli altri membri. Si tratta di un'alternativa all'uso di una variabile condivisa per il valore quando si fornisce una variabile condivisa di questo tipo sarebbe difficile, ad esempio in una ricorsione che richiedeva una variabile diversa a ogni livello. La clausola `copyprivate` può essere visualizzata solo nella direttiva `single`.

La sintassi della clausola `copyprivate` è la seguente:

```cpp

copyprivate(
variable-list
)
```

L'effetto della clausola `copyprivate` sulle variabili nell'elenco di variabili si verifica dopo l'esecuzione del blocco strutturato associato al costrutto di `single` e prima che uno dei thread del team abbia lasciato la barriera alla fine del costrutto. Quindi, in tutti gli altri thread del team, per ogni variabile nell' *elenco di variabili*, tale variabile viene definita (come se fosse per assegnazione) con il valore della variabile corrispondente nel thread che ha eseguito il blocco strutturato del costrutto.

Di seguito sono riportate le restrizioni alla clausola `copyprivate`:

- Una variabile specificata nella clausola `copyprivate` non deve essere presente in una clausola `private` o `firstprivate` per la stessa direttiva `single`.

- Se viene rilevata una direttiva `single` con una clausola `copyprivate` nell'ambito dinamico di un'area parallela, tutte le variabili specificate nella clausola `copyprivate` devono essere private nel contesto di inclusione.

- Una variabile specificata nella clausola `copyprivate` deve avere un operatore di assegnazione di copia non ambiguo accessibile.

## <a name="28-directive-binding"></a>2,8 associazione di direttive

Il binding dinamico delle direttive deve rispettare le regole seguenti:

- Le direttive `for`, `sections`, `single`, `master`e `barrier` si associano all'`parallel`di inclusione dinamica, se disponibile, indipendentemente dal valore di qualsiasi clausola `if` che può essere presente nella direttiva. Se attualmente non è in esecuzione alcuna area parallela, le direttive vengono eseguite da un team composto solo dal thread master.

- La direttiva `ordered` viene associata al `for`di inclusione dinamica.

- La direttiva `atomic` impone l'accesso esclusivo in relazione alle direttive di `atomic` in tutti i thread, non solo al team corrente.

- La direttiva `critical` impone l'accesso esclusivo in relazione alle direttive di `critical` in tutti i thread, non solo al team corrente.

- Una direttiva non può mai essere associata ad alcuna direttiva al di fuori della `parallel`di inclusione dinamica più vicina.

## <a name="29-directive-nesting"></a>2,9 annidamento di direttive

L'annidamento dinamico delle direttive deve rispettare le regole seguenti:

- Una direttiva `parallel` in modo dinamico all'interno di un'altra `parallel` stabilisce logicamente un nuovo team, composto solo dal thread corrente, a meno che non sia abilitato il parallelismo annidato.

- le direttive `for`, `sections`e `single` che si associano allo stesso `parallel` non possono essere annidate all'interno di altre.

- non è consentita l'annidamento delle direttive `critical` con lo stesso nome. Si noti che questa restrizione non è sufficiente per impedire il deadlock.

- le direttive `for`, `sections`e `single` non sono consentite nell'ambito dinamico delle aree `critical`, `ordered`e `master` se le direttive vengono associate allo stesso `parallel` delle aree.

- le direttive `barrier` non sono consentite nell'ambito dinamico delle aree `for`, `ordered`, `sections`, `single`, `master`e `critical` se le direttive vengono associate allo stesso `parallel` delle aree.

- le direttive `master` non sono consentite nell'ambito dinamico delle direttive `for`, `sections`e `single` se le direttive `master` vengono associate allo stesso `parallel` delle direttive di condivisione del lavoro.

- le direttive `ordered` non sono consentite nell'ambito dinamico delle aree `critical` se le direttive vengono associate allo stesso `parallel` delle aree.

- Una direttiva consentita quando eseguita in modo dinamico all'interno di un'area parallela è consentita anche quando viene eseguita all'esterno di un'area parallela. Quando viene eseguita in modo dinamico al di fuori di un'area parallela specificata dall'utente, la direttiva viene eseguita da un team composto solo dal thread master.
