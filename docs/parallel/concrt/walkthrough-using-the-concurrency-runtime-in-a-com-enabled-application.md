---
title: "Procedura dettagliata: Utilizzo del Runtime di concorrenza in un'applicazione abilitata COM | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Concurrency Runtime, use with COM
- COM, use with the Concurrency Runtime
ms.assetid: a7c798b8-0fc8-4bee-972f-22ef158f7f48
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1fd9f665f77ca5ae5311b034ee7afef6241ac489
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application"></a>Procedura dettagliata: Uso del runtime di concorrenza in un'applicazione abilitata COM
Questo documento viene illustrato come utilizzare il Runtime di concorrenza in un'applicazione che utilizza il modello COM (Component Object).  
  
## <a name="prerequisites"></a>Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:  
  
- [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)  
  
- [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)  
  
- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)  
  
- [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)  
  
 Per ulteriori informazioni su COM, vedere [modello COM (Component Object)](http://msdn.microsoft.com/library/windows/desktop/ms680573).  
  
## <a name="managing-the-lifetime-of-the-com-library"></a>Gestione della durata della libreria COM  
 Sebbene l'utilizzo di COM con il Runtime di concorrenza segue gli stessi principi come qualsiasi altro meccanismo di concorrenza, le linee guida seguenti consentono di utilizzare queste librerie insieme in modo efficace.  
  
-   Un thread deve chiamare [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) prima di utilizzare la libreria COM.  
  
-   Un thread può chiamare `CoInitializeEx` più volte, purché fornisce gli stessi argomenti per ogni chiamata.  
  
-   Per ogni chiamata a `CoInitializeEx`, un thread deve chiamare anche [CoUninitialize](http://msdn.microsoft.com/library/windows/desktop/ms688715). In altre parole, le chiamate a `CoInitializeEx` e `CoUninitialize` devono essere bilanciate.  
  
-   Per passare da un apartment di thread a altro, un thread deve liberare completamente la libreria COM prima di chiamare `CoInitializeEx` con la nuova specifica del threading.  
  
 Altri COM principi quando si utilizza COM con il Runtime di concorrenza. Ad esempio, un'applicazione che crea un oggetto in un apartment a thread singolo (STA) ed effettua il marshalling di tale oggetto a un altro apartment deve anche fornire un ciclo di messaggi per elaborare i messaggi in ingresso. È importante ricordare che il marshalling di oggetti tra apartment può ridurre le prestazioni.  
  
### <a name="using-com-with-the-parallel-patterns-library"></a>Utilizzo di COM con Parallel Patterns Library  
 Quando si utilizza COM con un componente in Parallel Patterns Library (PPL), ad esempio, un gruppo di attività o un algoritmo parallelo, chiamare `CoInitializeEx` prima di utilizzare la libreria COM durante ogni attività o iterazione e chiamare `CoUninitialize` prima di ogni attività o iterazione . Nell'esempio seguente viene illustrato come gestire la durata della libreria COM con un [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) oggetto.  
  
 [!code-cpp[concrt-parallel-scripts#1](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_1.cpp)]  
  
 È necessario assicurarsi che la libreria COM venga liberata correttamente quando un'attività o un algoritmo parallelo è annullato o quando il corpo dell'attività genera un'eccezione. Per garantire che l'attività chiama `CoUninitialize` prima della chiusura, utilizzare un `try-finally` blocco o *Resource Acquisition Is Initialization* modello (RAII). Nell'esempio seguente viene utilizzato un `try-finally` blocco per liberare la libreria COM quando l'attività è completata o annullata oppure quando viene generata un'eccezione.  
  
 [!code-cpp[concrt-parallel-scripts#2](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_2.cpp)]  
  
 L'esempio seguente usa il modello RAII per definire il `CCoInitializer` (classe), che gestisce la durata della libreria COM in un ambito specifico.  
  
 [!code-cpp[concrt-parallel-scripts#3](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_3.cpp)]  
  
 È possibile utilizzare la `CCoInitializer` classe per la libreria COM viene liberata automaticamente quando termina l'attività, come indicato di seguito.  
  
 [!code-cpp[concrt-parallel-scripts#4](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_4.cpp)]  
  
 Per ulteriori informazioni sull'annullamento nel Runtime di concorrenza, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).  
  
### <a name="using-com-with-asynchronous-agents"></a>Utilizzo di COM con agenti asincroni  

 Quando si utilizza COM con agenti asincroni, chiamare `CoInitializeEx` prima di utilizzare la libreria COM nel [concurrency::agent::run](reference/agent-class.md#run) metodo per l'agente. Chiamare quindi `CoUninitialize` prima di `run` metodo restituisce. Non utilizzare le routine di gestione COM nel costruttore o distruttore dell'agente e non esegue l'override di [metodi](reference/agent-class.md#start) o [Concurrency:: agent::](reference/agent-class.md#done) metodi perché questi metodi sono chiamato da un thread diverso da quello di `run` metodo.  

  
 Nell'esempio seguente viene illustrata una classe di base dell'agente, denominata `CCoAgent`, che gestisce la libreria COM nel `run` metodo.  
  
 [!code-cpp[concrt-parallel-scripts#5](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_5.cpp)]  
  
 Un esempio completo viene fornito più avanti in questa procedura dettagliata.  
  
### <a name="using-com-with-lightweight-tasks"></a>Utilizzo di COM con attività leggere  
 Il documento [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md) viene descritto il ruolo delle attività leggere nel Runtime di concorrenza. È possibile utilizzare COM con un'attività leggera, esattamente come si farebbe con qualsiasi routine di thread che viene passato al `CreateThread` funzione nell'API di Windows. come illustrato nell'esempio riportato di seguito.  
  
 [!code-cpp[concrt-parallel-scripts#6](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_6.cpp)]  
  
## <a name="an-example-of-a-com-enabled-application"></a>Un esempio di un'applicazione abilitata COM  
 In questa sezione viene illustrata un'applicazione abilitata COM completa che utilizza il `IScriptControl` interfaccia per eseguire uno script che calcola il valore n<sup>th</sup> numero di Fibonacci. In questo esempio chiama innanzitutto lo script dal thread principale, quindi utilizza la libreria PPL e gli agenti per chiamare lo script contemporaneamente.  
  
 Si consideri la seguente funzione helper, `RunScriptProcedure`, che chiama una routine un `IScriptControl` oggetto.  
  
 [!code-cpp[concrt-parallel-scripts#7](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_7.cpp)]  
  
 Il `wmain` funzione crea un `IScriptControl` dell'oggetto, aggiunge il codice di script che calcola il valore n<sup>th</sup> numero di Fibonacci, quindi chiama il `RunScriptProcedure` funzione per eseguire lo script.  
  
 [!code-cpp[concrt-parallel-scripts#8](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_8.cpp)]  
  
### <a name="calling-the-script-from-the-ppl"></a>Chiamata dello Script dalla libreria PPL  

 La funzione seguente, `ParallelFibonacci`, utilizza il [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo per chiamare lo script in parallelo. Questa funzione utilizza il `CCoInitializer` classe per gestire la durata della libreria COM durante ogni iterazione dell'attività.  

  
 [!code-cpp[concrt-parallel-scripts#9](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_9.cpp)]  
  
 Utilizzare il `ParallelFibonacci` con l'esempio di funzione, aggiungere il codice seguente prima di `wmain` risultato della funzione.  
  
 [!code-cpp[concrt-parallel-scripts#10](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_10.cpp)]  
  
### <a name="calling-the-script-from-an-agent"></a>Chiamata dello Script da un agente  
 Nell'esempio seguente il `FibonacciScriptAgent` (classe), che chiama una routine di script per calcolare il valore n<sup>th</sup> numero di Fibonacci. La `FibonacciScriptAgent` classe Usa messaggi per la ricezione, il programma principale, il passaggio di valori di input per la funzione di script. Il `run` metodo gestisce la durata della libreria COM nel corso dell'attività.  
  
 [!code-cpp[concrt-parallel-scripts#11](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_11.cpp)]  
  
 La funzione seguente, `AgentFibonacci`, crea diverse `FibonacciScriptAgent` degli oggetti e utilizza messaggi passaggio per l'invio di più valori di input a tali oggetti.  
  
 [!code-cpp[concrt-parallel-scripts#12](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_12.cpp)]  
  
 Utilizzare il `AgentFibonacci` con l'esempio di funzione, aggiungere il codice seguente prima di `wmain` risultato della funzione.  
  
 [!code-cpp[concrt-parallel-scripts#13](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_13.cpp)]  
  
### <a name="the-complete-example"></a>Esempio completo  
 Il codice seguente viene illustrato un esempio completo che usa gli algoritmi paralleli e dagli agenti asincroni per chiamare una routine di script che calcola numeri di Fibonacci.  
  
 [!code-cpp[concrt-parallel-scripts#14](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_14.cpp)]  
  
 L'esempio produce il seguente output di esempio.  
  
```Output  
Main Thread:  
fib(15) = 610  
 
Parallel Fibonacci:  
fib(15) = 610  
fib(10) = 55  
fib(16) = 987  
fib(18) = 2584  
fib(11) = 89  
fib(17) = 1597  
fib(19) = 4181  
fib(12) = 144  
fib(13) = 233  
fib(14) = 377  
 
Agent Fibonacci:  
fib(30) = 832040  
fib(22) = 17711  
fib(10) = 55  
fib(12) = 144  
```  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-scripts.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc parallel-scripts. cpp /link ole32.lib**  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure dettagliate del Runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)   
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)   
 [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)   
 [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)   
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)

