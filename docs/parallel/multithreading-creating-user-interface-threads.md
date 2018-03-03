---
title: 'Multithreading: Creazione di thread dell''interfaccia utente | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CREATE_SUSPENDED
- SECURITY_ATTRIBUTES
dev_langs:
- C++
helpviewer_keywords:
- multithreading [C++], user interface threads
- threading [C++], creating threads
- threading [C++], user interface threads
- user interface threads [C++]
- threading [MFC], user interface threads
ms.assetid: 446925c1-db59-46ea-ae5b-d5ae5d5b91d8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 105685e0db4689978ef1e6f8615bb5e5f8acdd43
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="multithreading-creating-user-interface-threads"></a>Multithreading: creazione di thread dell'interfaccia utente
Un thread dell'interfaccia utente è in genere utilizzati per gestire l'input dell'utente e rispondere agli eventi utente in modo indipendente da thread in esecuzione altre parti dell'applicazione. Il thread principale dell'applicazione (disponibile nel `CWinApp`-classe derivata) è già stato creato e avviato automaticamente. Questo argomento descrive i passaggi necessari per creare thread aggiuntivi dell'interfaccia utente.  
  
 La prima cosa da eseguire durante la creazione di un thread dell'interfaccia utente è una classe derivata da [CWinThread](../mfc/reference/cwinthread-class.md). È necessario dichiarare e implementare questa classe, utilizzando il [DECLARE_DYNCREATE](../mfc/reference/run-time-object-model-services.md#declare_dyncreate) e [IMPLEMENT_DYNCREATE](../mfc/reference/run-time-object-model-services.md#implement_dyncreate) macro. Questa classe è necessario eseguire l'override di alcune funzioni e può eseguire l'override di altri utenti. Nella tabella seguente vengono presentate queste funzioni e che deve essere eseguita.  
  
### <a name="functions-to-override-when-creating-a-user-interface-thread"></a>Funzioni per eseguire l'Override durante la creazione di un Thread dell'interfaccia utente  
  
|Funzione|Scopo|  
|--------------|-------------|  

|[ExitInstance](../mfc/reference/cwinthread-class.md#exitinstance)| Eseguire la pulizia quando termina il thread. In genere sottoposto a override. |  
|[InitInstance](../mfc/reference/cwinthread-class.md#initinstance)| Eseguire l'inizializzazione dell'istanza di thread. Deve essere sottoposto a override. |  
|[OnIdle](../mfc/reference/cwinthread-class.md#onidle)| Eseguire l'elaborazione di tempo di inattività specifico del thread. In genere non viene sottoposto a override. |  
|[PreTranslateMessage](../mfc/reference/cwinthread-class.md#pretranslatemessage)| Filtrare i messaggi prima che vengano inviati a **TranslateMessage** e **DispatchMessage**. In genere non viene sottoposto a override. |  
|[ProcessWndProcException](../mfc/reference/cwinthread-class.md#processwndprocexception)| Intercettare le eccezioni non gestite generate da gestori di messaggi e comandi del thread. In genere non viene sottoposto a override. |  
|[Eseguire](../mfc/reference/cwinthread-class.md#run)| Funzione di controllo per il thread. Contiene il message pump. Raramente sottoposta a override. |  

  
 MFC fornisce due versioni di `AfxBeginThread` tramite l'overload di parametri: una che può creare solo thread di lavoro e una che può creare thread di lavoro o thread di interfaccia utente. Per avviare il thread dell'interfaccia utente, chiamare il secondo overload del [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), fornendo le informazioni seguenti:  
  
-   Il [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) della classe derivata da `CWinThread`.  
  
-   (Facoltativo) Il livello di priorità desiderato. Il valore predefinito è la priorità normale. Per ulteriori informazioni sui livelli di priorità disponibili, vedere [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
-   (Facoltativo) Dimensione stack desiderato per il thread. Il valore predefinito è il dimensione stack del thread di creazione.  
  
-   (Facoltativo) **CREATE_SUSPENDED** se si desidera che il thread deve essere creato in uno stato sospeso. Il valore predefinito è 0 o avvia normalmente il thread.  
  
-   (Facoltativo) Gli attributi di sicurezza desiderato. Il valore predefinito è lo stesso accesso del thread padre. Per ulteriori informazioni sul formato di queste informazioni di sicurezza, vedere [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
 `AfxBeginThread`la maggior parte del lavoro per l'utente. Viene creato un nuovo oggetto della classe e la inizializza con le informazioni fornite e viene chiamato [CWinThread:: CreateThread](../mfc/reference/cwinthread-class.md#createthread) per avviare l'esecuzione del thread. Nel corso della routine vengono effettuati controlli per assicurarsi che tutti gli oggetti vengono deallocati correttamente deve avere esito negativo qualsiasi parte della creazione.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Multithreading: terminazione dei thread](../parallel/multithreading-terminating-threads.md)  
  
-   [Multithreading: creazione di thread di lavoro](../parallel/multithreading-creating-worker-threads.md)  
  
-   [Processi e thread](http://msdn.microsoft.com/library/windows/desktop/ms684841)  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)