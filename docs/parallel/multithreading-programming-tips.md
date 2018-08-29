---
title: 'Multithreading: Suggerimenti sulla programmazione MFC | Microsoft Docs'
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 28446576fefe52dfaa99b69ae410a87424e28e3b
ms.sourcegitcommit: f7703076b850c717c33d72fb0755fbb2215c5ddc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/28/2018
ms.locfileid: "43132038"
---
# <a name="multithreading-mfc-programming-tips"></a>Multithreading: Suggerimenti sulla programmazione MFC
Applicazioni multithread richiedono maggiore attenzione rispetto delle applicazioni a thread singolo per garantire che le operazioni si verificano nell'ordine previsto e tutti i dati a cui accedono più thread non sia danneggiati. Questo argomento illustra le tecniche per evitare potenziali problemi durante la programmazione di applicazioni multithreading con la libreria di classi MFC (Microsoft Foundation).  
  
- [Accesso agli oggetti da più thread](#_core_accessing_objects_from_multiple_threads)  
  
- [Accesso agli oggetti MFC da thread Non MFC](#_core_accessing_mfc_objects_from_non.2d.mfc_threads)  
  
- [Mappe di Handle di Windows](#_core_windows_handle_maps)  
  
- [Comunicazione tra thread](#_core_communicating_between_threads)  
  
##  <a name="_core_accessing_objects_from_multiple_threads"></a> Accesso agli oggetti da più thread  
 
Oggetti MFC non sono thread-safe da soli. Due thread separati non possono modificare lo stesso oggetto se non si utilizzano le classi di sincronizzazione di MFC e/o gli oggetti di sincronizzazione Win32 appropriati, ad esempio le sezioni critiche. Per altre informazioni sulle sezioni critiche e altri oggetti correlati, vedere [sincronizzazione](/windows/desktop/Sync/synchronization) nel SDK di Windows.  
  
La libreria di classi Usa internamente le sezioni critiche per proteggere le strutture di dati globali, ad esempio quelle usate per l'allocazione di memoria di debug.  
  
##  <a name="_core_accessing_mfc_objects_from_non.2d.mfc_threads"></a> Accesso agli oggetti MFC da thread Non MFC  
 
Se si dispone di un'applicazione multithreading che crea un thread in modo diverso dall'utilizzo di un [CWinThread](../mfc/reference/cwinthread-class.md) dell'oggetto, è possibile accedere ad altri oggetti MFC da tale thread. In altre parole, se si desidera accedere a qualsiasi oggetto MFC da un thread secondario, è necessario creare thread con uno dei metodi descritti in [Multithreading: creazione di thread dell'interfaccia utente](multithreading-creating-user-interface-threads.md) o [Multithreading: Creazione di thread di lavoro](multithreading-creating-worker-threads.md). Questi metodi sono gli unici che consentono la libreria di classi inizializzare le variabili interne necessarie per gestire le applicazioni a thread multipli.  
  
##  <a name="_core_windows_handle_maps"></a> Mappe di Handle di Windows  
 
Come regola generale, un thread può accedere solo agli oggetti MFC che ha creato. Questo avviene perché temporanee o permanenti e mappe di handle di Windows vengono conservate nell'archiviazione thread-local per assicurare la protezione dall'accesso simultaneo da più thread. Ad esempio, un thread di lavoro non è possibile eseguire un calcolo e quindi chiamare un documento `UpdateAllViews` funzione membro per disporre le finestre che contengono visualizzazioni dei nuovi dati modificati. Ciò non ha effetto, poiché la mappa da `CWnd` oggetti HWND è locale rispetto al thread primario. Ciò significa che un thread potrebbe disporre di un mapping da un handle Windows per un oggetto C++, ma un altro thread può eseguire il mapping di tale stesso handle a un oggetto C++ diverso. Le modifiche apportate in un thread non risulteranno in altro.  
  
Esistono diversi modi di evitare questo problema. Il primo consiste nel passare singoli handle (ad esempio, un oggetto HWND) piuttosto che oggetti C++ nel thread di lavoro. Il thread di lavoro questi oggetti vengono aggiunti alla mappa temporanea chiamando appropriato `FromHandle` funzione membro. È anche possibile aggiungere l'oggetto mappa permanente del thread chiamando `Attach`, ma questa operazione solo se si è certi che l'oggetto esisteranno più rispetto al thread.  
  
Un altro metodo consiste nella creazione di nuovi messaggi definiti dall'utente corrispondenti alle diverse attività eseguite i thread di lavoro questi messaggi alla finestra principale dell'applicazione usando `::PostMessage`. Questo metodo di comunicazione è simile a due applicazioni diverse in conversazione con la differenza che entrambi i thread sono in esecuzione nello stesso spazio di indirizzi.  
  
Per altre informazioni sulle mappe di handle, vedere [tecnica nota 3](../mfc/tn003-mapping-of-windows-handles-to-objects.md). Per altre informazioni sull'archiviazione thread-local, vedere [Thread Local Storage](/windows/desktop/ProcThread/thread-local-storage) e [usando archiviazione Thread-Local](/windows/desktop/ProcThread/using-thread-local-storage) nel SDK di Windows.  
  
##  <a name="_core_communicating_between_threads"></a> Comunicazione tra thread  
 
MFC fornisce una serie di classi che consentono ai thread sincronizzare l'accesso agli oggetti per gestire la sicurezza dei thread. Uso di queste classi è descritto nella [Multithreading: come usare le classi di sincronizzazione](multithreading-how-to-use-the-synchronization-classes.md) e [Multithreading: quando usare le classi di sincronizzazione](multithreading-when-to-use-the-synchronization-classes.md). Per altre informazioni su questi oggetti, vedere [sincronizzazione](/windows/desktop/Sync/synchronization) nel SDK di Windows.  
  
## <a name="see-also"></a>Vedere anche  

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)