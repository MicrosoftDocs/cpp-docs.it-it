---
title: "Strumenti di diagnostica in parallelo (runtime di concorrenza) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
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
  - "strumenti di diagnostica in parallelo [Runtime di concorrenza]"
ms.assetid: b1a3f1d2-f5df-4f29-852e-906b3d8341fc
caps.latest.revision: 15
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Strumenti di diagnostica in parallelo (runtime di concorrenza)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)] viene fornito un ampio supporto per il debug e la profilatura delle applicazioni multithreading.  
  
## Debug  
 Il debugger di Visual Studio include la finestra **Stack in parallelo**, la finestra **Attività in parallelo** e la finestra di **Espressione di controllo in parallelo**.  Per ulteriori informazioni, vedere [Procedura dettagliata: debug di un'applicazione parallela](../Topic/Walkthrough:%20Debugging%20a%20Parallel%20Application.md) e [Procedura: utilizzare la finestra Espressione di controllo in parallelo](../Topic/How%20to:%20Use%20the%20Parallel%20Watch%20Window.md).  
  
## Profilatura  
 Gli strumenti di profilatura forniscono tre visualizzazioni dati che includono informazioni grafiche, tabulari e numeriche su come un'applicazione multithreading interagisce con se stessa e con altri programmi.  Grazie alle visualizzazioni è possibile identificare rapidamente le aree problematiche nonché accedere a stack di chiamate, siti di chiamata e codice sorgente tramite determinati punti delle visualizzazioni grafiche.  Per ulteriori informazioni, vedere [Visualizzatore di concorrenze](../Topic/Concurrency%20Visualizer.md).  
  
## Event Tracing  
 Il runtime di concorrenza utilizza [Event Tracing for Windows](http://msdn.microsoft.com/library/windows/desktop/bb968803) \(ETW\) per notificare alla strumentazione, ad esempio i profiler, quando si verificano vari eventi.  Tali eventi includono l'attivazione o la disattivazione di un'utilità di pianificazione, l'inizio, la fine, il blocco, lo sblocco di un contesto o la cessione volontaria del controllo e l'inizio o la fine di un algoritmo parallelo.  
  
 Gli strumenti come [Visualizzatore di concorrenze](../Topic/Concurrency%20Visualizer.md) utilizzano questa funzionalità, pertanto in genere non è necessario lavorare direttamente con questi eventi.  Questi risultano tuttavia utili quando si sviluppa un profiler personalizzato o quando si utilizzano strumenti di traccia degli eventi come [Xperf](http://go.microsoft.com/fwlink/?LinkID=160628).  
  
 Il runtime di concorrenza genera questi eventi solo quando la funzione di traccia è abilitata.  Chiamare la funzione [concurrency::EnableTracing](../Topic/EnableTracing%20Function.md) per abilitare la traccia degli eventi e la funzione [concurrency::DisableTracing](../Topic/DisableTracing%20Function.md) per disabilitarla.  
  
 Nella tabella riportata di seguito vengono descritti gli eventi generati dal runtime quando è abilitata la funzione di traccia degli eventi.  
  
|Evento|Descrizione|Valore|  
|------------|-----------------|------------|  
|[concurrency::ConcRT\_ProviderGuid](../Topic/ConcRT_ProviderGuid%20Constant.md)|Identificatore del provider ETW per il runtime di concorrenza.|`f7b697a3-4db5-4d3b-be71-c4d284e6592f`|  
|[concurrency::ContextEventGuid](../Topic/ContextEventGuid%20Constant.md)|Contrassegna gli eventi correlati ai contesti.|`5727a00f-50be-4519-8256-f7699871fecb`|  
|[concurrency::PPLParallelForEventGuid](../Topic/PPLParallelForEventGuid%20Constant.md)|Contrassegna l'entrata e l'uscita per le chiamate all'algoritmo [concurrency::parallel\_for](../Topic/parallel_for%20Function.md).|`31c8da6b-6165-4042-8b92-949e315f4d84`|  
|[concurrency::PPLParallelForeachEventGuid](../Topic/PPLParallelForeachEventGuid%20Constant.md)|Contrassegna l'entrata e l'uscita per le chiamate all'algoritmo [concurrency::parallel\_for\_each](../Topic/parallel_for_each%20Function.md).|`5cb7d785-9d66-465d-bae1-4611061b5434`|  
|[concurrency::PPLParallelInvokeEventGuid](../Topic/PPLParallelInvokeEventGuid%20Constant.md)|Contrassegna l'entrata e l'uscita per le chiamate all'algoritmo [concurrency::parallel\_invoke](../Topic/parallel_invoke%20Function.md).|`d1b5b133-ec3d-49f4-98a3-464d1a9e4682`|  
|[concurrency::SchedulerEventGuid](../Topic/SchedulerEventGuid%20Constant.md)|Contrassegna gli eventi correlati all'[utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).|`e2091f8a-1e0a-4731-84a2-0dd57c8a5261`|  
|[concurrency::VirtualProcessorEventGuid](../Topic/VirtualProcessorEventGuid%20Constant.md)|Contrassegna gli eventi correlati ai processori virtuali.|`2f27805f-1676-4ecc-96fa-7eb09d44302f`|  
  
 Il runtime di concorrenza definisce, ma al momento non genera, gli eventi seguenti.  Il runtime riserva questi eventi a un utilizzo futuro:  
  
-   [concurrency::ConcRTEventGuid](../Topic/ConcRTEventGuid%20Constant.md)  
  
-   [concurrency::ScheduleGroupEventGuid](../Topic/SchedulerEventGuid%20Constant.md)  
  
-   [concurrency::ChoreEventGuid](../Topic/ChoreEventGuid%20Constant.md)  
  
-   [concurrency::LockEventGuid](../Topic/LockEventGuid%20Constant.md)  
  
-   [concurrency::ResourceManagerEventGuid](../Topic/ResourceManagerEventGuid%20Constant.md)  
  
 L'enumerazione [concurrency::ConcRT\_EventType](../Topic/ConcRT_EventType%20Enumeration.md) specifica le operazioni possibili di cui tiene traccia un evento.  Ad esempio, all'entrata dell'algoritmo `parallel_for`, il runtime genera l'evento `PPLParallelForEventGuid` e offre `CONCRT_EVENT_START` come operazione.  Prima che l'algoritmo `parallel_for` restituisca un risultato, il runtime genera nuovamente l'evento `PPLParallelForEventGuid` e offre `CONCRT_EVENT_END` come operazione.  
  
 Nell'esempio seguente viene illustrato come attivare la funzione di traccia per una chiamata a `parallel_for`.  Il runtime non traccia la prima chiamata a `parallel_for` in quanto la funzione di traccia non è abilitata.  La chiamata a `EnableTracing` consente al runtime di tracciare la seconda chiamata a `parallel_for`.  
  
 [!code-cpp[concrt-etw#1](../../parallel/concrt/codesnippet/CPP/parallel-diagnostic-tools-concurrency-runtime_1.cpp)]  
  
 Il runtime tiene traccia del numero di volte in cui si chiama `EnableTracing` e `DisableTracing`.  Pertanto, se si effettuano più chiamate a `EnableTracing`, è necessario chiamare `DisableTracing` lo stesso numero di volte per disabilitare la funzione di traccia.  
  
## Vedere anche  
 [Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)