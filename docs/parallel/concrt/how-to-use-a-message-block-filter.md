---
title: 'Procedura: Usare il filtro di blocco dei messaggi'
ms.date: 11/04/2016
helpviewer_keywords:
- message-block filters, using [Concurrency Runtime]
- using message-block filters [Concurrency Runtime]
ms.assetid: db6b99fb-288d-4477-96dc-b9751772ebb2
ms.openlocfilehash: 074d3989ce48b0b6d69206e3f83c374a2ec65c93
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142809"
---
# <a name="how-to-use-a-message-block-filter"></a>Procedura: Usare il filtro di blocco dei messaggi

In questo documento viene illustrato come utilizzare una funzione di filtro per consentire a un blocco di messaggi asincrono di accettare o rifiutare un messaggio sulla base del payload del messaggio.

Quando si crea un oggetto di blocco del messaggio, ad esempio [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md), un oggetto [Concurrency:: Call](../../parallel/concrt/reference/call-class.md)o un oggetto [Concurrency:: Transformer](../../parallel/concrt/reference/transformer-class.md), è possibile fornire una *funzione di filtro* che determini se il blocco del messaggio accetta o rifiuta un messaggio. Una funzione di filtro è un modo utile per garantire che un blocco di messaggi riceva solo determinati valori.

Le funzioni di filtro sono importanti perché consentono di connettere i blocchi di messaggi per formare le *reti del flusso di flussi*. In una rete del flusso di dati, i blocchi di messaggi controllano il flusso di dati elaborando solo i messaggi che soddisfano criteri specifici. Confrontare questo modello con il modello di flusso di controllo, in cui il flusso di dati viene regolato utilizzando strutture di controllo come istruzioni condizionali, cicli e così via.

In questo documento viene fornito un esempio di base sull'utilizzo di un filtro messaggi. Per altri esempi che usano i filtri messaggi e il modello di flusso di flussi di messaggi per connettere i blocchi di messaggi, vedere [procedura dettagliata: creazione di un agente del flusso di flussi](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md) e [procedura dettagliata: creazione di una rete di elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)

## <a name="example"></a>Esempio

Si consideri la funzione seguente, `count_primes`, che illustra l'utilizzo di base di un blocco di messaggi che non filtra i messaggi in ingresso. Il blocco di messaggi aggiunge i numeri primi a un oggetto [std:: Vector](../../standard-library/vector-class.md) . La funzione `count_primes` invia diversi numeri al blocco del messaggio, riceve i valori di output dal blocco del messaggio e stampa i numeri primi nella console.

[!code-cpp[concrt-primes-filter#1](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_1.cpp)]

L'oggetto `transformer` elabora tutti i valori di input. Tuttavia, richiede solo i valori primi. Sebbene sia possibile scrivere l'applicazione in modo che il mittente del messaggio invii solo numeri primi, i requisiti del destinatario del messaggio non possono sempre essere noti.

## <a name="example"></a>Esempio

La funzione seguente, `count_primes_filter`, esegue la stessa attività della funzione di `count_primes`. Tuttavia, l'oggetto `transformer` in questa versione USA una funzione di filtro per accettare solo i valori primi. La funzione che esegue l'azione riceve solo numeri primi; Pertanto, non è necessario chiamare la funzione `is_prime`.

Poiché l'oggetto `transformer` riceve solo numeri primi, l'oggetto `transformer` stesso può conservare i numeri primi. In altre parole, l'oggetto `transformer` in questo esempio non è necessario per aggiungere i numeri primi all'oggetto `vector`.

[!code-cpp[concrt-primes-filter#2](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_2.cpp)]

L'oggetto `transformer` ora elabora solo i valori primi. Nell'esempio precedente `transformer` oggetto elabora tutti i messaggi. Pertanto, l'esempio precedente deve ricevere lo stesso numero di messaggi inviati. In questo esempio viene utilizzato il risultato della funzione [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) per determinare il numero di messaggi da ricevere dall'oggetto `transformer`. La funzione `send` restituisce **true** quando il buffer dei messaggi accetta il messaggio e **false** quando il buffer dei messaggi rifiuta il messaggio. Pertanto, il numero di volte in cui il buffer dei messaggi accetta il messaggio corrisponde al numero di numeri primi.

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato l'esempio completo. Nell'esempio vengono chiamate la funzione `count_primes` e la funzione `count_primes_filter`.

[!code-cpp[concrt-primes-filter#3](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_3.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `primes-filter.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc primes-Filter. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

Una funzione di filtro può essere una funzione lambda, un puntatore a funzione o un oggetto funzione. Ogni funzione di filtro assume uno dei seguenti formati:

```Output
bool (T)
bool (T const &)
```

Per eliminare la copia dei dati non necessaria, utilizzare il secondo form quando si dispone di un tipo di aggregazione trasmesso per valore.

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Procedura dettagliata: creazione di un agente del flusso di dati](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)<br/>
[Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)<br/>
[Classe transformer](../../parallel/concrt/reference/transformer-class.md)
