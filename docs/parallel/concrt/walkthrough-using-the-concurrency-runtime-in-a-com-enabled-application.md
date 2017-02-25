---
title: "Procedura dettagliata: Uso del runtime di concorrenza in un&#39;applicazione abilitata COM | Microsoft Docs"
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
  - "Runtime di concorrenza, uso con COM"
  - "COM, uso con il runtime di concorrenza"
ms.assetid: a7c798b8-0fc8-4bee-972f-22ef158f7f48
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Procedura dettagliata: Uso del runtime di concorrenza in un&#39;applicazione abilitata COM
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene dimostrato come utilizzare il runtime di concorrenza in un'applicazione che utilizza Component Object Model \(COM\).  
  
## Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere i documenti riportati di seguito.  
  
-   [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)  
  
-   [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)  
  
-   [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)  
  
-   [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)  
  
 Per ulteriori informazioni su COM, vedere [Component Object Model \(COM\)](http://msdn.microsoft.com/library/windows/desktop/ms680573).  
  
## Gestione della durata della libreria COM  
 Sebbene l'utilizzo di COM con il runtime di concorrenza segua gli stessi principi di qualsiasi altro meccanismo di concorrenza, le linee guida riportate di seguito possono agevolare l'utilizzo efficace di queste librerie in combinazione.  
  
-   Un thread deve chiamare [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) prima di utilizzare la libreria COM.  
  
-   Un thread può chiamare più volte `CoInitializeEx` finché fornisce gli stessi argomenti a ogni chiamata.  
  
-   Per ogni chiamata a `CoInitializeEx`, un thread deve chiamare anche [CoUninitialize](http://msdn.microsoft.com/library/windows/desktop/ms688715).  In altre parole, deve esistere un bilanciamento tra le chiamate a `CoInitializeEx` e quelle a `CoUninitialize`.  
  
-   Per passare da un apartment di thread a un altro, un thread deve liberare completamente la libreria COM prima di chiamare `CoInitializeEx` con la nuova specifica del threading.  
  
 Altri principi COM vengono applicati quando si utilizza COM con il runtime di concorrenza.  Ad esempio, un'applicazione che crea un oggetto in un apartment a thread singolo \(STA, single\-threaded apartment\) ed effettua il marshalling dell'oggetto in un altro apartment deve fornire anche un ciclo di messaggi per elaborare i messaggi in arrivo.  Si tenga presente inoltre che il marshalling degli oggetti tra gli apartment può ridurre le prestazioni.  
  
### Utilizzo di COM con la libreria Parallel Patterns Library  
 Quando si utilizza COM con un componente presente nella libreria PPL \(Parallel Patterns Library\), ad esempio un gruppo di attività o un algoritmo parallelo, chiamare `CoInitializeEx` prima di utilizzare la libreria COM durante ogni attività o iterazione e chiamare `CoUninitialize` prima del termine di ciascuna attività o iterazione.  Nell'esempio seguente viene mostrato come gestire la durata della libreria COM con un oggetto [concurrency::structured\_task\_group](../../parallel/concrt/reference/structured-task-group-class.md).  
  
 [!code-cpp[concrt-parallel-scripts#1](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_1.cpp)]  
  
 È necessario assicurarsi che la libreria COM venga correttamente liberata quando un'attività o un algoritmo parallelo viene annullato o quando il corpo dell'attività genera un'eccezione.  Per garantire che l'attività richiami `CoUninitialize` prima di terminare, utilizzare un blocco `try-finally` o il modello *Resource Acquisition Is Initialization* \(RAII\).  Nell'esempio riportato di seguito viene utilizzato un blocco `try-finally` per liberare la libreria COM quando l'attività termina o viene annullata oppure quando viene generata un'eccezione.  
  
 [!code-cpp[concrt-parallel-scripts#2](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_2.cpp)]  
  
 Nell'esempio riportato di seguito viene utilizzato il modello RAII per definire la classe `CCoInitializer` che gestisce la durata della libreria COM in un ambito specificato.  
  
 [!code-cpp[concrt-parallel-scripts#3](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_3.cpp)]  
  
 È possibile utilizzare la classe `CCoInitializer` per liberare automaticamente la libreria COM al termine dell'attività, come descritto di seguito.  
  
 [!code-cpp[concrt-parallel-scripts#4](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_4.cpp)]  
  
 Per ulteriori informazioni sull'annullamento nel runtime di concorrenza, vedere [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md).  
  
### Utilizzo di COM con agenti asincroni  
 Quando si utilizza COM con agenti asincroni, chiamare `CoInitializeEx` prima di utilizzare la libreria COM nel metodo [concurrency::agent::run](../Topic/agent::run%20Method.md) per l'agente.  Quindi, chiamare `CoUninitialize` prima del termine dell'esecuzione del metodo `run`.  Non utilizzare le routine di gestione COM nel costruttore o nel distruttore dell'agente e non eseguire l'override dei metodi [concurrency::agent::start](../Topic/agent::start%20Method.md) o [concurrency::agent::done](../Topic/agent::done%20Method.md) poiché tali metodi vengono chiamati da un thread diverso da quello del metodo `run`.  
  
 Nell'esempio seguente viene mostrata una classe di base dell'agente, denominata `CCoAgent` che gestisce la libreria COM nel metodo `run`.  
  
 [!code-cpp[concrt-parallel-scripts#5](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_5.cpp)]  
  
 Un esempio completo viene fornito più avanti in questa procedura.  
  
### Utilizzo di COM con attività leggere  
 Nel documento [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md) viene descritto il ruolo delle attività leggere nel runtime di concorrenza.  È possibile utilizzare COM con un'attività leggera esattamente come con qualsiasi routine del thread passata alla funzione `CreateThread` nell'API di Windows,  Questa operazione viene mostrata nell'esempio seguente.  
  
 [!code-cpp[concrt-parallel-scripts#6](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_6.cpp)]  
  
## Esempio di un'applicazione abilitata COM  
 In questa sezione viene illustrata un'applicazione abilitata COM completa che utilizza l'interfaccia `IScriptControl` per eseguire uno script che calcola l'n<sup>o</sup> numero di Fibonacci.  In questo esempio, anzitutto viene chiamato lo script dal thread principale, quindi la libreria PPL e gli agenti vengono utilizzati per chiamare simultaneamente lo script.  
  
 Si consideri la funzione di supporto seguente, `RunScriptProcedure`, che chiama una routine in un oggetto `IScriptControl`.  
  
 [!code-cpp[concrt-parallel-scripts#7](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_7.cpp)]  
  
 La funzione `wmain` crea un oggetto `IScriptControl`, aggiunge codice di script all'oggetto per calcolare l'n<sup>o</sup> numero di Fibonacci, quindi chiama la funzione `RunScriptProcedure` per eseguire tale script.  
  
 [!code-cpp[concrt-parallel-scripts#8](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_8.cpp)]  
  
### Chiamata dello script dalla libreria PPL  
 Nella funzione `ParallelFibonacci` riportata di seguito viene utilizzato l'algoritmo [concurrency::parallel\_for](../Topic/parallel_for%20Function.md) per chiamare lo script in parallelo.  Questa funzione utilizza la classe `CCoInitializer` per gestire la durata della libreria COM durante ogni iterazione dell'attività.  
  
 [!code-cpp[concrt-parallel-scripts#9](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_9.cpp)]  
  
 Per utilizzare la funzione `ParallelFibonacci` con l'esempio, aggiungere il codice riportato di seguito prima del termine dell'esecuzione della funzione `wmain`.  
  
 [!code-cpp[concrt-parallel-scripts#10](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_10.cpp)]  
  
### Chiamata dello script da un agente  
 Nell'esempio riportato di seguito viene presentata la classe `FibonacciScriptAgent` in cui viene chiamata una routine di script per calcolare l'n<sup>o</sup> numero di Fibonacci.  La classe `FibonacciScriptAgent` utilizza il passaggio di messaggi per ricevere, dal programma principale, i valori di input per la funzione di scripting.  Il metodo `run` gestisce la durata della libreria COM nel corso dell'attività.  
  
 [!code-cpp[concrt-parallel-scripts#11](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_11.cpp)]  
  
 La funzione `AgentFibonacci` riportata di seguito crea diversi oggetti `FibonacciScriptAgent` e utilizza il passaggio di messaggi per inviare vari valori di input a tali oggetti.  
  
 [!code-cpp[concrt-parallel-scripts#12](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_12.cpp)]  
  
 Per utilizzare la funzione `AgentFibonacci` con l'esempio, aggiungere il codice riportato di seguito prima del termine dell'esecuzione della funzione `wmain`.  
  
 [!code-cpp[concrt-parallel-scripts#13](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_13.cpp)]  
  
### Esempio completo  
 Nel codice riportato di seguito viene presentato l'esempio completo che utilizza algoritmi paralleli e agenti asincroni per chiamare una routine di script che calcola numeri di Fibonacci.  
  
 [!code-cpp[concrt-parallel-scripts#14](../../parallel/concrt/codesnippet/CPP/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_14.cpp)]  
  
 L'esempio produce l'output riportato di seguito.  
  
  **Main Thread:**  
**fib\(15\) \= 610**  
**Parallel Fibonacci:**  
**fib\(15\) \= 610**  
**fib\(10\) \= 55**  
**fib\(16\) \= 987**  
**fib\(18\) \= 2584**  
**fib\(11\) \= 89**  
**fib\(17\) \= 1597**  
**fib\(19\) \= 4181**  
**fib\(12\) \= 144**  
**fib\(13\) \= 233**  
**fib\(14\) \= 377**  
**Agent Fibonacci:**  
**fib\(30\) \= 832040**  
**fib\(22\) \= 17711**  
**fib\(10\) \= 55**  
**fib\(12\) \= 144**   
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o in un file denominato `parallel-scripts.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc parallel\-scripts.cpp \/link ole32.lib**  
  
## Vedere anche  
 [Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)   
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)   
 [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)   
 [Annullamento](../../parallel/concrt/cancellation-in-the-ppl.md)   
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)