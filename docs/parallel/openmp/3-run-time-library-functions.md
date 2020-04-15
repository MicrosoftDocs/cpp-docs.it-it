---
title: 3. Funzioni della libreria di runtime
ms.date: 05/13/2019
ms.assetid: b226e512-6822-4cbe-a2ca-74cc2bb7e880
ms.openlocfilehash: 767c006b0a2d81af4d1f8f2e23f84d7847326f31
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370278"
---
# <a name="3-run-time-library-functions"></a>3. Funzioni della libreria di runtime

In questa sezione vengono descritte le funzioni della libreria di runtime OpenMP C e C. L'intestazione ** \<omp.h>** dichiara due tipi, diverse funzioni che possono essere utilizzate per controllare ed eseguire query sull'ambiente di esecuzione parallela e funzioni di blocco che possono essere utilizzate per sincronizzare l'accesso ai dati.

Il `omp_lock_t` tipo è un tipo di oggetto in grado di rappresentare che un blocco è disponibile o che un thread possiede un blocco. Questi blocchi vengono definiti *blocchi semplici*.

Il `omp_nest_lock_t` tipo è un tipo di oggetto in grado di rappresentare che un blocco è disponibile o sia l'identità del thread proprietario del blocco che un conteggio di *annidamento* (descritto di seguito). Questi blocchi sono detti *blocchi non stabili*.

Le funzioni della libreria sono funzioni esterne con collegamento "C".

Le descrizioni di questo capitolo sono suddivise nei seguenti argomenti:

