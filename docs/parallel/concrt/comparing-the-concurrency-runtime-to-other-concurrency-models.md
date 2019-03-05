---
title: Confronto tra runtime di concorrenza e altri modelli di concorrenza
ms.date: 11/04/2016
helpviewer_keywords:
- Concurrency Runtime, compared to other models
ms.assetid: d8b9a1f4-f15f-43c3-a5b4-c0991edf9c86
ms.openlocfilehash: 885cce09707e1c067efdeb0bdc8b7d8a40841c02
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57285100"
---
# <a name="comparing-the-concurrency-runtime-to-other-concurrency-models"></a>Confronto tra runtime di concorrenza e altri modelli di concorrenza

Questo documento descrive le differenze tra le funzionalità e i modelli di programmazione del runtime di concorrenza e quelli di altre tecnologie. È importante poter confrontare i vantaggi del runtime di concorrenza con quelli di altri modelli di programmazione per poter scegliere la tecnologia che meglio soddisfa i requisiti delle applicazioni in uso.

Se si sta usando un altro modello di programmazione, ad esempio il pool di thread di Windows oppure OpenMP, in alcuni casi può essere più opportuno eseguire la migrazione al runtime di concorrenza. L'argomento [Migrating from OpenMP to the Concurrency Runtime](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md) , ad esempio, descrive i casi in cui può essere appropriato eseguire la migrazione da OpenMP al runtime di concorrenza. Se, tuttavia, si ritiene che le prestazioni dell'applicazione e il supporto di debug corrente siano soddisfacenti, la migrazione non è necessaria.

È possibile usare le funzionalità e i vantaggi di produttività del runtime di concorrenza come complemento dell'applicazione esistente basata su un altro modello di concorrenza. Il runtime di concorrenza non può garantire il bilanciamento del carico quando più utilità di pianificazione delle attività competono per le stesse risorse di elaborazione. Nei casi in cui i carichi di lavoro non si sovrappongono, tuttavia, questo effetto è minimo.

##  <a name="top"></a> Sezioni

