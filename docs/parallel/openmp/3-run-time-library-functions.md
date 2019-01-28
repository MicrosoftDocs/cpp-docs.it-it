---
title: 3. Funzioni della libreria run-time
ms.date: 01/17/2019
ms.assetid: b226e512-6822-4cbe-a2ca-74cc2bb7e880
ms.openlocfilehash: 4e72d2d74bb26f8eeeb422881cabf92630cced43
ms.sourcegitcommit: 382e247c0f1b4cb7c2dab837b8b6fdff24bff47a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/28/2019
ms.locfileid: "55087314"
---
# <a name="3-run-time-library-functions"></a>3. Funzioni della libreria run-time

Questa sezione descrive le funzioni della libreria di runtime OpenMP C e C++. L'intestazione  **\<omp.h >** dichiara due tipi, diverse funzioni che consente di controllare l'ambiente di esecuzione parallela di query e funzioni che possono essere utilizzate per sincronizzare l'accesso ai dati di blocco.

Il tipo `omp_lock_t` è in grado di rappresentare che un blocco è disponibile un tipo di oggetto o che un thread è proprietario di un blocco. Questi blocchi sono dette *blocchi semplici*.

Il tipo `omp_nest_lock_t` è un tipo di oggetto in grado di rappresentare entrambi che un blocco è disponibile, o entrambe le identità del thread che possiede il blocco e una *conteggio di annidamento* (descritti di seguito). Questi blocchi sono dette *blocchi annidabili*.

Le funzioni della libreria sono funzioni esterne con il collegamento "C".

Le descrizioni in questo capitolo sono suddivisi nei seguenti argomenti:

