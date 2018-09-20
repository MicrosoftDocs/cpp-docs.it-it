---
title: "Procedura: usare l'Oversubscription per compensare la latenza | Microsoft Docs"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- oversubscription, using [Concurrency Runtime]
- using oversubscription [Concurrency Runtime]
ms.assetid: a1011329-2f0a-4afb-b599-dd4043009a10
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7f96a8a27b511c1a93114c32d048043aa9562fe1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392964"
---
# <a name="how-to-use-oversubscription-to-offset-latency"></a>Procedura: Usare l'oversubscription per compensare la latenza

Oversubscription può migliorare l'efficienza complessiva di alcune applicazioni contenenti attività che hanno una quantità elevata di latenza. In questo argomento viene illustrato come usare l'oversubscription per compensare la latenza causata dalla lettura di dati da una connessione di rete.

## <a name="example"></a>Esempio

Questo esempio Usa la [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) per scaricare i file dai server HTTP. Il `http_reader` deriva dalla classe [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md) e Usa il passaggio per leggere in modo asincrono i nomi di URL per il download dei messaggi.

Il `http_reader` classe Usa il [Concurrency:: task_group](reference/task-group-class.md) per leggere simultaneamente ciascun file. Ogni attività chiama il [concurrency::Context::Oversubscribe](reference/context-class.md#oversubscribe) metodo con il `_BeginOversubscription` parametro impostato su `true` per abilitare l'oversubscription nel contesto corrente. Ogni attività Usa quindi le classi MFC (Microsoft Foundation) [CInternetSession](../../mfc/reference/cinternetsession-class.md) e [CHttpFile](../../mfc/reference/chttpfile-class.md) classi per scaricare il file. Infine, ogni attività viene chiamato `Context::Oversubscribe` con il `_BeginOversubscription` parametro impostato su `false` per disabilitare l'oversubscription.

Quando è abilitata l'oversubscription, il runtime crea un thread aggiuntivo in cui eseguire le attività. Ognuno di questi thread può anche oversubscription nel contesto corrente, quindi creare thread aggiuntivi. Il `http_reader` classe Usa un [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto per limitare il numero di thread utilizzati dall'applicazione. L'agente consente di inizializzare il buffer con un numero fisso di valori del token. Per ogni operazione di download, l'agente legge un valore del token dal buffer prima che l'operazione di avvio e quindi scrive il valore torna al buffer dopo il completamento dell'operazione. Quando il buffer è vuoto, l'agente attende che una delle operazioni di download da scrivere nuovamente un valore per il buffer.

Nell'esempio seguente limita il numero di attività simultanee a due volte il numero di thread hardware disponibili. Questo valore è un buon punto di partenza da utilizzare quando è provare a usare l'oversubscription. È possibile usare un valore che soddisfa un ambiente di elaborazione particolare o modificare dinamicamente il valore per la risposta al carico di lavoro effettivo.

[!code-cpp[concrt-download-oversubscription#1](../../parallel/concrt/codesnippet/cpp/how-to-use-oversubscription-to-offset-latency_1.cpp)]

Questo esempio produce l'output seguente in un computer che dispone di quattro processori:

```Output
Downloading http://www.adatum.com/...
Downloading http://www.adventure-works.com/...
Downloading http://www.alpineskihouse.com/...
Downloading http://www.cpandl.com/...
Downloading http://www.cohovineyard.com/...
Downloading http://www.cohowinery.com/...
Downloading http://www.cohovineyardandwinery.com/...
Downloading http://www.contoso.com/...
Downloading http://www.consolidatedmessenger.com/...
Downloading http://www.fabrikam.com/...
Downloading http://www.fourthcoffee.com/...
Downloading http://www.graphicdesigninstitute.com/...
Downloading http://www.humongousinsurance.com/...
Downloading http://www.litwareinc.com/...
Downloading http://www.lucernepublishing.com/...
Downloading http://www.margiestravel.com/...
Downloading http://www.northwindtraders.com/...
Downloading http://www.proseware.com/...
Downloading http://www.fineartschool.net...
Downloading http://www.tailspintoys.com/...
Downloaded 1801040 bytes in 3276 ms.
```

L'esempio può essere eseguito più velocemente quando è abilitata l'oversubscription perché le attività aggiuntive eseguite mentre altre attività in attesa completare un'operazione latente.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `download-oversubscription.cpp` e quindi eseguire uno dei seguenti comandi in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc /MD /D AFXDLL"download-oversubscription. cpp**

**CL.exe /EHsc /MT download-oversubscription. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

Disabilitare sempre l'oversubscription quando non sono più necessari. Prendere in considerazione una funzione che non gestisce un'eccezione generata da un'altra funzione. Se non si disabilita l'oversubscription prima che la funzione restituisce, operazioni parallele aggiuntive verranno inoltre oversubscription nel contesto corrente.

È possibile usare la *Resource Acquisition Is Initialization* modello (RAII) per limitare l'oversubscription per un determinato ambito. Sotto il modello RAII, una struttura di dati viene allocata nello stack. La struttura dei dati consente di inizializzare o acquisisce una risorsa quando viene creato e distrugge o rilascia tale risorsa quando viene eliminata la struttura dei dati. Il modello RAII garantisce che il distruttore viene chiamato prima che l'ambito di inclusione viene chiuso. Pertanto, la risorsa viene gestita correttamente quando viene generata un'eccezione o una funzione contiene più `return` istruzioni.

L'esempio seguente definisce una struttura denominata `scoped_blocking_signal`. Il costruttore del `scoped_blocking_signal` struttura consente l'oversubscription e il distruttore la disabilita.

[!code-cpp[concrt-download-oversubscription#2](../../parallel/concrt/codesnippet/cpp/how-to-use-oversubscription-to-offset-latency_2.cpp)]

L'esempio seguente modifica il corpo del `download` metodo da usare il modello RAII per assicurarsi che l'oversubscription viene disabilitato prima la funzione restituisce. In questo modo il `download` metodo è indipendente dalle eccezioni.

[!code-cpp[concrt-download-oversubscription#3](../../parallel/concrt/codesnippet/cpp/how-to-use-oversubscription-to-offset-latency_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Contesti](../../parallel/concrt/contexts.md)<br/>
[Metodo Context:: Oversubscribe](reference/context-class.md#oversubscribe)

