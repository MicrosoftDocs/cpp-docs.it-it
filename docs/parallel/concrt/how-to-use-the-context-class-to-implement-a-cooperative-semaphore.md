---
title: 'Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione'
ms.date: 11/04/2016
helpviewer_keywords:
- cooperative semaphore implementing
- context class
ms.assetid: 22f4b9c0-ca22-4a68-90ba-39e99ea76696
ms.openlocfilehash: 460a1de03f34cb8ef9753e761aaef37470cd6d0e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50467761"
---
# <a name="how-to-use-the-context-class-to-implement-a-cooperative-semaphore"></a>Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione

In questo argomento viene illustrato come usare la classe Concurrency:: Context per implementare una classe semaforo di cooperazione.

Il `Context` classe consente di bloccare o restituire il contesto di esecuzione corrente. Blocca o cede il controllo al contesto corrente è utile quando il contesto corrente non può continuare perché non è disponibile una risorsa. Oggetto *semaforo* è riportato un esempio di una situazione in cui deve attendere il contesto di esecuzione corrente per una risorsa diventi disponibile. Un semaforo, ad esempio un oggetto di sezione critica, è un oggetto di sincronizzazione che consente al codice in un contesto di avere accesso esclusivo a una risorsa. Tuttavia, a differenza di un oggetto di sezione critica, un semaforo consente più di un contesto accedere alla risorsa contemporaneamente. Se il numero massimo di contesti mantiene un blocco di semaforo, ogni ulteriore contesto deve attendere per un altro contesto rilasciare il blocco.

### <a name="to-implement-the-semaphore-class"></a>Per implementare la classe semaphore

1. Dichiarare una classe denominata `semaphore`. Aggiungere `public` e `private` sezioni a questa classe.

[!code-cpp[concrt-cooperative-semaphore#1](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_1.cpp)]

1. Nel `private` sezione del `semaphore` classe, dichiarare una [std:: Atomic](../../standard-library/atomic-structure.md) variabile che contiene il conteggio del semaforo e un [Concurrency:: concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) un oggetto contenente i contesti che deve attendere di acquisire il semaforo.

[!code-cpp[concrt-cooperative-semaphore#2](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_2.cpp)]

1. Nel `public` sezione il `semaphore` classe, implementare il costruttore. Il costruttore accetta un `long long` valore che specifica il numero massimo di contesti che può contenere contemporaneamente il blocco.

[!code-cpp[concrt-cooperative-semaphore#3](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_3.cpp)]

1. Nel `public` sezione il `semaphore` classe, implementare il `acquire` (metodo). Questo metodo decrementa il conteggio del semaforo come operazione atomica. Se il conteggio del semaforo diventa negativo, aggiungere il contesto corrente alla fine della coda di attesa e chiamata di [Concurrency](reference/context-class.md#block) per il blocco del contesto corrente.

[!code-cpp[concrt-cooperative-semaphore#4](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_4.cpp)]

1. Nel `public` sezione il `semaphore` classe, implementare il `release` (metodo). Questo metodo incrementa il conteggio del semaforo come operazione atomica. Se il conteggio del semaforo è negativo prima dell'operazione di incremento, è presente almeno un contesto che è in attesa del blocco. In questo caso, sbloccare il contesto che si trova all'inizio della coda di attesa.

[!code-cpp[concrt-cooperative-semaphore#5](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_5.cpp)]

## <a name="example"></a>Esempio

Il `semaphore` classe in questo esempio si comporta in modo cooperativo in quanto il `Context::Block` e `Context::Yield` metodi cedere l'esecuzione in modo che il runtime può eseguire altre attività.

Il `acquire` metodo decrementa il contatore, ma potrebbe non terminare l'aggiunta del contesto per la coda di attesa prima che un altro contesto chiami il `release` (metodo). Considerare questo aspetto, il `release` metodo utilizza un ciclo di attesa che chiama il [Concurrency](reference/context-class.md#yield) metodo per attendere il `acquire` metodo per finalizzare l'aggiunta del contesto.

Il `release` metodo può chiamare le `Context::Unblock` metodo prima il `acquire` chiamate al metodo il `Context::Block` (metodo). Non è per la protezione da questa race condition perché il runtime consente di questi metodi da chiamare in qualsiasi ordine. Se il `release` chiamate al metodo `Context::Unblock` prima di `acquire` chiamate al metodo `Context::Block` allo stesso contesto, tale contesto rimane sbloccato. Il runtime richiede solo che con ogni chiamata a `Context::Block` viene confrontata con una chiamata corrispondente al `Context::Unblock`.

L'esempio seguente illustra l'intero `semaphore` classe. Il `wmain` funzione Mostra l'utilizzo di questa classe di base. Il `wmain` funzione Usa le [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo per creare diverse attività che richiedono l'accesso al semaforo. Perché tre thread conservi il blocco in qualsiasi momento, alcune attività devono attendere per completare e rilasciare il blocco di un'altra attività.

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

Per altre informazioni sul `concurrent_queue` classe, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md). Per altre informazioni sul `parallel_for` algoritmo, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `cooperative-semaphore.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc cooperativo-Semaphore. cpp**

## <a name="robust-programming"></a>Programmazione efficiente

È possibile usare la *Resource Acquisition Is Initialization* modello (RAII) per limitare l'accesso a un `semaphore` oggetto per un determinato ambito. Sotto il modello RAII, una struttura di dati viene allocata nello stack. La struttura dei dati consente di inizializzare o acquisisce una risorsa quando viene creato e distrugge o rilascia tale risorsa quando viene eliminata la struttura dei dati. Il modello RAII garantisce che il distruttore viene chiamato prima che l'ambito di inclusione viene chiuso. Pertanto, la risorsa viene gestita correttamente quando viene generata un'eccezione o una funzione contiene più `return` istruzioni.

L'esempio seguente definisce una classe denominata `scoped_lock`, definito nel `public` sezione il `semaphore` classe. Il `scoped_lock` classe è simile al [concurrency::critical_section::scoped_lock](reference/critical-section-class.md#critical_section__scoped_lock_class) e [concurrency::reader_writer_lock::scoped_lock](reference/reader-writer-lock-class.md#scoped_lock_class) classi. Il costruttore del `semaphore::scoped_lock` classe acquisisce l'accesso al determinato `semaphore` oggetto e il distruttore rilascia l'accesso a tale oggetto.

[!code-cpp[concrt-cooperative-semaphore#7](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_7.cpp)]
L'esempio seguente modifica il corpo della funzione lavoro passata al `parallel_for` algoritmo in modo che utilizzi il modello RAII per garantire che venga rilasciato il semaforo prima che la funzione restituisce. Questa tecnica assicura che la funzione lavoro sia indipendente dalle eccezioni.

[!code-cpp[concrt-cooperative-semaphore#8](../../parallel/concrt/codesnippet/cpp/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_8.cpp)]

## <a name="see-also"></a>Vedere anche

[Contesti](../../parallel/concrt/contexts.md)<br/>
[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)