- [Esecuzione di funzioni di ambiente](#31-execution-environment-functions)
- [Funzioni di blocco](#32-lock-functions)
- [Routine di temporizzazione](#33-timing-routines)

## <a name="31-execution-environment-functions"></a>3.1 esecuzione di funzioni di ambiente

Le funzioni descritte in questa sezione interessano e monitorare ambienti paralleli thread e processori:

- [omp_set_num_threads](#311-omp_set_num_threads-function)
- [omp_get_num_threads](#312-omp_get_num_threads-function)
- [omp_get_max_threads](#313-omp_get_max_threads-function)
- [omp_get_thread_num](#314-omp_get_thread_num-function)
- [omp_get_num_procs](#315-omp_get_num_procs-function)
- [omp_in_parallel](#316-omp_in_parallel-function)
- [omp_set_dynamic](#317-omp_set_dynamic-function)
- [omp_get_dynamic](#318-omp_get_dynamic-function)
- [omp_set_nested](#319-omp_set_nested-function)
- [omp_get_nested](#3110-omp_get_nested-function)

### <a name="311-ompsetnumthreads-function"></a>3.1.1 omp_set_num_threads (funzione)

Il `omp_set_num_threads` funzione imposta il numero predefinito di thread da usare per aree parallele in un secondo momento che non specificano un `num_threads` clausola. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_num_threads(int num_threads);
```

Il valore del parametro *num_threads* deve essere un numero intero positivo. Il suo effetto varia a seconda se è abilitata la regolazione dinamica del numero di thread. Per un set completo di regole che stabiliscono l'interazione tra il `omp_set_num_threads` funzione e regolazione dinamica del thread, vedere [sezione 2.3](2-directives.md#23-parallel-construct).

Questa funzione ha gli effetti descritti in precedenza quando viene chiamato da una parte del programma in cui il `omp_in_parallel` funzione restituisce zero. Se viene chiamato da una parte del programma in cui il `omp_in_parallel` funzione restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.

Questa chiamata ha la precedenza sul `OMP_NUM_THREADS` variabile di ambiente. Il valore predefinito per il numero di thread, che può essere stabilita chiamando `omp_set_num_threads` oppure impostando il `OMP_NUM_THREADS` variabile di ambiente, può essere sottoposto a override esplicito in una singola `parallel` direttiva specificando il `num_threads` clausola.

#### <a name="cross-references"></a>Riferimenti incrociati

- [omp_set_dynamic](#317-omp_set_dynamic-function) function
- [omp_get_dynamic](#318-omp_get_dynamic-function) function
- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads) variabile di ambiente
- [num_threads](2-directives.md#23-parallel-construct) clausola

### <a name="312-ompgetnumthreads-function"></a>3.1.2 omp_get_num_threads (funzione)

Il `omp_get_num_threads` funzione restituisce il numero di thread attualmente del team l'esecuzione di tale area dalla quale viene chiamato. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_num_threads(void);
```

Il `num_threads` clausola, il `omp_set_num_threads` funzione e il `OMP_NUM_THREADS` variabile di ambiente controllare il numero di thread in un team.

Se il numero di thread non è stato impostato in modo esplicito dall'utente, il valore predefinito è definito dall'implementazione. Questa funzione esegue l'associazione per l'inclusione più vicina `parallel` direttiva. Se viene chiamato da una parte seriale di un programma o da un'area parallela annidata che viene serializzata, questa funzione restituisce 1.

#### <a name="cross-references"></a>Riferimenti incrociati

- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads)
- [num_threads](2-directives.md#23-parallel-construct)
- [parallel](2-directives.md#23-parallel-construct)

### <a name="313-ompgetmaxthreads-function"></a>3.1.3 omp_get_max_threads (funzione)

Il `omp_get_max_threads` funzione restituisce un intero che ha garantito a essere grande almeno come il numero di thread che verrebbe utilizzato in modo da formare un team se un'area parallela senza un `num_threads` clausola sono stati affinché sia disponibile in quel punto nel codice. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_max_threads(void);
```

Nell'esempio esprime un limite inferiore al valore di `omp_get_max_threads`:

```

threads-used-for-next-team
<= omp_get_max_threads
```

Si noti che se un altro parallele area Usa la `num_threads` clausola per richiedere un numero specifico di thread, la garanzia sul limite inferiore del risultato di `omp_get_max_threads` non contiene lungo.

Il `omp_get_max_threads` valore restituito della funzione è utilizzabile per allocare dinamicamente risorse di archiviazione sufficienti per tutti i thread del team alla successiva area parallela.

#### <a name="cross-references"></a>Riferimenti incrociati

- [omp_get_num_threads](#312-omp_get_num_threads-function)
- [omp_set_num_threads](#311-omp_set_num_threads-function)
- [omp_set_dynamic](#317-omp_set_dynamic-function)
- [num_threads](2-directives.md#23-parallel-construct)

### <a name="314-ompgetthreadnum-function"></a>3.1.4 omp_get_thread_num (funzione)

Il `omp_get_thread_num` funzione restituisce il numero di thread, all'interno del relativo team, del thread che esegue la funzione. Rientra numero di thread compreso tra 0 e `omp_get_num_threads()`-1, inclusivo. Il thread master del team sia 0.

Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_thread_num(void);
```

Se viene chiamato da un'area seriale, `omp_get_thread_num` restituisce 0. Se chiamato dall'interno di un'area parallela annidata che viene serializzata, questa funzione restituisce 0.

#### <a name="cross-references"></a>Riferimenti incrociati

- [omp_get_num_threads](#312-omp_get_num_threads-function) function

### <a name="315-ompgetnumprocs-function"></a>3.1.5 omp_get_num_procs (funzione)

Il `omp_get_num_procs` funzione restituisce il numero di processori disponibili per il programma al momento della chiamata di funzione. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_num_procs(void);
```

### <a name="316-ompinparallel-function"></a>3.1.6 omp_in_parallel (funzione)

Il `omp_in_parallel` funzione restituisce un valore diverso da zero se viene chiamato all'interno di extent dinamica di un'area parallela in esecuzione in parallelo; in caso contrario, restituisce 0. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_in_parallel(void);
```

Questa funzione restituisce un valore diverso da zero quando viene chiamato dall'interno di un'area in esecuzione in parallelo, tra cui regioni annidate che vengono serializzate.

### <a name="317-ompsetdynamic-function"></a>3.1.7 omp_set_dynamic (funzione)

Il `omp_set_dynamic` funzione Abilita o disabilita la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_dynamic(int dynamic_threads);
```

Se *dynamic_threads* restituisce un valore diverso da zero, il numero di thread usati per l'esecuzione di aree parallele imminenti potrebbe venga regolato automaticamente dall'ambiente in fase di esecuzione per utilizzare al meglio le risorse di sistema. Di conseguenza, il numero di thread specificato dall'utente è il numero massimo di thread. Il numero di thread del team l'esecuzione di un'area parallela rimangono fisso per la durata di tale area parallela e viene segnalato dal `omp_get_num_threads` (funzione).

Se *dynamic_threads* valuta su 0, viene disabilitato regolazione dinamica.

Questa funzione ha gli effetti descritti in precedenza quando viene chiamato da una parte del programma in cui il `omp_in_parallel` funzione restituisce zero. Se viene chiamato da una parte del programma in cui il `omp_in_parallel` funzione restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.

Una chiamata a `omp_set_dynamic` ha la precedenza sul `OMP_DYNAMIC` variabile di ambiente.

Il valore predefinito per la regolazione dinamica del thread è definito dall'implementazione. Di conseguenza, i codici di utente che dipendono da un numero specifico di thread per l'esecuzione corretta devono disabilitare in modo esplicito thread dinamico. Le implementazioni non sono necessarie per offrire la possibilità di modificare dinamicamente il numero di thread, ma sono richieste per fornire l'interfaccia per supportare la portabilità tra tutte le piattaforme.

#### <a name="cross-references"></a>Riferimenti incrociati

- [omp_get_num_threads](#312-omp_get_num_threads-function)
- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic)
- [omp_in_parallel](#316-omp_in_parallel-function)

### <a name="318-ompgetdynamic-function"></a>3.1.8 omp_get_dynamic (funzione)

Il `omp_get_dynamic` funzione restituisce un valore diverso da zero se è abilitata, la regolazione dinamica dei thread e restituisce 0 in caso contrario. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_dynamic(void);
```

Se l'implementazione non implementa la regolazione dinamica del numero di thread, questa funzione restituisce sempre 0.

#### <a name="cross-references"></a>Riferimenti incrociati

- Per una descrizione di regolazione del thread dinamica, vedere [omp_set_dynamic](#317-omp_set_dynamic-function).

### <a name="319-ompsetnested-function"></a>3.1.9 omp_set_nested (funzione)

Il `omp_set_nested` funzione Abilita o disabilita il parallelismo annidato. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_nested(int nested);
```

Se *nidificata* restituisce 0, annidato è disabilitato il parallelismo, ovvero l'impostazione predefinita e aree parallele annidate vengono serializzate ed eseguite dal thread corrente. In caso contrario, è abilitato il parallelismo annidato e aree parallele annidati possono distribuire thread aggiuntivi per formare i team annidati.

Questa funzione ha gli effetti descritti in precedenza quando viene chiamato da una parte del programma in cui il `omp_in_parallel` funzione restituisce zero. Se viene chiamato da una parte del programma in cui il `omp_in_parallel` funzione restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.

Questa chiamata ha la precedenza sul `OMP_NESTED` variabile di ambiente.

Quando è abilitato il parallelismo annidato, il numero di thread usati per l'esecuzione di aree parallele annidate è definito dall'implementazione. Di conseguenza, implementazioni conformi OpenMP sono consentite per serializzare aree parallele nidificate, anche quando è abilitato il parallelismo annidato.

#### <a name="cross-references"></a>Riferimenti incrociati

- [OMP_NESTED](4-environment-variables.md#44-omp_nested)
- [omp_in_parallel](#316-omp_in_parallel-function)

### <a name="3110-ompgetnested-function"></a>3.1.10 funzione omp_get_nested

Il `omp_get_nested` funzione restituisce un valore diverso da zero se il parallelismo annidato è abilitato e 0 se è disabilitato. Per altre informazioni sul parallelismo annidato, vedere [omp_set_nested](#319-omp_set_nested-function). Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_nested(void);
```

Se un'implementazione non implementa il parallelismo annidato, questa funzione restituisce sempre 0.

## <a name="32-lock-functions"></a>3.2 funzioni di blocco

Le funzioni descritte in questa sezione modificano i blocchi utilizzati per la sincronizzazione.

Per le funzioni seguenti, la variabile di blocco deve avere tipo `omp_lock_t`. Questa variabile deve essere accessibile solo queste funzioni. Tutte le funzioni di blocco richiedono un argomento che dispone di un puntatore a `omp_lock_t` tipo.

- Il [funzioni omp_init_lock](#321-omp_init_lock-and-omp_init_nest_lock-functions) funzione Inizializza un blocco semplice.
- Il [funzioni omp_destroy_lock](#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions) funzione rimuove un blocco semplice.
- Il [omp_set_lock](#323-omp_set_lock-and-omp_set_nest_lock-functions) funzione attende fino a quando non è disponibile un blocco semplice.
- Il [funzioni omp_unset_lock](#324-omp_unset_lock-and-omp_unset_nest_lock-functions) funzione rilascia un blocco semplice.
- Il [funzioni omp_test_lock](#325-omp_test_lock-and-omp_test_nest_lock-functions) funzione verifica blocco semplice.

Per le funzioni seguenti, la variabile di blocco deve avere tipo `omp_nest_lock_t`.  Questa variabile deve essere accessibile solo queste funzioni. Tutte le funzioni di blocco annidabile richiedono un argomento che dispone di un puntatore a `omp_nest_lock_t` tipo.

- Il [omp_init_nest_lock](#321-omp_init_lock-and-omp_init_nest_lock-functions) funzione Inizializza un blocco annidabile.
- Il [omp_destroy_nest_lock](#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions) funzione rimuove un blocco annidabile.
- Il [omp_set_nest_lock](#323-omp_set_lock-and-omp_set_nest_lock-functions) funzione attende fino a quando un blocco annidabile è disponibile.
- Il [omp_unset_nest_lock](#324-omp_unset_lock-and-omp_unset_nest_lock-functions) funzione rilascia un blocco annidabile.
- Il [omp_test_nest_lock](#325-omp_test_lock-and-omp_test_nest_lock-functions) funzione verifica un blocco annidabile.

Le funzioni di blocco OpenMP accedono alla variabile di blocco in modo che possano sempre leggere e aggiornare il valore massimo corrente della variabile di blocco. Pertanto, non è necessario per un programma di OpenMP includere esplicita `flush` direttive per assicurarsi che il blocco valore della variabile sia coerenza tra diversi thread. (Potrebbe esserci una necessità `flush` direttive per rendere coerente con i valori di altre variabili.)

### <a name="321-ompinitlock-and-ompinitnestlock-functions"></a>3.2.1 funzioni funzioni omp_init_lock e omp_init_nest_lock

Queste funzioni consentono solo di inizializzazione di un blocco. Ogni funzione inizializza il blocco associato al parametro *blocco* per l'utilizzo nelle chiamate future. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_init_lock(omp_lock_t *lock);
void omp_init_nest_lock(omp_nest_lock_t *lock);
```

Lo stato iniziale viene sbloccato (vale a dire, nessun thread è proprietario del blocco). Per un blocco annidabile, il conteggio di annidamento iniziale è zero. Non è conforme a chiamare una di queste routine con una variabile di blocco che è già stato inizializzato.

### <a name="322-ompdestroylock-and-ompdestroynestlock-functions"></a>3.2.2 funzioni funzioni omp_destroy_lock e omp_destroy_nest_lock

Queste funzioni assicurarsi che la punta a bloccare la variabile *blocco* è inizializzata. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_destroy_lock(omp_lock_t *lock);
void omp_destroy_nest_lock(omp_nest_lock_t *lock);
```

È conforme a chiamare una di queste routine con una variabile di blocco che non è inizializzata o sbloccato.

### <a name="323-ompsetlock-and-ompsetnestlock-functions"></a>3.2.3 funzioni omp_set_lock e omp_set_nest_lock

Ognuna di queste funzioni consente di bloccare il thread che esegue la funzione fino a quando il blocco specificato è disponibile e quindi imposta il blocco. Un semplice blocco è disponibile se è sbloccato. È disponibile se si tratta di un blocco annidabile sbloccato o se è già di proprietà dal thread di esecuzione della funzione. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_lock(omp_lock_t *lock);
void omp_set_nest_lock(omp_nest_lock_t *lock);
```

Per un semplice blocco, l'argomento di `omp_set_lock` funzione deve puntare a una variabile inizializzata blocco. La proprietà del blocco viene concesso al thread di esecuzione della funzione.

Per un blocco annidabile, l'argomento di `omp_set_nest_lock` funzione deve puntare a una variabile inizializzata blocco. Il numero di nidificazione viene incrementato e il thread viene concesso o continua, la proprietà del blocco.

### <a name="324-ompunsetlock-and-ompunsetnestlock-functions"></a>3.2.4 funzioni funzioni omp_unset_lock e omp_unset_nest_lock

Queste funzioni forniscono i mezzi di rilasciare la proprietà di un blocco. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_unset_lock(omp_lock_t *lock);
void omp_unset_nest_lock(omp_nest_lock_t *lock);
```

L'argomento per ognuna di queste funzioni deve puntare a una variabile di blocco inizializzato il thread che esegue la funzione di proprietà. Il comportamento è definito se il thread non proprietario del blocco.

Per un semplice blocco, il `omp_unset_lock` funzione rilascia il thread che esegue la funzione di proprietà del blocco.

Per un blocco annidabile, il `omp_unset_nest_lock` funzione decrementa la nidificazione count e rilascia il thread che esegue la funzione di proprietà del blocco se il numero risultante è zero.

### <a name="325-omptestlock-and-omptestnestlock-functions"></a>3.2.5 funzioni funzioni omp_test_lock e omp_test_nest_lock

Queste funzioni tentano di impostare un blocco ma non bloccano l'esecuzione del thread. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_test_lock(omp_lock_t *lock);
int omp_test_nest_lock(omp_nest_lock_t *lock);
```

L'argomento deve puntare a una variabile inizializzata blocco. Queste funzioni tentano di impostare un blocco in modo analogo `omp_set_lock` e `omp_set_nest_lock`, ad eccezione del fatto che non bloccano l'esecuzione del thread.

Per un semplice blocco, il `omp_test_lock` funzione restituisce un valore diverso da zero se il blocco è impostato correttamente; in caso contrario, restituisce zero.

Per un blocco annidabile, il `omp_test_nest_lock` funzione restituisce il nuovo numero di annidamento se il blocco è impostato correttamente; in caso contrario, restituisce zero.

## <a name="33-timing-routines"></a>3.3 routine di temporizzazione

Le funzioni descritte in questa sezione supportano un timer portabile basata sul tempo reale:

- Il [omp_get_wtime](#331-omp_get_wtime-function) funzione restituisce il tempo trascorso.
- Il [omp_get_wtick](#332-omp_get_wtick-function) funzione restituisce secondi tra i successivi cicli macchina.

### <a name="331-ompgetwtime-function"></a>3.3.1 omp_get_wtime (funzione)

Il `omp_get_wtime` funzione restituisce un valore a virgola mobile a precisione doppia uguale al tempo trascorso in secondi dal tempo"in precedenza".  Il "tempo effettivo in precedenza" è arbitrario, ma ha comunque non cambia durante l'esecuzione del programma dell'applicazione. Il formato è il seguente:

```cpp
#include <omp.h>
double omp_get_wtime(void);
```

Si prevede che la funzione da utilizzare per misurare i tempi di trascorso come illustrato nell'esempio seguente:

```cpp
double start;
double end;
start = omp_get_wtime();
... work to be timed ...
end = omp_get_wtime();
printf_s("Work took %f sec. time.\n", end-start);
```

Le volte restituite sono "times singoli thread" da cui è destinato a che essi non sono necessarie per essere coerente a livello globale in tutti i thread che fanno parte di un'applicazione.

### <a name="332-ompgetwtick-function"></a>3.3.2 omp_get_wtick (funzione)

Il `omp_get_wtick` funzione restituisce un valore a virgola mobile a precisione doppia uguale al numero di secondi tra i successivi cicli macchina. Il formato è il seguente:

```cpp
#include <omp.h>
double omp_get_wtick(void);
```
