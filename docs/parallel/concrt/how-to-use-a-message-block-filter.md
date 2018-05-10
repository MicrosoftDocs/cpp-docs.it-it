---
title: 'Procedura: utilizzare un filtro di blocco di messaggi | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- message-block filters, using [Concurrency Runtime]
- using message-block filters [Concurrency Runtime]
ms.assetid: db6b99fb-288d-4477-96dc-b9751772ebb2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 92de322142e56eb9907da2e19d350c3af9c8a7d9
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="how-to-use-a-message-block-filter"></a>Procedura: Usare il filtro di blocco dei messaggi
In questo documento viene illustrato come utilizzare una funzione di filtro per consentire a un blocco di messaggi asincroni accettare o rifiutare un messaggio in base al payload del messaggio.  
  
 Quando si crea un oggetto di blocco di messaggi, ad esempio un [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md), [Concurrency:: Call](../../parallel/concrt/reference/call-class.md), o un [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md), è possibile fornire un *funzione filter* che determina se il blocco dei messaggi è accettato o rifiutato un messaggio. Una funzione di filtro è utile per garantire che un blocco di messaggi riceve solo determinati valori.  
  
 Funzioni di filtro sono importanti perché consentono di connettere i blocchi dei messaggi per creare *reti del flusso di dati*. In una rete del flusso di dati, blocchi di messaggi controllano il flusso di dati elaborando solo i messaggi che soddisfano determinati criteri. Confrontare questo al modello di flusso di controllo, in cui il flusso di dati è regolato con strutture di controllo, ad esempio istruzioni condizionali, cicli e così via.  
  
 Questo documento fornisce un esempio di come utilizzare un filtro dei messaggi di base. Per ulteriori esempi che utilizzano i filtri messaggi e il modello del flusso di dati per la connessione di blocchi dei messaggi, vedere [procedura dettagliata: creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md) e [procedura dettagliata: creazione di una rete di elaborazione delle immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md) .  
  
## <a name="example"></a>Esempio  
 Si consideri la seguente funzione `count_primes`, cui viene illustrato l'utilizzo di base di un blocco di messaggi che non filtra i messaggi in arrivo. Il blocco dei messaggi aggiunge i numeri primi di un [std:: Vector](../../standard-library/vector-class.md) oggetto. Il `count_primes` funzione Invia diversi numeri per il blocco dei messaggi, riceve i valori di output dal blocco di messaggio e consente di stampare i numeri primi nella console di.  
  
 [!code-cpp[concrt-primes-filter#1](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_1.cpp)]  
  
 Il `transformer` oggetto elabora i valori di tutti gli input, tuttavia, richiede solo i valori sono i primi. Anche se l'applicazione potrebbe essere scritta in modo che il mittente invia solo i numeri primi, non sempre è possibile conoscere i requisiti del ricevitore del messaggio.  
  
## <a name="example"></a>Esempio  
 La funzione seguente, `count_primes_filter`, esegue la stessa attività come il `count_primes` (funzione). Tuttavia, il `transformer` oggetto in questa versione utilizza una funzione di filtro per accettare solo i valori sono i primi. La funzione che esegue l'azione riceve solo numeri primi. Pertanto, non è necessario chiamare il `is_prime` (funzione).  
  
 Poiché il `transformer` oggetto riceve solo i numeri primi, il `transformer` può contenere i numeri primi. In altre parole, il `transformer` oggetto in questo esempio non è necessario aggiungere i numeri primi di `vector` oggetto.  
  
 [!code-cpp[concrt-primes-filter#2](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_2.cpp)]  
  
 Il `transformer` oggetto ora elabora solo i valori sono i primi. Nell'esempio precedente, `transformer` oggetto elabora tutti i messaggi. Pertanto, nell'esempio precedente deve ricevere lo stesso numero di messaggi che invia. In questo esempio viene utilizzato il risultato del [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) funzione per determinare il numero di messaggi per ricevere il `transformer` oggetto. Il `send` risultato della funzione `true` quando il buffer dei messaggi accetta il messaggio e `false` quando il buffer dei messaggi rifiuta il messaggio. Pertanto, il numero di volte che il buffer dei messaggi accetta il messaggio corrisponde al conteggio dei numeri primi.  
  
## <a name="example"></a>Esempio  
 Nel codice seguente viene illustrato l'esempio completo. L'esempio chiama sia il `count_primes` funzione e `count_primes_filter` (funzione).  
  
 [!code-cpp[concrt-primes-filter#3](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_3.cpp)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `primes-filter.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc primes-filter. cpp**  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 Una funzione di filtro può essere una funzione lambda, un puntatore a funzione o un oggetto funzione. Ogni funzione di filtro accetta uno dei formati seguenti:  
  
```Output  
bool (T)  
bool (T const &)  
```  
  
 Per eliminare la copia non necessaria dei dati, utilizzare la seconda forma della presenza di un tipo di aggregazione che verrà trasmessi dal valore.  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Procedura dettagliata: Creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)   
 [Procedura dettagliata: Creazione di una rete di elaborazione delle immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)   
 [Classe transformer](../../parallel/concrt/reference/transformer-class.md)
