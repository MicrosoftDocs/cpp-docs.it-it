---
title: Strutture di dati di sincronizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- synchronization data structures
ms.assetid: d612757d-e4b7-4019-a627-f853af085b8b
ms.openlocfilehash: f9b949e7782c4b9ca302e9e623ce5f09061c39ef
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57301883"
---
# <a name="synchronization-data-structures"></a>Strutture di dati di sincronizzazione

Il Runtime di concorrenza vengono fornite diverse strutture di dati che consentono di sincronizzare l'accesso ai dati condivisi da più thread. Queste strutture di dati sono utili quando si hanno condiviso dati che vengono modificati raramente. Un oggetto di sincronizzazione, ad esempio, una sezione critica, fa in modo che altri thread in attesa fino a quando non è disponibile la risorsa condivisa. Pertanto, se si usa tale tipo di oggetto per sincronizzare l'accesso ai dati utilizzati di frequente, è possibile perdere la scalabilità dell'applicazione. Il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) fornisce le [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) (classe), che consente di condividere una risorsa tra diversi thread o attività senza la necessità di sincronizzazione. Per altre informazioni sul `combinable` classe, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).

##  <a name="top"></a> Sezioni

Questo argomento descrive i seguenti tipi di blocco di messaggi asincroni nel dettaglio:

- [critical_section](#critical_section)

- [reader_writer_lock](#reader_writer_lock)

- [scoped_lock e scoped_lock_read](#scoped_lock)

- [event](#event)

##  <a name="critical_section"></a> critical_section

Il [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) classe rappresenta un oggetto cooperativo a esclusione reciproca che produce ad altre attività anziché annullarle. Le sezioni critiche sono utili quando più thread richiedono la lettura esclusiva e accesso in scrittura ai dati condivisi.

Il `critical_section` classe non è rientrante. Il [concurrency::critical_section::lock](reference/critical-section-class.md#lock) metodo genera un'eccezione di tipo [Concurrency:: improper_lock](../../parallel/concrt/reference/improper-lock-class.md) se viene chiamato dal thread già proprietario del blocco.

### <a name="methods-and-features"></a>I metodi e funzionalità

La tabella seguente illustra i metodi importanti che sono definiti dal `critical_section` classe.

|Metodo|Descrizione|
|------------|-----------------|
|[lock](reference/critical-section-class.md#lock)|Acquisisce la sezione critica. Il chiamante rapida si blocca fino a quando non viene acquisito il blocco.|
|[try_lock](reference/critical-section-class.md#try_lock)|Tenta di acquisire la sezione critica, ma non blocca.|
|[unlock](reference/critical-section-class.md#unlock)|Rilascia la sezione critica.|

[[Torna all'inizio](#top)]

##  <a name="reader_writer_lock"></a> reader_writer_lock

Il [Concurrency:: reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) classe fornisce le operazioni di lettura/scrittura thread-safe ai dati condivisi. Usare blocchi in lettura/scrittura quando più thread richiede accesso in lettura simultaneo a una risorsa condivisa, ma raramente scrivere nella risorsa condivisa. Questa classe fornisce accesso in scrittura solo un thread a un oggetto in qualsiasi momento.

Il `reader_writer_lock` classe può eseguire meglio il `critical_section` classe perché un `critical_section` oggetto acquisisce l'accesso esclusivo a una risorsa condivisa, che impedisce l'accesso in lettura simultaneo.

Ad esempio la `critical_section` (classe), il `reader_writer_lock` classe rappresenta un oggetto cooperativo a esclusione reciproca che produce ad altre attività anziché annullarle.

Quando un thread in cui è necessario scrivere una risorsa condivisa acquisisce un blocco di lettura/scrittura, altri thread che devono accedere alla risorsa sono bloccati fino a quando il writer rilascia il blocco. Il `reader_writer_lock` classe è un esempio di un *preferenza scrittura* blocco, ovvero un blocco che sblocca i writer in attesa prima di sbloccare i lettori in attesa.

Ad esempio la `critical_section` (classe), il `reader_writer_lock` classe non è rientrante. Il [concurrency::reader_writer_lock::lock](reference/reader-writer-lock-class.md#lock) e [concurrency::reader_writer_lock::lock_read](reference/reader-writer-lock-class.md#lock_read) metodi generano un'eccezione di tipo `improper_lock` se vengono chiamati da un thread già proprietario il blocco.

> [!NOTE]
>  Poiché il `reader_writer_lock` classe non è rientrante, non è possibile eseguire l'aggiornamento di un blocco di sola lettura a un blocco di lettura/scrittura o il downgrade di un blocco di lettura/scrittura a un blocco di sola lettura. Eseguire una di queste operazioni produce un comportamento non specificato.

### <a name="methods-and-features"></a>I metodi e funzionalità

La tabella seguente illustra i metodi importanti che sono definiti dal `reader_writer_lock` classe.

|Metodo|Descrizione|
|------------|-----------------|
|[lock](reference/reader-writer-lock-class.md#lock)|Acquisisce l'accesso in lettura/scrittura per il blocco.|
|[try_lock](reference/reader-writer-lock-class.md#try_lock)|Tenta di acquisire l'accesso in lettura/scrittura per il blocco, ma non blocca.|
|[lock_read](reference/reader-writer-lock-class.md#lock_read)|Acquisisce l'accesso di sola lettura per il blocco.|
|[try_lock_read](reference/reader-writer-lock-class.md#try_lock_read)|Tenta di acquisire l'accesso in sola lettura per il blocco, ma non blocca.|
|[unlock](reference/reader-writer-lock-class.md#unlock)|Rilascia il blocco.|

[[Torna all'inizio](#top)]

##  <a name="scoped_lock"></a> scoped_lock e scoped_lock_read

Il `critical_section` e `reader_writer_lock` classi forniscono classi helper annidati che semplificano il modo di lavorare con gli oggetti di esclusione reciproca. Queste classi helper sono dette *scoped blocchi*.

Il `critical_section` classe contiene il [concurrency::critical_section::scoped_lock](reference/critical-section-class.md#critical_section__scoped_lock_class) classe. Il costruttore acquisisce l'accesso al parametro fornito `critical_section` oggetto; l'accesso di versioni distruttore per quell'oggetto. Il `reader_writer_lock` classe contiene il [concurrency::reader_writer_lock::scoped_lock](reference/reader-writer-lock-class.md#scoped_lock_class) (classe), che è simile a `critical_section::scoped_lock`, ad eccezione del fatto che gestisce l'accesso in scrittura al parametro fornito `reader_writer_lock` oggetto. Il `reader_writer_lock` classe contiene inoltre il [concurrency::reader_writer_lock::scoped_lock_read](reference/reader-writer-lock-class.md#scoped_lock_read_class) classe. Questa classe gestisce l'accesso in lettura al parametro fornito `reader_writer_lock` oggetto.

I blocchi con ambito vengono offerti diversi vantaggi quando si sta lavorando `critical_section` e `reader_writer_lock` oggetti manualmente. È in genere, allocare un blocco con ambito nello stack. Un blocco con ambito rilascia automaticamente l'accesso al relativo oggetto di esclusione reciproca quando viene eliminato; Pertanto, si manualmente Sblocca l'oggetto sottostante. Ciò è utile quando una funzione contiene più `return` istruzioni. I blocchi con ambito consentono inoltre di scrivere codice indipendente dalle eccezioni. Quando un `throw` istruzione causa la rimozione dello stack, viene chiamato il distruttore di un blocco con ambito attivo e pertanto l'oggetto di esclusione reciproca viene rilasciato sempre correttamente.

> [!NOTE]
>  Quando si usa la `critical_section::scoped_lock`, `reader_writer_lock::scoped_lock`, e `reader_writer_lock::scoped_lock_read` classi, non rilasciare manualmente l'accesso all'oggetto sottostante per l'esclusione reciproca. Ciò potrebbe mettere il runtime in uno stato non valido.

##  <a name="event"></a> Evento

Il [Concurrency:: event](../../parallel/concrt/reference/event-class.md) classe rappresenta un oggetto di sincronizzazione il cui stato può essere segnalato o non segnalato. A differenza degli oggetti di sincronizzazione, ad esempio le sezioni critiche, il cui scopo è quello di proteggere l'accesso ai dati condivisi, gli eventi di sincronizzano del flusso di esecuzione.

Il `event` classe è utile quando un'attività ha completato il lavoro per un'altra attività. Ad esempio, un'attività potrebbe segnalare un'altra attività che ha letto i dati da una connessione di rete o da un file.

### <a name="methods-and-features"></a>I metodi e funzionalità

Nella tabella seguente vengono illustrati diversi metodi principali che sono definiti dal `event` classe.

|Metodo|Descrizione|
|------------|-----------------|
|[wait](reference/event-class.md#wait)|Attende l'evento venga segnalato.|
|[set](reference/event-class.md#set)|Imposta l'evento sullo stato segnalato.|
|[reset](reference/event-class.md#reset)|Imposta l'evento dello stato non segnalato.|
|[wait_for_multiple](reference/event-class.md#wait_for_multiple)|Attende più eventi venga segnalato.|

### <a name="example"></a>Esempio

Per un esempio che illustra come usare il `event` classe, vedere [confronto tra strutture dati di sincronizzazione per l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md).

[[Torna all'inizio](#top)]

## <a name="related-sections"></a>Sezioni correlate

[Confronto delle strutture di dati di sincronizzazione con l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md)<br/>
Confronta il comportamento delle strutture di dati di sincronizzazione a quelle fornite dall'API di Windows.

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)<br/>
Descrive il runtime di concorrenza che semplifica la programmazione parallela e contiene i collegamenti ad argomenti correlati.
