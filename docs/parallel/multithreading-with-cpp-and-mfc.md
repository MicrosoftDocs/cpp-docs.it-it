---
title: Multithreading con C++ e MFC | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
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
ms.openlocfilehash: 2a57846311fc3332dba0b613ca37a2b5da4368d3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46394634"
---
# <a name="multithreading-with-c-and-mfc"></a>Multithreading con C++ e MFC

La libreria Microsoft Foundation classi (MFC) fornisce supporto per applicazioni multithreading. Questo argomento descrive i processi e thread e l'approccio MFC al multithreading.

Un processo è un'istanza di esecuzione di un'applicazione. Ad esempio, quando si fa doppio clic sull'icona di blocco note, si avvia un processo che esegue il blocco note.

Un thread è un percorso di esecuzione all'interno di un processo. Quando si avvia il blocco note, il sistema operativo crea un processo e inizia l'esecuzione del thread principale del processo. Quando il thread termina, termina anche il processo. Questo thread primario è fornito al sistema operativo dal codice di avvio sotto forma di un indirizzo della funzione. In genere, è l'indirizzo del `main` o `WinMain` funzione fornito.

Se si desidera, è possibile creare thread aggiuntivi nell'applicazione. Si potrebbe voler eseguire questa operazione per gestire le attività di manutenzione o in background quando non si desidera all'utente di attenderne il completamento. Tutti i thread in applicazioni MFC sono rappresentati dalla [CWinThread](../mfc/reference/cwinthread-class.md) oggetti. Nella maggior parte dei casi, non ancora è necessario creare in modo esplicito tali oggetti. invece di chiamare la funzione di supporto framework [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), che consente di creare il `CWinThread` oggetto per l'utente.

MFC vengono distinti due tipi di thread: thread dell'interfaccia utente e thread di lavoro. Thread dell'interfaccia utente vengono comunemente utilizzati per gestire l'input dell'utente e rispondere agli eventi e messaggi generati dall'utente. Thread di lavoro vengono comunemente usati per completare le attività, ad esempio il ricalcolo, che non richiedono l'input dell'utente. L'API Win32 non distingue tra tipi di thread. è sufficiente conoscere l'indirizzo iniziale del thread in modo che possa iniziare a eseguire il thread. MFC gestisce i thread dell'interfaccia utente fornendo un message pump per gli eventi nell'interfaccia utente. `CWinApp` è un esempio di un oggetto thread dell'interfaccia utente, poiché deriva da `CWinThread` e gestisce gli eventi e i messaggi generati dall'utente.

Dovrebbe prestare particolare attenzione alle situazioni in cui più thread potrebbero richiedere l'accesso allo stesso oggetto. [Multithreading: Suggerimenti sulla programmazione](multithreading-programming-tips.md) vengono descritte le tecniche che è possibile utilizzare per risolvere i problemi che potrebbero verificarsi in queste situazioni. [Multithreading: Come usare le classi di sincronizzazione](multithreading-how-to-use-the-synchronization-classes.md) viene descritto come utilizzare le classi che è possibile sincronizzare l'accesso da più thread a un singolo oggetto.

La scrittura e il debug nella programmazione multithreading è intrinsecamente complesse e delicate, poiché è necessario assicurarsi che gli oggetti non sono accessibili da più di un solo thread alla volta. Argomenti relativi al multithreading non includono le nozioni fondamentali della programmazione multithread, solo come utilizzare MFC in un programma multithread. Gli esempi MFC multithreading inclusi in Visual C++ illustrano alcune API Win32 non incluse in MFC; e aggiunta di funzionalità di multithreading Tuttavia, solo destinati a essere un punto di partenza.

Per altre informazioni sulla modalità di gestione di processi e thread del sistema operativo, vedere [Processes and Threads](/windows/desktop/ProcThread/processes-and-threads) nel SDK di Windows.

Per altre informazioni sul supporto MFC al multithreading, vedere gli argomenti seguenti:

- [Multithreading: creazione di thread dell'interfaccia utente](multithreading-creating-user-interface-threads.md)

- [Multithreading: creazione di thread di lavoro](multithreading-creating-worker-threads.md)

- [Multithreading: uso delle classi di sincronizzazione](multithreading-how-to-use-the-synchronization-classes.md)

- [Multithreading: terminazione dei thread](multithreading-terminating-threads.md)

- [Multithreading: suggerimenti sulla programmazione](multithreading-programming-tips.md)

- [Multithreading: quando usare le classi di sincronizzazione](multithreading-when-to-use-the-synchronization-classes.md)

## <a name="see-also"></a>Vedere anche

[Supporto del multithreading per il codice precedente (Visual C++)](multithreading-support-for-older-code-visual-cpp.md)