- [Funzioni dell'ambiente di esecuzione](#31-execution-environment-functions)
- [Funzioni di blocco](#32-lock-functions)
- [Routine di temporizzazione](#33-timing-routines)

## <a name="31-execution-environment-functions"></a>3.1 Funzioni dell'ambiente di esecuzione

Le funzioni descritte in questa sezione influiscono e monitorano thread, processori e ambiente parallelo:

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

### <a name="311-omp_set_num_threads-function"></a><a name="311-omp_set_num_threads-function"></a>3.1.1 omp_set_num_threads funzione

La `omp_set_num_threads` funzione imposta il numero predefinito di thread da utilizzare `num_threads` per le aree parallele successive che non specificano una clausola. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_num_threads(int num_threads);
```

Il valore del parametro *num_threads* deve essere un numero intero positivo. Il suo effetto dipende dall'abilitazione della regolazione dinamica del numero di thread. Per un insieme completo di regole `omp_set_num_threads` sull'interazione tra la funzione e la regolazione dinamica dei thread, vedere la [sezione 2.3](2-directives.md#23-parallel-construct).

Questa funzione ha gli effetti descritti in precedenza `omp_in_parallel` quando viene chiamata da una parte del programma in cui la funzione restituisce zero. Se viene chiamato da una parte del `omp_in_parallel` programma in cui la funzione restituisce un valore diverso da zero, il comportamento di questa funzione non è definito.

Questa chiamata ha la `OMP_NUM_THREADS` precedenza sulla variabile di ambiente. Il valore predefinito per il numero di thread, che `omp_set_num_threads` `OMP_NUM_THREADS` può essere stabilito chiamando o impostando `parallel` la variabile `num_threads` di ambiente, può essere sottoposto a override esplicito in una singola direttiva specificando la clausola.

Per ulteriori informazioni, vedere [omp_set_dynamic](#317-omp_set_dynamic-function).

#### <a name="cross-references"></a>Riferimenti incrociati

- [omp_set_dynamic](#317-omp_set_dynamic-function) (funzione)
- [omp_get_dynamic](#318-omp_get_dynamic-function) (funzione)
- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads) variabile di ambiente
- [clausola num_threads](2-directives.md#23-parallel-construct)

### <a name="312-omp_get_num_threads-function"></a><a name="312-omp_get_num_threads-function"></a>3.1.2 funzione omp_get_num_threads

La `omp_get_num_threads` funzione restituisce il numero di thread attualmente nel team che esegue l'area parallela da cui viene chiamata. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_num_threads(void);
```

La `num_threads` clausola, la `omp_set_num_threads` `OMP_NUM_THREADS` funzione e la variabile di ambiente controllano il numero di thread in un team.

Se il numero di thread non è stato impostato in modo esplicito dall'utente, il valore predefinito è definito dall'implementazione. Questa funzione viene associata `parallel` alla direttiva di inclusione più vicina. Se viene chiamata da una parte seriale di un programma o da un'area parallela annidata serializzata, questa funzione restituisce 1.If called from a serial portion of a program, or from a nested parallel region that's serialized, this function returns 1.

Per ulteriori informazioni, vedere [omp_set_dynamic](#317-omp_set_dynamic-function).

#### <a name="cross-references"></a>Riferimenti incrociati

- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads)
- [num_threads](2-directives.md#23-parallel-construct)
- [parallel](2-directives.md#23-parallel-construct)

### <a name="313-omp_get_max_threads-function"></a><a name="313-omp_get_max_threads-function"></a>3.1.3 omp_get_max_threads funzione

La `omp_get_max_threads` funzione restituisce un numero intero che è garantito per essere almeno grande come il numero di `num_threads` thread che verrebbero utilizzati per formare un team se un'area parallela senza una clausola dovesse essere visualizzata in quel punto del codice. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_max_threads(void);
```

Quanto segue esprime un limite `omp_get_max_threads`inferiore sul valore di:

> *thread usati-per-next-team* <= `omp_get_max_threads`

Si noti che se `num_threads` un'altra area parallela utilizza la clausola per `omp_get_max_threads` richiedere un numero specifico di thread, la garanzia sul limite inferiore del risultato di non è più valida.

Il `omp_get_max_threads` valore restituito della funzione può essere utilizzato per allocare dinamicamente spazio di archiviazione sufficiente per tutti i thread del team formato nell'area parallela successiva.

#### <a name="cross-references"></a>Riferimenti incrociati

- [omp_get_num_threads](#312-omp_get_num_threads-function)
- [omp_set_num_threads](#311-omp_set_num_threads-function)
- [omp_set_dynamic](#317-omp_set_dynamic-function)
- [num_threads](2-directives.md#23-parallel-construct)

### <a name="314-omp_get_thread_num-function"></a><a name="314-omp_get_thread_num-function"></a>3.1.4 omp_get_thread_num funzione

La `omp_get_thread_num` funzione restituisce il numero di thread, all'interno del team, del thread che esegue la funzione. Il numero di thread `omp_get_num_threads()`è compreso tra 0 e -1, inclusi. Il thread principale del team è il thread 0.

Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_thread_num(void);
```

Se chiamato da un'area seriale, `omp_get_thread_num` restituisce 0. Se viene chiamata dall'interno di un'area parallela annidata serializzata, questa funzione restituisce 0.If called from within a nested parallel region that's serialized, this function returns 0.

#### <a name="cross-references"></a>Riferimenti incrociati

- [omp_get_num_threads](#312-omp_get_num_threads-function) funzione

### <a name="315-omp_get_num_procs-function"></a><a name="315-omp_get_num_procs-function"></a>3.1.5 omp_get_num_procs funzione

La `omp_get_num_procs` funzione restituisce il numero di processori disponibili per il programma nel momento in cui viene chiamata la funzione. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_num_procs(void);
```

### <a name="316-omp_in_parallel-function"></a><a name="316-omp_in_parallel-function"></a>3.1.6 funzione omp_in_parallel

La `omp_in_parallel` funzione restituisce un valore diverso da zero se viene chiamata all'interno dell'estensione dinamica di un'area parallela in esecuzione in parallelo; in caso contrario, restituisce 0. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_in_parallel(void);
```

Questa funzione restituisce un valore diverso da zero quando viene chiamata dall'interno di un'area in esecuzione in parallelo, incluse le aree annidate serializzate.

### <a name="317-omp_set_dynamic-function"></a><a name="317-omp_set_dynamic-function"></a>3.1.7 funzione omp_set_dynamic

La `omp_set_dynamic` funzione abilita o disabilita la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_dynamic(int dynamic_threads);
```

Se *dynamic_threads* restituisce un valore diverso da zero, il numero di thread utilizzati per l'esecuzione di aree parallele imminenti può essere regolato automaticamente dall'ambiente di runtime per utilizzare al meglio le risorse di sistema. Di conseguenza, il numero di thread specificato dall'utente è il numero massimo di thread. Il numero di thread del team che eseguono un'area parallela rimane `omp_get_num_threads` fisso per la durata di tale area parallela e viene segnalato dalla funzione.

Se *dynamic_threads* restituisce 0, la regolazione dinamica è disabilitata.

Questa funzione ha gli effetti descritti in precedenza `omp_in_parallel` quando viene chiamata da una parte del programma in cui la funzione restituisce zero. Se viene chiamato da una parte del `omp_in_parallel` programma in cui la funzione restituisce un valore diverso da zero, il comportamento di questa funzione non è definito.

Una chiamata `omp_set_dynamic` a ha `OMP_DYNAMIC` la precedenza sulla variabile di ambiente.

L'impostazione predefinita per la regolazione dinamica dei thread è definita dall'implementazione. Di conseguenza, i codici utente che dipendono da un numero specifico di thread per la corretta esecuzione devono disabilitare in modo esplicito i thread dinamici. Le implementazioni non sono necessarie per fornire la possibilità di regolare dinamicamente il numero di thread, ma sono necessarie per fornire l'interfaccia per supportare la portabilità in tutte le piattaforme.

#### <a name="microsoft-specific"></a>Specifico di Microsoft

L'attuale `omp_get_dynamic` sostegno di ed `omp_set_dynamic` è il seguente:

Il parametro `omp_set_dynamic` di input a non influisce sui criteri di threading e non modifica il numero di thread. `omp_get_num_threads`restituisce sempre il numero definito dall'utente, se impostato, o il numero di thread predefinito. Nell'implementazione Microsoft `omp_set_dynamic(0)` corrente, disattiva il threading dinamico in modo che il set di thread esistente possa essere riutilizzato per l'area parallela seguente. `omp_set_dynamic(1)`attiva il threading dinamico eliminando il set di thread esistente e creando un nuovo set per l'area parallela successiva. Il numero di thread nel nuovo set è uguale al set precedente `omp_get_num_threads`e si basa sul valore restituito di . Pertanto, per ottenere `omp_set_dynamic(0)` prestazioni ottimali, utilizzare per riutilizzare i thread esistenti.

#### <a name="cross-references"></a>Riferimenti incrociati

- [omp_get_num_threads](#312-omp_get_num_threads-function)
- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic)
- [omp_in_parallel](#316-omp_in_parallel-function)

### <a name="318-omp_get_dynamic-function"></a><a name="318-omp_get_dynamic-function"></a>3.1.8 omp_get_dynamic funzione

La `omp_get_dynamic` funzione restituisce un valore diverso da zero se la regolazione dinamica dei thread è abilitata e restituisce 0 in caso contrario. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_dynamic(void);
```

Se l'implementazione non implementa la regolazione dinamica del numero di thread, questa funzione restituisce sempre 0. Per ulteriori informazioni, vedere [omp_set_dynamic](#317-omp_set_dynamic-function).

#### <a name="cross-references"></a>Riferimenti incrociati

- Per una descrizione della regolazione dinamica dei filettatura, vedere [omp_set_dynamic](#317-omp_set_dynamic-function).

### <a name="319-omp_set_nested-function"></a><a name="319-omp_set_nested-function"></a>3.1.9 omp_set_nested funzione

La `omp_set_nested` funzione abilita o disabilita il parallelismo annidato. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_nested(int nested);
```

Se *nested* restituisce 0, il parallelismo annidato è disabilitato, che è l'impostazione predefinita, e le aree parallele annidate vengono serializzate ed eseguite dal thread corrente. In caso contrario, il parallelismo annidato è abilitato e le aree parallele possono distribuire thread aggiuntivi per formare team annidati.

Questa funzione ha gli effetti descritti in precedenza `omp_in_parallel` quando viene chiamata da una parte del programma in cui la funzione restituisce zero. Se viene chiamato da una parte del `omp_in_parallel` programma in cui la funzione restituisce un valore diverso da zero, il comportamento di questa funzione non è definito.

Questa chiamata ha la `OMP_NESTED` precedenza sulla variabile di ambiente.

Quando il parallelismo annidato è abilitato, il numero di thread utilizzati per eseguire aree parallele annidate è definito dall'implementazione. Di conseguenza, le implementazioni conformi a OpenMP possono serializzare aree parallele annidate anche quando è abilitato il parallelismo annidato.

#### <a name="cross-references"></a>Riferimenti incrociati

- [OMP_NESTED](4-environment-variables.md#44-omp_nested)
- [omp_in_parallel](#316-omp_in_parallel-function)

### <a name="3110-omp_get_nested-function"></a><a name="3110-omp_get_nested-function"></a>3.1.10 funzione omp_get_nested

La `omp_get_nested` funzione restituisce un valore diverso da zero se il parallelismo annidato è abilitato e 0 se è disabilitato. Per ulteriori informazioni sul parallelismo annidato, vedere [omp_set_nested](#319-omp_set_nested-function). Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_nested(void);
```

Se un'implementazione non implementa il parallelismo annidato, questa funzione restituisce sempre 0.If an implementation doesn't implement nested parallelism, this function always returns 0.

## <a name="32-lock-functions"></a>3.2 Funzioni di blocco

Le funzioni descritte in questa sezione modificano i blocchi utilizzati per la sincronizzazione.

Per le funzioni seguenti, la `omp_lock_t`variabile lock deve essere di tipo . Questa variabile deve essere accessibile solo tramite queste funzioni. Tutte le funzioni di blocco richiedono `omp_lock_t` un argomento che dispone di un puntatore al tipo.

- La funzione [omp_init_lock](#321-omp_init_lock-and-omp_init_nest_lock-functions) inizializza un blocco semplice.
- La funzione [omp_destroy_lock](#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions) rimuove un blocco semplice.
- La funzione [omp_set_lock](#323-omp_set_lock-and-omp_set_nest_lock-functions) attende fino a quando non è disponibile un semplice blocco.
- La funzione [omp_unset_lock](#324-omp_unset_lock-and-omp_unset_nest_lock-functions) rilascia un blocco semplice.
- La funzione [omp_test_lock](#325-omp_test_lock-and-omp_test_nest_lock-functions) verifica un blocco semplice.

Per le funzioni seguenti, la `omp_nest_lock_t`variabile lock deve essere di tipo .  Questa variabile deve essere accessibile solo tramite queste funzioni. Tutte le funzioni di blocco annidati `omp_nest_lock_t` richiedono un argomento che dispone di un puntatore al tipo.

- La funzione [omp_init_nest_lock](#321-omp_init_lock-and-omp_init_nest_lock-functions) inizializza un blocco non stabile.
- La funzione [omp_destroy_nest_lock](#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions) rimuove un blocco nestable.
- La funzione [omp_set_nest_lock](#323-omp_set_lock-and-omp_set_nest_lock-functions) attende fino a quando non è disponibile un blocco non stabile.
- La funzione [omp_unset_nest_lock](#324-omp_unset_lock-and-omp_unset_nest_lock-functions) rilascia un blocco nestable.
- La funzione [omp_test_nest_lock](#325-omp_test_lock-and-omp_test_nest_lock-functions) verifica un blocco nestable.

Le funzioni di blocco OpenMP accedono alla variabile di blocco in modo che leggano e aggiornino sempre il valore più recente della variabile di blocco. Pertanto, non è necessario che un programma `flush` OpenMP includa direttive esplicite per assicurarsi che il valore della variabile di blocco sia coerente tra thread diversi. (Potrebbe essere necessario `flush` che le direttive rendano coerenti i valori di altre variabili.

### <a name="321-omp_init_lock-and-omp_init_nest_lock-functions"></a><a name="321-omp_init_lock-and-omp_init_nest_lock-functions"></a>3.2.1 Funzioni omp_init_lock e omp_init_nest_lock

Queste funzioni forniscono l'unico mezzo per inizializzare un blocco. Ogni funzione inizializza il blocco associato al blocco di *parametri* da utilizzare nelle chiamate future. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_init_lock(omp_lock_t *lock);
void omp_init_nest_lock(omp_nest_lock_t *lock);
```

Lo stato iniziale è sbloccato, ovvero nessun thread è proprietario del blocco. Per un blocco nidificabile, il conteggio di annidamento iniziale è zero. Non è conforme chiamare una di queste routine con una variabile di blocco già inizializzata.

### <a name="322-omp_destroy_lock-and-omp_destroy_nest_lock-functions"></a><a name="322-omp_destroy_lock-and-omp_destroy_nest_lock-functions"></a>3.2.2 Funzioni omp_destroy_lock e omp_destroy_nest_lock

Queste funzioni assicurano che il *blocco* della variabile di blocco puntato non sia inizializzato. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_destroy_lock(omp_lock_t *lock);
void omp_destroy_nest_lock(omp_nest_lock_t *lock);
```

Non è conforme chiamare una di queste routine con una variabile di blocco non inizializzata o sbloccata.

### <a name="323-omp_set_lock-and-omp_set_nest_lock-functions"></a><a name="323-omp_set_lock-and-omp_set_nest_lock-functions"></a>3.2.3 Funzioni omp_set_lock e omp_set_nest_lock

Ognuna di queste funzioni blocca il thread che esegue la funzione fino a quando il blocco specificato non è disponibile e quindi imposta il blocco. Un semplice blocco è disponibile se è sbloccato. Un blocco annidato è disponibile se è sbloccato o se è già di proprietà del thread che esegue la funzione. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_lock(omp_lock_t *lock);
void omp_set_nest_lock(omp_nest_lock_t *lock);
```

Per un semplice blocco, `omp_set_lock` l'argomento della funzione deve puntare a una variabile di blocco inizializzata. La proprietà del blocco viene concessa al thread che esegue la funzione.

Per un blocco di tipo `omp_set_nest_lock` non stabile, l'argomento della funzione deve puntare a una variabile di blocco inizializzata. Il conteggio di annidamento viene incrementato e al thread viene concessa o manutata la proprietà del blocco.

### <a name="324-omp_unset_lock-and-omp_unset_nest_lock-functions"></a><a name="324-omp_unset_lock-and-omp_unset_nest_lock-functions"></a>3.2.4 Funzioni di omp_unset_lock e omp_unset_nest_lock

Queste funzioni forniscono i mezzi per rilasciare la proprietà di un blocco. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_unset_lock(omp_lock_t *lock);
void omp_unset_nest_lock(omp_nest_lock_t *lock);
```

L'argomento per ognuna di queste funzioni deve puntare a una variabile di blocco inizializzata di proprietà del thread che esegue la funzione. Il comportamento non è definito se il thread non è proprietario di tale blocco.

Per un blocco `omp_unset_lock` semplice, la funzione rilascia il thread che esegue la funzione dalla proprietà del blocco.

Per un blocco nidificabile, la `omp_unset_nest_lock` funzione decrementa il conteggio dell'annidamento e rilascia il thread che esegue la funzione dalla proprietà del blocco se il conteggio risultante è zero.

### <a name="325-omp_test_lock-and-omp_test_nest_lock-functions"></a><a name="325-omp_test_lock-and-omp_test_nest_lock-functions"></a>3.2.5 funzioni omp_test_lock e omp_test_nest_lock

Queste funzioni tentano di impostare un blocco ma non bloccano l'esecuzione del thread. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_test_lock(omp_lock_t *lock);
int omp_test_nest_lock(omp_nest_lock_t *lock);
```

L'argomento deve puntare a una variabile di blocco inizializzata. Queste funzioni tentano di impostare `omp_set_lock` un `omp_set_nest_lock`blocco nello stesso modo in cui e , ad eccezione del fatto che non bloccano l'esecuzione del thread.

Per un blocco `omp_test_lock` semplice, la funzione restituisce un valore diverso da zero se il blocco è impostato correttamente; in caso contrario, restituisce zero.

Per un blocco nidificabile, la `omp_test_nest_lock` funzione restituisce il nuovo conteggio di annidamento se il blocco è impostato correttamente; in caso contrario, restituisce zero.

## <a name="33-timing-routines"></a>3.3 Durata delle routine

Le funzioni descritte in questa sezione supportano un timer portatile a parete:The functions described in this section support a portable wall-clock timer:

- La funzione [omp_get_wtime](#331-omp_get_wtime-function) restituisce l'ora di clock a muro trascorso.
- La funzione [omp_get_wtick](#332-omp_get_wtick-function) restituisce i secondi tra i tick di clock successivi.

### <a name="331-omp_get_wtime-function"></a><a name="331-omp_get_wtime-function"></a>3.3.1 omp_get_wtime funzione

La `omp_get_wtime` funzione restituisce un valore a virgola mobile a precisione doppia pari al tempo di clock del muro trascorso in secondi rispetto a "tempo nel passato".  L'effettivo "tempo nel passato" è arbitrario, ma è garantito che non cambi durante l'esecuzione del programma applicativo. Il formato è il seguente:

```cpp
#include <omp.h>
double omp_get_wtime(void);
```

Si prevede che la funzione verrà utilizzata per misurare i tempi trascorsi, come illustrato nell'esempio seguente:

```cpp
double start;
double end;
start = omp_get_wtime();
... work to be timed ...
end = omp_get_wtime();
printf_s("Work took %f sec. time.\n", end-start);
```

I tempi restituiti sono "per thread volte" in base al quale non è necessario che siano coerenti a livello globale in tutti i thread che partecipano a un'applicazione.

### <a name="332-omp_get_wtick-function"></a><a name="332-omp_get_wtick-function"></a>3.3.2 omp_get_wtick funzione

La `omp_get_wtick` funzione restituisce un valore a virgola mobile e precisione doppia pari al numero di secondi tra i tick di clock successivi. Il formato è il seguente:

```cpp
#include <omp.h>
double omp_get_wtick(void);
```
