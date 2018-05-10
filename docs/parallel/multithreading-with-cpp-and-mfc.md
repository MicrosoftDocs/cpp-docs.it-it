---
title: Multithreading con C++ e MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], multithreading
- threading [C++], MFC
- worker threads [C++]
- synchronization classes [C++]
- synchronization [C++], multithreading
- threading [MFC], about threading
- CWinThread class, purpose of
- multithreading [C++], MFC
- threading [MFC]
- user interface threads [C++]
ms.assetid: 979605f8-3988-44b5-ac9c-b8cce7fcce14
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 778602a0e9236ad8cc788d8a2306e8f2d143ec49
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="multithreading-with-c-and-mfc"></a>Multithreading con C++ e MFC
La libreria Microsoft Foundation classe (MFC) fornisce supporto per applicazioni multithreading. In questo argomento vengono descritti i processi e thread, l'approccio MFC al multithreading.  
  
 Un processo è un'istanza di esecuzione di un'applicazione. Quando si fa doppio clic sull'icona di blocco note, ad esempio, si avvia un processo che esegue il blocco note.  
  
 Un thread è un percorso di esecuzione all'interno di un processo. Quando si avvia il blocco note, il sistema operativo viene creato un processo e inizia l'esecuzione del thread principale del processo. Quando il thread termina, pertanto, non il processo. Il thread principale viene fornito al sistema operativo dal codice di avvio sotto forma di un indirizzo della funzione. È in genere, l'indirizzo del **principale** o `WinMain` funzione fornito.  
  
 Se si desidera, è possibile creare thread aggiuntivi nell'applicazione. È possibile eseguire questa operazione per gestire le attività di manutenzione o di sfondo quando non si desidera che l'utente a attenderne il completamento. Tutti i thread in applicazioni MFC sono rappresentati da [CWinThread](../mfc/reference/cwinthread-class.md) oggetti. Nella maggior parte dei casi, non ancora è necessario creare in modo esplicito tali oggetti. invece di chiamare la funzione di supporto framework [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), che consente di creare il `CWinThread` oggetto.  
  
 MFC consente di distinguere due tipi di thread: thread di lavoro e i thread dell'interfaccia utente. Thread dell'interfaccia utente vengono comunemente utilizzati per gestire l'input dell'utente e rispondere agli eventi e messaggi generati dall'utente. Thread di lavoro vengono comunemente utilizzati per completare le attività, ad esempio il ricalcolo, che non richiedono l'input dell'utente. L'API Win32 non distingue tra tipi di thread. è solo necessario conoscere l'indirizzo iniziale del thread in modo che possa iniziare a eseguire il thread. MFC gestisce i thread dell'interfaccia utente fornendo un message pump per gli eventi dell'interfaccia utente. `CWinApp` è un esempio di un oggetto thread dell'interfaccia utente, poiché deriva da `CWinThread` e gestisce gli eventi e i messaggi generati dall'utente.  
  
 Deve prestare particolare attenzione alle situazioni in cui più thread potrebbero richiedere l'accesso allo stesso oggetto. [Multithreading: Suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md) vengono descritte le tecniche che è possibile utilizzare per risolvere i problemi che potrebbero verificarsi in queste situazioni. [Multithreading: Come usare le classi di sincronizzazione](../parallel/multithreading-how-to-use-the-synchronization-classes.md) viene descritto come utilizzare le classi che sono disponibili per sincronizzare l'accesso da più thread a un singolo oggetto.  
  
 Scrittura e la programmazione multithreading di debug è intrinsecamente complessa e difficile, poiché è necessario assicurarsi di non accedere agli oggetti da più thread contemporaneamente. Argomenti relativi al multithreading non includono le nozioni di base della programmazione multithreading, solo come utilizzare MFC in un programma multithread. Gli esempi MFC multithreading inclusi in Visual C++ illustrano alcuni multithreading aggiunta di funzionalità e API Win32 non incluso in MFC. Tuttavia, sono destinati solo a un punto di partenza.  
  
 Per ulteriori informazioni sulle modalità di gestione di processi e thread del sistema operativo, vedere [processi e thread](http://msdn.microsoft.com/library/windows/desktop/ms684841) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
 Per ulteriori informazioni sul supporto MFC multithreading, vedere gli argomenti seguenti:  
  
-   [Multithreading: creazione di thread dell'interfaccia utente](../parallel/multithreading-creating-user-interface-threads.md)  
  
-   [Multithreading: creazione di thread di lavoro](../parallel/multithreading-creating-worker-threads.md)  
  
-   [Multithreading: uso delle classi di sincronizzazione](../parallel/multithreading-how-to-use-the-synchronization-classes.md)  
  
-   [Multithreading: terminazione dei thread](../parallel/multithreading-terminating-threads.md)  
  
-   [Multithreading: suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md)  
  
-   [Multithreading: quando usare le classi di sincronizzazione](../parallel/multithreading-when-to-use-the-synchronization-classes.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto del multithreading per il codice precedente (Visual C++)](../parallel/multithreading-support-for-older-code-visual-cpp.md)