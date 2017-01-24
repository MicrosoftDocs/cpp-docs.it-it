---
title: "Multithreading: suggerimenti sulla programmazione | Microsoft Docs"
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
  - "controllo di accesso [C++], multithreading"
  - "comunicazioni [C++], tra thread"
  - "sezioni critiche [C++]"
  - "mappe di handle [C++]"
  - "multithreading [C++], suggerimenti per la programmazione"
  - "thread non MFC [C++]"
  - "oggetti [C++], thread multipli"
  - "programmazione [C++], multithreading"
  - "sincronizzazione [C++], multithreading"
  - "threading [C++], procedure ottimali"
  - "threading [MFC], suggerimenti per la programmazione"
  - "risoluzione dei problemi [C++], multithreading"
  - "Windows (mappe di handle) [C++]"
ms.assetid: ad14cc70-c91c-4c24-942f-13a75e58bf8a
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Multithreading: suggerimenti sulla programmazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le applicazioni multithread richiedono una maggiore attenzione rispetto alle applicazioni a thread singolo durante l'accesso ai dati.  Poiché nelle applicazioni multithread vengono utilizzati contemporaneamente più percorsi di esecuzione indipendenti, è necessario che sia per gli algoritmi che per i dati si tenga presente che le informazioni potrebbero essere utilizzate da più thread simultaneamente.  In questo argomento vengono descritte le tecniche per evitare potenziali problemi nella programmazione di applicazioni multithread con la libreria MFC.  
  
-   [Accesso agli oggetti da più thread](#_core_accessing_objects_from_multiple_threads)  
  
-   [Accesso agli oggetti MFC da thread non MFC](#_core_accessing_mfc_objects_from_non.2d.mfc_threads)  
  
-   [Mappe degli handle di Windows](#_core_windows_handle_maps)  
  
-   [Comunicazione tra i thread](#_core_communicating_between_threads)  
  
##  <a name="_core_accessing_objects_from_multiple_threads"></a> Accesso agli oggetti da più thread  
 Per ragioni di dimensioni e prestazioni, gli oggetti MFC non sono thread\-safe a livello di oggetto, ma solo a livello di classe.  Questo significa che è possibile che vi siano due diversi oggetti `CString` modificati da due thread distinti, ma non lo stesso oggetto `CString` modificato da due thread.  Se è assolutamente necessaria la presenza di più thread per la gestione dello stesso oggetto, si consiglia di proteggerne l'accesso attraverso i corretti meccanismi di sincronizzazione di Win32, come le sezioni critiche.  Per ulteriori informazioni sulle sezioni critiche e altri oggetti correlati, vedere [Synchronization](http://msdn.microsoft.com/library/windows/desktop/ms686353) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  
  
 Le sezioni critiche vengono utilizzate internamente dalla libreria di classi per proteggere le strutture globali di dati, come quelle utilizzate dall'assegnazione della memoria di debug.  
  
##  <a name="_core_accessing_mfc_objects_from_non.2d.mfc_threads"></a> Accesso agli oggetti MFC da thread non MFC  
 Se in un'applicazione multithread viene creato un thread in modo diverso dall'utilizzo di un oggetto [CWinThread](../mfc/reference/cwinthread-class.md), da tale thread non sarà possibile accedere ad altri oggetti MFC.  In altre parole, se si desidera accedere a un oggetto MFC da un thread secondario, è necessario creare quel thread utilizzando uno dei metodi descritti in [Multithreading: creazione di thread dell'interfaccia utente](../parallel/multithreading-creating-user-interface-threads.md) o [Multithreading: creazione di thread di lavoro](../parallel/multithreading-creating-worker-threads.md).  Questi metodi sono gli unici che consentono alla libreria di classi di inizializzare le variabili interne necessarie per gestire le applicazioni multithread.  
  
##  <a name="_core_windows_handle_maps"></a> Mappe degli handle di Windows  
 Come regola generale, un thread può accedere solo agli oggetti MFC che ha creato.  Le mappe temporanee e permanenti degli handle di Windows infatti sono conservate nella memoria locale dei thread per assicurare la protezione dall'accesso simultaneo da parte di più thread.  Non è possibile, ad esempio, eseguire un calcolo e quindi chiamare la funzione membro `UpdateAllViews` di un documento da un thread di lavoro per modificare le finestre che contengono visualizzazioni dei nuovi dati modificati.  Questa operazione non avrà alcun effetto, in quanto la mappa proveniente dagli oggetti `CWnd` agli oggetti `HWND` è locale rispetto al thread primario.  Un thread può pertanto includere un'associazione da un handle di Windows a un oggetto C\+\+, ma lo stesso handle potrebbe essere associato da un altro thread a un diverso oggetto C\+\+.  Le modifiche apportate a un thread non verranno trasmesse all'altro.  
  
 Esistono diverse soluzioni per questo problema.  La prima consiste nel passare al thread di lavoro handle singoli, come `HWND`, anziché oggetti C\+\+.  Questi oggetti vengono aggiunti alla mappa temporanea del thread di lavoro chiamando la funzione membro `FromHandle` appropriata.  È inoltre possibile aggiungere l'oggetto alla mappa permanente del thread chiamando **Attach**, ma questa operazione è consigliabile solo se si è certi che l'oggetto avrà durata superiore a quella del thread.  
  
 Un altro metodo consiste nella creazione di nuovi messaggi definiti dall'utente, corrispondenti alle diverse attività eseguite dal thread di lavoro, che verranno inviati alla finestra principale dell'applicazione utilizzando **::PostMessage**.  Questo metodo di comunicazione è simile al dialogo tra due diverse applicazioni, con la differenza che entrambi i thread sono in esecuzione nello stesso spazio degli indirizzi.  
  
 Per ulteriori informazioni sulle mappe degli handle, vedere [Note tecniche 3](../mfc/tn003-mapping-of-windows-handles-to-objects.md).  Per ulteriori informazioni sull'archiviazione locale di thread, vedere [Thread Local Storage](http://msdn.microsoft.com/library/windows/desktop/ms686749), e [Using Thread Local Storage](http://msdn.microsoft.com/library/windows/desktop/ms686991) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  
  
##  <a name="_core_communicating_between_threads"></a> Comunicazione tra i thread  
 MFC include alcune classi che consentono ai thread di sincronizzare l'accesso agli oggetti in modo da mantenerli indipendenti dai thread.  L'utilizzo di queste classi è illustrato in [Multithreading: utilizzo delle classi di sincronizzazione](../parallel/multithreading-how-to-use-the-synchronization-classes.md) e [Multithreading: quando utilizzare le classi di sincronizzazione](../parallel/multithreading-when-to-use-the-synchronization-classes.md).  Per ulteriori informazioni su questi oggetti, vedere [Synchronization](http://msdn.microsoft.com/library/windows/desktop/ms686353) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  
  
## Vedere anche  
 [Multithreading con C\+\+ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)