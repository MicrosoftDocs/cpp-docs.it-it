---
title: "Procedura: Usare il filtro di blocco dei messaggi | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "filtri di blocco dei messaggi, uso [Runtime di concorrenza]"
  - "utilizzo di filtri di blocco dei messaggi [Runtime di concorrenza]"
ms.assetid: db6b99fb-288d-4477-96dc-b9751772ebb2
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Usare il filtro di blocco dei messaggi
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene illustrato come utilizzare una funzione di filtro per consentire a un blocco di messaggi asincroni di accettare o rifiutare un messaggio in base al payload del messaggio.  
  
 Quando si crea un oggetto di blocco di messaggi, ad esempio un [Concurrency:: unbounded_buffer](../Topic/unbounded_buffer%20Class.md),  [Concurrency:: Call](../../parallel/concrt/reference/call-class.md), o un [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md), è possibile fornire un *funzione filter* che determina se il blocco di messaggi accettato o rifiutato un messaggio. Una funzione di filtro è utile per garantire la ricezione solo di determinati valori da un blocco di messaggi.  
  
 Funzioni di filtro sono importanti perché consentono di connettere i blocchi dei messaggi per formare *reti del flusso di dati*. In una rete del flusso di dati, blocchi di messaggi controllano il flusso di dati elaborando solo i messaggi che soddisfano criteri specifici. Confrontare questo numero per il modello di flusso di controllo, in cui il flusso di dati è regolato utilizzando strutture di controllo, ad esempio istruzioni condizionali, cicli e così via.  
  
 Questo documento fornisce un esempio semplice di come utilizzare un filtro dei messaggi. Per ulteriori esempi che utilizzano filtri messaggi e il modello di flusso di dati per la connessione di blocchi dei messaggi, vedere [procedura dettagliata: creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md) e [procedura dettagliata: creazione di una rete di elaborazione delle immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).  
  
## <a name="example"></a>Esempio  
 Si consideri la seguente funzione `count_primes`, che illustra l'utilizzo di base di un blocco di messaggi che non filtra i messaggi in arrivo. Il blocco di messaggi accoda i numeri primi di un [std:: Vector](vector%20Class.md) oggetto. Il `count_primes` funzione Invia diversi numeri per il blocco dei messaggi, riceve i valori di output dal blocco di messaggio e consente di stampare i numeri primi nella console.  
  
 [!code-cpp[concrt-primes-filter#1](../../parallel/concrt/codesnippet/CPP/how-to-use-a-message-block-filter_1.cpp)]  
  
 Il `transformer` oggetto elabora i valori di tutti gli input, tuttavia, richiede solo i valori primi. Anche se l'applicazione potrebbe essere scritto in modo che il mittente invia solo i numeri primi, non sempre è possibile conoscere i requisiti del ricevitore del messaggio.  
  
## <a name="example"></a>Esempio  
 La funzione seguente, `count_primes_filter`, esegue la stessa attività come la `count_primes` (funzione). Tuttavia, il `transformer` oggetto in questa versione utilizza una funzione di filtro per accettare solo i valori primi. La funzione che esegue l'azione riceve solo i numeri primi; Pertanto, non è necessario chiamare il `is_prime` (funzione).  
  
 Poiché il `transformer` oggetto riceve solo i numeri primi, il `transformer` può contenere i numeri primi. In altre parole, il `transformer` non è necessario aggiungere i numeri primi all'oggetto in questo esempio il `vector` oggetto.  
  
 [!code-cpp[concrt-primes-filter#2](../../parallel/concrt/codesnippet/CPP/how-to-use-a-message-block-filter_2.cpp)]  
  
 Il `transformer` oggetto ora elabora solo i valori primi. Nell'esempio precedente, `transformer` oggetto elabora tutti i messaggi. Nell'esempio precedente, pertanto, deve ricevere lo stesso numero di messaggi che invia. In questo esempio viene utilizzato il risultato del [Concurrency:: Send](../Topic/send%20Function.md) funzione per determinare il numero di messaggi per ricevere il `transformer` oggetto. Il `send` restituisce `true` quando il buffer dei messaggi accetta il messaggio e `false` quando il buffer dei messaggi rifiuta il messaggio. Pertanto, il numero di volte che il buffer dei messaggi accetta il messaggio corrisponde al conteggio dei numeri primi.  
  
## <a name="example"></a>Esempio  
 Nel codice seguente viene illustrato l'esempio completo. L'esempio chiama sia il `count_primes` (funzione) e `count_primes_filter` (funzione).  
  
 [!code-cpp[concrt-primes-filter#3](../../parallel/concrt/codesnippet/CPP/how-to-use-a-message-block-filter_3.cpp)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `primes-filter.cpp` quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc primes-filter. cpp**  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 Una funzione di filtro può essere una funzione lambda, un puntatore a funzione o un oggetto funzione. Ogni funzione di filtro accetta uno dei seguenti formati:  
  
```Output  
bool (T)  
bool (T const &)  
```  
  
 Per eliminare la copia non necessaria dei dati, utilizzare il secondo formato quando si dispone di un tipo di aggregazione che verrà trasmessi dal valore.  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Procedura dettagliata: Creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)   
 [Procedura dettagliata: Creazione di una rete di elaborazione delle immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)   
 [Classe Transformer](../../parallel/concrt/reference/transformer-class.md)
