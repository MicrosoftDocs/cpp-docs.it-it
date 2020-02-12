---
title: 'Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione'
ms.date: 11/04/2016
helpviewer_keywords:
- cooperative semaphore implementing
- context class
ms.assetid: 22f4b9c0-ca22-4a68-90ba-39e99ea76696
ms.openlocfilehash: 5075052592993f413290242e70206b1e227064aa
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77141909"
---
# <a name="how-to-use-the-context-class-to-implement-a-cooperative-semaphore"></a>Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione

In questo argomento viene illustrato come utilizzare la classe Concurrency:: Context per implementare una classe Semaphore cooperativa.

## <a name="remarks"></a>Osservazioni

La classe `Context` consente di bloccare o produrre il contesto di esecuzione corrente. Il blocco o il cedimento del contesto corrente è utile quando il contesto corrente non può continuare perché una risorsa non è disponibile. Un *semaforo* è un esempio di una situazione in cui il contesto di esecuzione corrente deve attendere che una risorsa diventi disponibile. Un semaforo, ad esempio un oggetto sezione critica, è un oggetto di sincronizzazione che consente al codice in un contesto di accedere in modo esclusivo a una risorsa. Tuttavia, a differenza di un oggetto sezione critica, un semaforo consente a più di un contesto di accedere alla risorsa simultaneamente. Se il numero massimo di contesti utilizza un blocco semaforo, ogni contesto aggiuntivo deve attendere che un altro contesto rilasci il blocco.

### <a name="to-implement-the-semaphore-class"></a>Per implementare la classe Semaphore

1. Dichiarare una classe denominata `semaphore`. Aggiungere `public` e `private` sezioni a questa classe.

[!code-cpp[concrt-cooperative-semaphore#1](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_1.cpp)]

1. Nella sezione `private` della classe `semaphore` dichiarare una variabile [std:: Atomic](../../standard-library/atomic-structure.md) che include il numero di semafori e un oggetto [Concurrency:: concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) che include i contesti che devono attendere per l'acquisizione del semaforo.

[!code-cpp[concrt-cooperative-semaphore#2](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_2.cpp)]

1. Nella sezione `public` della classe `semaphore` implementare il costruttore. Il costruttore accetta un valore `long long` che specifica il numero massimo di contesti che possono mantenere contemporaneamente il blocco.

[!code-cpp[concrt-cooperative-semaphore#3](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_3.cpp)]

1. Nella sezione `public` della classe `semaphore` implementare il metodo `acquire`. Questo metodo decrementa il conteggio dei semafori come operazione atomica. Se il numero di semafori diventa negativo, aggiungere il contesto corrente alla fine della coda di attesa e chiamare il metodo [Concurrency:: context:: Block](reference/context-class.md#block) per bloccare il contesto corrente.

[!code-cpp[concrt-cooperative-semaphore#4](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_4.cpp)]

1. Nella sezione `public` della classe `semaphore` implementare il metodo `release`. Questo metodo incrementa il conteggio dei semafori come operazione atomica. Se il numero di semafori è negativo prima dell'operazione di incremento, esiste almeno un contesto in attesa del blocco. In questo caso, sbloccare il contesto che si trova all'inizio della coda di attesa.

[!code-cpp[concrt-cooperative-semaphore#5](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_5.cpp)]

## <a name="example"></a>Esempio

La classe `semaphore` in questo esempio si comporta in modo cooperativo perché i metodi `Context::Block` e `Context::Yield` producono l'esecuzione in modo che il runtime possa eseguire altre attività.

Il metodo `acquire` decrementa il contatore, ma potrebbe non terminare l'aggiunta del contesto alla coda di attesa prima che un altro contesto chiami il metodo `release`. Per tenere conto di questo problema, il metodo `release` usa un ciclo di selezione che chiama il metodo [Concurrency:: context:: Yield](reference/context-class.md#yield) per attendere il completamento dell'aggiunta del contesto da parte del metodo `acquire`.

Il metodo `release` può chiamare il metodo `Context::Unblock` prima che il metodo `acquire` chiami il metodo `Context::Block`. Non è necessario proteggersi da questo race condition perché il runtime consente la chiamata di questi metodi in qualsiasi ordine. Se il metodo `release` chiama `Context::Unblock` prima che il metodo di `acquire` chiami `Context::Block` per lo stesso contesto, il contesto rimane sbloccato. Il runtime richiede solo che ogni chiamata a `Context::Block` corrisponda a una chiamata corrispondente a `Context::Unblock`.

Nell'esempio seguente viene illustrata la classe completa `semaphore`. La funzione `wmain` Mostra l'utilizzo di base di questa classe. La funzione `wmain` usa l'algoritmo [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) per creare diverse attività che richiedono l'accesso al semaforo. Poiché tre thread possono mantenere il blocco in qualsiasi momento, alcune attività devono attendere il completamento di un'altra attività e rilasciare il blocco.

[!code-cpp[concrt-cooperative-semaphore#6](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_6.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
In loop iteration 5...
In loop iteration 0...
In loop iteration 6...
In loop iteration 1...
In loop iteration 2...
In loop iteration 7...
In loop iteration 3...
In loop iteration 8...
In loop iteration 9...
In loop iteration 4...
```

Per ulteriori informazioni sulla classe `concurrent_queue`, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md). Per ulteriori informazioni sull'algoritmo di `parallel_for`, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `cooperative-semaphore.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc cooperative-semaphore. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

È possibile usare il modello di *inizializzazione della risorsa* (RAII) per limitare l'accesso a un oggetto `semaphore` a un ambito specifico. Nel modello RAII, viene allocata una struttura di dati nello stack. La struttura dei dati Inizializza o acquisisce una risorsa quando viene creata ed Elimina o rilascia la risorsa quando la struttura dei dati viene distrutta. Il modello RAII garantisce che il distruttore venga chiamato prima che l'ambito di inclusione venga chiuso. La risorsa viene pertanto gestita correttamente quando viene generata un'eccezione o quando una funzione contiene più istruzioni `return`.

Nell'esempio seguente viene definita una classe denominata `scoped_lock`, definita nella sezione `public` della classe `semaphore`. La classe `scoped_lock` è simile alle classi [Concurrency:: critical_section:: scoped_lock](reference/critical-section-class.md#critical_section__scoped_lock_class) e [Concurrency:: reader_writer_lock:: scoped_lock](reference/reader-writer-lock-class.md#scoped_lock_class) . Il costruttore della classe `semaphore::scoped_lock` acquisisce l'accesso all'oggetto `semaphore` specificato e il distruttore rilascia l'accesso a tale oggetto.

[!code-cpp[concrt-cooperative-semaphore#7](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_7.cpp)]
Nell'esempio seguente viene modificato il corpo della funzione lavoro che viene passata all'algoritmo `parallel_for` in modo che usi RAII per garantire che il semaforo venga rilasciato prima della restituzione della funzione. Questa tecnica garantisce che la funzione lavoro sia indipendente dalle eccezioni.

[!code-cpp[concrt-cooperative-semaphore#8](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_8.cpp)]

## <a name="see-also"></a>Vedere anche

[Contesti](../../parallel/concrt/contexts.md)<br/>
[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)
