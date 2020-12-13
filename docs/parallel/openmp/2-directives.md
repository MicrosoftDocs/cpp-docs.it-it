---
description: 'Altre informazioni su: 2. Direttive'
title: 2. Direttive
ms.date: 01/18/2019
ms.assetid: d1a69374-6c03-45fb-8c86-e91cea8adae8
ms.openlocfilehash: 66b4ee4cdf3fec1740ed9b471c1c57cffebad6d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342569"
---
# <a name="2-directives"></a>2. Direttive

Le direttive sono basate sulle `#pragma` direttive definite negli standard C e C++.  I compilatori che supportano l'API OpenMP C e C++ includeranno un'opzione della riga di comando che attiva e consente l'interpretazione di tutte le direttive del compilatore OpenMP.

## <a name="21-directive-format"></a>2,1 formato della direttiva

La sintassi di una direttiva OpenMP viene formalmente specificata dalla grammatica nell' [Appendice C](c-openmp-c-and-cpp-grammar.md)e, in modo informale, come segue:

```cpp
#pragma omp directive-name  [clause[ [,] clause]...] new-line
```

Ogni direttiva inizia con  `#pragma omp` , per ridurre il rischio di conflitti con le direttive pragma (non OpenMP o Vendor Extensions) con lo stesso nome. Il resto della direttiva segue le convenzioni degli standard C e C++ per le direttive del compilatore. In particolare, gli spazi vuoti possono essere utilizzati prima e dopo e in `#` alcuni casi è necessario utilizzare gli spazi vuoti per separare le parole in una direttiva. I token `#pragma omp` di pre-elaborazione che seguono sono soggetti alla sostituzione della macro.

Le direttive fanno distinzione tra maiuscole e minuscole. L'ordine in cui le clausole vengono visualizzate nelle direttive non è significativo. Le clausole sulle direttive possono essere ripetute in base alle esigenze, in base alle restrizioni elencate nella descrizione di ogni clausola. Se in una clausola viene visualizzata l'opzione *Variable-list* , è necessario specificare solo le variabili. È possibile specificare solo un *nome di direttiva* per ogni direttiva.  Ad esempio, la direttiva seguente non è consentita:

```cpp
/* ERROR - multiple directive names not allowed */
#pragma omp parallel barrier
```

Una direttiva OpenMP si applica al massimo un'istruzione successiva, che deve essere un blocco strutturato.

## <a name="22-conditional-compilation"></a>2,2 compilazione condizionale

Il `_OPENMP` nome della macro viene definito dalle implementazioni conformi a OpenMP come la costante decimale *YYYYMM*, che sarà l'anno e il mese della specifica approvata. Questa macro non deve essere l'oggetto di `#define` o di una `#undef` direttiva di pre-elaborazione.

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

- `if(`*espressione scalare*`)`
- `private(`*elenco di variabili*`)`
- `firstprivate(`*elenco di variabili*`)`
- `default(shared | none)`
- `shared(`*elenco di variabili*`)`
- `copyin(`*elenco di variabili*`)`
- `reduction(`*operatore* `:` di *elenco di variabili*  `)`
- `num_threads(`*espressione Integer*`)`

Quando un thread raggiunge un costrutto parallelo, viene creato un team di thread se si verifica uno dei casi seguenti:

- Non `if` è presente alcuna clausola.
- L' `if` espressione restituisce un valore diverso da zero.

Questo thread diventa il thread master del team, con un numero di thread pari a 0 e tutti i thread del team, incluso il thread master, eseguono l'area in parallelo. Se il valore dell' `if` espressione è zero, l'area viene serializzata.

Per determinare il numero di thread richiesti, le regole seguenti verranno considerate in ordine. Verrà applicata la prima regola di cui viene soddisfatta la condizione:

1. Se la `num_threads` clausola è presente, il valore dell'espressione Integer è il numero di thread richiesti.

1. Se la `omp_set_num_threads` funzione di libreria è stata chiamata, il valore dell'argomento nella chiamata eseguita più di recente è il numero di thread richiesti.

1. Se la variabile `OMP_NUM_THREADS` di ambiente è definita, il valore di questa variabile di ambiente è il numero di thread richiesti.

1. Se non viene usato nessuno dei metodi precedenti, il numero di thread richiesti è definito dall'implementazione.

Se la `num_threads` clausola è presente, sostituisce il numero di thread richiesti dalla `omp_set_num_threads` funzione di libreria o dalla variabile di `OMP_NUM_THREADS` ambiente solo per l'area parallela a cui è applicato. Le aree parallele successive non sono interessate.

Il numero di thread che eseguono l'area parallela dipende anche dal fatto che la regolazione dinamica del numero di thread sia abilitata. Se la regolazione dinamica è disabilitata, il numero richiesto di thread eseguirà l'area parallela. Se la regolazione dinamica è abilitata, il numero di thread richiesto è il numero massimo di thread che possono eseguire l'area parallela.

Se viene rilevata un'area parallela mentre la regolazione dinamica del numero di thread è disabilitata e il numero di thread richiesti per l'area parallela è superiore al numero che il sistema di runtime è in grado di fornire, il comportamento del programma viene definito in fase di implementazione. Un'implementazione può, ad esempio, interrompere l'esecuzione del programma o potrebbe serializzare l'area parallela.

La `omp_set_dynamic` funzione di libreria e la `OMP_DYNAMIC` variabile di ambiente possono essere usate per abilitare e disabilitare la regolazione dinamica del numero di thread.

Il numero di processori fisici che ospitano effettivamente i thread in un determinato momento è definito dall'implementazione. Una volta creato, il numero di thread nel team rimane costante per la durata dell'area parallela. Può essere modificato in modo esplicito dall'utente o automaticamente dal sistema di runtime da un'area parallela a un'altra.

Le istruzioni contenute nell'extent dinamico dell'area parallela vengono eseguite da ogni thread e ogni thread può eseguire un percorso di istruzioni diverso dagli altri thread. Le direttive rilevate al di fuori dell'extent lessicale di un'area parallela sono denominate direttive orfane.

Esiste una barriera implicita alla fine di un'area parallela. Solo il thread master del team continua l'esecuzione alla fine di un'area parallela.

Se un thread in un team che esegue un'area parallela incontra un altro costrutto parallelo, viene creato un nuovo team che diventa il master del nuovo team. Per impostazione predefinita, le aree parallele nidificate vengono serializzate. Di conseguenza, per impostazione predefinita, un'area parallela nidificata viene eseguita da un team composto da un solo thread. Il comportamento predefinito può essere modificato tramite la funzione della libreria di runtime `omp_set_nested` o la variabile di ambiente `OMP_NESTED` . Tuttavia, il numero di thread in un team che esegue un'area parallela annidata è definito dall'implementazione.

