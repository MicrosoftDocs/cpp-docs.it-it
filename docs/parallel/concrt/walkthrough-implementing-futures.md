---
title: "Procedura dettagliata: Implementazione di date future | Microsoft Docs"
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
  - "implementazione di future [Runtime di concorrenza]"
  - "date future, implementazione [Runtime di concorrenza]"
ms.assetid: 82ea75cc-aaec-4452-b10d-8abce0a87e5b
caps.latest.revision: 25
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: Implementazione di date future
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come implementare i future nell'applicazione. L'argomento viene illustrato come combinare le funzionalità esistenti nel Runtime di concorrenza in qualcosa che va oltre.  
  
> [!IMPORTANT]
>  In questo argomento viene illustrato il concetto di future a scopo dimostrativo. Si consiglia di utilizzare [std:: future](../../standard-library/future-class.md) o [Concurrency:: Task](../../parallel/concrt/reference/task-class-concurrency-runtime.md) quando è necessario utilizzare un'attività asincrona che calcola un valore per un utilizzo successivo.  
  
 Oggetto *attività* è riportato un calcolo che può essere scomposto in calcoli aggiuntivi più accurati. Oggetto *future* è un'attività asincrona che calcola un valore per un utilizzo successivo.  
  
 Per implementare le future, in questo argomento definisce la `async_future` classe. La `async_future` classe utilizza i seguenti componenti Runtime di concorrenza: la [Concurrency:: task_group](../Topic/task_group%20Class.md) classe e il [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) (classe). La `async_future` classe Usa il `task_group` (classe) per calcolare un valore in modo asincrono e il `single_assignment` classe per archiviare il risultato del calcolo. Il costruttore della `async_future` classe accetta una funzione lavoro che calcola il risultato e `get` metodo recupera il risultato.  
  
### <a name="to-implement-the-asyncfuture-class"></a>Per implementare la classe async_future  
  
1.  Dichiarare una classe modello denominata `async_future` contenente i parametri per il tipo di calcolo risultante. Aggiungere `public` e `private` sezioni per questa classe.  
  
 [!code-cpp[concrt-futures#2](../../parallel/concrt/codesnippet/CPP/walkthrough-implementing-futures_1.cpp)]  
  
2.  Nel `private` sezione la `async_future` classe, dichiarare un `task_group` e un `single_assignment` (membro dati).  
  
 [!code-cpp[concrt-futures#3](../../parallel/concrt/codesnippet/CPP/walkthrough-implementing-futures_2.cpp)]  
  
3.  Nel `public` sezione la `async_future` classe, implementare il costruttore. Il costruttore è un modello contenente i parametri per la funzione lavoro che calcola il risultato. Il costruttore esegue in modo asincrono la funzione lavoro nel `task_group` (membro dati) e viene utilizzato il [Concurrency:: Send](../Topic/send%20Function.md) funzione per scrivere il risultato di `single_assignment` (membro dati).  
  
 [!code-cpp[concrt-futures#4](../../parallel/concrt/codesnippet/CPP/walkthrough-implementing-futures_3.cpp)]  
  
4.  Nel `public` sezione la `async_future` classe, implementare il distruttore. Il distruttore attende il completamento dell'attività.  
  
 [!code-cpp[concrt-futures#5](../../parallel/concrt/codesnippet/CPP/walkthrough-implementing-futures_4.cpp)]  
  
5.  Nel `public` sezione la `async_future` classe, implementare il `get` (metodo). Questo metodo utilizza il [Concurrency:: Receive](../Topic/receive%20Function.md) funzione per recuperare il risultato della funzione lavoro.  
  
 [!code-cpp[concrt-futures#6](../../parallel/concrt/codesnippet/CPP/walkthrough-implementing-futures_5.cpp)]  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Nell'esempio seguente viene illustrata la `async_future` classe e un esempio di utilizzo. Il `wmain` funzione crea un std::[vettore](vector%20Class.md) oggetto che contiene 10.000 valori interi casuali. Viene quindi utilizzato `async_future` per trovare i valori minimo e massimo sono contenuti in oggetti di `vector` oggetto.  
  
### <a name="code"></a>Codice  
 [!code-cpp[concrt-futures#1](../../parallel/concrt/codesnippet/CPP/walkthrough-implementing-futures_6.cpp)]  
  
### <a name="comments"></a>Commenti  
 Questo esempio produce il seguente output:  
  
```Output  
smallest: 0  
largest:  9999  
average:  4981  
```  
  
 Nell'esempio viene utilizzata la `async_future::get` metodo per recuperare i risultati del calcolo. Il `async_future::get` metodo attende il completamento se il calcolo è ancora attivo.  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 Per estendere la `async_future` classe per gestire le eccezioni generate dalla funzione lavoro, modificare il `async_future::get` metodo da chiamare il [Concurrency](../Topic/task_group::wait%20Method.md) metodo. Il `task_group::wait` metodo genera qualsiasi eccezione generata dalla funzione lavoro.  
  
 Nell'esempio seguente viene illustrata la versione modificata della `async_future` classe. Il `wmain` funzione Usa un `try`-`catch` per stampare il risultato del blocco il `async_future` oggetto o per stampare il valore dell'eccezione che viene generato dalla funzione lavoro.  
  
 [!code-cpp[concrt-futures-with-eh#1](../../parallel/concrt/codesnippet/CPP/walkthrough-implementing-futures_7.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
caught exception: error  
```  
  
 Per ulteriori informazioni sul modello di gestione delle eccezioni nel Runtime di concorrenza, vedere [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `futures.cpp` quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc Futures. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure dettagliate del Runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)   
 [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)   
 [Classe task_group](../Topic/task_group%20Class.md)   
 [Classe single_assignment](../../parallel/concrt/reference/single-assignment-class.md)
