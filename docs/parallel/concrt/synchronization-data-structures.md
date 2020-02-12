---
title: Strutture di dati di sincronizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- synchronization data structures
ms.assetid: d612757d-e4b7-4019-a627-f853af085b8b
ms.openlocfilehash: 85dec6b003330a3560ae1dcc5c41b5e6d49f765e
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142800"
---
# <a name="synchronization-data-structures"></a>Strutture di dati di sincronizzazione

Il runtime di concorrenza fornisce diverse strutture di dati che consentono di sincronizzare l'accesso ai dati condivisi da più thread. Queste strutture di dati sono utili quando si condividono dati modificati raramente. Un oggetto di sincronizzazione, ad esempio una sezione critica, causa l'attesa di altri thread finché la risorsa condivisa non è disponibile. Se pertanto si utilizza tale oggetto per sincronizzare l'accesso ai dati utilizzati di frequente, è possibile perdere la scalabilità nell'applicazione. La [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) fornisce la classe [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) , che consente di condividere una risorsa tra più thread o attività senza la necessità di eseguire la sincronizzazione. Per ulteriori informazioni sulla classe `combinable`, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="top"></a> Sezioni

In questo argomento vengono descritti in dettaglio i tipi di blocchi di messaggi asincroni seguenti:

- [critical_section](#critical_section)

- [reader_writer_lock](#reader_writer_lock)

- [scoped_lock e scoped_lock_read](#scoped_lock)

- [event](#event)

## <a name="critical_section"></a>critical_section

La classe [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) rappresenta un oggetto cooperativa di esclusione reciproca che restituisce ad altre attività invece di annullarne la precedenza. Le sezioni critiche sono utili quando più thread richiedono l'accesso in lettura e scrittura esclusivo ai dati condivisi.

La classe `critical_section` non è rientrante. Il metodo [Concurrency:: critical_section:: Lock](reference/critical-section-class.md#lock) genera un'eccezione di tipo [Concurrency:: improper_lock](../../parallel/concrt/reference/improper-lock-class.md) se viene chiamato dal thread che possiede già il blocco.

### <a name="methods-and-features"></a>Metodi e funzionalità

La tabella seguente illustra i metodi importanti definiti dalla classe `critical_section`.

|Metodo|Descrizione|
|------------|-----------------|
|[lock](reference/critical-section-class.md#lock)|Acquisisce la sezione critica. Il contesto chiamante si blocca fino a quando non acquisisce il blocco.|
|[try_lock](reference/critical-section-class.md#try_lock)|Tenta di acquisire la sezione critica, ma non di bloccarsi.|
|[unlock](reference/critical-section-class.md#unlock)|Rilascia la sezione critica.|

[[Torna all'inizio](#top)]

## <a name="reader_writer_lock"></a>reader_writer_lock

La classe [Concurrency:: reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) fornisce operazioni di lettura/scrittura thread-safe ai dati condivisi. Usare i blocchi reader/writer quando più thread richiedono l'accesso in lettura simultaneo a una risorsa condivisa, ma raramente scrivono in tale risorsa condivisa. Questa classe fornisce un solo accesso in scrittura thread a un oggetto in qualsiasi momento.

La classe `reader_writer_lock` può offrire prestazioni migliori rispetto alla classe `critical_section` perché un oggetto `critical_section` acquisisce accesso esclusivo a una risorsa condivisa che impedisce l'accesso in lettura simultaneo.

Analogamente alla classe `critical_section`, la classe `reader_writer_lock` rappresenta un oggetto cooperativa di esclusione reciproca che restituisce ad altre attività invece di annullarne la precedenza.

Quando un thread che deve scrivere in una risorsa condivisa acquisisce un blocco in lettura/scrittura, anche gli altri thread che devono accedere alla risorsa vengono bloccati finché il writer non rilascia il blocco. La classe `reader_writer_lock` è un esempio di un blocco di *preferenza di scrittura* , ovvero un blocco che sblocca i writer in attesa prima di sbloccare i lettori in attesa.

Analogamente alla classe `critical_section`, la classe `reader_writer_lock` non è rientrante. I metodi [Concurrency:: reader_writer_lock:: Lock](reference/reader-writer-lock-class.md#lock) e [Concurrency:: reader_writer_lock:: lock_read](reference/reader-writer-lock-class.md#lock_read) generano un'eccezione di tipo `improper_lock` se vengono chiamati da un thread che possiede già il blocco.

> [!NOTE]
> Poiché la classe `reader_writer_lock` non è rientrante, non è possibile aggiornare un blocco di sola lettura a un blocco reader/writer o effettuare il downgrade di un blocco reader/writer a un blocco di sola lettura. L'esecuzione di una di queste operazioni produce un comportamento non specificato.

### <a name="methods-and-features"></a>Metodi e funzionalità

La tabella seguente illustra i metodi importanti definiti dalla classe `reader_writer_lock`.

|Metodo|Descrizione|
|------------|-----------------|
|[lock](reference/reader-writer-lock-class.md#lock)|Acquisisce l'accesso in lettura/scrittura al blocco.|
|[try_lock](reference/reader-writer-lock-class.md#try_lock)|Tenta di acquisire l'accesso in lettura/scrittura al blocco, ma non si blocca.|
|[lock_read](reference/reader-writer-lock-class.md#lock_read)|Acquisisce l'accesso in sola lettura al blocco.|
|[try_lock_read](reference/reader-writer-lock-class.md#try_lock_read)|Tenta di acquisire l'accesso in sola lettura al blocco, ma non il blocco.|
|[unlock](reference/reader-writer-lock-class.md#unlock)|Rilascia il blocco.|

[[Torna all'inizio](#top)]

## <a name="scoped_lock"></a>scoped_lock e scoped_lock_read

Le classi `critical_section` e `reader_writer_lock` forniscono classi helper annidate che semplificano la modalità di utilizzo degli oggetti di esclusione reciproca. Queste classi helper sono note come *blocchi con ambito*.

La classe `critical_section` contiene la classe [Concurrency:: critical_section:: scoped_lock](reference/critical-section-class.md#critical_section__scoped_lock_class) . Il costruttore acquisisce l'accesso all'oggetto `critical_section` fornito; il distruttore rilascia l'accesso a tale oggetto. La classe `reader_writer_lock` contiene la classe [Concurrency:: reader_writer_lock:: scoped_lock](reference/reader-writer-lock-class.md#scoped_lock_class) , che è simile a `critical_section::scoped_lock`, ad eccezione del fatto che gestisce l'accesso in scrittura all'oggetto `reader_writer_lock` fornito. La classe `reader_writer_lock` contiene inoltre la classe [Concurrency:: reader_writer_lock:: scoped_lock_read](reference/reader-writer-lock-class.md#scoped_lock_read_class) . Questa classe gestisce l'accesso in lettura all'oggetto `reader_writer_lock` fornito.

I blocchi con ambito offrono diversi vantaggi quando si lavora con `critical_section` e `reader_writer_lock` oggetti manualmente. In genere, viene allocato un blocco con ambito nello stack. Un blocco con ambito rilascia automaticamente l'accesso all'oggetto di esclusione reciproca quando viene eliminato. Pertanto, l'oggetto sottostante non viene sbloccato manualmente. Questa operazione è utile quando una funzione contiene più istruzioni `return`. I blocchi con ambito consentono inoltre di scrivere codice indipendente dalle eccezioni. Quando un'istruzione `throw` causa la rimozione dello stack, viene chiamato il distruttore per qualsiasi blocco con ambito attivo e pertanto l'oggetto di esclusione reciproca viene sempre rilasciato correttamente.

> [!NOTE]
> Quando si utilizzano le classi `critical_section::scoped_lock`, `reader_writer_lock::scoped_lock`e `reader_writer_lock::scoped_lock_read`, non rilasciare manualmente l'accesso all'oggetto di esclusione reciproca sottostante. Questo può impostare il runtime in uno stato non valido.

## <a name="event"></a>evento

La classe [Concurrency:: Event](../../parallel/concrt/reference/event-class.md) rappresenta un oggetto di sincronizzazione il cui stato può essere segnalato o non segnalato. A differenza degli oggetti di sincronizzazione, ad esempio le sezioni critiche, il cui scopo è quello di proteggere l'accesso ai dati condivisi, gli eventi sincronizzano il flusso di esecuzione.

La classe `event` è utile quando un'attività ha completato il lavoro per un'altra attività. Ad esempio, un'attività potrebbe segnalare a un'altra attività che ha letto dati da una connessione di rete o da un file.

### <a name="methods-and-features"></a>Metodi e funzionalità

Nella tabella seguente vengono illustrati molti dei metodi importanti definiti dalla classe `event`.

|Metodo|Descrizione|
|------------|-----------------|
|[attendere](reference/event-class.md#wait)|Attende che l'evento venga segnalato.|
|[set](reference/event-class.md#set)|Imposta l'evento sullo stato segnalato.|
|[reset](reference/event-class.md#reset)|Imposta l'evento sullo stato non segnalato.|
|[wait_for_multiple](reference/event-class.md#wait_for_multiple)|Attende che vengano segnalati più eventi.|

### <a name="example"></a>Esempio

Per un esempio che illustra come usare la classe `event`, vedere [confronto tra le strutture di dati di sincronizzazione e l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md).

[[Torna all'inizio](#top)]

## <a name="related-sections"></a>Sezioni correlate

[Confronto delle strutture di dati di sincronizzazione con l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md)<br/>
Confronta il comportamento delle strutture di dati di sincronizzazione con quelle fornite dall'API Windows.

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)<br/>
Descrive il runtime di concorrenza che semplifica la programmazione parallela e contiene i collegamenti ad argomenti correlati.