Le restrizioni alla `parallel` direttiva sono le seguenti:

- Nella `if` direttiva può essere presente al massimo una clausola.

- Non è specificato se si verificano effetti collaterali nell'espressione if o nell' `num_threads` espressione.

- Un oggetto `throw` eseguito all'interno di un'area parallela deve causare la ripresa dell'esecuzione all'interno dell'extent dinamico dello stesso blocco strutturato e deve essere rilevata dallo stesso thread che ha generato l'eccezione.

- `num_threads`Nella direttiva può essere presente una sola clausola. L' `num_threads` espressione viene valutata all'esterno del contesto dell'area parallela e deve restituire un valore integer positivo.

- L'ordine di valutazione delle `if` `num_threads` clausole e non è specificato.

### <a name="cross-references"></a>Riferimenti incrociati

- `private``firstprivate` `default` clausole,,,, `shared` `copyin` e `reduction` ([sezione 2.7.2](#272-data-sharing-attribute-clauses))
- Variabile di ambiente [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads)
- funzione della libreria [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function)
- Variabile di ambiente [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic)
- funzione [omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function)
- Variabile di ambiente [OMP_NESTED](4-environment-variables.md#44-omp_nested)
- funzione della libreria [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function)

## <a name="24-work-sharing-constructs"></a>2,4 costrutti di condivisione del lavoro

Un costrutto di condivisione del lavoro distribuisce l'esecuzione dell'istruzione associata tra i membri del team che lo incontrano. Le direttive di condivisione del lavoro non avviano nuovi thread e non esiste alcuna barriera implicita sulla voce per un costrutto di condivisione del lavoro.

La sequenza di costrutti e direttive di condivisione del lavoro `barrier` rilevata deve essere la stessa per ogni thread in un team.

OpenMP definisce i costrutti di condivisione del lavoro seguenti e questi costrutti sono descritti nelle sezioni che seguono:

- [for](#241-for-construct) (direttiva)
- [sections](#242-sections-construct) (direttiva)
- [Single](#243-single-construct) (direttiva)

### <a name="241-for-construct"></a>2.4.1 per costrutto

La `for` direttiva identifica un costrutto di condivisione del lavoro iterativo che specifica che le iterazioni del ciclo associato verranno eseguite in parallelo. Le iterazioni del `for` ciclo vengono distribuite tra thread già presenti nel team che esegue il costrutto parallelo a cui è associato. La sintassi del `for` costrutto è la seguente:

```cpp
#pragma omp for [clause[[,] clause] ... ] new-line for-loop
```

La clausola è uno dei seguenti:

- `private(`*elenco di variabili*`)`
- `firstprivate(`*elenco di variabili*`)`
- `lastprivate(`*elenco di variabili*`)`
- `reduction(`*operatore* `:` di *elenco di variabili*`)`
- `ordered`
- `schedule(`*tipo* [ `,` *chunk_size*]`)`
- `nowait`

La `for` direttiva pone restrizioni sulla struttura del `for` ciclo corrispondente. In particolare, il `for` ciclo corrispondente deve avere una forma canonica:

`for (`*init-expr* `;` *logica var-op b* `;` *incr-expr*`)`

*init-expr*<br/>
I tipi validi sono:

- *var*  =  *lb*
- var di tipo *Integer*  =  *lb*

*incr-expr*<br/>
I tipi validi sono:

- `++`*var*
- *var*`++`
- `--`*var*
- *var*`--`
- *var* `+=` *incr*
- *var* `-=` *incr*
- *var* `=` *var* `+` *incr*
- *var* `=` *incr* `+` *var*
- *var* `=` *var* `-` *incr*

*var*<br/>
Variabile di tipo integer con segno. Se questa variabile viene altrimenti condivisa, viene implicitamente resa privata per la durata di `for` . Non modificare questa variabile all'interno del corpo dell' `for` istruzione. A meno che non venga specificata la variabile `lastprivate` , il relativo valore dopo il ciclo è indeterminato.

*operazione logica*<br/>
I tipi validi sono:

- `<`
- `<=`
- `>`
- `>=`

*lb*, *b* e *incr*<br>
Espressioni Integer invarianti del ciclo. Non viene eseguita alcuna sincronizzazione durante la valutazione di queste espressioni, pertanto tutti gli effetti collaterali valutati producono risultati indeterminati.

Il formato canonico consente di calcolare il numero di iterazioni del ciclo in una voce del ciclo. Questo calcolo viene effettuato con i valori nel tipo di *var*, dopo le promozioni integrali. In particolare, se il valore di *b* `-` *lb* `+` *incr* non può essere rappresentato in quel tipo, il risultato è indeterminato. Inoltre, se *Logical-op* è `<` o `<=` , *incr-expr* deve causare l'aumento di *var* a ogni iterazione del ciclo.   Se *Logical-op* è `>` o `>=` , *incr-expr* deve causare la minore quantità di *var* a ogni iterazione del ciclo.

La `schedule` clausola specifica il modo in cui le iterazioni del `for` ciclo sono divise tra i thread del team. La correttezza di un programma non deve dipendere dal thread che esegue una determinata iterazione. Il valore di *chunk_size*, se specificato, deve essere un'espressione Integer invariante del ciclo con un valore positivo. Non viene eseguita alcuna sincronizzazione durante la valutazione dell'espressione, pertanto tutti gli effetti collaterali valutati producono risultati indeterminati. Il *tipo* di pianificazione può essere uno dei valori seguenti:

Tabella 2-1: `schedule` valori *Kind* della clausola

|Valore|Description|
|-|-|
|static|Quando `schedule(static,`  `)` si specifica chunk_size, le iterazioni sono divise in blocchi di dimensioni specificate da *chunk_size*. I blocchi vengono assegnati staticamente ai thread del team in base a una modalità Round Robin nell'ordine del numero del thread. Quando non viene specificato alcun *chunk_size* , lo spazio di iterazione è diviso in blocchi di dimensioni approssimativamente uguali, con un blocco assegnato a ogni thread.|
|dinamico|Quando `schedule(dynamic,`  `)` si specifica chunk_size, le iterazioni sono divise in una serie di blocchi, ognuno dei quali contiene *chunk_size* iterazioni. Ogni blocco viene assegnato a un thread in attesa di un'assegnazione. Il thread esegue il blocco di iterazioni e quindi attende la successiva assegnazione, fino a quando non rimane alcun blocco da assegnare. L'ultimo blocco da assegnare può avere un numero inferiore di iterazioni. Quando non viene specificato alcun *chunk_size* , il valore predefinito è 1.|
|guidato|Quando `schedule(guided,`  `)` si specifica chunk_size, le iterazioni vengono assegnate ai thread in blocchi con dimensioni decrescenti. Quando un thread termina il blocco di iterazioni assegnato, viene assegnato dinamicamente a un altro blocco, fino a quando non ne viene lasciato nessuno. Per un *chunk_size* di 1, le dimensioni di ogni blocco corrispondono approssimativamente al numero di iterazioni non assegnate divise per il numero di thread. Queste dimensioni diminuiscono quasi esponenzialmente a 1. Per un *chunk_size* con valore *k* maggiore di 1, le dimensioni diminuiscono in modo quasi esponenziale fino a *k*, ad eccezione del fatto che l'ultimo blocco può contenere meno di *k* iterazioni. Quando non viene specificato alcun *chunk_size* , il valore predefinito è 1.|
|runtime|Quando `schedule(runtime)` si specifica, la decisione relativa alla pianificazione viene posticipata fino al runtime. Il *tipo* di pianificazione e le dimensioni dei blocchi possono essere scelti in fase di esecuzione impostando la variabile di ambiente `OMP_SCHEDULE` . Se questa variabile di ambiente non è impostata, la pianificazione risultante è definita dall'implementazione. Quando  `schedule(runtime)` si specifica, *chunk_size* non deve essere specificato.|

In assenza di una clausola definita in modo esplicito `schedule` , l'impostazione predefinita `schedule` è definita dall'implementazione.

Un programma conforme a OpenMP non deve basarsi su una pianificazione specifica per l'esecuzione corretta. Un programma non deve basarsi su un *tipo* di pianificazione conforme esattamente alla descrizione indicata sopra, perché è possibile avere variazioni nelle implementazioni dello stesso *tipo* di pianificazione tra diversi compilatori. È possibile utilizzare le descrizioni per selezionare la pianificazione appropriata per una determinata situazione.

La `ordered` clausola deve essere presente quando le `ordered` direttive vengono associate al `for` costrutto.

Esiste una barriera implicita alla fine di un `for` costrutto, a meno che non `nowait` venga specificata una clausola.

Le restrizioni alla `for` direttiva sono le seguenti:

- Il `for` ciclo deve essere un blocco strutturato e, inoltre, l'esecuzione non deve terminare con un' **`break`** istruzione.

- I valori delle espressioni di controllo del ciclo del `for` ciclo associato a una `for` direttiva devono essere gli stessi per tutti i thread del team.

- La `for` variabile di iterazione del ciclo deve avere un tipo integer con segno.

- `schedule`In una direttiva può essere presente una sola clausola `for` .

- `ordered`In una direttiva può essere presente una sola clausola `for` .

- `nowait`In una direttiva può essere presente una sola clausola `for` .

- Non è specificato se o con quale frequenza si verificano gli effetti collaterali all'interno delle espressioni *chunk_size*, *lb*, *b* o *incr* .

- Il valore dell'espressione *chunk_size* deve essere lo stesso per tutti i thread del team.

#### <a name="cross-references"></a>Riferimenti incrociati

- `private``firstprivate` `lastprivate` clausole,, e `reduction` ([sezione 2.7.2](#272-data-sharing-attribute-clauses))
- Variabile di ambiente [OMP_SCHEDULE](4-environment-variables.md#41-omp_schedule)
- costrutto [ordinato](#266-ordered-construct)
- clausola [Schedule](d-using-the-schedule-clause.md)

### <a name="242-sections-construct"></a>2.4.2 Costrutto sections

La `sections` direttiva identifica un costrutto di condivisione del lavoro non iterativo che specifica un set di costrutti che devono essere divisi tra i thread di un team. Ogni sezione viene eseguita una sola volta da un thread del team. La sintassi della `sections` direttiva è la seguente:

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

- `private(`*elenco di variabili*`)`
- `firstprivate(`*elenco di variabili*`)`
- `lastprivate(`*elenco di variabili*`)`
- `reduction(`*operatore* `:` di *elenco di variabili*  `)`
- `nowait`

Ogni sezione è preceduta da una `section` direttiva, anche se la `section` direttiva è facoltativa per la prima sezione. Le `section` direttive devono essere incluse nell'ambito lessicale della `sections` direttiva. Esiste una barriera implicita alla fine di un `sections` costrutto, a meno che non `nowait` sia specificato un oggetto.

Le restrizioni alla `sections` direttiva sono le seguenti:

- Una `section` direttiva non deve essere visualizzata al di fuori dell'extent lessicale della `sections` direttiva.

- `nowait`In una direttiva può essere presente una sola clausola `sections` .

#### <a name="cross-references"></a>Riferimenti incrociati

- `private``firstprivate` `lastprivate` clausole,, e `reduction` ([sezione 2.7.2](#272-data-sharing-attribute-clauses))

### <a name="243-single-construct"></a>2.4.3 costrutto singolo

La `single` direttiva identifica un costrutto che specifica che il blocco strutturato associato viene eseguito da un solo thread del team (non necessariamente il thread master). La sintassi della `single` direttiva è la seguente:

```cpp
#pragma omp single [clause[[,] clause] ...] new-linestructured-block
```

La clausola è uno dei seguenti:

- `private(`*elenco di variabili*`)`
- `firstprivate(`*elenco di variabili*`)`
- `copyprivate(`*elenco di variabili*`)`
- `nowait`

Esiste una barriera implicita dopo il `single` costrutto, a meno che non `nowait` venga specificata una clausola.

Le restrizioni alla `single` direttiva sono le seguenti:

- `nowait`In una direttiva può essere presente una sola clausola `single` .
- La `copyprivate` clausola non deve essere utilizzata con la `nowait` clausola.

#### <a name="cross-references"></a>Riferimenti incrociati

- `private``firstprivate` `copyprivate` clausole, e ([sezione 2.7.2](#272-data-sharing-attribute-clauses))

## <a name="25-combined-parallel-work-sharing-constructs"></a>2,5 costrutti di condivisione del lavoro paralleli combinati

I costrutti di condivisione del lavoro paralleli combinati sono collegamenti per specificare un'area parallela con un solo costrutto di condivisione del lavoro. La semantica di queste direttive equivale a specificare in modo esplicito una `parallel` direttiva seguita da un singolo costrutto di condivisione del lavoro.

Nelle sezioni seguenti vengono descritti i costrutti di condivisione del lavoro paralleli combinati:

- [parallel for](#251-parallel-for-construct) (direttiva)
- [Parallel sections](#252-parallel-sections-construct) (direttiva)

### <a name="251-parallel-for-construct"></a>2.5.1 parallelo per costrutto

La `parallel for` direttiva è un collegamento per un' `parallel` area che contiene una sola `for` direttiva. La sintassi della `parallel for` direttiva è la seguente:

```cpp
#pragma omp parallel for [clause[[,] clause] ...] new-linefor-loop
```

Questa direttiva consente a tutte le clausole della `parallel` direttiva e della `for` direttiva, ad eccezione della `nowait` clausola, con significati e restrizioni identici. La semantica equivale a specificare in modo esplicito una `parallel` direttiva seguita immediatamente da una `for` direttiva.

#### <a name="cross-references"></a>Riferimenti incrociati

- [Parallel](#23-parallel-construct) (direttiva)
- [for](#241-for-construct) (direttiva)
- [Clausole degli attributi dati](#272-data-sharing-attribute-clauses)

### <a name="252-parallel-sections-construct"></a>costrutto 2.5.2 Parallel Sections

La `parallel sections` direttiva fornisce un modulo di scelta rapida per specificare un' `parallel` area con una sola `sections` direttiva. La semantica equivale a specificare in modo esplicito una `parallel` direttiva seguita immediatamente da una `sections` direttiva. La sintassi della `parallel sections` direttiva è la seguente:

```cpp
#pragma omp parallel sections  [clause[[,] clause] ...] new-line
   {
   [#pragma omp section new-line]
      structured-block
   [#pragma omp section new-linestructured-block  ]
   ...
}
```

La *clausola* può essere una delle clausole accettate dalle `parallel` `sections` direttive e, ad eccezione della `nowait` clausola.

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

La `master` direttiva identifica un costrutto che specifica un blocco strutturato eseguito dal thread master del team. La sintassi della `master` direttiva è la seguente:

```cpp
#pragma omp master new-linestructured-block
```

Gli altri thread del team non eseguono il blocco strutturato associato. Non esiste alcuna barriera implicita in ingresso o in uscita dal costrutto master.

### <a name="262-critical-construct"></a>costrutto critico 2.6.2

La `critical` direttiva identifica un costrutto che limita l'esecuzione del blocco strutturato associato a un singolo thread alla volta. La sintassi della `critical` direttiva è la seguente:

```cpp
#pragma omp critical [(name)]  new-linestructured-block
```

Per identificare l'area critica, è possibile usare un *nome* facoltativo. Gli identificatori usati per identificare un'area critica hanno un collegamento esterno e si trovano in uno spazio dei nomi distinto dagli spazi dei nomi usati da etichette, tag, membri e identificatori normali.

Un thread attende all'inizio di un'area critica finché nessun altro thread sta eseguendo un'area critica (in qualsiasi punto del programma) con lo stesso nome. Tutte le direttive senza nome vengono `critical` mappate allo stesso nome non specificato.

### <a name="263-barrier-directive"></a>direttiva 2.6.3 Barrier

La `barrier` direttiva Sincronizza tutti i thread in un team. Quando viene rilevata, ogni thread del team attende che tutti gli altri abbiano raggiunto questo punto. La sintassi della `barrier` direttiva è la seguente:

```cpp
#pragma omp barrier new-line
```

Dopo che tutti i thread del team hanno rilevato la barriera, ogni thread del team inizia a eseguire le istruzioni dopo la direttiva Barrier in parallelo. Poiché la `barrier` direttiva non dispone di un'istruzione del linguaggio C come parte della relativa sintassi, esistono alcune restrizioni relative alla posizione all'interno di un programma. Per ulteriori informazioni sulla grammatica formale, vedere [Appendice C](c-openmp-c-and-cpp-grammar.md). Nell'esempio seguente vengono illustrate queste restrizioni.

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

La `atomic` direttiva assicura che una posizione di memoria specifica venga aggiornata in modo atomico, anziché esporla alla possibilità di più thread di scrittura simultanei. La sintassi della `atomic` direttiva è la seguente:

```cpp
#pragma omp atomic new-lineexpression-stmt
```

L'istruzione expression deve avere uno dei seguenti formati:

- *binop x* `=` *espressione expr*
- *x*`++`
- `++` *x*
- *x*`--`
- `--` *x*

Nelle espressioni precedenti:

- *x* è un'espressione lvalue con tipo scalare.

- *expr* è un'espressione con tipo scalare e non fa riferimento all'oggetto designato da *x*.

- *binop* non è un operatore di overload e è uno tra `+` ,,, `*` `-` `/` , `&` , `^` , `|` , `<<` o `>>` .

Sebbene sia definito dall'implementazione se un'implementazione sostituisce tutte le `atomic` direttive con `critical` direttive con lo stesso *nome* univoco, la `atomic` direttiva consente una migliore ottimizzazione. Spesso sono disponibili istruzioni hardware che consentono di eseguire l'aggiornamento atomico con il minor sovraccarico.

Solo il carico e l'archivio dell'oggetto designato da *x* sono atomici; la valutazione di *expr* non è atomica. Per evitare race condition, tutti gli aggiornamenti della posizione in parallelo devono essere protetti con la `atomic` direttiva, ad eccezione di quelli noti come privi di race condition.

Le restrizioni alla `atomic` direttiva sono le seguenti:

- Per tutti i riferimenti atomici al percorso di archiviazione x in tutto il programma è necessario disporre di un tipo compatibile.

#### <a name="examples"></a>Esempio

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

La `flush` direttiva, esplicita o implicita, specifica un punto di sequenza "cross-thread" in cui è necessaria l'implementazione per garantire che tutti i thread di un team abbiano una visualizzazione coerente di determinati oggetti (specificati di seguito) in memoria. Ciò significa che le valutazioni precedenti delle espressioni che fanno riferimento a tali oggetti sono complete e le valutazioni successive non sono ancora state avviate. I compilatori devono, ad esempio, ripristinare i valori degli oggetti dai registri alla memoria e l'hardware potrebbe dover scaricare i buffer di scrittura nella memoria e ricaricare i valori degli oggetti dalla memoria.

La sintassi della `flush` direttiva è la seguente:

```cpp
#pragma omp flush [(variable-list)]  new-line
```

Se gli oggetti che richiedono la sincronizzazione possono essere tutti designati dalle variabili, è possibile specificare tali variabili nell' *elenco* di variabili facoltative. Se un puntatore è presente nell' *elenco di variabili*, il puntatore viene scaricato, non l'oggetto a cui fa riferimento il puntatore.

Una `flush` direttiva senza un *elenco di variabili* Sincronizza tutti gli oggetti condivisi tranne gli oggetti inaccessibili con durata di archiviazione automatica. È probabile che si disponga di un sovraccarico maggiore rispetto a un oggetto `flush` con un *elenco di variabili*. Una `flush` direttiva senza un *elenco di variabili* è implicita per le direttive seguenti:

- `barrier`
- All'ingresso e all'uscita da `critical`
- All'ingresso e all'uscita da `ordered`
- All'ingresso e all'uscita da `parallel`
- All'uscita da `for`
- All'uscita da `sections`
- All'uscita da `single`
- All'ingresso e all'uscita da `parallel for`
- All'ingresso e all'uscita da `parallel sections`

La direttiva non è implicita se `nowait` è presente una clausola. Si noti che la `flush` direttiva non è implicita per uno dei seguenti elementi:

- Alla voce `for`
- All'ingresso o all'uscita da `master`
- Alla voce `sections`
- Alla voce `single`

Un riferimento che accede al valore di un oggetto con un tipo qualificato volatile si comporta come se fosse presente una `flush` direttiva che specifica l'oggetto in corrispondenza del punto di sequenza precedente. Un riferimento che modifica il valore di un oggetto con un tipo qualificato volatile si comporta come se fosse presente una `flush` direttiva che specifica l'oggetto in corrispondenza del punto di sequenza successivo.

Poiché la `flush` direttiva non dispone di un'istruzione del linguaggio C come parte della relativa sintassi, esistono alcune restrizioni relative alla posizione all'interno di un programma. Per ulteriori informazioni sulla grammatica formale, vedere [Appendice C](c-openmp-c-and-cpp-grammar.md). Nell'esempio seguente vengono illustrate queste restrizioni.

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

Le restrizioni alla `flush` direttiva sono le seguenti:

- Una variabile specificata in una `flush` direttiva non deve avere un tipo di riferimento.

### <a name="266-ordered-construct"></a>costrutto ordinato 2.6.6

Il blocco strutturato che segue una `ordered` direttiva viene eseguito nell'ordine in cui le iterazioni vengono eseguite in un ciclo sequenziale. La sintassi della `ordered` direttiva è la seguente:

```cpp
#pragma omp ordered new-linestructured-block
```

Una `ordered` direttiva deve rientrare nell'extent dinamico di un `for` `parallel for` costrutto o. `for`Per la `parallel for` direttiva o a cui il `ordered` costrutto viene associato deve essere `ordered` specificata una clausola, come descritto nella [sezione 2.4.1](#241-for-construct). Nell'esecuzione di un `for` `parallel for` costrutto o con una `ordered` clausola, i `ordered` costrutti vengono eseguiti rigorosamente nell'ordine in cui verrebbero eseguiti in un'esecuzione sequenziale del ciclo.

Le restrizioni alla `ordered` direttiva sono le seguenti:

- Un'iterazione di un ciclo con un `for` costrutto non deve eseguire più di una volta la stessa direttiva ordinata e non deve eseguire più di una `ordered` direttiva.

## <a name="27-data-environment"></a>ambiente dati 2,7

In questa sezione vengono presentate una direttiva e diverse clausole per controllare l'ambiente dei dati durante l'esecuzione di aree parallele, come indicato di seguito:

- Viene fornita una direttiva [threadprivate](#271-threadprivate-directive) per fare in modo che le variabili di ambito del file, dello spazio dei nomi o dell'ambito di blocco statico siano locali in un thread.

- Le clausole che è possibile specificare nelle direttive per controllare gli attributi di condivisione delle variabili per la durata dei costrutti paralleli o di condivisione di lavoro sono descritte nella [sezione 2.7.2](#272-data-sharing-attribute-clauses).

### <a name="271-threadprivate-directive"></a>2.7.1 threadprivate (direttiva)

La `threadprivate` direttiva rende le variabili di ambito del file denominato, dello spazio dei nomi o dell'ambito del blocco statico specificate nell' *elenco di variabili* privato a un thread. *Variable-list* è un elenco delimitato da virgole di variabili che non hanno un tipo incompleto. La sintassi della `threadprivate` direttiva è la seguente:

```cpp
#pragma omp threadprivate(variable-list) new-line
```

Ogni copia di una `threadprivate` variabile viene inizializzata una volta, in un punto non specificato del programma prima del primo riferimento a tale copia e nel modo consueto, ad esempio, perché la copia master verrebbe inizializzata in un'esecuzione seriale del programma. Si noti che se si fa riferimento a un oggetto in un inizializzatore esplicito di una `threadprivate` variabile e il valore dell'oggetto viene modificato prima del primo riferimento a una copia della variabile, il comportamento non è specificato.

Come per qualsiasi variabile privata, un thread non deve fare riferimento alla copia di un altro thread di un `threadprivate` oggetto. Durante le aree seriali e le aree master del programma, i riferimenti saranno alla copia del thread master dell'oggetto.

Dopo l'esecuzione della prima area parallela, `threadprivate` è garantita la persistenza dei dati negli oggetti solo se il meccanismo dei thread dinamici è stato disabilitato e se il numero di thread rimane invariato per tutte le aree parallele.

Le restrizioni alla `threadprivate` direttiva sono le seguenti:

- Una `threadprivate` direttiva per le variabili di ambito file o spazio dei nomi deve trovarsi all'esterno di qualsiasi definizione o dichiarazione e deve precedere in modo lessicale tutti i riferimenti a una qualsiasi delle variabili nell'elenco.

- Ogni variabile nell' *elenco di variabili* di una `threadprivate` direttiva nel file o nell'ambito dello spazio dei nomi deve fare riferimento a una dichiarazione di variabile nell'ambito di un file o di uno spazio dei nomi che precede a livello lessicale la direttiva.

- Una `threadprivate` direttiva per le variabili di ambito blocco statico deve essere visualizzata nell'ambito della variabile e non in un ambito annidato. La direttiva deve precedere in modo lessicale tutti i riferimenti a una qualsiasi delle variabili nell'elenco.

- Ogni variabile nell' *elenco di variabili* di una `threadprivate` direttiva nell'ambito del blocco deve fare riferimento a una dichiarazione di variabile nello stesso ambito che precede a livello lessicale la direttiva. La dichiarazione di variabile deve usare l'identificatore della classe di archiviazione statica.

- Se una variabile viene specificata in una `threadprivate` direttiva in un'unità di conversione, è necessario specificarla in una `threadprivate` direttiva in ogni unità di conversione in cui è dichiarata.

- Una `threadprivate` variabile non deve essere presente in alcuna clausola eccetto `copyin` la `copyprivate` clausola,, `schedule` , `num_threads` o `if` .

- L'indirizzo di una `threadprivate` variabile non è una costante di indirizzo.

- Una `threadprivate` variabile non deve avere un tipo incompleto o un tipo di riferimento.

- Una `threadprivate` variabile con un tipo di classe non Pod deve avere un costruttore di copia accessibile e non ambiguo se è dichiarata con un inizializzatore esplicito.

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

Se una variabile è visibile quando viene rilevato un costrutto di condivisione di lavoro o parallelo e la variabile non è specificata in una clausola o una direttiva dell'attributo di condivisione `threadprivate` , la variabile viene condivisa. Le variabili statiche dichiarate nell'ambito dinamico di un'area parallela vengono condivise. La memoria allocata dell'heap, ad esempio `malloc()` l'uso di in C o c++ o l' **`new`** operatore in c++, è condivisa. Il puntatore a questa memoria, tuttavia, può essere privato o condiviso. Le variabili con durata di archiviazione automatica dichiarata nell'ambito dinamico di un'area parallela sono private.

La maggior parte delle clausole accetta un argomento di *elenco* di variabili, ovvero un elenco delimitato da virgole di variabili visibili. Se una variabile a cui viene fatto riferimento in una clausola dell'attributo di condivisione dei dati ha un tipo derivato da un modello e non sono presenti altri riferimenti a tale variabile nel programma, il comportamento non è definito.

Tutte le variabili visualizzate all'interno delle clausole di direttiva devono essere visibili. Le clausole possono essere ripetute in base alle esigenze, ma nessuna variabile può essere specificata in più di una clausola, ad eccezione del fatto che una variabile può essere specificata in una `firstprivate` `lastprivate` clausola e.

Le sezioni seguenti descrivono le clausole degli attributi di condivisione dei dati:

- [privata](#2721-private)
- [firstprivate](#2722-firstprivate)
- [lastprivate](#2723-lastprivate)
- [condiviso](#2724-shared)
- [default](#2725-default)
- [riduzione](#2726-reduction)
- [copyin](#2727-copyin)
- [copyprivate](#2728-copyprivate)

#### <a name="2721-private"></a>2.7.2.1 private

La `private` clausola dichiara le variabili in un elenco di variabili da privato a ogni thread in un team. La sintassi della `private` clausola è la seguente:

```cpp
private(variable-list)
```

Il comportamento di una variabile specificata in una `private` clausola è il seguente. Per il costrutto viene allocato un nuovo oggetto con durata di archiviazione automatica. Le dimensioni e l'allineamento del nuovo oggetto sono determinati dal tipo della variabile. Questa allocazione viene eseguita una volta per ogni thread del team e viene richiamato un costruttore predefinito per un oggetto classe, se necessario. in caso contrario, il valore iniziale è indeterminato.  L'oggetto originale a cui fa riferimento la variabile presenta un valore indeterminato al momento della voce al costrutto, non deve essere modificato all'interno dell'extent dinamico del costrutto e presenta un valore indeterminato al momento dell'uscita dal costrutto.

Nell'ambito lessicale del costrutto di direttiva, la variabile fa riferimento al nuovo oggetto privato allocato dal thread.

Di seguito sono riportate le restrizioni per la `private` clausola:

- Una variabile con un tipo di classe specificato in una `private` clausola deve avere un costruttore predefinito accessibile e non ambiguo.

- Una variabile specificata in una `private` clausola non deve avere un **`const`** tipo qualificato a meno che non disponga di un tipo di classe con un `mutable` membro.

- Una variabile specificata in una `private` clausola non deve avere un tipo incompleto o un tipo di riferimento.

- Le variabili visualizzate nella `reduction` clausola di una `parallel` direttiva non possono essere specificate in una `private` clausola in una direttiva di condivisione del lavoro associata al costrutto parallelo.

#### <a name="2722-firstprivate"></a>2.7.2.2 firstprivate

La `firstprivate` clausola fornisce un superset della funzionalità fornita dalla `private` clausola. La sintassi della `firstprivate` clausola è la seguente:

```cpp
firstprivate(variable-list)
```

Le variabili specificate nell' *elenco di variabili* hanno una `private` semantica di clausola, come descritto nella [sezione 2.7.2.1](#2721-private). L'inizializzazione o la costruzione avviene come se fosse stata eseguita una volta per ogni thread, prima dell'esecuzione del thread del costrutto. Per una `firstprivate` clausola in un costrutto parallelo, il valore iniziale del nuovo oggetto privato è il valore dell'oggetto originale esistente immediatamente prima del costrutto parallelo per il thread che lo rileva. Per una `firstprivate` clausola in un costrutto di condivisione del lavoro, il valore iniziale del nuovo oggetto privato per ogni thread che esegue il costrutto di condivisione del lavoro è il valore dell'oggetto originale esistente prima del momento in cui lo stesso thread rileva il costrutto di condivisione del lavoro. Inoltre, per gli oggetti C++, il nuovo oggetto privato per ogni thread viene creato copia dall'oggetto originale.

Di seguito sono riportate le restrizioni per la `firstprivate` clausola:

- Una variabile specificata in una `firstprivate` clausola non deve avere un tipo incompleto o un tipo di riferimento.

- Una variabile con un tipo di classe specificato come `firstprivate` deve disporre di un costruttore di copia accessibile e non ambiguo.

- Le variabili private all'interno di un'area parallela o visualizzate nella `reduction` clausola di una `parallel` direttiva non possono essere specificate in una `firstprivate` clausola in una direttiva di condivisione del lavoro associata al costrutto parallelo.

#### <a name="2723-lastprivate"></a>2.7.2.3 lastprivate

La `lastprivate` clausola fornisce un superset della funzionalità fornita dalla `private` clausola. La sintassi della `lastprivate` clausola è la seguente:

```cpp
lastprivate(variable-list)
```

Le variabili specificate nell' *elenco di variabili* hanno una `private` semantica di clausola. Quando una `lastprivate` clausola viene visualizzata sulla direttiva che identifica un costrutto di condivisione del lavoro, il valore di ogni `lastprivate` variabile dell'ultima iterazione del ciclo associato o della direttiva dell'ultima sezione lessicale viene assegnato all'oggetto originale della variabile. Le variabili a cui non è assegnato un valore dall'ultima iterazione dell'oggetto `for` o `parallel for` , o dalla sezione dell'ultima lessicale della `sections` `parallel sections` direttiva o, presentano valori indeterminati dopo il costrutto. I sottooggetti non assegnati hanno anche un valore indeterminato dopo il costrutto.

Di seguito sono riportate le restrizioni per la `lastprivate` clausola:

- Tutte le restrizioni per `private` Apply.

- Una variabile con un tipo di classe specificato come `lastprivate` deve avere un operatore di assegnazione di copia accessibile e non ambiguo.

- Le variabili private all'interno di un'area parallela o visualizzate nella `reduction` clausola di una `parallel` direttiva non possono essere specificate in una `lastprivate` clausola in una direttiva di condivisione del lavoro associata al costrutto parallelo.

#### <a name="2724-shared"></a>2.7.2.4 shared

Questa clausola condivide le variabili visualizzate nell' *elenco di variabili* tra tutti i thread di un team. Tutti i thread all'interno di un team accedono alla stessa area di archiviazione per le `shared` variabili.

La sintassi della `shared` clausola è la seguente:

```cpp
shared(variable-list)
```

#### <a name="2725-default"></a>2.7.2.5 default

La `default` clausola consente all'utente di influenzare gli attributi di condivisione dei dati delle variabili. La sintassi della `default` clausola è la seguente:

```cpp
default(shared | none)
```

Specificare `default(shared)` equivale a elencare in modo esplicito ogni variabile attualmente visibile in una `shared` clausola, a meno che non sia `threadprivate` o **`const`** -Qualified. In assenza di una clausola esplicita `default` , il comportamento predefinito è identico a quello di se è `default(shared)` stato specificato.

`default(none)`Per specificare, è necessario che almeno uno dei seguenti sia true per ogni riferimento a una variabile nell'ambito lessicale del costrutto parallelo:

- La variabile viene elencata in modo esplicito in una clausola Attribute di condivisione dei dati di un costrutto che contiene il riferimento.

- La variabile viene dichiarata all'interno del costrutto parallelo.

- La variabile è `threadprivate` .

- Il tipo della variabile è **`const`** Qualified.

- La variabile è la variabile di controllo del ciclo per un `for` ciclo che segue immediatamente una `for` `parallel for` direttiva o e il riferimento alla variabile viene visualizzato all'interno del ciclo.

Se si specifica una variabile in una `firstprivate` `lastprivate` clausola, o `reduction` di una direttiva racchiusa, viene generato un riferimento implicito alla variabile nel contesto di inclusione. Tali riferimenti impliciti sono anche soggetti ai requisiti elencati sopra.

`default`In una direttiva è possibile specificare una sola clausola `parallel` .

È possibile eseguire l'override dell'attributo di condivisione dati predefinito di una variabile usando `private` le `firstprivate` `lastprivate` clausole,,, `reduction` e `shared` , come illustrato nell'esempio seguente:

```cpp
#pragma  omp  parallel  for  default(shared)  firstprivate(i)\
   private(x)  private(r)  lastprivate(i)
```

#### <a name="2726-reduction"></a>2.7.2.6 reduction

Questa clausola esegue una riduzione sulle variabili scalari visualizzate nell' *elenco di variabili* con operatore *op*. La sintassi della `reduction` clausola è la seguente:

`reduction(`*operazione operativa* `:` *elenco di variabili*`)`

Una riduzione viene in genere specificata per un'istruzione con uno dei formati seguenti:

- *x* `=` *x* *op* *expr*
- *x* *binop* `=` *expr*
- *x* `=` *expr* *op* *x*  (ad eccezione della sottrazione)
- *x*`++`
- `++` *x*
- *x*`--`
- `--` *x*

dove:

*x*<br/>
Una delle variabili di riduzione specificate nell'elenco.

*elenco di variabili*<br/>
Elenco delimitato da virgole di variabili di riduzione scalare.

*expr*<br/>
Espressione con tipo scalare che non fa riferimento a *x*.

*op*<br/>
Non è un operatore di overload, ma uno tra `+` , `*` ,, `-` `&` , `^` , `|` , `&&` o `||` .

*binop*<br/>
Non è un operatore di overload, ma uno tra `+` , `*` , `-` , `&` , `^` o `|` .

Di seguito è riportato un esempio della `reduction` clausola:

```cpp
#pragma omp parallel for reduction(+: a, y) reduction(||: am)
for (i=0; i<n; i++) {
   a += b[i];
   y = sum(y, c[i]);
   am = am || b[i] == c[i];
}
```

Come illustrato nell'esempio, un operatore può essere nascosto all'interno di una chiamata di funzione. L'utente deve prestare attenzione che l'operatore specificato nella `reduction` clausola corrisponda all'operazione di riduzione.

Sebbene l'operando di destra dell' `||` operatore non abbia effetti collaterali in questo esempio, è consentito, ma deve essere utilizzato con cautela. In questo contesto, un effetto collaterale che non si verifica durante l'esecuzione sequenziale del ciclo potrebbe verificarsi durante l'esecuzione parallela. Questa differenza può verificarsi perché l'ordine di esecuzione delle iterazioni è indeterminato.

L'operatore viene utilizzato per determinare il valore iniziale di tutte le variabili private utilizzate dal compilatore per la riduzione e per determinare l'operatore di finalizzazione. Se l'operatore viene specificato in modo esplicito, l'istruzione di riduzione esula dall'extent lessicale del costrutto. `reduction`È possibile specificare qualsiasi numero di clausole sulla direttiva, ma una variabile può essere visualizzata al massimo da una `reduction` clausola per la direttiva.

Viene creata una copia privata di ogni variabile in *elenco di variabili* , una per ogni thread, come se `private` fosse stata utilizzata la clausola. La copia privata viene inizializzata in base all'operatore (vedere la tabella seguente).

Alla fine dell'area per cui `reduction` è stata specificata la clausola, l'oggetto originale viene aggiornato in modo da riflettere il risultato della combinazione del valore originale con il valore finale di ogni copia privata utilizzando l'operatore specificato. Gli operatori di riduzione sono tutti associativi (ad eccezione della sottrazione) e il compilatore può riassociare liberamente il calcolo del valore finale. I risultati parziali di una riduzione della sottrazione vengono aggiunti per formare il valore finale.

Il valore dell'oggetto originale diventa indeterminato quando il primo thread raggiunge la clausola contenitore e rimane così fino al completamento del calcolo della riduzione.  In genere, il calcolo verrà completato alla fine del costrutto; Tuttavia, se la `reduction` clausola viene usata in un costrutto a cui `nowait` viene applicato anche, il valore dell'oggetto originale rimane indeterminato fino a quando non viene eseguita una sincronizzazione di barriera per garantire che tutti i thread abbiano completato la `reduction` clausola.

Nella tabella seguente sono elencati gli operatori validi e i rispettivi valori di inizializzazione canonici. Il valore di inizializzazione effettivo sarà coerente con il tipo di dati della variabile di riduzione.

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

Di seguito sono riportate le restrizioni per la `reduction` clausola:

- Il tipo delle variabili nella `reduction` clausola deve essere valido per l'operatore di riduzione, ad eccezione del fatto che i tipi di puntatore e i tipi di riferimento non sono mai consentiti.

- Una variabile specificata nella `reduction` clausola non deve essere **`const`** qualificata.

- Le variabili private all'interno di un'area parallela o visualizzate nella `reduction` clausola di una `parallel` direttiva non possono essere specificate in una `reduction` clausola in una direttiva di condivisione del lavoro associata al costrutto parallelo.

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

La `copyin` clausola fornisce un meccanismo per assegnare lo stesso valore alle `threadprivate` variabili per ogni thread del team che esegue l'area parallela. Per ogni variabile specificata in una `copyin` clausola, il valore della variabile nel thread master del team viene copiato, come se venisse assegnato, alle copie thread-private all'inizio dell'area parallela. La sintassi della `copyin` clausola è la seguente:

```cpp

copyin(
variable-list
)
```

Di seguito sono riportate le restrizioni per la `copyin` clausola:

- Una variabile specificata nella `copyin` clausola deve avere un operatore di assegnazione di copia accessibile e non ambiguo.

- Una variabile specificata nella `copyin` clausola deve essere una `threadprivate` variabile.

#### <a name="2728-copyprivate"></a>2.7.2.8 copyprivate

La `copyprivate` clausola fornisce un meccanismo per usare una variabile privata per trasmettere un valore da un membro di un team agli altri membri. Si tratta di un'alternativa all'uso di una variabile condivisa per il valore quando si fornisce una variabile condivisa di questo tipo sarebbe difficile, ad esempio in una ricorsione che richiedeva una variabile diversa a ogni livello. La `copyprivate` clausola può essere visualizzata solo nella `single` direttiva.

La sintassi della `copyprivate` clausola è la seguente:

```cpp

copyprivate(
variable-list
)
```

L'effetto della `copyprivate` clausola sulle variabili nell'elenco di variabili si verifica dopo l'esecuzione del blocco strutturato associato al `single` costrutto e prima che uno dei thread del team abbia lasciato la barriera alla fine del costrutto. Quindi, in tutti gli altri thread del team, per ogni variabile nell' *elenco di variabili*, tale variabile viene definita (come se fosse per assegnazione) con il valore della variabile corrispondente nel thread che ha eseguito il blocco strutturato del costrutto.

Di seguito sono riportate le restrizioni alla `copyprivate` clausola:

- Una variabile specificata nella `copyprivate` clausola non deve essere presente in una `private` `firstprivate` clausola o per la stessa `single` direttiva.

- Se `single` `copyprivate` viene rilevata una direttiva con una clausola nell'ambito dinamico di un'area parallela, tutte le variabili specificate nella `copyprivate` clausola devono essere private nel contesto di inclusione.

- Una variabile specificata nella `copyprivate` clausola deve avere un operatore di assegnazione di copia non ambiguo accessibile.

## <a name="28-directive-binding"></a>2,8 associazione di direttive

Il binding dinamico delle direttive deve rispettare le regole seguenti:

- Le `for` `sections` `single` direttive,,, `master` e si `barrier` associano all'oggetto in modo dinamico, `parallel` se disponibile, indipendentemente dal valore di qualsiasi `if` clausola che può essere presente nella direttiva. Se attualmente non è in esecuzione alcuna area parallela, le direttive vengono eseguite da un team composto solo dal thread master.

- La `ordered` direttiva viene associata all'oggetto che include in modo dinamico `for` .

- La `atomic` direttiva impone l'accesso esclusivo rispetto alle `atomic` direttive in tutti i thread, non solo al team corrente.

- La `critical` direttiva impone l'accesso esclusivo rispetto alle `critical` direttive in tutti i thread, non solo al team corrente.

- Una direttiva non può mai essere associata ad alcuna direttiva al di fuori dell'inclusione dinamica più vicina `parallel` .

## <a name="29-directive-nesting"></a>2,9 annidamento di direttive

L'annidamento dinamico delle direttive deve rispettare le regole seguenti:

- Una `parallel` direttiva in modo dinamico all'interno di un'altra `parallel` stabilisce logicamente un nuovo team, composto solo dal thread corrente, a meno che non sia abilitato il parallelismo annidato.

- `for``sections` `single` le direttive, e che si associano allo stesso `parallel` non sono consentite annidate all'interno di altre.

- `critical` le direttive con lo stesso nome non possono essere annidate all'interno di altre. Si noti che questa restrizione non è sufficiente per impedire il deadlock.

- `for`le `sections` `single` direttive, e non sono consentite nell'extent dinamico delle `critical` `ordered` aree, e `master` se le direttive vengono associate allo stesso `parallel` modo delle aree.

- `barrier` le direttive non sono consentite nell'ambito dinamico delle `for` `ordered` aree,,, `sections` `single` , `master` e `critical` se le direttive vengono associate allo stesso `parallel` modo delle aree.

- `master` le direttive non sono consentite nell'extent dinamico delle `for` `sections` `single` direttive, e se le `master` direttive vengono associate allo stesso `parallel` modo delle direttive di condivisione del lavoro.

- `ordered` le direttive non sono consentite nell'ambito dinamico delle `critical` aree se le direttive vengono associate allo stesso modo delle `parallel` aree.

- Una direttiva consentita quando eseguita in modo dinamico all'interno di un'area parallela è consentita anche quando viene eseguita all'esterno di un'area parallela. Quando viene eseguita in modo dinamico al di fuori di un'area parallela specificata dall'utente, la direttiva viene eseguita da un team composto solo dal thread master.
