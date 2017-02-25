---
title: "Procedura: Usare l&#39;oversubscription per compensare la latenza | Microsoft Docs"
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
  - "oversubscription, uso [Runtime di concorrenza]"
  - "utilizzo di oversubscription [Runtime di concorrenza]"
ms.assetid: a1011329-2f0a-4afb-b599-dd4043009a10
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Procedura: Usare l&#39;oversubscription per compensare la latenza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'oversubscription può migliorare l'efficienza complessiva di alcune applicazioni che contengono attività che hanno un'eccessiva quantità di latenza.  In questo argomento viene illustrato come utilizzare l'oversubscription per compensare la latenza causata dalla lettura dei dati da una connessione di rete.  
  
## Esempio  
 In questo esempio viene utilizzata la [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) per scaricare file dai server HTTP.  La classe `http_reader` deriva da [concurrency::agent](../../parallel/concrt/reference/agent-class.md) e utilizza il passaggio dei messaggi per leggere in modo asincrono i nomi URL da scaricare.  
  
 La classe `http_reader` utilizza la classe [concurrency::task\_group](../Topic/task_group%20Class.md) per leggere simultaneamente ciascun file.  Ogni attività chiama il metodo [concurrency::Context::Oversubscribe](../Topic/Context::Oversubscribe%20Method.md) con il parametro `_BeginOversubscription` impostato su `true` per abilitare l'oversubscription nel contesto corrente.  Ogni attività utilizza quindi le classi MFC \(Microsoft Foundation Classes\) [CInternetSession](../../mfc/reference/cinternetsession-class.md) e [CHttpFile](../../mfc/reference/chttpfile-class.md) per scaricare il file.  Infine ogni attività chiama `Context::Oversubscribe` con il parametro `_BeginOversubscription` impostato a `false` per disabilitare l'oversubscription.  
  
 Quando l'oversubscription è abilitato, il runtime crea un thread aggiuntivo in cui eseguire le attività.  Ognuno di questi thread può inoltre abilitare l'oversubscription nel contesto corrente creando quindi thread aggiuntivi.  La classe `http_reader` utilizza un oggetto [concurrency::unbounded\_buffer](../Topic/unbounded_buffer%20Class.md) per limitare il numero di thread utilizzati dall'applicazione.  L'agente inizializza il buffer con un numero fisso di valori token.  Per ogni operazione di download, l'agente legge un valore token dal buffer prima dell'avvio dell'operazione, quindi scrive il valore di nuovo nel buffer dopo il completamento dell'operazione.  Quando il buffer è vuoto, l'agente attende che una delle operazioni di download scriva un valore di nuovo nel buffer.  
  
 Nell'esempio seguente il numero di attività simultanee viene limitato a due volte il numero di thread di hardware disponibili.  Questo valore rappresenta un buon punto di partenza da utilizzare con l'oversubscription.  È possibile utilizzare un valore appropriato per uno specifico ambiente di elaborazione o modificare dinamicamente questo valore per rispondere al carico di lavoro effettivo.  
  
 [!code-cpp[concrt-download-oversubscription#1](../../parallel/concrt/codesnippet/CPP/how-to-use-oversubscription-to-offset-latency_1.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
  **Downloading http:\/\/www.adatum.com\/...**  
**Downloading http:\/\/www.adventure\-works.com\/...**  
**Downloading http:\/\/www.alpineskihouse.com\/...**  
**Downloading http:\/\/www.cpandl.com\/...**  
**Downloading http:\/\/www.cohovineyard.com\/...**  
**Downloading http:\/\/www.cohowinery.com\/...**  
**Downloading http:\/\/www.cohovineyardandwinery.com\/...**  
**Downloading http:\/\/www.contoso.com\/...**  
**Downloading http:\/\/www.consolidatedmessenger.com\/...**  
**Downloading http:\/\/www.fabrikam.com\/...**  
**Downloading http:\/\/www.fourthcoffee.com\/...**  
**Downloading http:\/\/www.graphicdesigninstitute.com\/...**  
**Downloading http:\/\/www.humongousinsurance.com\/...**  
**Downloading http:\/\/www.litwareinc.com\/...**  
**Downloading http:\/\/www.lucernepublishing.com\/...**  
**Downloading http:\/\/www.margiestravel.com\/...**  
**Downloading http:\/\/www.northwindtraders.com\/...**  
**Downloading http:\/\/www.proseware.com\/...**  
**Downloading http:\/\/www.fineartschool.net...**  
**Downloading http:\/\/www.tailspintoys.com\/...**  
**Downloaded 1801040 bytes in 3276 ms.** L'esempio può essere eseguito più velocemente quando è abilitato l'oversubscription poiché le attività aggiuntive vengono eseguite mentre le altre attività attendono il completamento di un'operazione latente.  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `download-oversubscription.cpp`, quindi eseguire uno dei comandi seguenti in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc \/MD \/D "\_AFXDLL" download\-oversubscription.cpp**  
  
 **cl.exe \/EHsc \/MT download\-oversubscription.cpp**  
  
## Programmazione efficiente  
 Disabilitare sempre l'oversubscription quando non è più richiesta.  Considerare una funzione che non gestisce un'eccezione generata da un'altra funzione.  Se non si disabilita l'oversubscription prima della restituzione della funzione, l'oversubscription verrà inoltre abilitato per qualsiasi lavoro parallelo aggiuntivo nel contesto corrente.  
  
 È possibile utilizzare il modello *RAII \(Resource Acquisition Is Initialization\)* per limitare l'oversubscription a un ambito specificato.  In base al modello RAII, una struttura dei dati viene allocata sullo stack.  La struttura dei dati inizializza o acquisisce una risorsa quando viene creata ed elimina o rilascia tale risorsa quando la struttura dei dati viene eliminata.  Il modello RAII garantisce che il distruttore venga chiamato prima della chiusura dell'ambito che lo contiene.  Pertanto, la risorsa viene gestita correttamente quando viene generata un'eccezione o quando una funzione contiene più istruzioni `return`.  
  
 Nell'esempio seguente viene definita una struttura denominata `scoped_blocking_signal`.  Il costruttore della struttura `scoped_blocking_signal` abilita l'oversubscription mentre il distruttore la disabilita.  
  
 [!code-cpp[concrt-download-oversubscription#2](../../parallel/concrt/codesnippet/CPP/how-to-use-oversubscription-to-offset-latency_2.cpp)]  
  
 Nell'esempio seguente viene modificato il corpo del metodo `download` in modo da utilizzare il modello RAII per assicurarsi che l'oversubscription venga disabilitata prima del termine della funzione.  Questa tecnica garantisce che il metodo `download` venga eseguito correttamente indipendentemente dalle eccezioni.  
  
 [!code-cpp[concrt-download-oversubscription#3](../../parallel/concrt/codesnippet/CPP/how-to-use-oversubscription-to-offset-latency_3.cpp)]  
  
## Vedere anche  
 [Contesti](../../parallel/concrt/contexts.md)   
 [Metodo Context::Oversubscribe](../Topic/Context::Oversubscribe%20Method.md)