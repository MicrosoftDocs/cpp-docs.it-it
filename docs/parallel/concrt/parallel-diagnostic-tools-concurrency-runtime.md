---
title: Strumenti di diagnostica in parallelo (runtime di concorrenza)
ms.date: 11/04/2016
helpviewer_keywords:
- Parallel Diagnostic Tools [Concurrency Runtime]
ms.assetid: b1a3f1d2-f5df-4f29-852e-906b3d8341fc
ms.openlocfilehash: a9d6823a5f82e3d52f82f568d3e3c00b68236fef
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51329215"
---
# <a name="parallel-diagnostic-tools-concurrency-runtime"></a>Strumenti di diagnostica in parallelo (runtime di concorrenza)

Visual Studio fornisce supporto completo per il debug e la profilatura di applicazioni multithread.

## <a name="debugging"></a>Debug

Il debugger di Visual Studio include il **stack in parallelo** finestra **attività in parallelo** finestra, e **espressioni di controllo parallela** finestra. Per altre informazioni, vedere [procedura dettagliata: debug di un'applicazione parallela](/visualstudio/debugger/walkthrough-debugging-a-parallel-application) e [procedura: usare la finestra Espressioni di controllo in parallelo](/visualstudio/debugger/how-to-use-the-parallel-watch-window).

## <a name="profiling"></a>Profilatura

Gli strumenti di profilatura offrono tre visualizzazioni di dati che forniscono informazioni grafiche, tabulari e numeriche sulla modalità di interazione di un'applicazione multithread con se stesso e con altri programmi. Le viste consentono di identificare rapidamente le aree problematiche e per passare dai punti in visualizzazioni grafiche per stack di chiamate, siti di chiamata e il codice sorgente. Per altre informazioni, vedere [Visualizzatore di concorrenza](/visualstudio/profiling/concurrency-visualizer).

## <a name="event-tracing"></a>Event Tracing

Usa il Runtime di concorrenza [traccia eventi per Windows](/windows/desktop/ETW/event-tracing-portal) (ETW) per notificare a strumenti di strumentazione, ad esempio i profiler, quando si verificano diversi eventi. Queste fasi includono quando un'utilità di pianificazione è attivata o disattivata, quando un contesto inizia, termina, bloccato, sblocca o produce e quando un algoritmo parallelo inizia o termina.

Gli strumenti, ad esempio la [Visualizzatore di concorrenza](/visualstudio/profiling/concurrency-visualizer) utilizzare questa funzionalità; pertanto, in genere non è necessario lavorare direttamente con questi eventi. Tuttavia, questi eventi sono utili quando si sviluppa un profiler personalizzato o quando si utilizzano strumenti di traccia eventi, ad esempio [Xperf](http://go.microsoft.com/fwlink/p/?linkid=160628).

Il Runtime di concorrenza genera questi eventi solo quando è abilitata la traccia. Chiamare il [Concurrency:: EnableTracing](reference/concurrency-namespace-functions.md#enabletracing) funzione per abilitare la traccia eventi e il [Concurrency:: DisableTracing](reference/concurrency-namespace-functions.md#disabletracing) funzione per disabilitare la traccia.

Nella tabella seguente vengono descritti gli eventi generati dal runtime quando è abilitata la traccia di eventi:

|event|Descrizione|Valore|
|-----------|-----------------|-----------|
|[Concurrency::ConcRT_ProviderGuid](reference/concurrency-namespace-constants1.md#concrt_providerguid)|L'identificatore del provider ETW per il Runtime di concorrenza.|`f7b697a3-4db5-4d3b-be71-c4d284e6592f`|
|[Concurrency::ContextEventGuid](reference/concurrency-namespace-constants1.md#contexteventguid)|Contrassegna gli eventi correlati a contesti.|`5727a00f-50be-4519-8256-f7699871fecb`|
|[Concurrency::PPLParallelForEventGuid](reference/concurrency-namespace-constants1.md#pplparallelforeventguid)|Contrassegna l'entrata e uscita per le chiamate per il [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo.|`31c8da6b-6165-4042-8b92-949e315f4d84`|
|[Concurrency::PPLParallelForeachEventGuid](reference/concurrency-namespace-constants1.md#pplparallelforeacheventguid)|Contrassegna l'entrata e uscita per le chiamate per il [Concurrency:: parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) algoritmo.|`5cb7d785-9d66-465d-bae1-4611061b5434`|
|[Concurrency::PPLParallelInvokeEventGuid](reference/concurrency-namespace-constants1.md#pplparallelinvokeeventguid)|Contrassegna l'entrata e uscita per le chiamate per il [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo.|`d1b5b133-ec3d-49f4-98a3-464d1a9e4682`|
|[Concurrency::SchedulerEventGuid](reference/concurrency-namespace-constants1.md#schedulereventguid)|Contrassegna gli eventi che riguardano il [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).|`e2091f8a-1e0a-4731-84a2-0dd57c8a5261`|
|[Concurrency::VirtualProcessorEventGuid](reference/concurrency-namespace-constants1.md#virtualprocessoreventguid)|Contrassegna gli eventi correlati a processori virtuali.|`2f27805f-1676-4ecc-96fa-7eb09d44302f`|

Il Runtime di concorrenza, definisce, ma attualmente non aumenta, gli eventi seguenti. Il runtime di riserva questi eventi per un uso futuro:

- [Concurrency::ConcRTEventGuid](reference/concurrency-namespace-constants1.md#concrteventguid)

- [Concurrency::ScheduleGroupEventGuid](reference/concurrency-namespace-constants1.md#schedulereventguid)

- [Concurrency::ChoreEventGuid](reference/concurrency-namespace-constants1.md#choreeventguid)

- [Concurrency::LockEventGuid](reference/concurrency-namespace-constants1.md#lockeventguid)

- [Concurrency::ResourceManagerEventGuid](reference/concurrency-namespace-constants1.md#resourcemanagereventguid)

Il [ConcRT_EventType](reference/concurrency-namespace-enums.md#concrt_eventtype) enumerazione specifica le operazioni possibili che tiene traccia di un evento. Ad esempio, all'ingresso del `parallel_for` algoritmo, il runtime genera il `PPLParallelForEventGuid` eventi e fornisce `CONCRT_EVENT_START` dell'operazione. Prima la `parallel_for` algoritmo restituisce, il runtime genera nuovamente il `PPLParallelForEventGuid` eventi e fornisce `CONCRT_EVENT_END` dell'operazione.

Nell'esempio seguente viene illustrato come abilitare la traccia per una chiamata a `parallel_for`. Il runtime non tiene traccia della prima chiamata al `parallel_for` perché la funzione di traccia non è abilitato. La chiamata a `EnableTracing` consente al runtime tracciare la seconda chiamata a `parallel_for`.

[!code-cpp[concrt-etw#1](../../parallel/concrt/codesnippet/cpp/parallel-diagnostic-tools-concurrency-runtime_1.cpp)]

Il runtime tiene traccia del numero di volte in cui si chiamano `EnableTracing` e `DisableTracing`. Pertanto, se si chiama `EnableTracing` più volte, è necessario chiamare `DisableTracing` lo stesso numero di volte per disabilitare la traccia.

## <a name="see-also"></a>Vedere anche

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)

