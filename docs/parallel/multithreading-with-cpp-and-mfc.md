---
description: 'Altre informazioni su: multithreading con C++ e MFC'
title: Multithreading con C++ e MFC
ms.date: 08/27/2018
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
ms.openlocfilehash: a553f6364f52ce8d91e08e3bb5b0e83b48575fdc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149812"
---
# <a name="multithreading-with-c-and-mfc"></a>Multithreading con C++ e MFC

La libreria MFC (Microsoft Foundation Class) fornisce il supporto per le applicazioni multithreading. In questo argomento vengono descritti i processi e i thread e l'approccio MFC al multithreading.

Un processo è un'istanza in esecuzione di un'applicazione. Ad esempio, quando si fa doppio clic sull'icona del blocco note, si avvia un processo che esegue blocco note.

Un thread è un percorso di esecuzione all'interno di un processo. Quando si avvia il blocco note, il sistema operativo crea un processo e inizia l'esecuzione del thread principale di tale processo. Quando termina, questo thread esegue il processo. Questo thread primario viene fornito al sistema operativo dal codice di avvio sotto forma di indirizzo di funzione. In genere, è l'indirizzo della `main` funzione o `WinMain` fornita.

Se lo si desidera, è possibile creare ulteriori thread nell'applicazione. Questa operazione può essere eseguita per gestire le attività in background o di manutenzione quando non si desidera che l'utente ne attenda il completamento. Tutti i thread nelle applicazioni MFC sono rappresentati da oggetti [CWinThread](../mfc/reference/cwinthread-class.md) . Nella maggior parte dei casi, non è nemmeno necessario creare in modo esplicito questi oggetti. chiamare invece la funzione helper del Framework [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), che crea automaticamente l' `CWinThread` oggetto.

MFC distingue due tipi di thread: thread dell'interfaccia utente e thread di lavoro. I thread dell'interfaccia utente vengono in genere utilizzati per gestire l'input dell'utente e rispondere agli eventi e ai messaggi generati dall'utente. I thread di lavoro vengono comunemente usati per completare le attività, ad esempio il ricalcolo, che non richiedono l'input dell'utente. L'API Win32 non distingue i tipi di thread. è sufficiente che conosca l'indirizzo iniziale del thread, in modo che possa iniziare a eseguire il thread. MFC gestisce in modo specifico i thread dell'interfaccia utente fornendo un message pump per gli eventi nell'interfaccia utente. `CWinApp` è un esempio di oggetto thread dell'interfaccia utente, perché deriva da `CWinThread` e gestisce gli eventi e i messaggi generati dall'utente.

È necessario prestare particolare attenzione alle situazioni in cui più thread potrebbero richiedere l'accesso allo stesso oggetto. [Multithreading: suggerimenti sulla programmazione](multithreading-programming-tips.md) vengono descritte le tecniche che è possibile utilizzare per aggirare i problemi che potrebbero verificarsi in queste situazioni. [Multithreading: come usare le classi di sincronizzazione](multithreading-how-to-use-the-synchronization-classes.md) descrive come usare le classi disponibili per sincronizzare l'accesso da più thread a un singolo oggetto.

La scrittura e il debug della programmazione multithreading sono intrinsecamente un'impresa complessa e complicata, perché è necessario assicurarsi che agli oggetti non venga eseguito l'accesso da più di un thread alla volta. Gli argomenti relativi al multithreading non insegnano i concetti di base della programmazione multithreading, ma solo come usare MFC nel programma multithread. Gli esempi MFC multithreading inclusi in Visual C++ illustrano alcune funzionalità di aggiunta multithreading e API Win32 non incluse in MFC; Tuttavia, sono destinate solo a essere un punto di partenza.

Per ulteriori informazioni sul modo in cui il sistema operativo gestisce i processi e i thread, vedere [processi e thread](/windows/win32/ProcThread/processes-and-threads) nella Windows SDK.

Per ulteriori informazioni sul supporto multithreading MFC, vedere gli argomenti seguenti:

- [Multithreading: creazione di thread di User-Interface](multithreading-creating-user-interface-threads.md)

- [Multithreading: creazione di thread di lavoro](multithreading-creating-worker-threads.md)

- [Multithreading: come usare le classi di sincronizzazione](multithreading-how-to-use-the-synchronization-classes.md)

- [Multithreading: terminazione di thread](multithreading-terminating-threads.md)

- [Multithreading: suggerimenti sulla programmazione](multithreading-programming-tips.md)

- [Multithreading: quando usare le classi di sincronizzazione](multithreading-when-to-use-the-synchronization-classes.md)

## <a name="see-also"></a>Vedi anche

[Supporto del multithreading per il codice precedente (Visual C++)](multithreading-support-for-older-code-visual-cpp.md)
