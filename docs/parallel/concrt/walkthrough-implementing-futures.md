---
title: 'Procedura dettagliata: Implementazione di future'
ms.date: 04/25/2019
helpviewer_keywords:
- implementing futures [Concurrency Runtime]
- futures, implementing [Concurrency Runtime]
ms.assetid: 82ea75cc-aaec-4452-b10d-8abce0a87e5b
ms.openlocfilehash: 00ad8bbe6f950ad531bad751686393dce66643bb
ms.sourcegitcommit: 283cb64fd7958a6b7fbf0cd8534de99ac8d408eb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2019
ms.locfileid: "64857059"
---
# <a name="walkthrough-implementing-futures"></a>Procedura dettagliata: Implementazione di future

In questo argomento viene illustrato come implementare i future nell'applicazione. L'argomento viene illustrato come combinare le funzionalità esistenti nel Runtime di concorrenza in un elemento ancora più avanzate.

> [!IMPORTANT]
>  In questo argomento viene illustrato il concetto di future a scopo dimostrativo. È consigliabile usare [std:: future](../../standard-library/future-class.md) oppure [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) quando è necessario utilizzare un'attività asincrona che calcola un valore per un uso successivo.

Oggetto *attività* è riportato un calcolo che può essere scomposto in ulteriori calcoli più accurati. Oggetto *future* è un'attività asincrona che calcola un valore per un uso successivo.

Per implementare il ritardo, questo argomento viene definito il `async_future` classe. Il `async_future` classe utilizza questi componenti del Runtime di concorrenza: il [Concurrency:: task_group](reference/task-group-class.md) classe e il [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) classe. Il `async_future` classe Usa il `task_group` classe per calcolare in modo asincrono un valore e il `single_assignment` classe per archiviare il risultato del calcolo. Il costruttore del `async_future` classe accetta una funzione lavoro che calcola il risultato e `get` metodo recupera il risultato.

### <a name="to-implement-the-asyncfuture-class"></a>Per implementare la classe async_future

1. Dichiarare una classe di modello denominata `async_future` contenente i parametri del tipo di calcolo risultante. Aggiungere `public` e `private` sezioni a questa classe.

[!code-cpp[concrt-futures#2](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_1.cpp)]

1. Nel `private` sezione il `async_future` classe, dichiarare un `task_group` e un `single_assignment` (membro dati).

[!code-cpp[concrt-futures#3](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_2.cpp)]

1. Nel `public` sezione il `async_future` classe, implementare il costruttore. Il costruttore è un modello contenente i parametri per la funzione lavoro che calcola il risultato. Il costruttore esegue in modo asincrono la funzione lavoro nel `task_group` (membro dati) e viene utilizzato il [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) funzione per scrivere il risultato per il `single_assignment` (membro dati).

[!code-cpp[concrt-futures#4](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_3.cpp)]

1. Nel `public` sezione il `async_future` classe, implementare il distruttore. Il distruttore attende il completamento dell'attività.

[!code-cpp[concrt-futures#5](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_4.cpp)]

1. Nel `public` sezione il `async_future` classe, implementare il `get` (metodo). Questo metodo Usa il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione per recuperare il risultato della funzione lavoro.

[!code-cpp[concrt-futures#6](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_5.cpp)]

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

L'esempio seguente illustra l'intero `async_future` classe e un esempio d'uso. Il `wmain` funzione crea un oggetto std::[vettore](../../standard-library/vector-class.md) contenente i valori integer casuale 10.000. Quindi, utilizza `async_future` gli oggetti per trovare i valori minimo e massimo sono contenuti nel `vector` oggetto.

### <a name="code"></a>Codice

[!code-cpp[concrt-futures#1](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_6.cpp)]

### <a name="comments"></a>Commenti

Questo esempio produce il seguente output:

```Output
smallest: 0
largest:  9999
average:  4981
```

Nell'esempio viene usato il `async_future::get` metodo per recuperare i risultati del calcolo. Il `async_future::get` metodo attende il completamento se il calcolo è ancora attivo.

## <a name="robust-programming"></a>Programmazione efficiente

Per estendere il `async_future` classe per gestire le eccezioni generate dalla funzione lavoro, modificare il `async_future::get` metodo da chiamare il [Concurrency:: Canceled](reference/task-group-class.md#wait) (metodo). Il `task_group::wait` metodo avvia eventuali eccezioni generate dalla funzione lavoro.

L'esempio seguente illustra la versione modificata del `async_future` classe. Il `wmain` funzione Usa un `try` - `catch` blocco per stampare il risultato del `async_future` oggetto o per stampare il valore dell'eccezione generata dalla funzione lavoro.

[!code-cpp[concrt-futures-with-eh#1](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_7.cpp)]

Questo esempio produce il seguente output:

```Output
caught exception: error
```

Per altre informazioni sul modello di gestione delle eccezioni nel Runtime di concorrenza, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `futures.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc Futures. cpp**

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Classe task_group](reference/task-group-class.md)<br/>
[Classe single_assignment](../../parallel/concrt/reference/single-assignment-class.md)
