---
title: Strumenti di diagnostica in parallelo (runtime di concorrenza)
ms.date: 11/04/2016
helpviewer_keywords:
- Parallel Diagnostic Tools [Concurrency Runtime]
ms.assetid: b1a3f1d2-f5df-4f29-852e-906b3d8341fc
ms.openlocfilehash: 34b2421dfc53deeb35dcc659a8d555983e583737
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69510507"
---
# <a name="parallel-diagnostic-tools-concurrency-runtime"></a>Strumenti di diagnostica in parallelo (runtime di concorrenza)

Visual Studio fornisce supporto completo per il debug e la profilatura di applicazioni multithread.

## <a name="debugging"></a>Debug

Il debugger di Visual Studio include la finestra **stack in parallelo** , la finestra **attività in parallelo** e la finestra espressioni di **controllo in parallelo** . Per altre informazioni, vedere [Procedura dettagliata: Debug di un'applicazione](/visualstudio/debugger/walkthrough-debugging-a-parallel-application) parallela e [procedura: Usare la finestra](/visualstudio/debugger/how-to-use-the-parallel-watch-window)espressione di controllo in parallelo.

## <a name="profiling"></a>Profilatura

Gli strumenti di profilatura forniscono tre visualizzazioni dati che consentono di visualizzare informazioni grafiche, tabulari e numeriche sul modo in cui un'applicazione multithread interagisce con se stessa e con altri programmi. Le visualizzazioni consentono di identificare rapidamente le aree problematiche e di spostarsi tra i punti delle visualizzazioni grafiche per chiamare gli stack, i siti di chiamata e il codice sorgente. Per altre informazioni, vedere [Visualizzatore di concorrenza](/visualstudio/profiling/concurrency-visualizer).

## <a name="event-tracing"></a>Traccia eventi

Il runtime di concorrenza utilizza [Event Tracing for Windows](/windows/win32/ETW/event-tracing-portal) (ETW) per inviare notifiche agli strumenti di strumentazione, ad esempio i profiler, quando si verificano diversi eventi. Questi eventi includono quando un'utilità di pianificazione viene attivata o disattivata, quando un contesto inizia, termina, blocca, sblocca o produce e quando un algoritmo parallelo inizia o termina.

Strumenti come il [Visualizzatore di concorrenza](/visualstudio/profiling/concurrency-visualizer) utilizzano questa funzionalità. di conseguenza, non è in genere necessario lavorare direttamente con questi eventi. Questi eventi risultano tuttavia utili quando si sviluppa un profiler personalizzato o quando si utilizzano strumenti di traccia eventi, ad esempio [Xperf](https://go.microsoft.com/fwlink/p/?linkid=160628).

Il runtime di concorrenza genera questi eventi solo quando la traccia è abilitata. Chiamare la funzione [Concurrency:: EnableTracing](reference/concurrency-namespace-functions.md#enabletracing) per abilitare la traccia eventi e la funzione Concurrency [::D isabletracing](reference/concurrency-namespace-functions.md#disabletracing) per disabilitare la traccia.

Nella tabella seguente vengono descritti gli eventi che il runtime genera quando è abilitata la traccia eventi:

|event|Descrizione|Value|
|-----------|-----------------|-----------|
|[concurrency::ConcRT_ProviderGuid](reference/concurrency-namespace-constants1.md#concrt_providerguid)|Identificatore del provider ETW per la runtime di concorrenza.|`f7b697a3-4db5-4d3b-be71-c4d284e6592f`|
|[concurrency::ContextEventGuid](reference/concurrency-namespace-constants1.md#contexteventguid)|Contrassegna gli eventi correlati ai contesti.|`5727a00f-50be-4519-8256-f7699871fecb`|
|[concurrency::PPLParallelForEventGuid](reference/concurrency-namespace-constants1.md#pplparallelforeventguid)|Contrassegna l'ingresso e l'uscita per le chiamate all'algoritmo [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) .|`31c8da6b-6165-4042-8b92-949e315f4d84`|
|[concurrency::PPLParallelForeachEventGuid](reference/concurrency-namespace-constants1.md#pplparallelforeacheventguid)|Contrassegna l'ingresso e l'uscita per le chiamate all'algoritmo [Concurrency::p arallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) .|`5cb7d785-9d66-465d-bae1-4611061b5434`|
|[concurrency::PPLParallelInvokeEventGuid](reference/concurrency-namespace-constants1.md#pplparallelinvokeeventguid)|Contrassegna l'ingresso e l'uscita per le chiamate all'algoritmo [Concurrency::p arallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) .|`d1b5b133-ec3d-49f4-98a3-464d1a9e4682`|
|[concurrency::SchedulerEventGuid](reference/concurrency-namespace-constants1.md#schedulereventguid)|Contrassegna gli eventi correlati all' [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).|`e2091f8a-1e0a-4731-84a2-0dd57c8a5261`|
|[concurrency::VirtualProcessorEventGuid](reference/concurrency-namespace-constants1.md#virtualprocessoreventguid)|Contrassegna gli eventi correlati ai processori virtuali.|`2f27805f-1676-4ecc-96fa-7eb09d44302f`|

Il runtime di concorrenza definisce, ma attualmente non genera, gli eventi seguenti. Il runtime riserva questi eventi per un uso futuro:

- [concurrency::ConcRTEventGuid](reference/concurrency-namespace-constants1.md#concrteventguid)

- [concurrency::ScheduleGroupEventGuid](reference/concurrency-namespace-constants1.md#schedulereventguid)

- [concurrency::ChoreEventGuid](reference/concurrency-namespace-constants1.md#choreeventguid)

- [concurrency::LockEventGuid](reference/concurrency-namespace-constants1.md#lockeventguid)

- [concurrency::ResourceManagerEventGuid](reference/concurrency-namespace-constants1.md#resourcemanagereventguid)

L'enumerazione [Concurrency:: ConcRT_EventType](reference/concurrency-namespace-enums.md#concrt_eventtype) specifica le operazioni possibili che un evento tiene traccia. Ad esempio, all'ingresso dell' `parallel_for` algoritmo, il runtime genera l' `PPLParallelForEventGuid` evento e fornisce `CONCRT_EVENT_START` come operazione. Prima che `parallel_for` l'algoritmo venga restituito, il runtime genera `PPLParallelForEventGuid` nuovamente l'evento `CONCRT_EVENT_END` e fornisce come operazione.

Nell'esempio seguente viene illustrato come abilitare la traccia per una chiamata a `parallel_for`. Il runtime non traccia la prima chiamata a `parallel_for` perché la traccia non è abilitata. La chiamata a `EnableTracing` consente al runtime di tracciare la seconda chiamata `parallel_for`a.

[!code-cpp[concrt-etw#1](../../parallel/concrt/codesnippet/cpp/parallel-diagnostic-tools-concurrency-runtime_1.cpp)]

Il runtime tiene traccia del numero di volte in cui `EnableTracing` si `DisableTracing`chiamano e. Pertanto, se si chiama `EnableTracing` più volte, è necessario chiamare `DisableTracing` lo stesso numero di volte per disabilitare la traccia.

## <a name="see-also"></a>Vedere anche

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)
