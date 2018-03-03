---
title: 'Multithreading: Suggerimenti sulla programmazione | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 30ecf45c8a22dfb42917affa59152aeefbc35425
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="multithreading-programming-tips"></a>Multithreading: suggerimenti sulla programmazione
Applicazioni multithread richiedono maggiore attenzione rispetto alle applicazioni a thread singolo quando l'accesso ai dati. Perché sono presenti più indipendenti percorsi di esecuzione utilizzano contemporaneamente nelle applicazioni multithreading, gli algoritmi, i dati o entrambi deve essere compatibile con i dati potrebbero essere usate da più thread contemporaneamente. Questo argomento illustra le tecniche per evitare potenziali problemi durante la programmazione di applicazioni multithreading con la libreria di classe MFC (Microsoft Foundation).  
  
-   [Accesso agli oggetti da più thread](#_core_accessing_objects_from_multiple_threads)  
  
-   [Accesso agli oggetti MFC da thread Non MFC](#_core_accessing_mfc_objects_from_non.2d.mfc_threads)  
  
-   [Mappe di Handle di Windows](#_core_windows_handle_maps)  
  
-   [La comunicazione tra thread](#_core_communicating_between_threads)  
  
##  <a name="_core_accessing_objects_from_multiple_threads"></a>Accesso agli oggetti da più thread  
 Per motivi di prestazioni e dimensioni, oggetti MFC non sono thread-safe a livello di oggetto, solo a livello di classe. Ciò significa che è possibile avere due thread distinti due diversi `CString` gli oggetti, ma non da due thread lo stesso `CString` oggetto. Se è assolutamente necessario avere lo stesso oggetto di più thread, proteggere tale accesso con meccanismi di sincronizzazione di Win32 appropriate, ad esempio le sezioni critiche. Per ulteriori informazioni sulle sezioni critiche e altri oggetti correlati, vedere [sincronizzazione](http://msdn.microsoft.com/library/windows/desktop/ms686353) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
 La libreria di classi utilizza internamente le sezioni critiche per proteggere le strutture di dati globali, ad esempio quelli usati per l'allocazione di memoria di debug.  
  
##  <a name="_core_accessing_mfc_objects_from_non.2d.mfc_threads"></a>Accesso agli oggetti MFC da thread Non MFC  
 Se si dispone di un'applicazione multithreading viene creato un thread in modo diverso dall'utilizzo di un [CWinThread](../mfc/reference/cwinthread-class.md) dell'oggetto, è possibile accedere ad altri oggetti MFC da tale thread. In altre parole, se si desidera accedere a un oggetto MFC da un thread secondario, è necessario creare il thread con uno dei metodi descritti in [Multithreading: creazione di thread dell'interfaccia utente](../parallel/multithreading-creating-user-interface-threads.md) o [Multithreading: Creazione di thread di lavoro](../parallel/multithreading-creating-worker-threads.md). Questi metodi sono gli unici che consentono la libreria di classi inizializzare le variabili interne necessarie per gestire applicazioni multithreading.  
  
##  <a name="_core_windows_handle_maps"></a>Mappe di Handle di Windows  
 Come regola generale, un thread può accedere solo agli oggetti MFC che ha creato. In questo modo temporanee e permanente mappe di handle di Windows vengono conservate nell'archiviazione locale di thread per assicurare la protezione dall'accesso simultaneo da più thread. Ad esempio, un thread di lavoro non è possibile eseguire un calcolo e quindi chiamare un documento `UpdateAllViews` funzione membro di windows che contengono visualizzazioni dei nuovi dati modificati. Non produce alcun effetto, poiché la mappa da `CWnd` oggetti `HWND`s è locale per il thread principale. Ciò significa che un thread può disporre di un mapping da un handle di Windows a un oggetto C++, ma un altro thread può eseguire il mapping di tale stesso handle a un oggetto C++ diverso. Le modifiche apportate in un thread non risulteranno in altro.  
  
 Esistono diversi modi di risolvere il problema. Il primo consiste nel passare l'handle singoli (ad esempio un `HWND`) anziché oggetti C++ al thread di lavoro. Il thread di lavoro questi oggetti vengono aggiunti alla mappa temporanea chiamando il metodo appropriato `FromHandle` funzione membro. È anche possibile aggiungere l'oggetto alla mappa permanente del thread chiamando **collegamento**, ma questa operazione deve essere eseguita solo se è certi che l'oggetto esisterà più a lungo il thread.  
  
 Un altro metodo consiste nella creazione di nuovi messaggi definiti dall'utente corrispondenti alle diverse attività eseguite i thread di lavoro questi messaggi alla finestra principale dell'applicazione utilizzando **:: PostMessage**. Questo metodo di comunicazione è simile a due diverse applicazioni conversazione (conversing) ad eccezione del fatto che entrambi i thread sono in esecuzione nello stesso spazio di indirizzi.  
  
 Per ulteriori informazioni sulle mappe di handle, vedere [Note tecniche 3](../mfc/tn003-mapping-of-windows-handles-to-objects.md). Per ulteriori informazioni sull'archiviazione locale di thread, vedere [archiviazione Thread-Local](http://msdn.microsoft.com/library/windows/desktop/ms686749) e [Using Thread Local Storage](http://msdn.microsoft.com/library/windows/desktop/ms686991) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
##  <a name="_core_communicating_between_threads"></a>La comunicazione tra thread  
 MFC fornisce una serie di classi che consentono di thread sincronizzare l'accesso agli oggetti per gestire la sicurezza dei thread. Viene descritto l'utilizzo di queste classi in [Multithreading: utilizzo delle classi di sincronizzazione](../parallel/multithreading-how-to-use-the-synchronization-classes.md) e [Multithreading: quando utilizzare le classi di sincronizzazione](../parallel/multithreading-when-to-use-the-synchronization-classes.md). Per ulteriori informazioni su questi oggetti, vedere [sincronizzazione](http://msdn.microsoft.com/library/windows/desktop/ms686353) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)