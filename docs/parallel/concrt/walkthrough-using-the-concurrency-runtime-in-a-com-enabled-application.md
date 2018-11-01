---
title: "Procedura dettagliata: Uso del runtime di concorrenza in un'applicazione abilitata COM"
ms.date: 11/04/2016
helpviewer_keywords:
- Concurrency Runtime, use with COM
- COM, use with the Concurrency Runtime
ms.assetid: a7c798b8-0fc8-4bee-972f-22ef158f7f48
ms.openlocfilehash: 227d06c74826b8936909b774d1a7e3a222ac8023
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50554934"
---
# <a name="walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application"></a>Procedura dettagliata: Uso del runtime di concorrenza in un'applicazione abilitata COM

Questo documento illustra come usare il Runtime di concorrenza in un'applicazione che usa il modello COM (Component Object).

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:

- [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)

- [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)

- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

- [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)

Per altre informazioni su COM, vedere [modello COM (Component Object)](/windows/desktop/com/component-object-model--com--portal).

## <a name="managing-the-lifetime-of-the-com-library"></a>Gestione della durata della libreria COM

Sebbene l'uso di COM con il Runtime di concorrenza segue gli stessi principi come qualsiasi altro meccanismo di concorrenza, le linee guida seguenti consentono di usare queste librerie tra loro in modo efficace.

- Un thread deve chiamare [CoInitializeEx](/windows/desktop/api/combaseapi/nf-combaseapi-coinitializeex) prima di usare la libreria COM.

- Un thread può chiamare `CoInitializeEx` più volte fino a quando fornisce gli stessi argomenti per ogni chiamata.

- Per ogni chiamata a `CoInitializeEx`, un thread deve chiamare anche [CoUninitialize](/windows/desktop/api/combaseapi/nf-combaseapi-couninitialize). In altre parole, le chiamate a `CoInitializeEx` e `CoUninitialize` devono essere bilanciate.

- Per passare da un apartment di thread a altro, un thread deve liberare completamente la libreria COM prima di chiamare `CoInitializeEx` con la nuova specifica del threading.

Altri principi di COM si applicano quando si usa COM con il Runtime di concorrenza. Ad esempio, un'applicazione che crea un oggetto in un apartment a thread singolo (STA) ed effettua il marshalling di tale oggetto a un altro apartment deve fornire anche un ciclo di messaggi per elaborare i messaggi in ingresso. Tenere anche presente che il marshalling di oggetti tra l'apartment può ridurre le prestazioni.

### <a name="using-com-with-the-parallel-patterns-library"></a>Uso di COM con la libreria di modelli paralleli

Quando si usa COM con un componente in Parallel Patterns Library (PPL), ad esempio, un gruppo di attività o un algoritmo parallelo, chiamare `CoInitializeEx` prima di usare la libreria COM durante ogni attività o iterazione e chiamata `CoUninitialize` prima che venga completato ogni attività o iterazione . Nell'esempio seguente viene illustrato come gestire la durata della libreria COM con un [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) oggetto.

