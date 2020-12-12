---
description: 'Altre informazioni su: multithreading: suggerimenti sulla programmazione MFC'
title: 'Multithreading: suggerimenti per la programmazione MFC'
ms.date: 08/27/2018
helpviewer_keywords:
- multithreading [C++], programming tips
- handle maps [C++]
- access control [C++], multithreading
- objects [C++], multiple threads and
- non-MFC threads [C++]
- threading [MFC], programming tips
- critical sections [C++]
- synchronization [C++], multithreading
- programming [C++], multithreaded
- communications [C++], between threads
- threading [C++], best practices
- troubleshooting [C++], multithreading
- Windows handle maps [C++]
ms.assetid: ad14cc70-c91c-4c24-942f-13a75e58bf8a
ms.openlocfilehash: 5c7141462da21c6b9298f48ab85b3de06a039d08
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149890"
---
# <a name="multithreading-mfc-programming-tips"></a>Multithreading: suggerimenti per la programmazione MFC

Per le applicazioni multithreading è necessario prestare maggiore attenzione rispetto alle applicazioni a thread singolo per garantire che le operazioni vengano eseguite nell'ordine previsto e che i dati a cui si accede da più thread non siano danneggiati. In questo argomento vengono illustrate le tecniche per evitare potenziali problemi durante la programmazione di applicazioni multithreading con la libreria MFC (Microsoft Foundation Class).

- [Accesso a oggetti da più thread](#_core_accessing_objects_from_multiple_threads)

- [Accesso a oggetti MFC da thread non MFC](#_core_accessing_mfc_objects_from_non.2d.mfc_threads)

- [Mappe di handle di Windows](#_core_windows_handle_maps)

- [Comunicazione tra thread](#_core_communicating_between_threads)

## <a name="accessing-objects-from-multiple-threads"></a><a name="_core_accessing_objects_from_multiple_threads"></a> Accesso a oggetti da più thread

Gli oggetti MFC non sono thread-safe autonomamente. Due thread distinti non possono modificare lo stesso oggetto, a meno che non si usino le classi di sincronizzazione MFC e/o gli oggetti di sincronizzazione Win32 appropriati, ad esempio le sezioni critiche. Per ulteriori informazioni sulle sezioni critiche e altri oggetti correlati, vedere la pagina relativa alla [sincronizzazione](/windows/win32/Sync/synchronization) nella Windows SDK.

La libreria di classi usa le sezioni critiche internamente per proteggere le strutture di dati globali, ad esempio quelle usate dall'allocazione della memoria di debug.

## <a name="accessing-mfc-objects-from-non-mfc-threads"></a><a name="_core_accessing_mfc_objects_from_non.2d.mfc_threads"></a> Accesso a oggetti MFC da thread non MFC

Se si dispone di un'applicazione multithreading che crea un thread in modo diverso dall'utilizzo di un oggetto [CWinThread](../mfc/reference/cwinthread-class.md) , non è possibile accedere ad altri oggetti MFC da tale thread. In altre parole, se si vuole accedere a qualsiasi oggetto MFC da un thread secondario, è necessario creare il thread con uno dei metodi descritti in [multithreading: creazione di User-Interface thread](multithreading-creating-user-interface-threads.md) o [multithreading: creazione di thread di lavoro](multithreading-creating-worker-threads.md). Questi metodi sono gli unici che consentono alla libreria di classi di inizializzare le variabili interne necessarie per gestire le applicazioni multithreading.

## <a name="windows-handle-maps"></a><a name="_core_windows_handle_maps"></a> Mappe di handle di Windows

Come regola generale, un thread può accedere solo agli oggetti MFC creati. Questo perché le mappe di handle di Windows temporanee e permanenti vengono mantenute nell'archiviazione thread-local per garantire la protezione dall'accesso simultaneo da più thread. Un thread di lavoro, ad esempio, non può eseguire un calcolo e quindi chiamare la `UpdateAllViews` funzione membro di un documento per fare in modo che le finestre che contengono visualizzazioni sui nuovi dati vengano modificate. Questa operazione non ha alcun effetto, perché la mappa da `CWnd` oggetti a HWND è locale rispetto al thread primario. Questo significa che un thread potrebbe avere un mapping da un handle di Windows a un oggetto C++, ma un altro thread potrebbe mappare lo stesso handle a un oggetto C++ diverso. Le modifiche apportate in un thread non vengono riflesse nell'altra.

Esistono diversi modi per risolvere questo problema. Il primo consiste nel passare i singoli handle, ad esempio un HWND, anziché gli oggetti C++ al thread di lavoro. Il thread di lavoro aggiunge quindi questi oggetti alla mappa temporanea chiamando la `FromHandle` funzione membro appropriata. È anche possibile aggiungere l'oggetto alla mappa permanente del thread chiamando `Attach` , ma questa operazione dovrebbe essere eseguita solo se si ha la garanzia che l'oggetto esisterà più a lungo del thread.

Un altro metodo consiste nel creare nuovi messaggi definiti dall'utente corrispondenti alle diverse attività che verranno eseguite dai thread di lavoro e inviare tali messaggi alla finestra principale dell'applicazione usando `::PostMessage` . Questo metodo di comunicazione è simile a due diverse applicazioni che si Conversano, tranne per il fatto che entrambi i thread sono in esecuzione nello stesso spazio di indirizzi.

Per ulteriori informazioni sulle mappe di handle, vedere la [Nota tecnica 3](../mfc/tn003-mapping-of-windows-handles-to-objects.md). Per ulteriori informazioni sull'archiviazione thread-local, vedere [archiviazione](/windows/win32/ProcThread/thread-local-storage) locale di thread e [utilizzo dell'archiviazione locale di thread](/windows/win32/ProcThread/using-thread-local-storage) nel Windows SDK.

## <a name="communicating-between-threads"></a><a name="_core_communicating_between_threads"></a> Comunicazione tra thread

MFC offre una serie di classi che consentono ai thread di sincronizzare l'accesso agli oggetti per mantenere thread safety. L'uso di queste classi è descritto in [multithreading: come usare le](multithreading-how-to-use-the-synchronization-classes.md) classi di sincronizzazione e il [multithreading: quando usare le classi di sincronizzazione](multithreading-when-to-use-the-synchronization-classes.md). Per ulteriori informazioni su questi oggetti, vedere la pagina relativa alla [sincronizzazione](/windows/win32/Sync/synchronization) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)
