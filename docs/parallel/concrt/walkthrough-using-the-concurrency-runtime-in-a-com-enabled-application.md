---
title: "Procedura dettagliata: Uso del runtime di concorrenza in un'applicazione abilitata COM"
ms.date: 04/25/2019
helpviewer_keywords:
- Concurrency Runtime, use with COM
- COM, use with the Concurrency Runtime
ms.assetid: a7c798b8-0fc8-4bee-972f-22ef158f7f48
ms.openlocfilehash: faa072ab2b5973ace0f0ca138dcedffa56044213
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77140629"
---
# <a name="walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application"></a>Procedura dettagliata: Uso del runtime di concorrenza in un'applicazione abilitata COM

In questo documento viene illustrato come utilizzare il runtime di concorrenza in un'applicazione che utilizza l'Component Object Model (COM).

## <a name="prerequisites"></a>Prerequisites

Prima di iniziare questa procedura dettagliata, leggere i documenti seguenti:

- [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)

- [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)

- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

- [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)

Per ulteriori informazioni su COM, vedere [Component Object Model (com)](/windows/win32/com/component-object-model--com--portal).

## <a name="managing-the-lifetime-of-the-com-library"></a>Gestione della durata della libreria COM

Anche se l'uso di COM con il runtime di concorrenza segue gli stessi principi di qualsiasi altro meccanismo di concorrenza, le linee guida seguenti consentono di usare queste librerie in modo efficace.

- Un thread deve chiamare [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex) prima di utilizzare la libreria com.

- Un thread può chiamare `CoInitializeEx` più volte, purché fornisca gli stessi argomenti per ogni chiamata.

- Per ogni chiamata a `CoInitializeEx`, un thread deve chiamare anche [CoUninitialize](/windows/win32/api/combaseapi/nf-combaseapi-couninitialize). In altre parole, le chiamate a `CoInitializeEx` e `CoUninitialize` devono essere bilanciate.

- Per passare da un Apartment di thread a un altro, un thread deve liberare completamente la libreria COM prima di chiamare `CoInitializeEx` con la nuova specifica di Threading.

Quando si usa COM con il runtime di concorrenza, si applicano altri principi COM. Ad esempio, un'applicazione che crea un oggetto in un Apartment a thread singolo (STA) ed effettua il marshalling dell'oggetto in un altro Apartment deve fornire anche un ciclo di messaggi per elaborare i messaggi in arrivo. Tenere inoltre presente che il marshalling di oggetti tra Apartment può ridurre le prestazioni.

### <a name="using-com-with-the-parallel-patterns-library"></a>Uso di COM con la libreria di modelli paralleli

Quando si utilizza COM con un componente in PPL (Parallel Patterns Library), ad esempio un gruppo di attività o un algoritmo parallelo, chiamare `CoInitializeEx` prima di utilizzare la libreria COM durante ogni attività o iterazione e chiamare `CoUninitialize` prima del completamento di ogni attività o iterazione. Nell'esempio seguente viene illustrato come gestire la durata della libreria COM con un oggetto [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) .