[!code-cpp[concrt-parallel-scripts#1](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_1.cpp)]

È necessario assicurarsi che la libreria COM in modo corretto viene liberata quando viene annullato un'attività o un algoritmo parallelo o quando il corpo dell'attività genera un'eccezione. Per garantire che l'attività chiama `CoUninitialize` prima della chiusura, utilizzare un `try-finally` blocco o il *Resource Acquisition Is Initialization* modello (RAII). L'esempio seguente usa un `try-finally` blocco per liberare la libreria COM quando l'attività viene completata o viene annullato o quando viene generata un'eccezione.

[!code-cpp[concrt-parallel-scripts#2](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_2.cpp)]

L'esempio seguente usa il modello RAII per definire il `CCoInitializer` classe che gestisce la durata della libreria COM in un ambito specifico.

[!code-cpp[concrt-parallel-scripts#3](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_3.cpp)]

È possibile usare il `CCoInitializer` classe per la libreria COM viene liberata automaticamente quando termina l'attività, come indicato di seguito.

[!code-cpp[concrt-parallel-scripts#4](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_4.cpp)]

Per altre informazioni sull'annullamento nel Runtime di concorrenza, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

### <a name="using-com-with-asynchronous-agents"></a>Uso di COM con gli agenti asincroni

Quando si usa COM mediante agenti asincroni, chiamare `CoInitializeEx` prima di usare la libreria COM nel [concurrency::agent::run](reference/agent-class.md#run) metodo per l'agente. Quindi chiamare `CoUninitialize` prima di `run` restituzione del metodo. Non usare routine di gestione di COM nel costruttore o distruttore dell'agente e non esegue l'override di [metodi](reference/agent-class.md#start) o [Concurrency:: agent::](reference/agent-class.md#done) metodi perché questi metodi sono chiamato da un thread diverso da quello di `run` (metodo).

Nell'esempio seguente viene illustrata una classe di base dell'agente, denominata `CCoAgent`, che gestisce la libreria COM nel `run` (metodo).

[!code-cpp[concrt-parallel-scripts#5](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_5.cpp)]

Un esempio completo viene fornito più avanti in questa procedura dettagliata.

### <a name="using-com-with-lightweight-tasks"></a>Uso di COM con le attività leggere

Il documento [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md) viene descritto il ruolo di attività leggere nel Runtime di concorrenza. È possibile utilizzare COM con un'attività leggera, esattamente come farebbe con qualsiasi routine di thread che viene passato al `CreateThread` funzione nell'API di Windows. come illustrato nell'esempio riportato di seguito.

[!code-cpp[concrt-parallel-scripts#6](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_6.cpp)]

## <a name="an-example-of-a-com-enabled-application"></a>Un esempio di un'applicazione abilitata COM

Questa sezione illustra un'applicazione abilitata COM completa che usa il `IScriptControl` interfaccia per eseguire uno script che calcola il valore n<sup>th</sup> numero di Fibonacci. In questo esempio chiama innanzitutto lo script dal thread principale e quindi Usa la libreria PPL e gli agenti per chiamare lo script contemporaneamente.

Si consideri la seguente funzione di supporto `RunScriptProcedure`, che chiama una routine un `IScriptControl` oggetto.

[!code-cpp[concrt-parallel-scripts#7](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_7.cpp)]

Il `wmain` funzione crea un' `IScriptControl` dell'oggetto, aggiunge codice di script che calcola il valore n<sup>th</sup> numero di Fibonacci e quindi chiama il `RunScriptProcedure` funzione per eseguire lo script.

[!code-cpp[concrt-parallel-scripts#8](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_8.cpp)]

### <a name="calling-the-script-from-the-ppl"></a>Chiamata dello Script dalla libreria PPL

La funzione seguente, `ParallelFibonacci`, viene utilizzato il [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo per chiamare lo script in parallelo. Questa funzione utilizza il `CCoInitializer` classe per gestire la durata della libreria COM durante ogni iterazione dell'attività.

[!code-cpp[concrt-parallel-scripts#9](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_9.cpp)]

Usare il `ParallelFibonacci` con l'esempio di funzione, aggiungere il codice seguente prima di `wmain` funzione restituisce.

[!code-cpp[concrt-parallel-scripts#10](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_10.cpp)]

### <a name="calling-the-script-from-an-agent"></a>Chiamare lo Script da un agente

L'esempio seguente mostra le `FibonacciScriptAgent` (classe), che chiama una routine di script per calcolare il valore n<sup>th</sup> numero di Fibonacci. Il `FibonacciScriptAgent` classe utilizza messaggi passaggio per la ricezione, dal programma principale, i valori per la funzione di script di input. Il `run` metodo gestisce la durata della libreria COM nel corso dell'attività.

[!code-cpp[concrt-parallel-scripts#11](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_11.cpp)]

La funzione seguente, `AgentFibonacci`, crea diverse `FibonacciScriptAgent` degli oggetti e utilizza messaggi passaggio per inviare vari valori a tali oggetti di input.

[!code-cpp[concrt-parallel-scripts#12](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_12.cpp)]

Usare il `AgentFibonacci` con l'esempio di funzione, aggiungere il codice seguente prima di `wmain` funzione restituisce.

[!code-cpp[concrt-parallel-scripts#13](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_13.cpp)]

### <a name="the-complete-example"></a>Esempio completo

Il codice seguente illustra un esempio completo che usa gli algoritmi paralleli e agenti asincroni per chiamare una routine di script che calcola i numeri di Fibonacci.

[!code-cpp[concrt-parallel-scripts#14](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_14.cpp)]

L'esempio produce l'output di esempio seguente.

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

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-scripts.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc parallelo-Scripts. cpp /link ole32.lib**

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)<br/>
[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)

