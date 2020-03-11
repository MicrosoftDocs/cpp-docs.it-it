---
title: 3. Funzioni della libreria di runtime
ms.date: 05/13/2019
ms.assetid: b226e512-6822-4cbe-a2ca-74cc2bb7e880
ms.openlocfilehash: 6155eb87bd7a1a0533caf99afb3db8417854df30
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78882861"
---
# <a name="3-run-time-library-functions"></a>3. funzioni della libreria run-time

In questa sezione vengono descritte le funzioni C++ OpenMP C e della libreria di Runtime. L'intestazione **\<OMP. h >** dichiara due tipi, diverse funzioni che possono essere usate per controllare ed eseguire query sull'ambiente di esecuzione parallela e funzioni di blocco che possono essere usate per sincronizzare l'accesso ai dati.

Il tipo `omp_lock_t` è un tipo di oggetto in grado di rappresentare che un blocco è disponibile o che un thread è proprietario di un blocco. Questi blocchi vengono definiti *blocchi semplici*.

Il tipo `omp_nest_lock_t` è un tipo di oggetto in grado di rappresentare un blocco disponibile oppure l'identità del thread proprietario del blocco e un *numero di annidamento* (descritto di seguito). Questi blocchi sono definiti *blocchi annidabili*.

Le funzioni di libreria sono funzioni esterne con collegamento "C".

Le descrizioni in questo capitolo sono divise negli argomenti seguenti:

- [Funzioni dell'ambiente di esecuzione](#31-execution-environment-functions)
- [Funzioni Lock](#32-lock-functions)
- [Routine temporali](#33-timing-routines)

## <a name="31-execution-environment-functions"></a>3,1 funzioni dell'ambiente di esecuzione

Le funzioni descritte in questa sezione influiscono e monitorano thread, processori e l'ambiente parallelo:

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

### <a name="311-omp_set_num_threads-function"></a>3.1.1 omp_set_num_threads funzione

La funzione `omp_set_num_threads` imposta il numero predefinito di thread da usare per le aree parallele successive che non specificano una clausola `num_threads`. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_num_threads(int num_threads);
```

Il valore del parametro *num_threads* deve essere un numero intero positivo. L'effetto dipende dal fatto che la regolazione dinamica del numero di thread sia abilitata. Per un set completo di regole sull'interazione tra la funzione `omp_set_num_threads` e la regolazione dinamica dei thread, vedere la [sezione 2,3](2-directives.md#23-parallel-construct).

Questa funzione ha gli effetti descritti in precedenza quando viene chiamata da una parte del programma in cui la funzione `omp_in_parallel` restituisce zero. Se viene chiamato da una parte del programma in cui la funzione `omp_in_parallel` restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.

Questa chiamata ha la precedenza sulla variabile di ambiente `OMP_NUM_THREADS`. Il valore predefinito per il numero di thread, che può essere stabilito chiamando `omp_set_num_threads` o impostando la variabile di ambiente `OMP_NUM_THREADS`, può essere sottoposto a override in modo esplicito in una singola direttiva `parallel` specificando la clausola `num_threads`.

Per ulteriori informazioni, vedere [omp_set_dynamic](#317-omp_set_dynamic-function).

#### <a name="cross-references"></a>Riferimenti incrociati

- funzione [omp_set_dynamic](#317-omp_set_dynamic-function)
- funzione [omp_get_dynamic](#318-omp_get_dynamic-function)
- Variabile di ambiente [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads)
- clausola [num_threads](2-directives.md#23-parallel-construct)

### <a name="312-omp_get_num_threads-function"></a>3.1.2 omp_get_num_threads funzione

La funzione `omp_get_num_threads` restituisce il numero di thread attualmente presenti nel team che esegue l'area parallela da cui viene chiamato. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_num_threads(void);
```

La clausola `num_threads`, la funzione `omp_set_num_threads` e la variabile di ambiente `OMP_NUM_THREADS` controllano il numero di thread in un team.

Se il numero di thread non è stato impostato in modo esplicito dall'utente, il valore predefinito è definito dall'implementazione. Questa funzione è associata alla direttiva `parallel` di inclusione più vicina. Se chiamato da una parte seriale di un programma o da un'area parallela nidificata serializzata, questa funzione restituisce 1.

Per ulteriori informazioni, vedere [omp_set_dynamic](#317-omp_set_dynamic-function).

#### <a name="cross-references"></a>Riferimenti incrociati

- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads)
- [num_threads](2-directives.md#23-parallel-construct)
- [parallel](2-directives.md#23-parallel-construct)

### <a name="313-omp_get_max_threads-function"></a>3.1.3 omp_get_max_threads funzione

La funzione `omp_get_max_threads` restituisce un valore integer garantito almeno quanto il numero di thread che verrebbero usati per formare un team se un'area parallela priva di una clausola `num_threads` fosse visualizzata in quel punto del codice. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_max_threads(void);
```

Il codice seguente esprime un limite inferiore per il valore di `omp_get_max_threads`:

> *thread-used-for-next-team* <= `omp_get_max_threads`

Si noti che se un'altra area parallela usa la clausola `num_threads` per richiedere un numero specifico di thread, la garanzia sul limite inferiore del risultato di `omp_get_max_threads` non include più.

Il valore restituito della funzione `omp_get_max_threads` può essere usato per allocare in modo dinamico spazio di archiviazione sufficiente per tutti i thread del team formato nell'area parallela successiva.

#### <a name="cross-references"></a>Riferimenti incrociati

- [omp_get_num_threads](#312-omp_get_num_threads-function)
- [omp_set_num_threads](#311-omp_set_num_threads-function)
- [omp_set_dynamic](#317-omp_set_dynamic-function)
- [num_threads](2-directives.md#23-parallel-construct)

### <a name="314-omp_get_thread_num-function"></a>funzione omp_get_thread_num 3.1.4

La funzione `omp_get_thread_num` restituisce il numero di thread, all'interno del team, del thread che esegue la funzione. Il numero di thread è compreso tra 0 e `omp_get_num_threads()`-1, inclusi. Il thread master del team è il thread 0.

Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_thread_num(void);
```

Se chiamato da un'area seriale, `omp_get_thread_num` restituisce 0. Se chiamato dall'interno di un'area parallela nidificata serializzata, questa funzione restituisce 0.

#### <a name="cross-references"></a>Riferimenti incrociati

- funzione [omp_get_num_threads](#312-omp_get_num_threads-function)

### <a name="315-omp_get_num_procs-function"></a>funzione omp_get_num_procs 3.1.5

La funzione `omp_get_num_procs` restituisce il numero di processori disponibili per il programma nel momento in cui viene chiamata la funzione. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_num_procs(void);
```

### <a name="316-omp_in_parallel-function"></a>Funzione omp_in_parallel 3.1.6

La funzione `omp_in_parallel` restituisce un valore diverso da zero se viene chiamato nell'ambito dinamico di un'area parallela in esecuzione in parallelo; in caso contrario, restituisce 0. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_in_parallel(void);
```

Questa funzione restituisce un valore diverso da zero quando viene chiamata dall'interno di un'area in esecuzione in parallelo, incluse le aree nidificate che vengono serializzate.

### <a name="317-omp_set_dynamic-function"></a>funzione omp_set_dynamic 3.1.7

La funzione `omp_set_dynamic` Abilita o Disabilita la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_dynamic(int dynamic_threads);
```

Se *dynamic_threads* restituisce un valore diverso da zero, il numero di thread utilizzati per l'esecuzione di aree parallele imminenti può essere modificato automaticamente dall'ambiente di runtime per utilizzare al meglio le risorse di sistema. Di conseguenza, il numero di thread specificato dall'utente è il numero massimo di thread. Il numero di thread nel team che esegue un'area parallela rimane fisso per la durata dell'area parallela e viene segnalato dalla funzione `omp_get_num_threads`.

Se *dynamic_threads* restituisce 0, la regolazione dinamica è disabilitata.

Questa funzione ha gli effetti descritti in precedenza quando viene chiamata da una parte del programma in cui la funzione `omp_in_parallel` restituisce zero. Se viene chiamato da una parte del programma in cui la funzione `omp_in_parallel` restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.

Una chiamata a `omp_set_dynamic` ha la precedenza sulla variabile di ambiente `OMP_DYNAMIC`.

L'impostazione predefinita per la regolazione dinamica dei thread è definita dall'implementazione. Di conseguenza, i codici utente che dipendono da un numero specifico di thread per l'esecuzione corretta dovrebbero disabilitare in modo esplicito i thread dinamici. Le implementazioni non sono necessarie per fornire la possibilità di modificare dinamicamente il numero di thread, ma sono necessari per fornire l'interfaccia per supportare la portabilità su tutte le piattaforme.

#### <a name="microsoft-specific"></a>Specifico di Microsoft

Il supporto corrente di `omp_get_dynamic` e `omp_set_dynamic` è il seguente:

Il parametro di input per `omp_set_dynamic` non influisce sui criteri di threading e non modifica il numero di thread. `omp_get_num_threads` restituisce sempre il numero definito dall'utente, se impostato, o il numero di thread predefinito. Nell'implementazione corrente di Microsoft, `omp_set_dynamic(0)` disattiva il threading dinamico, in modo che il set di thread esistente possa essere riutilizzato per la seguente area parallela. `omp_set_dynamic(1)` attiva il threading dinamico ignorando il set di thread esistente e creando un nuovo set per l'area parallela successiva. Il numero di thread nel nuovo set è uguale al set precedente ed è basato sul valore restituito di `omp_get_num_threads`. Pertanto, per ottenere prestazioni ottimali, utilizzare `omp_set_dynamic(0)` per riutilizzare i thread esistenti.

#### <a name="cross-references"></a>Riferimenti incrociati

- [omp_get_num_threads](#312-omp_get_num_threads-function)
- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic)
- [omp_in_parallel](#316-omp_in_parallel-function)

### <a name="318-omp_get_dynamic-function"></a>Funzione omp_get_dynamic 3.1.8

La funzione `omp_get_dynamic` restituisce un valore diverso da zero se la regolazione dinamica dei thread è abilitata e restituisce 0 in caso contrario. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_dynamic(void);
```

Se l'implementazione non implementa la regolazione dinamica del numero di thread, questa funzione restituisce sempre 0. Per ulteriori informazioni, vedere [omp_set_dynamic](#317-omp_set_dynamic-function).

#### <a name="cross-references"></a>Riferimenti incrociati

- Per una descrizione della regolazione dinamica dei thread, vedere [omp_set_dynamic](#317-omp_set_dynamic-function).

### <a name="319-omp_set_nested-function"></a>funzione omp_set_nested 3.1.9

La funzione `omp_set_nested` Abilita o Disabilita il parallelismo annidato. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_nested(int nested);
```

Se *nidificato* restituisce 0, il parallelismo annidato è disabilitato, ovvero l'impostazione predefinita, e le aree parallele nidificate vengono serializzate ed eseguite dal thread corrente. In caso contrario, il parallelismo annidato è abilitato e le aree parallele annidate possono distribuire thread aggiuntivi per formare team annidati.

Questa funzione ha gli effetti descritti in precedenza quando viene chiamata da una parte del programma in cui la funzione `omp_in_parallel` restituisce zero. Se viene chiamato da una parte del programma in cui la funzione `omp_in_parallel` restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.

Questa chiamata ha la precedenza sulla variabile di ambiente `OMP_NESTED`.

Quando è abilitato il parallelismo annidato, il numero di thread utilizzati per eseguire le aree parallele nidificate è definito dall'implementazione. Di conseguenza, le implementazioni conformi a OpenMP possono serializzare le aree parallele nidificate anche quando è abilitato il parallelismo annidato.

#### <a name="cross-references"></a>Riferimenti incrociati

- [OMP_NESTED](4-environment-variables.md#44-omp_nested)
- [omp_in_parallel](#316-omp_in_parallel-function)

### <a name="3110-omp_get_nested-function"></a>Funzione omp_get_nested 3.1.10

La funzione `omp_get_nested` restituisce un valore diverso da zero se è abilitato il parallelismo annidato e 0 se è disabilitato. Per ulteriori informazioni sul parallelismo annidato, vedere [omp_set_nested](#319-omp_set_nested-function). Il formato è il seguente:

```cpp
#include <omp.h>
int omp_get_nested(void);
```

Se un'implementazione non implementa il parallelismo annidato, questa funzione restituisce sempre 0.

## <a name="32-lock-functions"></a>3,2 funzioni di blocco

Le funzioni descritte in questa sezione modificano i blocchi usati per la sincronizzazione.

Per le funzioni seguenti, la variabile di blocco deve avere il tipo `omp_lock_t`. Questa variabile deve essere accessibile solo tramite queste funzioni. Tutte le funzioni di blocco richiedono un argomento con un puntatore a `omp_lock_t` tipo.

- La funzione [omp_init_lock](#321-omp_init_lock-and-omp_init_nest_lock-functions) Inizializza un blocco semplice.
- La funzione [omp_destroy_lock](#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions) rimuove un blocco semplice.
- La funzione [omp_set_lock](#323-omp_set_lock-and-omp_set_nest_lock-functions) attende fino a quando non è disponibile un blocco semplice.
- La funzione [omp_unset_lock](#324-omp_unset_lock-and-omp_unset_nest_lock-functions) rilascia un blocco semplice.
- La funzione [omp_test_lock](#325-omp_test_lock-and-omp_test_nest_lock-functions) verifica un blocco semplice.

Per le funzioni seguenti, la variabile di blocco deve avere il tipo `omp_nest_lock_t`.  Questa variabile deve essere accessibile solo tramite queste funzioni. Tutte le funzioni di blocco annidabili richiedono un argomento con un puntatore a `omp_nest_lock_t` tipo.

- La funzione [omp_init_nest_lock](#321-omp_init_lock-and-omp_init_nest_lock-functions) Inizializza un blocco annidabile.
- La funzione [omp_destroy_nest_lock](#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions) rimuove un blocco annidabile.
- La funzione [omp_set_nest_lock](#323-omp_set_lock-and-omp_set_nest_lock-functions) attende fino a quando non è disponibile un blocco annidabile.
- La funzione [omp_unset_nest_lock](#324-omp_unset_lock-and-omp_unset_nest_lock-functions) rilascia un blocco annidabile.
- La funzione [omp_test_nest_lock](#325-omp_test_lock-and-omp_test_nest_lock-functions) verifica un blocco annidabile.

Le funzioni di blocco OpenMP accedono alla variabile di blocco in modo che leggano sempre e aggiornino il valore più recente della variabile di blocco. Pertanto, non è necessario che un programma OpenMP includa direttive `flush` esplicite per garantire che il valore della variabile di blocco sia coerente tra thread diversi. (Potrebbe essere necessario `flush` direttive per rendere coerenti i valori di altre variabili).

### <a name="321-omp_init_lock-and-omp_init_nest_lock-functions"></a>3.2.1 funzioni omp_init_lock e omp_init_nest_lock

Queste funzioni forniscono l'unico mezzo per inizializzare un blocco. Ogni funzione Inizializza il blocco associato al *blocco* del parametro da utilizzare nelle chiamate imminenti. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_init_lock(omp_lock_t *lock);
void omp_init_nest_lock(omp_nest_lock_t *lock);
```

Lo stato iniziale è sbloccato (ovvero, nessun thread è proprietario del blocco). Per un blocco annidabile, il numero di annidamento iniziale è zero. Non è conforme chiamare una di queste routine con una variabile di blocco che è già stata inizializzata.

### <a name="322-omp_destroy_lock-and-omp_destroy_nest_lock-functions"></a>3.2.2 omp_destroy_lock e funzioni omp_destroy_nest_lock

Queste funzioni assicurano che il *blocco* della variabile di blocco puntato non sia inizializzato. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_destroy_lock(omp_lock_t *lock);
void omp_destroy_nest_lock(omp_nest_lock_t *lock);
```

Non è conforme chiamare una di queste routine con una variabile di blocco non inizializzata o sbloccata.

### <a name="323-omp_set_lock-and-omp_set_nest_lock-functions"></a>3.2.3 omp_set_lock e funzioni omp_set_nest_lock

Ognuna di queste funzioni blocca il thread che esegue la funzione fino a quando il blocco specificato non è disponibile e quindi imposta il blocco. Se è sbloccato, è disponibile un blocco semplice. Un blocco annidabile è disponibile se è sbloccato o se è già di proprietà del thread che esegue la funzione. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_set_lock(omp_lock_t *lock);
void omp_set_nest_lock(omp_nest_lock_t *lock);
```

Per un blocco semplice, l'argomento della funzione `omp_set_lock` deve puntare a una variabile di blocco inizializzata. Il proprietario del blocco viene concesso al thread che esegue la funzione.

Per un blocco annidabile, l'argomento della funzione `omp_set_nest_lock` deve puntare a una variabile di blocco inizializzata. Il numero di nidificazione viene incrementato e il thread viene concesso o mantiene la proprietà del blocco.

### <a name="324-omp_unset_lock-and-omp_unset_nest_lock-functions"></a>3.2.4 omp_unset_lock e funzioni omp_unset_nest_lock

Queste funzioni forniscono i mezzi per rilasciare la proprietà di un blocco. Il formato è il seguente:

```cpp
#include <omp.h>
void omp_unset_lock(omp_lock_t *lock);
void omp_unset_nest_lock(omp_nest_lock_t *lock);
```

L'argomento per ognuna di queste funzioni deve puntare a una variabile di blocco inizializzata di proprietà del thread che esegue la funzione. Il comportamento non è definito se il thread non è proprietario di tale blocco.

Per un blocco semplice, la funzione `omp_unset_lock` rilascia il thread che esegue la funzione dalla proprietà del blocco.

Per un blocco annidabile, la funzione `omp_unset_nest_lock` decrementa il numero di annidamento e rilascia il thread che esegue la funzione dalla proprietà del blocco se il conteggio risultante è pari a zero.

### <a name="325-omp_test_lock-and-omp_test_nest_lock-functions"></a>3.2.5 omp_test_lock e funzioni omp_test_nest_lock

Queste funzioni tentano di impostare un blocco, ma non bloccano l'esecuzione del thread. Il formato è il seguente:

```cpp
#include <omp.h>
int omp_test_lock(omp_lock_t *lock);
int omp_test_nest_lock(omp_nest_lock_t *lock);
```

L'argomento deve puntare a una variabile di blocco inizializzata. Queste funzioni tentano di impostare un blocco in modo analogo a `omp_set_lock` e `omp_set_nest_lock`, ad eccezione del fatto che non bloccano l'esecuzione del thread.

Per un blocco semplice, la funzione `omp_test_lock` restituisce un valore diverso da zero se il blocco è stato impostato correttamente; in caso contrario, restituisce zero.

Per un blocco annidabile, la funzione `omp_test_nest_lock` restituisce il nuovo conteggio nidificazione se il blocco è stato impostato correttamente; in caso contrario, restituisce zero.

## <a name="33-timing-routines"></a>3,3 routine temporali

Le funzioni descritte in questa sezione supportano un timer del clock portatile:

- La funzione [omp_get_wtime](#331-omp_get_wtime-function) restituisce il tempo trascorso del clock.
- La funzione [omp_get_wtick](#332-omp_get_wtick-function) restituisce secondi tra i tick successivi del clock.

### <a name="331-omp_get_wtime-function"></a>3.3.1 omp_get_wtime funzione

La funzione `omp_get_wtime` restituisce un valore a virgola mobile a precisione doppia uguale al tempo trascorso, in secondi, da un "tempo nel passato".  L'effettivo "tempo nel passato" è arbitrario, ma è garantito che non cambi durante l'esecuzione del programma applicativo. Il formato è il seguente:

```cpp
#include <omp.h>
double omp_get_wtime(void);
```

Si prevede che la funzione verrà usata per misurare i tempi trascorsi, come illustrato nell'esempio seguente:

```cpp
double start;
double end;
start = omp_get_wtime();
... work to be timed ...
end = omp_get_wtime();
printf_s("Work took %f sec. time.\n", end-start);
```

I tempi restituiti sono "tempi per thread", per cui non è necessario che siano coerenti a livello globale in tutti i thread che partecipano a un'applicazione.

### <a name="332-omp_get_wtick-function"></a>3.3.2 omp_get_wtick funzione

La funzione `omp_get_wtick` restituisce un valore a virgola mobile a precisione doppia uguale al numero di secondi tra i cicli di clock successivi. Il formato è il seguente:

```cpp
#include <omp.h>
double omp_get_wtick(void);
```
