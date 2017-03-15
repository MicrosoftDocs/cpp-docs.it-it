---
title: "Procedure consigliate generali nel runtime di concorrenza | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Runtime di concorrenza, procedure consigliate generali"
ms.assetid: ce5c784c-051e-44a6-be84-8b3e1139c18b
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Procedure consigliate generali nel runtime di concorrenza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento vengono illustrate le procedure consigliate che si applicano a più aree del runtime di concorrenza.  
  
##  <a name="top"></a> Sezioni  
 Il documento include le sezioni seguenti:  
  
-   [Utilizzare i costrutti di sincronizzazione cooperativa quando possibile](#synchronization)  
  
-   [Evitare attività di lunga durata che non cedono volontariamente il controllo](#yield)  
  
-   [Utilizzare l'oversubscription per compensare le operazioni che si bloccano o prevedono una latenza elevata](#oversubscription)  
  
-   [Utilizzare funzioni di gestione della memoria simultanee quando possibile](#memory)  
  
-   [Utilizzare il modello RAII per gestire la durata degli oggetti di concorrenza](#raii)  
  
-   [Non creare oggetti di concorrenza in ambito globale](#global-scope)  
  
-   [Non utilizzare gli oggetti di concorrenza in segmenti di dati condivisi](#shared-data)  
  
##  <a name="synchronization"></a> Utilizzare i costrutti di sincronizzazione cooperativa quando possibile  
 Il runtime di concorrenza fornisce numerosi costrutti indipendenti dalla concorrenza che non richiedono un oggetto di sincronizzazione esterno.  Ad esempio, la classe [concurrency::concurrent\_vector](../../parallel/concrt/reference/concurrent-vector-class.md) consente operazioni di accodamento e di accesso agli elementi in modo indipendente dalla concorrenza.  Tuttavia per i casi in cui si richiede l'accesso esclusivo a una risorsa, il runtime offre le classi [concurrency::critical\_section](../../parallel/concrt/reference/critical-section-class.md), [concurrency::reader\_writer\_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) e [concurrency::event](../../parallel/concrt/reference/event-class.md).  Questi tipi si comportano in modo cooperativo, pertanto l'utilità di pianificazione può riallocare le risorse di elaborazione a un altro contesto mentre la prima attività resta in attesa dei dati.  Quando possibile, utilizzare questi tipi di sincronizzazione anziché altri meccanismi di sincronizzazione, ad esempio quelli forniti dalle API Windows, che non si comportano in modo cooperativo.  Per ulteriori informazioni su questi tipi di sincronizzazione e per un codice di esempio, vedere [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md) e [Confronto delle strutture di dati di sincronizzazione con l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md).  
  
 \[[Top](#top)\]  
  
##  <a name="yield"></a> Evitare attività di lunga durata che non cedono volontariamente il controllo  
 Dal momento che l'utilità di pianificazione si comporta in modo cooperativo, non presuppone l'equità tra le attività.  Pertanto, un'attività può impedire l'avvio di altre attività.  In alcuni casi questa situazione è accettabile ma in altri casi può provocare un deadlock o l'esaurimento delle risorse.  
  
 Nell'esempio seguente viene eseguito un numero di attività superiore a quello delle risorse di elaborazione allocate.  La prima attività non cede volontariamente il controllo all'utilità di pianificazione delle attività, pertanto la seconda attività viene avviata solo dopo che la prima attività è stata completata.  
  
 [!code-cpp[concrt-cooperative-tasks#1](../../parallel/concrt/codesnippet/CPP/general-best-practices-in-the-concurrency-runtime_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
 1: 250000000 1: 500000000 1: 750000000 1: 1000000000 2: 250000000 2: 500000000 2: 750000000 2: 1000000000  
  
 Esistono diversi modi per consentire la cooperazione tra le due attività.  Uno dei sistemi consiste nel cedere il controllo all'utilità di pianificazione nel caso di un'attività di lunga durata.  Nell'esempio riportato di seguito la funzione `task` viene modificata per chiamare il metodo [concurrency::Context::Yield](../Topic/Context::Yield%20Method.md) in modo che venga lasciato il controllo dell'esecuzione all'utilità di pianificazione per consentire l'esecuzione di un'altra attività.  
  
 [!code-cpp[concrt-cooperative-tasks#2](../../parallel/concrt/codesnippet/CPP/general-best-practices-in-the-concurrency-runtime_2.cpp)]  
  
 Questo esempio produce il seguente output:  
  
  **1: 250000000**  
**2: 250000000**  
**1: 500000000**  
**2: 500000000**  
**1: 750000000**  
**2: 750000000**  
**1: 1000000000**  
**2: 1000000000** Il metodo `Context::Yield` cede il controllo per l'esecuzione solo di un altro thread attivo sull'utilità di pianificazione cui appartiene il thread corrente, di un'attività leggera o di un thread di un altro sistema operativo.  Questo metodo non cede il controllo a lavoro la cui esecuzione in un oggetto [concurrency::task\_group](../Topic/task_group%20Class.md) oppure [concurrency::structured\_task\_group](../../parallel/concrt/reference/structured-task-group-class.md) è stata pianificata ma non ancora avviata.  
  
 Esistono altri modi per consentire la cooperazione tra attività di lunga durata.  È possibile suddividere un'attività grande in sottoattività più piccole.  Si può inoltre abilitare l'oversubscription durante un'attività di lunga durata.  L'oversubscription consente di creare un numero di thread superiore a quello dei thread hardware disponibili.  L'oversubscription è particolarmente utile quando un'attività di lunga durata prevede una quantità elevata di latenza, ad esempio la lettura di dati dal disco o da una connessione di rete.  Per ulteriori informazioni sulle attività leggere e sull'oversubscription, vedere [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
 \[[Top](#top)\]  
  
##  <a name="oversubscription"></a> Utilizzare l'oversubscription per compensare le operazioni che si bloccano o prevedono una latenza elevata  
 Il runtime di concorrenza fornisce le primitive di sincronizzazione, come [concurrency::critical\_section](../../parallel/concrt/reference/critical-section-class.md), che consentono alle attività di bloccarsi e cedersi reciprocamente il controllo in modo cooperativo.  Quando una sola attività si blocca o cede il controllo, l'utilità di pianificazione può riallocare le risorse di elaborazione a un altro contesto mentre la prima attività resta in attesa dei dati.  
  
 Vi sono casi in cui non è possibile utilizzare il meccanismo di blocco cooperativo offerto dal runtime di concorrenza.  Ciò accade ad esempio quando si lavora con una libreria esterna che utilizza un meccanismo di sincronizzazione diverso.  Un altro esempio è quando si esegue un'operazione che potrebbe prevedere una quantità elevata di latenza, ad esempio, quando si utilizza la funzione `ReadFile` dell'API Windows per leggere i dati da una connessione di rete.  In questi casi l'oversubscription può abilitare l'esecuzione di altre attività quando un'altra attività è inattiva.  L'oversubscription consente di creare un numero di thread superiore a quello dei thread hardware disponibili.  
  
 Si consideri la seguente funzione, `download`, che consente di scaricare il file nell'URL specificato.  In questo esempio viene utilizzato il metodo [concurrency::Context::Oversubscribe](../Topic/Context::Oversubscribe%20Method.md) per aumentare temporaneamente il numero di thread attivi.  
  
 [!code-cpp[concrt-download-oversubscription#4](../../parallel/concrt/codesnippet/CPP/general-best-practices-in-the-concurrency-runtime_3.cpp)]  
  
 Poiché la funzione `GetHttpFile` esegue un'operazione potenzialmente latente, l'oversubscription può abilitare l'esecuzione di altre attività mentre l'attività corrente resta in attesa dei dati.  Per la versione completa di questo esempio, vedere [Procedura: Usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).  
  
 \[[Top](#top)\]  
  
##  <a name="memory"></a> Utilizzare funzioni di gestione della memoria simultanee quando possibile  
 Utilizzare le funzioni di gestione della memoria, [concurrency::Alloc](../Topic/Alloc%20Function.md) e [concurrency::Free](../Topic/Free%20Function.md), nel caso di attività ad elevata precisione che allocano con una certa frequenza piccoli oggetti la cui durata è relativamente breve.  Il runtime di concorrenza gestisce una cache di memoria separata per ogni thread in esecuzione.  Le funzioni `Alloc` e `Free` allocano e liberano memoria da queste cache senza l'utilizzo di blocchi o barriere di memoria.  
  
 Per ulteriori informazioni su queste funzioni di gestione della memoria, vedere [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  Per un esempio in cui vengono utilizzate queste funzioni, vedere [Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md).  
  
 \[[Top](#top)\]  
  
##  <a name="raii"></a> Utilizzare il modello RAII per gestire la durata degli oggetti di concorrenza  
 Il runtime di concorrenza utilizza la gestione delle eccezioni per implementare funzionalità come l'annullamento.  Pertanto, è necessario scrivere codice indipendente dalle eccezioni quando si effettuano chiamate nel runtime o si chiama un'altra libreria che effettua chiamate nel runtime.  
  
 Il modello RAII *\(Resource Acquisition Is Initialization\)* rappresenta un modo per gestire correttamente la durata di un oggetto di concorrenza in un ambito specifico.  In base al modello RAII, una struttura dei dati viene allocata sullo stack.  La struttura dei dati inizializza o acquisisce una risorsa quando viene creata ed elimina o rilascia tale risorsa quando la struttura dei dati viene eliminata.  Il modello RAII garantisce che il distruttore venga chiamato prima della chiusura dell'ambito che lo contiene.  Questo modello si rivela utile quando una funzione include più istruzioni `return`.  Consente inoltre di scrivere codice indipendente dalle eccezioni.  Quando un'istruzione `throw` determina la rimozione dello stack, viene chiamato il distruttore dell'oggetto RAII, pertanto la risorsa viene sempre eliminata o rilasciata correttamente.  
  
 Il runtime definisce diverse classi che utilizzano il modello RAII, ad esempio, [concurrency::critical\_section::scoped\_lock](../Topic/critical_section::scoped_lock%20Class.md) e [concurrency::reader\_writer\_lock::scoped\_lock](../Topic/reader_writer_lock::scoped_lock%20Class.md).  Queste classi di supporto sono note come *blocchi con ambito*.  Tali classi offrono diversi vantaggi quando si lavora con gli oggetti [concurrency::critical\_section](../../parallel/concrt/reference/critical-section-class.md) oppure [concurrency::reader\_writer\_lock](../../parallel/concrt/reference/reader-writer-lock-class.md).  Il costruttore di queste classi acquisisce l'accesso all'oggetto `critical_section` oppure `reader_writer_lock` specificato, mentre il distruttore rilascia l'accesso a tale oggetto.  Dal momento che un blocco con ambito rilascia automaticamente l'accesso al rispettivo oggetto a esclusione reciproca quando viene eliminato, l'oggetto sottostante non viene sbloccato manualmente.  
  
 Si consideri la seguente classe, `account` che, in quanto definita da una libreria esterna, non può essere modificata.  
  
 [!code-cpp[concrt-account-transactions#1](../../parallel/concrt/codesnippet/CPP/general-best-practices-in-the-concurrency-runtime_4.h)]  
  
 Nell'esempio seguente vengono eseguite più transazioni in parallelo su un oggetto `account`.  Nell'esempio viene utilizzato un oggetto `critical_section` per sincronizzare l'accesso all'oggetto `account` poiché la classe `account` non è indipendente dalla concorrenza.  Ogni operazione parallela utilizza un oggetto `critical_section::scoped_lock` per garantire che l'oggetto `critical_section` venga sbloccato quando l'operazione ha esito positivo o negativo.  Quando il saldo del conto è negativo, l'operazione di `withdraw` non riesce generando un'eccezione.  
  
 [!code-cpp[concrt-account-transactions#2](../../parallel/concrt/codesnippet/CPP/general-best-practices-in-the-concurrency-runtime_5.cpp)]  
  
 Questo esempio produce l'output seguente:  
  
  **Balance before deposit: 1924**  
**Balance after deposit: 2924**  
**Balance before withdrawal: 2924**  
**Balance after withdrawal: \-76**  
**Balance before withdrawal: \-76**  
**Error details:**  
 **negative balance: \-76** Per ulteriori esempi in cui viene utilizzato il modello RAII per gestire la durata degli oggetti di concorrenza, vedere [Procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md), [Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md) e [Procedura: Usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).  
  
 \[[Top](#top)\]  
  
##  <a name="global-scope"></a> Non creare oggetti di concorrenza in ambito globale  
 Quando si crea un oggetto di concorrenza in ambito globale si possono verificare problemi come ad esempio deadlock o violazioni di accesso alla memoria nell'applicazione.  
  
 Ad esempio, quando si crea un oggetto runtime di concorrenza, il runtime crea un'utilità di pianificazione predefinita se non ne è ancora stata creata una.  Un oggetto runtime creato durante la costruzione di un oggetto globale comporta la creazione di questa pianificazione predefinita da parte del runtime.  Tuttavia, questo processo prevede un blocco interno, che può interferire con l'inizializzazione di altri oggetti che supportano l'infrastruttura del runtime di concorrenza.  Questo blocco interno potrebbe essere richiesto da un altro oggetto dell'infrastruttura che non è stato ancora inizializzato e potrebbe verificarsi un deadlock nell'applicazione.  
  
 Nell'esempio riportato di seguito viene illustrata la creazione di un oggetto [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) globale.  Questo modello viene applicato non solo alla classe `Scheduler`, ma a tutti gli altri tipi forniti dal runtime di concorrenza.  Si consiglia di non seguire questo modello, poiché potrebbe causare un comportamento imprevisto nell'applicazione.  
  
 [!code-cpp[concrt-global-scheduler#1](../../parallel/concrt/codesnippet/CPP/general-best-practices-in-the-concurrency-runtime_6.cpp)]  
  
 Per esempi relativi al modo corretto per creare gli oggetti `Scheduler`, vedere [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
 \[[Top](#top)\]  
  
##  <a name="shared-data"></a> Non utilizzare gli oggetti di concorrenza in segmenti di dati condivisi  
 Il runtime di concorrenza non supporta l'utilizzo di oggetti di concorrenza in una sezione di dati condivisa, ad esempio una sezione dati creata dalla direttiva [data\_seg](../../preprocessor/data-seg.md) `#pragma`.  Un oggetto di concorrenza condiviso nell'ambito dei processi potrebbe impostare uno stato incoerente o non valido per il runtime.  
  
 \[[Top](#top)\]  
  
## Vedere anche  
 [Procedure consigliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-best-practices.md)   
 [PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md)   
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)   
 [Confronto delle strutture di dati di sincronizzazione con l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md)   
 [Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)   
 [Procedura: Usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)   
 [Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)   
 [Procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md)   
 [Procedure consigliate nella libreria PPL \(Parallel Patterns Library\)](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)   
 [Procedure consigliate nella libreria di agenti asincroni](../../parallel/concrt/best-practices-in-the-asynchronous-agents-library.md)