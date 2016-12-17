---
title: "Multithreading con C++ e MFC | Microsoft Docs"
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
  - "CwinThread (classe), scopo"
  - "MFC [C++], multithreading"
  - "multithreading [C++], MFC"
  - "sincronizzazione [C++], multithreading"
  - "sincronizzazione (classi) [C++]"
  - "threading [C++], MFC"
  - "threading [MFC]"
  - "threading [MFC], informazioni sul threading"
  - "interfaccia utente (thread) [C++]"
  - "thread di lavoro [C++]"
ms.assetid: 979605f8-3988-44b5-ac9c-b8cce7fcce14
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Multithreading con C++ e MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La libreria MFC supporta le applicazioni multithread.  In questo argomento vengono descritti i processi e i thread, nonché l'approccio della libreria MFC nelle operazioni multithread.  
  
 Un processo è un'istanza di esecuzione di un'applicazione.  Quando si fa doppio clic sull'icona del Blocco note, ad esempio, viene avviato un processo che esegue il Blocco note.  
  
 Un thread è un percorso di esecuzione all'interno di un processo.  All'avvio del Blocco note, viene creato un processo e ne viene eseguito il thread primario.  Quando il thread termina, termina anche il processo.  Il thread primario è fornito al sistema operativo dal codice di avvio sotto forma di indirizzo di funzione.  In genere viene fornito l'indirizzo della funzione **main** o `WinMain`.  
  
 Se si desidera, è possibile creare thread aggiuntivi nell'applicazione.  È consigliabile eseguire questa operazione per gestire le attività in background o di manutenzione quando non si desidera che l'utente ne attenda il completamento.  Tutti i thread nelle applicazioni MFC sono rappresentati da oggetti [CWinThread](../../mfc/reference/cwinthread-class.md).  Nella maggior parte delle situazioni, non è necessario creare esplicitamente tali oggetti, poiché è sufficiente chiamare la funzione di supporto [AfxBeginThread](../Topic/AfxBeginThread.md) del framework, che crea automaticamente l'oggetto `CWinThread`.  
  
 In MFC vengono distinti due tipi di thread: i thread dell'interfaccia utente e i thread di lavoro.  I thread dell'interfaccia utente sono in genere utilizzati per gestire l'input dell'utente e per rispondere a eventi e messaggi generati dall'utente.  I thread di lavoro sono in genere utilizzati per il completamento di attività che non richiedono l'input dell'utente, come quelle di ricalcolo.  Nell'API Win32 non viene fatta distinzione tra i tipi di thread. È sufficiente specificare l'indirizzo iniziale del thread, in modo che sia possibile iniziarne l'esecuzione.  MFC gestisce i thread dell'interfaccia utente fornendo un message pump per gli eventi nell'interfaccia utente.  `CWinApp` è un esempio di un oggetto thread dell'interfaccia utente, poiché deriva da `CWinThread` e gestisce gli eventi e i messaggi generati dall'utente.  
  
 È necessario prestare particolare attenzione alle situazioni in cui più thread potrebbero richiedere l'accesso allo stesso oggetto.  In [Multithreading: suggerimenti sulla programmazione](../../parallel/multithreading-programming-tips.md) vengono descritte le tecniche che è possibile utilizzare per risolvere gli eventuali problemi legati a tali situazioni.  In [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md) viene invece descritto l'utilizzo delle classi disponibili per la sincronizzazione dell'accesso da parte di più thread a un oggetto singolo.  
  
 La scrittura e il debug nella programmazione multithread sono operazioni complesse e delicate, poiché è necessario assicurarsi che agli oggetti non acceda più di un thread alla volta.  Gli argomenti relativi al multithreading non includono le nozioni fondamentali della programmazione multithread, ma solo istruzioni sull'utilizzo di MFC all'interno di un programma multithread.  Negli esempi multithread di MFC inclusi in Visual C\+\+ sono illustrate alcune funzionalità aggiuntive per il multithreading e alcune API Win32 non incluse in MFC, ma con l'unico scopo di fornire un punto di partenza.  
  
 Per ulteriori informazioni sulla gestione dei processi e dei thread da parte del sistema operativo, vedere [Processes and Threads](http://msdn.microsoft.com/library/windows/desktop/ms684841) in [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
 Per ulteriori informazioni sul supporto del multithreading in MFC, vedere i seguenti argomenti:  
  
-   [Multithreading: creazione di thread dell'interfaccia utente](../../parallel/multithreading-creating-user-interface-threads.md)  
  
-   [Multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md)  
  
-   [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md)  
  
-   [Multithreading: terminazione dei thread](../../parallel/multithreading-terminating-threads.md)  
  
-   [Multithreading: suggerimenti sulla programmazione](../../parallel/multithreading-programming-tips.md)  
  
-   [Multithreading: quando utilizzare le classi di sincronizzazione](../../parallel/multithreading-when-to-use-the-synchronization-classes.md)  
  
## Vedere anche  
 [Supporto del multithreading per il codice precedente \(Visual C\+\+\)](../../parallel/multithreading-support-for-older-code-visual-cpp.md)