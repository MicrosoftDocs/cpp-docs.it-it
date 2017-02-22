---
title: "Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione | Microsoft Docs"
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
  - "semaforo di cooperazione (implementazione)"
  - "context (classe)"
ms.assetid: 22f4b9c0-ca22-4a68-90ba-39e99ea76696
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Procedura: utilizzare la classe Context per implementare una classe semaforo di cooperazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come utilizzare la classe Concurrency:: Context per implementare una classe semaforo di cooperazione.  
  
 La `Context` classe consente di bloccare o restituire il contesto di esecuzione corrente. Blocco o la restituzione al contesto corrente è utile quando il contesto corrente non può continuare perché non è disponibile una risorsa. Oggetto *semaforo* è un esempio di una situazione in cui il contesto di esecuzione corrente deve attendere per una risorsa diventi disponibile. Un semaforo denominato, come un oggetto sezione critica, è un oggetto di sincronizzazione che consente al codice in un contesto di avere accesso esclusivo a una risorsa. Tuttavia, a differenza di un oggetto sezione critica, un semaforo consente più di un contesto accedere alla risorsa contemporaneamente. Se il numero massimo di contesti contiene un blocco di semaforo, ogni contesto aggiuntivo deve attendere per un altro contesto rilasci il blocco.  
  
### <a name="to-implement-the-semaphore-class"></a>Per implementare la classe semaphore  
  
1.  Dichiarare una classe denominata `semaphore`. Aggiungere `public` e `private` sezioni per questa classe.  
  
 [!code-cpp[concrt-cooperative-semaphore#1](../../parallel/concrt/codesnippet/CPP/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_1.cpp)]  
  
2.  Nel `private` sezione la `semaphore` classe, dichiarare un [std:: Atomic](../../standard-library/atomic-structure.md) variabile che contiene il conteggio del semaforo e un [Concurrency:: concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) oggetto contenente i contesti in cui devono attendere di acquisire il semaforo.  
  
 [!code-cpp[concrt-cooperative-semaphore#2](../../parallel/concrt/codesnippet/CPP/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_2.cpp)]  
  
3.  Nel `public` sezione la `semaphore` classe, implementare il costruttore. Il costruttore accetta un `long long` valore che specifica il numero massimo di contesti che possono contenere contemporaneamente il blocco.  
  
 [!code-cpp[concrt-cooperative-semaphore#3](../../parallel/concrt/codesnippet/CPP/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_3.cpp)]  
  
4.  Nel `public` sezione la `semaphore` classe, implementare il `acquire` (metodo). Questo metodo decrementa il conteggio del semaforo come operazione atomica. Se il conteggio del semaforo diventa negativo, aggiungere il contesto corrente alla fine della coda di attesa e chiamata di [concurrency::Context::Block](../Topic/Context::Block%20Method.md) metodo per bloccare il contesto corrente.  
  
 [!code-cpp[concrt-cooperative-semaphore#4](../../parallel/concrt/codesnippet/CPP/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_4.cpp)]  
  
5.  Nel `public` sezione la `semaphore` classe, implementare il `release` (metodo). Questo metodo incrementa il conteggio del semaforo come operazione atomica. Se il conteggio del semaforo è negativo prima dell'operazione di incremento, esiste almeno un contesto che è in attesa del blocco. In questo caso, sbloccare il contesto che si trova all'inizio della coda di attesa.  
  
 [!code-cpp[concrt-cooperative-semaphore#5](../../parallel/concrt/codesnippet/CPP/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_5.cpp)]  
  
## <a name="example"></a>Esempio  
 La `semaphore` classe in questo esempio si comporta in modo cooperativo poiché il `Context::Block` e `Context::Yield` metodi ceda l'esecuzione in modo che il runtime può eseguire altre attività.  
  
 Il `acquire` metodo decrementa il contatore, ma potrebbe non terminare l'aggiunta del contesto alla coda di attesa prima che un altro contesto chiami il `release` metodo. Per conto di questo, il `release` metodo utilizza un ciclo di selezione che chiama il [Concurrency](../Topic/Context::Yield%20Method.md) metodo per attendere il `acquire` Fine aggiunta del contesto del metodo.  
  
 Il `release` metodo può chiamare il `Context::Unblock` metodo prima di `acquire` chiamate al metodo il `Context::Block` (metodo). Non è necessario proteggersi da questa condizione di competizione poiché il runtime consente di questi metodi da chiamare in qualsiasi ordine. Se il `release` chiamate al metodo `Context::Unblock` prima di `acquire` chiamate al metodo `Context::Block` per lo stesso contesto, tale contesto rimarrà sbloccato. Il runtime richiede solo che ogni chiamata a `Context::Block` esiste una corrispondenza con una chiamata corrispondente al `Context::Unblock`.  
  
 Nell'esempio seguente viene illustrata la `semaphore` classe. Il `wmain` funzione illustra l'utilizzo di questa classe di base. Il `wmain` funzione Usa il [Concurrency:: parallel_for](../Topic/parallel_for%20Function.md) algoritmo per creare diverse attività che richiedono l'accesso al semaforo. Poiché tre thread possono contenere il blocco in qualsiasi momento, completare e rilasciare il blocco di un'altra attività devono attendere che alcune attività.  
  
 [!code-cpp[concrt-cooperative-semaphore#6](../../parallel/concrt/codesnippet/CPP/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_6.cpp)]  
  
 In questo esempio produce il seguente output di esempio.  
  
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
  
 Per ulteriori informazioni sulla `concurrent_queue` classe, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md). Per ulteriori informazioni sui `parallel_for` algoritmo, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `cooperative-semaphore.cpp` quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc cooperative-semaphore. cpp**  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 È possibile utilizzare il *Resource Acquisition Is Initialization* modello (RAII) per limitare l'accesso a un `semaphore` oggetto a un ambito specificato. Sotto il modello RAII, una struttura di dati viene allocata nello stack. La struttura dei dati Inizializza o acquisisce una risorsa quando viene creato ed elimina o rilascia tale risorsa quando viene eliminata la struttura dei dati. Il modello RAII garantisce che il distruttore viene chiamato prima che l'ambito viene chiuso. Pertanto, la risorsa è gestita correttamente quando viene generata un'eccezione o una funzione contiene più `return` istruzioni.  
  
 Nell'esempio seguente viene definita una classe denominata `scoped_lock`, definito nel `public` sezione la `semaphore` classe. La `scoped_lock` classe è simile al [concurrency::critical_section::scoped_lock](../Topic/critical_section::scoped_lock%20Class.md) e [concurrency::reader_writer_lock::scoped_lock](../Topic/reader_writer_lock::scoped_lock%20Class.md) classi. Il costruttore della `semaphore::scoped_lock` classe acquisisce l'accesso al determinato `semaphore` oggetto e il distruttore rilascia l'accesso a tale oggetto.  
  
 [!code-cpp[concrt-cooperative-semaphore#7](../../parallel/concrt/codesnippet/CPP/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_7.cpp)]  
  
 Nell'esempio seguente viene modificato il corpo della funzione lavoro che viene passato per il `parallel_for` algoritmo in modo che utilizzi il modello RAII per assicurarsi che il semaforo venga rilasciato prima che la funzione restituisce. Questa tecnica assicura che la funzione di lavoro è indipendente dalle eccezioni.  
  
 [!code-cpp[concrt-cooperative-semaphore#8](../../parallel/concrt/codesnippet/CPP/how-to-use-the-context-class-to-implement-a-cooperative-semaphore_8.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Contesti](../../parallel/concrt/contexts.md)   
 [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)

