---
title: Procedure consigliate generali nel Runtime di concorrenza | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: Concurrency Runtime, general best practices
ms.assetid: ce5c784c-051e-44a6-be84-8b3e1139c18b
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d5c2c626ceb0243e91e56d70f0d8ae71208b157f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="general-best-practices-in-the-concurrency-runtime"></a>Procedure consigliate generali nel runtime di concorrenza
Questo documento descrive le procedure consigliate che si applicano a più aree del Runtime di concorrenza.  
  
##  <a name="top"></a> Sezioni  
 Questo documento contiene le seguenti sezioni:  
  
- [Utilizzare la sincronizzazione cooperativa costrutti quando possibile](#synchronization)  
  
- [Evitare le attività di lunga durata che non producono](#yield)  
  
- [Usare l'Oversubscription per compensare le operazioni che bloccano o avere una latenza elevata](#oversubscription)  
  
- [Utilizzare funzioni di gestione della memoria simultanee quando possibile](#memory)  
  
- [Utilizzare il modello RAII per gestire la durata degli oggetti di concorrenza](#raii)  
  
- [Non creare oggetti di concorrenza in ambito globale](#global-scope)  
  
- [Non utilizzare gli oggetti di concorrenza in segmenti di dati condivisi](#shared-data)  
  
##  <a name="synchronization"></a>Utilizzare la sincronizzazione cooperativa costrutti quando possibile  
 Il Runtime di concorrenza fornisce numerosi costrutti indipendente dalla concorrenza che non richiedono un oggetto di sincronizzazione esterno. Ad esempio, il [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) fornisce indipendente dalla concorrenza accodare e operazioni di accesso agli elementi. Tuttavia, per i casi in cui si richiede un accesso esclusivo a una risorsa, il runtime fornisce la [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md), [Concurrency:: reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md), e [concorrenza :: evento](../../parallel/concrt/reference/event-class.md) classi. Questi tipi si comportano in modo cooperativo; di conseguenza, l'utilità di pianificazione può riassegnare le risorse di elaborazione in un altro contesto mentre la prima attività è in attesa per i dati. Quando possibile, è possibile utilizzare questi tipi di sincronizzazione anziché altri meccanismi di sincronizzazione, ad esempio quelli forniti dall'API di Windows, che non si comportano in modo cooperativo. Per ulteriori informazioni su questi tipi di sincronizzazione e un esempio di codice, vedere [strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md) e [il confronto delle strutture di dati sincronizzazione all'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="yield"></a>Evitare le attività di lunga durata che non producono  
 Poiché l'utilità di pianificazione si comporta in modo cooperativo, non fornisce l'equità tra attività. Pertanto, un'attività può impedire altre attività di avvio. Anche se ciò è accettabile in alcuni casi, in altri casi questo può causare un deadlock o l'esaurimento delle risorse.  
  
 Nell'esempio seguente consente di eseguire più attività rispetto al numero di risorse di elaborazione allocate. La prima attività non cedere l'esecuzione dell'utilità di pianificazione e pertanto la seconda attività non viene avviato fino al completamento della prima attività.  
  
 [!code-cpp[concrt-cooperative-tasks#1](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
 1: 250000000 1: 500000000 1: 750000000 1: 1000000000 2: 250000000 2: 500000000 2: 750000000 2: 1000000000  
  

 Esistono diversi modi per consentire la cooperazione tra le due attività. Un modo consiste nel cedere l'utilità di pianificazione in un'attività a esecuzione prolungata. L'esempio seguente modifica il `task` funzione da chiamare il [Concurrency](reference/context-class.md#yield) metodo ceda l'esecuzione all'utilità di pianificazione di attività in modo che sia possibile eseguire un'altra attività.  

  
 [!code-cpp[concrt-cooperative-tasks#2](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_2.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
1: 250000000  
2: 250000000  
1: 500000000  
2: 500000000  
1: 750000000  
2: 750000000  
1: 1000000000  
2: 1000000000  
```  
  
 Il `Context::Yield` metodo restituisce solo un altro thread attivo nell'utilità di pianificazione a cui appartiene il thread corrente, un'attività leggera o un altro thread del sistema operativo. Questo metodo non passato al lavoro pianificata per l'esecuzione in un [Concurrency:: task_group](reference/task-group-class.md) o [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) oggetto ma non ancora avviato.  
  
 Esistono altri modi per abilitare la cooperazione tra attività a esecuzione prolungata. È possibile interrompere un'attività di grandi dimensioni in sottoattività più piccole. È inoltre possibile abilitare l'oversubscription durante un'operazione di lunga durata. L'oversubscription consente di creare un numero di thread superiore a quello dei thread hardware disponibili. L'oversubscription è particolarmente utile quando un'attività di lunga durata contiene una quantità elevata di latenza, ad esempio, la lettura dei dati dal disco o da una connessione di rete. Per ulteriori informazioni sulle attività leggere e l'oversubscription, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="oversubscription"></a>Usare l'Oversubscription per compensare le operazioni che bloccano o avere una latenza elevata  
 Il Runtime di concorrenza fornisce primitive di sincronizzazione, ad esempio [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md), che consentono alle attività bloccata in modo cooperativo e passarsi. Quando un'attività in modo cooperativo blocca o produce, l'utilità di pianificazione può riassegnare le risorse di elaborazione in un altro contesto mentre la prima attività è in attesa per i dati.  
  
 Vi sono casi in cui non è possibile utilizzare il meccanismo di blocco cooperativo fornito dal Runtime di concorrenza. Ad esempio, una libreria esterna si utilizza potrebbe utilizzare un meccanismo di sincronizzazione diversi. Un altro esempio è quando si esegue un'operazione che potrebbe avere una quantità elevata di latenza, ad esempio, quando si utilizza l'API Windows `ReadFile` funzione per leggere dati da una connessione di rete. In questi casi, l'oversubscription può abilitare altre attività da eseguire quando un'altra attività è inattiva. L'oversubscription consente di creare un numero di thread superiore a quello dei thread hardware disponibili.  
  
 Si consideri la seguente funzione `download`, che consente di scaricare il file all'URL dato. Questo esempio viene utilizzato il [concurrency::Context::Oversubscribe](reference/context-class.md#oversubscribe) metodo per aumentare temporaneamente il numero di thread attivi.  

 [!code-cpp[concrt-download-oversubscription#4](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_3.cpp)]  
  
 Poiché il `GetHttpFile` funzione esegue un'operazione potenzialmente latente, l'oversubscription può abilitare altre attività per l'esecuzione mentre l'attività corrente è in attesa per i dati. Per la versione completa di questo esempio, vedere [procedura: utilizzare l'Oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="memory"></a>Utilizzare funzioni di gestione della memoria simultanee quando possibile  

 Utilizzare le funzioni di gestione della memoria, [Concurrency:: Alloc](reference/concurrency-namespace-functions.md#alloc) e [Concurrency:: Free](reference/concurrency-namespace-functions.md#free), quando si dispone di attività dettagliate tramite cui vengono allocati spesso piccoli oggetti la cui durata sono relativamente breve. Il Runtime di concorrenza mantiene una cache di memoria separata per ogni thread in esecuzione. Il `Alloc` e `Free` funzioni allocano e liberano memoria da queste cache senza l'utilizzo di blocchi o barriere di memoria.  
  
 Per ulteriori informazioni su queste funzioni di gestione della memoria, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md). Per un esempio che Usa queste funzioni, vedere [procedura: utilizzare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="raii"></a>Utilizzare il modello RAII per gestire la durata degli oggetti di concorrenza  
 Il Runtime di concorrenza viene utilizzato per implementare funzionalità come l'annullamento di gestione delle eccezioni. Pertanto, scrivere codice indipendente dalle eccezioni quando si chiama in fase di esecuzione o chiama un'altra libreria che chiama in fase di esecuzione.  
  
 Il *Resource Acquisition Is Initialization* modello (RAII) è un modo per gestire in modo sicuro la durata di un oggetto di concorrenza in un ambito specifico. Sotto il modello RAII, una struttura di dati viene allocata nello stack. La struttura dei dati Inizializza o acquisisce una risorsa quando viene creato ed elimina o rilascia tale risorsa quando viene eliminata la struttura dei dati. Il modello RAII garantisce che il distruttore viene chiamato prima che l'ambito che lo contiene viene chiuso. Questo modello è utile quando una funzione contiene più `return` istruzioni. Questo modello consente inoltre di scrivere codice indipendente dalle eccezioni. Quando un `throw` istruzione comporta la rimozione, il distruttore viene chiamato l'oggetto RAII dello stack; pertanto, la risorsa viene sempre correttamente eliminata o rilasciata.  
  
 Il runtime vengono definite diverse classi che utilizzano il modello RAII, ad esempio, [concurrency::critical_section::scoped_lock](../../parallel/concrt/reference/critical-section-class.md#critical_section__scoped_lock_class) e [concurrency::reader_writer_lock::scoped_lock](reference/reader-writer-lock-class.md#scoped_lock_class). Queste classi di supporto sono note come *blocchi con ambito*. Queste classi offrono numerosi vantaggi quando si lavora con [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) o [Concurrency:: reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) oggetti. Il costruttore di queste classi acquisisce l'accesso a fornito `critical_section` o `reader_writer_lock` oggetto; il distruttore versioni l'accesso a tale oggetto. Poiché un blocco con ambito rilascia automaticamente l'accesso al relativo oggetto esclusione reciproca quando viene eliminato, si sblocca manualmente l'oggetto sottostante.  
  
 Si consideri la seguente classe `account`, cui è definito da una libreria esterna e pertanto non può essere modificato.  
  
 [!code-cpp[concrt-account-transactions#1](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_4.h)]  
  
 Nell'esempio seguente consente di eseguire più transazioni in un `account` oggetto in parallelo. Nell'esempio viene utilizzato un `critical_section` oggetto per sincronizzare l'accesso per il `account` oggetto perché il `account` classe non è indipendente dalla concorrenza. Ogni operazione parallela utilizza un `critical_section::scoped_lock` oggetto per garantire che il `critical_section` oggetto viene sbloccato quando l'operazione ha esito positivo o negativo. Quando il saldo del conto è negativo, il `withdraw` operazione non riesce generando un'eccezione.  
  
 [!code-cpp[concrt-account-transactions#2](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_5.cpp)]  
  
 Questo esempio produce il seguente output di esempio:  
  
```Output  
Balance before deposit: 1924  
Balance after deposit: 2924  
Balance before withdrawal: 2924  
Balance after withdrawal: -76  
Balance before withdrawal: -76  
Error details:  
    negative balance: -76  
```  
  
 Per ulteriori esempi che utilizzano il modello RAII per gestire la durata degli oggetti di concorrenza, vedere [procedura dettagliata: rimozione di lavoro da un Thread dell'interfaccia utente](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md), [procedura: utilizzare la classe Context per implementare una cooperativo Semaforo](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md), e [procedura: utilizzare l'Oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="global-scope"></a>Non creare oggetti di concorrenza in ambito globale  
 Quando si crea un oggetto di concorrenza in ambito globale, nell'applicazione si possono verificare problemi come il deadlock o violazioni di accesso alla memoria.  
  
 Ad esempio, quando si crea un oggetto runtime di concorrenza, tramite il runtime viene creata un'utilità di pianificazione predefinita, se non è già disponibile. Un oggetto runtime creato durante la costruzione di un oggetto globale comporta la creazione di questa utilità di pianificazione predefinita da parte del runtime. Tuttavia, questo processo prevede un blocco interno, che può interferire con l'inizializzazione di altri oggetti che supportano l'infrastruttura del runtime di concorrenza. Questo blocco interno potrebbe essere richiesto da un altro oggetto dell'infrastruttura che non è ancora stato inizializzato e potrebbe verificarsi un deadlock nell'applicazione.  
  
 Nell'esempio seguente viene illustrata la creazione di un elemento globale [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) oggetto. Questo modello viene applicato non solo alla classe `Scheduler`, ma anche a tutti gli altri tipi forniti dal runtime di concorrenza. È consigliabile non seguire questo modello, poiché potrebbe causare un comportamento imprevisto nell'applicazione.  
  
 [!code-cpp[concrt-global-scheduler#1](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_6.cpp)]  
  
 Per esempi del modo corretto per creare `Scheduler` degli oggetti, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="shared-data"></a>Non utilizzare gli oggetti di concorrenza in segmenti di dati condivisi  
 Il Runtime di concorrenza non supporta l'utilizzo di oggetti di concorrenza in una sezione di dati condivisi, ad esempio, una sezione di dati creato dal [data_seg](../../preprocessor/data-seg.md) `#pragma` direttiva. Un oggetto di concorrenza che è condivisi tra più processi è possibile inserire il runtime in uno stato incoerente o non valido.  
  
 [[Torna all'inizio](#top)]  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure consigliate per Runtime di concorrenza](../../parallel/concrt/concurrency-runtime-best-practices.md)   
 [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)   
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)   
 [Il confronto delle strutture di dati di sincronizzazione per l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md)   
 [Procedura: utilizzare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)   
 [Procedura: utilizzare l'Oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)   
 [Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)   
 [Procedura dettagliata: Rimozione di lavoro da un Thread dell'interfaccia utente](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md)   
 [Le procedure consigliate in Parallel Patterns Library](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)   
 [Procedure consigliate nella libreria di agenti asincroni](../../parallel/concrt/best-practices-in-the-asynchronous-agents-library.md)