- [Confronto tra la pianificazione di tipo preemptive e la pianificazione cooperativa](#models)

- [Confronto tra il runtime di concorrenza e l'API Windows](#winapi)

- [Confronto tra il runtime di concorrenza e OpenMP](#openmp)

##  <a name="models"></a> Confronto tra la pianificazione di tipo preemptive e la pianificazione cooperativa

I modelli di pianificazione di tipo preemptive e cooperativa rappresentano due modalità comuni che consentono a più attività di condividere risorse di elaborazione come, ad esempio, processori o thread di hardware.

### <a name="preemptive-and-cooperative-scheduling"></a>Pianificazione di tipo preemptive e cooperativa

La*pianificazione di tipo preemptive* è un meccanismo round robin basato sulle priorità che concede a ogni attività l'accesso esclusivo a una risorsa di elaborazione per un periodo di tempo specificato, per poi passare a un'altra attività. Pianificazione di tipo preemptive è comune nei sistemi operativi multitasking come Windows. *La pianificazione cooperativa* è un meccanismo che concede a ogni attività l'accesso esclusivo a una risorsa di calcolo fino a quando non al termine dell'attività o fino a quando l'attività restituisce l'accesso alla risorsa. Il runtime di concorrenza usa la pianificazione cooperativa con l'utilità di pianificazione di tipo preemptive del sistema operativo per ottimizzare l'utilizzo delle risorse di elaborazione.

### <a name="differences-between-preemptive-and-cooperative-schedulers"></a>Differenze tra le utilità di pianificazione di tipo preemptive e cooperativa

Le utilità di pianificazione di tipo preemptive cercano di concedere a più thread lo stesso tipo di accesso alle risorse di elaborazione per garantire l'avanzamento di ogni thread. Nei computer con molte risorse di elaborazione, risulta meno problematico garantire lo stesso tipo di accesso, ma più problematico garantire un utilizzo efficiente delle risorse.

Per un'utilità di pianificazione di tipo preemptive in modalità kernel, è necessario che il codice dell'applicazione si basi sul sistema operativo per prendere decisioni di pianificazione. Al contrario, un'utilità di pianificazione cooperativa in modalità utente consente al codice dell'applicazione di prendere decisioni di pianificazione autonomamente. Poiché la pianificazione cooperativa consente all'applicazione di prendere molte decisioni di pianificazione, riduce di gran lunga l'overhead associato alla sincronizzazione in modalità kernel. Un'utilità di pianificazione cooperativa rinvia in genere le decisioni di pianificazione al kernel del sistema operativo quando non sono disponibili altre attività da pianificare. Inoltre, questa utilità rinvia le decisioni anche all'utilità di pianificazione del sistema operativo quando un'operazione di blocco viene comunicata al kernel, ma non all'utilità di pianificazione in modalità utente.

### <a name="cooperative-scheduling-and-efficiency"></a>Pianificazione cooperativa ed efficienza

Per un'utilità di pianificazione di tipo preemptive, tutte le attività con lo stesso livello di priorità sono uguali. Un'utilità di pianificazione di tipo preemptive pianifica in genere i thread nell'ordine in cui vengono creati. Un'utilità di pianificazione di tipo preemptive, inoltre, assegna a ogni thread una porzione di tempo in modalità round robin, in base alla priorità dei thread. Anche se questo meccanismo è basato su criteri di equità, ovvero sull'avanzamento di ogni thread, comporta un notevole impegno in termini di efficienza. Per molti algoritmi con calcoli complessi, ad esempio, l'equità non è necessaria. È invece importante che le attività correlate vengano completate nel minor tempo possibile. La pianificazione cooperativa consente a un'applicazione di pianificare il lavoro in modo più efficace. Si consideri, ad esempio, un'applicazione con molti thread. La pianificazione di thread che non condividono risorse per l'esecuzione simultanea può ridurre l'overhead di sincronizzazione incrementando l'efficienza. Un altro modo efficiente di pianificare le attività consiste nell'eseguire pipeline di attività (in cui ogni attività agisce sull'output di quella precedente) sullo stesso processore, in modo che l'input di ogni fase della pipeline sia già caricato nella cache di memoria.

### <a name="using-preemptive-and-cooperative-scheduling-together"></a>Uso congiunto della pianificazione di tipo preemptive e di quella cooperativa

La pianificazione cooperativa non risolve tutti i problemi di pianificazione. Le attività che non passano equamente ad altre attività, ad esempio, possono usare tutte le risorse di elaborazione disponibili e impedire l'avanzamento di altre attività. Il runtime di concorrenza usa i vantaggi di efficienza della pianificazione cooperativa per integrare le garanzie di equità della pianificazione di tipo preemptive. Per impostazione predefinita, il runtime di concorrenza offre un'utilità di pianificazione cooperativa che usa un algoritmo di acquisizione del lavoro per distribuire efficientemente il lavoro tra le risorse di elaborazione. L'utilità di pianificazione del runtime di concorrenza, tuttavia, si basa anche sull'utilità di pianificazione di tipo preemptive del sistema operativo per distribuire equamente le risorse tra le applicazioni. È possibile anche creare utilità di pianificazione personalizzate e criteri dell'utilità di pianificazione nelle applicazioni per produrre un controllo accurato sull'esecuzione dei thread.

[[Torna all'inizio](#top)]

##  <a name="winapi"></a> Confronto tra il runtime di concorrenza e l'API Windows

L'API (Application Programming Interface) di Microsoft Windows, definita in genere API Windows, e precedentemente nota come Win32, offre un modello di programmazione che consente la concorrenza nelle applicazioni. Il runtime di concorrenza si basa sull'API Windows per offrire modelli di programmazione aggiuntivi che non sono resi disponibili dal sistema operativo sottostante.

Il runtime di concorrenza si basa sul modello di thread dell'API Windows per eseguire attività in parallelo. Usa inoltre la gestione della memoria e i meccanismi di archiviazione locale dei thread dell'API Windows. In Windows 7 e Windows Server 2008 R2, usa il supporto dell'API Windows per i computer e i thread pianificabili dall'utente con oltre 64 thread di hardware. Il runtime di concorrenza estende il modello dell'API Windows offrendo un'utilità di pianificazione cooperativa e un algoritmo di acquisizione del lavoro per ottimizzare l'uso delle risorse di elaborazione e consentendo più istanze simultanee dell'utilità di pianificazione.

### <a name="programming-languages"></a>Linguaggi di programmazione

L'API Windows usa il linguaggio di programmazione C per esporre il modello di programmazione. Il runtime di concorrenza offre un'interfaccia di programmazione in C++ che sfrutta i vantaggi delle nuove funzionalità del linguaggio C++. Le funzioni lambda offrono, ad esempio, un meccanismo sintetico indipendente dai tipi per la definizione di funzioni di lavoro parallele. Per altre informazioni sulle funzionalità di C++ più recenti usate dal runtime di concorrenza, vedere [Panoramica](../../parallel/concrt/asynchronous-message-blocks.md).

### <a name="threads-and-thread-pools"></a>Thread e pool di thread

Il meccanismo di concorrenza centrale nell'API Windows è il thread. Per la creazione dei thread viene generalmente usata la funzione [CreateThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createthread) . Sebbene la creazione e l'uso dei thread siano operazioni relativamente semplici, il sistema operativo alloca una quantità significativa di tempo e di altre risorse per la gestione dei thread. Inoltre, anche se per ogni thread è garantito lo stesso tempo di esecuzione di un altro thread con lo stesso livello di priorità, l'overhead associato richiede anche la creazione di attività sufficientemente grandi. Per le attività più piccole o più dettagliate, l'overhead associato alla concorrenza può risultare più vantaggioso rispetto all'esecuzione delle attività in parallelo.

I pool di thread rappresentano un modo per ridurre il costo di gestione dei thread. I pool di thread personalizzati e l'implementazione di pool di thread fornita dall'API Windows consentono entrambi l'esecuzione efficiente in parallelo di piccoli elementi di lavoro. Il pool di thread di Windows gestisce gli elementi di lavoro in una coda FIFO (First-In, First-Out). Ogni elemento di lavoro viene avviato nell'ordine in cui è stato aggiunto nel pool.

Il runtime di concorrenza implementa un algoritmo di acquisizione del lavoro per estendere il meccanismo di pianificazione FIFO. L'algoritmo sposta le attività che non sono ancora state avviate nei thread che hanno esaurito gli elementi di lavoro. Anche se l'algoritmo di acquisizione del lavoro può bilanciare i carichi di lavoro, può determinare anche il riordinamento degli elementi di lavoro. Questo processo di riordinamento può comportare l'avvio di un elemento di lavoro in un ordine diverso da quello con cui è stato inviato. È particolarmente utile con gli algoritmi ricorsivi, in cui è più probabile che i dati vengano condivisi tra le attività più recenti anziché tra quelle meno recenti. La possibilità di eseguire i nuovi elementi per primi comporta un numero minore di tentativi di accesso alla cache non riusciti e di errori di pagina.

Dalla prospettiva del sistema operativo, l'acquisizione del lavoro non è equa. Tuttavia, quando un'applicazione implementa un algoritmo o un'attività per l'esecuzione in parallelo, l'equità tra le sottoattività non è sempre importante. L'aspetto realmente rilevante è la rapidità con cui viene completata l'attività complessiva. Per altri algoritmi, FIFO rappresenta la strategia di pianificazione appropriata.

### <a name="behavior-on-various-operating-systems"></a>Comportamento in vari sistemi operativi

In Windows XP e Windows Vista, le applicazioni che usano il runtime di concorrenza si comportano in modo simile, tranne per il fatto che in Windows Vista sono state migliorate le prestazioni dell'heap.

In Windows 7 e Windows Server 2008 R2, il sistema operativo supporta anche la concorrenza e la scalabilità. Questi sistemi operativi supportano, ad esempio, computer con oltre 64 thread di hardware. Un'applicazione esistente che usa l'API Windows deve essere modificata in modo da sfruttare i vantaggi di queste nuove funzionalità. Un'applicazione che usa il runtime di concorrenza, tuttavia, implementa automaticamente queste funzionalità e non richiede alcuna modifica.

[base.user-mode_scheduling](https://msdn.microsoft.com/library/windows/desktop/dd627187)

[[Torna all'inizio](#top)]

##  <a name="openmp"></a> Confronto tra il runtime di concorrenza e OpenMP

Il runtime di concorrenza consente diversi modelli di programmazione. Questi modelli possono sovrapporsi ai modelli di altre librerie o integrarsi con essi. Questa sezione confronta il runtime di concorrenza e [OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp).

Il modello di programmazione OpenMP è definito da uno standard aperto e include associazioni ben definite ai linguaggi di programmazione Fortran e C/C++. Le versioni 2.0 e 2.5 di OpenMP sono particolarmente adatte per gli algoritmi paralleli che sono iterativi, ovvero eseguono l'iterazione parallela su una matrice di dati. OpenMP è molto efficiente quando il grado di parallelismo è predeterminato e corrisponde alle risorse disponibili nel sistema. Il modello OpenMP rappresenta un sistema valido soprattutto per il calcolo ad alte prestazioni, che prevede la distribuzione di problemi di calcolo molto estesi tra le risorse di elaborazione di un unico computer. In questo scenario, l'ambiente dell'hardware è noto e lo sviluppatore potrà accedere in modo esclusivo alle risorse di elaborazione quando viene eseguito l'algoritmo.

Altri ambienti di elaborazione meno vincolati, tuttavia, possono non rappresentare una corrispondenza valida per OpenMP. I problemi ricorsivi, come l'algoritmo QuickSort o la ricerca in una struttura ad albero di dati, sono ad esempio più difficili da implementare tramite OpenMP. Il runtime di concorrenza completa le funzionalità di OpenMP offrendo la libreria [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) e la [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md). A differenza di OpenMP, il runtime di concorrenza offre un'utilità di pianificazione dinamica che si adatta alle risorse disponibili e regola il grado di parallelismo in base alla modifica dei carichi di lavoro.

Molte delle funzionalità del runtime di concorrenza possono essere estese. È anche possibile combinare le funzionalità esistenti per crearne delle nuove. Poiché OpenMP si basa sulle direttive del compilatore, non può essere esteso facilmente.

Per altre informazioni sul confronto tra il runtime di concorrenza e OpenMP e su come eseguire la migrazione del codice OpenMP esistente per l'uso del runtime di concorrenza, vedere [Migrating from OpenMP to the Concurrency Runtime](../../parallel/concrt/migrating-from-openmp-to-the-concurrency-runtime.md).

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)<br/>
[Panoramica](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[OpenMP](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md#openmp)