[!code-cpp[concrt-parallel-scripts#1](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_1.cpp)]

È necessario assicurarsi che la libreria COM venga liberata correttamente quando viene annullata un'attività o un algoritmo parallelo o quando il corpo dell'attività genera un'eccezione. Per garantire che l'attività chiami `CoUninitialize` prima di uscire, usare un blocco `try-finally` o il modello di *inizializzazione della risorsa* (RAII). Nell'esempio seguente viene utilizzato un blocco `try-finally` per liberare la libreria COM quando l'attività viene completata o annullata oppure quando viene generata un'eccezione.

[!code-cpp[concrt-parallel-scripts#2](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_2.cpp)]

Nell'esempio seguente viene usato il modello RAII per definire la classe `CCoInitializer`, che gestisce la durata della libreria COM in un ambito specificato.

[!code-cpp[concrt-parallel-scripts#3](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_3.cpp)]

È possibile utilizzare la classe `CCoInitializer` per liberare automaticamente la libreria COM quando l'attività viene chiusa, come indicato di seguito.

[!code-cpp[concrt-parallel-scripts#4](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_4.cpp)]

Per ulteriori informazioni sull'annullamento nella runtime di concorrenza, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

### <a name="using-com-with-asynchronous-agents"></a>Uso di COM con agenti asincroni

Quando si utilizza COM con agenti asincroni, chiamare `CoInitializeEx` prima di utilizzare la libreria COM nel metodo [Concurrency:: Agent:: Run](reference/agent-class.md#run) per l'agente. Chiamare quindi `CoUninitialize` prima che il metodo `run` venga restituito. Non usare routine di gestione COM nel costruttore o nel distruttore dell'agente e non eseguire l'override di [Concurrency:: Agent:: Start](reference/agent-class.md#start) o [Concurrency:: Agent::d uno](reference/agent-class.md#done) dei metodi perché questi metodi vengono chiamati da un thread diverso rispetto al metodo di `run`.

Nell'esempio seguente viene illustrata una classe di base dell'agente, denominata `CCoAgent`, che gestisce la libreria COM nel metodo `run`.

[!code-cpp[concrt-parallel-scripts#5](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_5.cpp)]

Un esempio completo è disponibile più avanti in questa procedura dettagliata.

### <a name="using-com-with-lightweight-tasks"></a>Uso di COM con attività leggere

Il documento [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md) descrive il ruolo delle attività leggere nell'runtime di concorrenza. È possibile usare COM con un'attività leggera Analogamente a qualsiasi routine di thread passata alla funzione `CreateThread` nell'API Windows. come illustrato nell'esempio seguente.

[!code-cpp[concrt-parallel-scripts#6](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_6.cpp)]

## <a name="an-example-of-a-com-enabled-application"></a>Esempio di applicazione abilitata per COM

Questa sezione illustra un'applicazione completa abilitata per COM che usa l'interfaccia `IScriptControl` per eseguire uno script che calcola il numero<sup>di Fibonacci.</sup> Questo esempio chiama prima di tutto lo script dal thread principale, quindi usa la libreria PPL e gli agenti per chiamare lo script simultaneamente.

Si consideri la funzione helper seguente, `RunScriptProcedure`, che chiama una routine in un oggetto `IScriptControl`.

[!code-cpp[concrt-parallel-scripts#7](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_7.cpp)]

La funzione `wmain` crea un oggetto `IScriptControl`, aggiunge codice di script che calcola il numero<sup>di Fibonacci n</sup> , quindi chiama la funzione `RunScriptProcedure` per eseguire tale script.

[!code-cpp[concrt-parallel-scripts#8](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_8.cpp)]

### <a name="calling-the-script-from-the-ppl"></a>Chiamata dello script dalla libreria PPL

Nella funzione seguente, `ParallelFibonacci`, viene utilizzato l'algoritmo [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) per chiamare lo script in parallelo. Questa funzione usa la classe `CCoInitializer` per gestire la durata della libreria COM durante ogni iterazione dell'attività.

[!code-cpp[concrt-parallel-scripts#9](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_9.cpp)]

Per usare la funzione `ParallelFibonacci` con l'esempio, aggiungere il codice seguente prima che la funzione `wmain` restituisca.

[!code-cpp[concrt-parallel-scripts#10](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_10.cpp)]

### <a name="calling-the-script-from-an-agent"></a>Chiamata dello script da un agente

Nell'esempio seguente viene illustrata la classe `FibonacciScriptAgent`, che chiama una procedura script per calcolare il numero<sup>di Fibonacci.</sup> La classe `FibonacciScriptAgent` usa il passaggio del messaggio per ricevere dal programma principale i valori di input per la funzione di script. Il metodo `run` gestisce la durata della libreria COM nell'intera attività.

[!code-cpp[concrt-parallel-scripts#11](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_11.cpp)]

La funzione seguente, `AgentFibonacci`, crea diversi oggetti `FibonacciScriptAgent` e utilizza il passaggio del messaggio per inviare diversi valori di input a tali oggetti.

[!code-cpp[concrt-parallel-scripts#12](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_12.cpp)]

Per usare la funzione `AgentFibonacci` con l'esempio, aggiungere il codice seguente prima che la funzione `wmain` restituisca.

[!code-cpp[concrt-parallel-scripts#13](../../parallel/concrt/codesnippet/cpp/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application_13.cpp)]

### <a name="the-complete-example"></a>Esempio completo

Il codice seguente illustra l'esempio completo, che usa gli algoritmi paralleli e gli agenti asincroni per chiamare una routine script che calcola i numeri di Fibonacci.

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

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-scripts.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc parallel-scripts. cpp/link Ole32. lib**

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)<br/>
[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)
