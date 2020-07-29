---
title: 'Procedura dettagliata: Implementazione di date future'
ms.date: 04/25/2019
helpviewer_keywords:
- implementing futures [Concurrency Runtime]
- futures, implementing [Concurrency Runtime]
ms.assetid: 82ea75cc-aaec-4452-b10d-8abce0a87e5b
ms.openlocfilehash: 9bf46b7f2a761aaf0c07e1017524c8ddf533aca6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230298"
---
# <a name="walkthrough-implementing-futures"></a>Procedura dettagliata: Implementazione di date future

In questo argomento viene illustrato come implementare future nell'applicazione. Nell'argomento viene illustrato come combinare le funzionalità esistenti nel runtime di concorrenza in un elemento che consente di eseguire altre operazioni.

> [!IMPORTANT]
> In questo argomento viene illustrato il concetto di future a scopo dimostrativo. Si consiglia di usare [std:: future](../../standard-library/future-class.md) o [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) quando è necessaria un'attività asincrona che calcola un valore per un uso successivo.

Un' *attività* è un calcolo che può essere scomposto in calcoli aggiuntivi, più specifici. Un *futuro* è un'attività asincrona che calcola un valore per un uso successivo.

Per implementare future, questo argomento definisce la `async_future` classe. La `async_future` classe utilizza questi componenti della runtime di concorrenza: la classe [Concurrency:: task_group](reference/task-group-class.md) e la classe [concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) . La `async_future` classe usa la `task_group` classe per calcolare un valore in modo asincrono e la `single_assignment` classe per archiviare il risultato del calcolo. Il costruttore della `async_future` classe accetta una funzione lavoro che calcola il risultato e il `get` metodo recupera il risultato.

### <a name="to-implement-the-async_future-class"></a>Per implementare la classe async_future

1. Dichiarare una classe modello denominata `async_future` che è parametrizzata sul tipo del calcolo risultante. Aggiungere **`public`** le **`private`** sezioni e a questa classe.

[!code-cpp[concrt-futures#2](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_1.cpp)]

1. Nella **`private`** sezione della `async_future` classe dichiarare un oggetto `task_group` e un `single_assignment` membro dati.

[!code-cpp[concrt-futures#3](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_2.cpp)]

1. Nella **`public`** sezione della `async_future` classe implementare il costruttore. Il costruttore è un modello parametrizzato nella funzione lavoro che calcola il risultato. Il costruttore esegue in modo asincrono la funzione lavoro nel `task_group` membro dati e utilizza la funzione [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) per scrivere il risultato nel `single_assignment` membro dati.

[!code-cpp[concrt-futures#4](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_3.cpp)]

1. Nella **`public`** sezione della `async_future` classe implementare il distruttore. Il distruttore attende il completamento dell'attività.

[!code-cpp[concrt-futures#5](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_4.cpp)]

1. Nella **`public`** sezione della `async_future` classe implementare il `get` metodo. Questo metodo utilizza la funzione [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) per recuperare il risultato della funzione lavoro.

[!code-cpp[concrt-futures#6](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_5.cpp)]

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio seguente viene illustrata la `async_future` classe completa e un esempio di utilizzo. La `wmain` funzione crea un oggetto std::[vector](../../standard-library/vector-class.md) che contiene 10.000 valori integer casuali. USA quindi `async_future` oggetti per trovare i valori più piccoli e più grandi contenuti nell' `vector` oggetto.

### <a name="code"></a>Codice

[!code-cpp[concrt-futures#1](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_6.cpp)]

### <a name="comments"></a>Commenti

Nell'esempio viene prodotto l'output seguente:

```Output
smallest: 0
largest:  9999
average:  4981
```

Nell'esempio viene utilizzato il `async_future::get` metodo per recuperare i risultati del calcolo. Il `async_future::get` metodo attende il completamento del calcolo se il calcolo è ancora attivo.

## <a name="robust-programming"></a>Programmazione efficiente

Per estendere la `async_future` classe per gestire le eccezioni generate dalla funzione lavoro, modificare il `async_future::get` metodo per chiamare il metodo [Concurrency:: task_group:: wait](reference/task-group-class.md#wait) . Il `task_group::wait` metodo genera tutte le eccezioni generate dalla funzione lavoro.

Nell'esempio seguente viene illustrata la versione modificata della `async_future` classe. La `wmain` funzione utilizza un **`try`** - **`catch`** blocco per stampare il risultato dell' `async_future` oggetto o per stampare il valore dell'eccezione generata dalla funzione lavoro.

[!code-cpp[concrt-futures-with-eh#1](../../parallel/concrt/codesnippet/cpp/walkthrough-implementing-futures_7.cpp)]

Nell'esempio viene prodotto l'output seguente:

```Output
caught exception: error
```

Per ulteriori informazioni sul modello di gestione delle eccezioni nel runtime di concorrenza, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `futures.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

**cl.exe/EHsc futures. cpp**

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Classe task_group](reference/task-group-class.md)<br/>
[Classe single_assignment](../../parallel/concrt/reference/single-assignment-class.md)
