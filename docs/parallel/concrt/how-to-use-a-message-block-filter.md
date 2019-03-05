---
title: 'Procedura: Usare un filtro di blocco di messaggio'
ms.date: 11/04/2016
helpviewer_keywords:
- message-block filters, using [Concurrency Runtime]
- using message-block filters [Concurrency Runtime]
ms.assetid: db6b99fb-288d-4477-96dc-b9751772ebb2
ms.openlocfilehash: 1bfa11953d27dc7e013e715b3f58111f124caeaf
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57284294"
---
# <a name="how-to-use-a-message-block-filter"></a>Procedura: Usare un filtro di blocco di messaggio

Questo documento illustra come usare una funzione di filtro per consentire a un blocco di messaggi asincroni accettare o rifiutare un messaggio in base al payload del messaggio in questione.

Quando si crea un oggetto del blocco di messaggio, ad esempio un [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md), un [Concurrency:: Call](../../parallel/concrt/reference/call-class.md), o un [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md), è possibile fornire un *funzione di filtro* che determina se il blocco di messaggi accetta o rifiuta un messaggio. Una funzione di filtro è utile per garantire che un blocco di messaggi riceve solo determinati valori.

Funzioni di filtro sono importanti perché consentono inoltre di connettere i blocchi di messaggi per formare *le reti del flusso di dati*. In una rete del flusso di dati, blocchi di messaggi controllano il flusso dei dati elaborando solo i messaggi che soddisfano determinati criteri. Confrontando questo modello di flusso di controllo, in cui il flusso di dati è regolamentato utilizzando strutture di controllo, ad esempio istruzioni condizionali, i cicli e così via.

Questo documento fornisce un esempio di base di come usare un filtro dei messaggi. Per altri esempi che usano i filtri messaggi e il modello del flusso di dati per la connessione di blocchi di messaggi, vedere [procedura dettagliata: Creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md) e [procedura dettagliata: Creazione di una rete di elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).

## <a name="example"></a>Esempio

Si consideri la seguente funzione `count_primes`, che illustra l'utilizzo di base di un blocco di messaggio non filtra i messaggi in arrivo. Il blocco dei messaggi consente di accodare i numeri primi di un [std:: Vector](../../standard-library/vector-class.md) oggetto. Il `count_primes` funzione Invia diversi numeri al blocco di messaggio, riceve i valori di output dal blocco di messaggio e consente di stampare i numeri primi nella console.

[!code-cpp[concrt-primes-filter#1](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_1.cpp)]

Il `transformer` oggetto elabora i valori di tutti gli input, tuttavia, richiede solo i valori dei numeri primi. Anche se l'applicazione può essere scritta in modo che il mittente invia solo i numeri primi, non sempre è possibile conoscere i requisiti del ricevitore di messaggi.

## <a name="example"></a>Esempio

La funzione seguente, `count_primes_filter`, esegue la stessa attività come la `count_primes` (funzione). Tuttavia, il `transformer` oggetto in questa versione Usa una funzione di filtro per accettare solo i valori dei numeri primi. La funzione che esegue l'azione riceve solo i numeri primi; Pertanto, non è necessario chiamare il `is_prime` (funzione).

Poiché il `transformer` oggetto riceve solo i numeri primi, il `transformer` può contenere i numeri primi. In altre parole, il `transformer` oggetti in questo esempio non sono necessario aggiungere i numeri primi di `vector` oggetto.

[!code-cpp[concrt-primes-filter#2](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_2.cpp)]

Il `transformer` oggetto elabora ora solo i valori dei numeri primi. Nell'esempio precedente, `transformer` oggetto elabora tutti i messaggi. Nell'esempio precedente, pertanto, deve ricevere lo stesso numero di messaggi inviati. Questo esempio viene usato il risultato del [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) funzione per determinare il numero di messaggi per la ricezione dal `transformer` oggetto. Il `send` funzione restituisce **true** quando il buffer dei messaggi accetta il messaggio e **false** quando il buffer dei messaggi rifiuta il messaggio. Pertanto, il numero di volte che il buffer dei messaggi accetta il messaggio corrisponde al conteggio dei numeri primi.

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato l'esempio completo. Nell'esempio viene chiamato sia la `count_primes` funzione e `count_primes_filter` (funzione).

[!code-cpp[concrt-primes-filter#3](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_3.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `primes-filter.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc primes-filter. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

Una funzione di filtro può essere una funzione lambda, un puntatore a funzione o un oggetto funzione. Ogni funzione di filtro accetta uno dei formati seguenti:

```Output
bool (T)
bool (T const &)
```

Per eliminare le operazioni di copia dei dati, utilizzare la seconda forma della presenza di un tipo di aggregazione che verrà trasmessi dal valore.

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Procedura dettagliata: Creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)<br/>
[Procedura dettagliata: Creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)<br/>
[Classe transformer](../../parallel/concrt/reference/transformer-class.md)
