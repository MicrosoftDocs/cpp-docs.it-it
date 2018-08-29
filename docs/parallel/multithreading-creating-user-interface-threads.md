---
title: "Multithreading: Creazione di thread dell'interfaccia utente MFC | Microsoft Docs"
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-parallel
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 625518a76bb22c60a41175e649af7ae650161494
ms.sourcegitcommit: f7703076b850c717c33d72fb0755fbb2215c5ddc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/28/2018
ms.locfileid: "43131560"
---
# <a name="multithreading-creating-mfc-user-interface-threads"></a>Multithreading: Creazione di thread dell'interfaccia utente MFC
Un thread dell'interfaccia utente viene comunemente utilizzato per gestire l'input dell'utente e rispondere agli eventi utente indipendentemente dal thread in esecuzione altre parti dell'applicazione. Il thread principale dell'applicazione (forniti nel `CWinApp`-classe derivata) è già stato creato e avviato automaticamente. Questo argomento descrive i passaggi necessari per creare thread aggiuntivi dell'interfaccia utente.  
  
La prima cosa è necessario eseguire durante la creazione di un thread dell'interfaccia utente è una classe derivata da [CWinThread](../mfc/reference/cwinthread-class.md). È necessario dichiarare e implementare questa classe mediante il [DECLARE_DYNCREATE](../mfc/reference/run-time-object-model-services.md#declare_dyncreate) e [IMPLEMENT_DYNCREATE](../mfc/reference/run-time-object-model-services.md#implement_dyncreate) macro. Questa classe deve eseguire l'override di alcune funzioni e può eseguire l'override di altri utenti. Queste funzioni e ciò che devono effettuare vengono presentati nella tabella seguente.  
  
### <a name="functions-to-override-when-creating-a-user-interface-thread"></a>Funzioni per eseguire l'Override quando si crea un Thread dell'interfaccia utente  
  
|Funzione|Scopo|  
|--------------|-------------|  
|[ExitInstance](../mfc/reference/cwinthread-class.md#exitinstance)|Eseguire la pulizia al termine di thread. In genere viene sottoposto a override.|  
|[InitInstance](../mfc/reference/cwinthread-class.md#initinstance)|Eseguire l'inizializzazione dell'istanza di thread. Deve essere sottoposto a override.|  
|[OnIdle](../mfc/reference/cwinthread-class.md#onidle)|Eseguire l'elaborazione di tempo di inattività specifico del thread. In genere non viene sottoposto a override.|  
|[PreTranslateMessage](../mfc/reference/cwinthread-class.md#pretranslatemessage)|Filtrare i messaggi prima che vengano inviati alle `TranslateMessage` e `DispatchMessage`. In genere non viene sottoposto a override.|  
|[ProcessWndProcException](../mfc/reference/cwinthread-class.md#processwndprocexception)|Intercettare le eccezioni non gestite generate da gestori di messaggi e comandi del thread. In genere non viene sottoposto a override.|  
|[Run](../mfc/reference/cwinthread-class.md#run)|Funzione di controllo per il thread. Contiene il message pump. Raramente sottoposto a override.|  

  
MFC fornisce due versioni di `AfxBeginThread` tramite l'overload di parametri: una che può creare solo thread di lavoro e una che può creare thread di lavoro o thread di interfaccia utente. Per avviare il thread dell'interfaccia utente, chiamare il secondo overload del [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), fornendo le informazioni seguenti:  
  
- Il [RUNTIME_CLASS](../mfc/reference/run-time-object-model-services.md#runtime_class) della classe è derivata da `CWinThread`.  
  
- (Facoltativo) Il livello di priorità desiderata. Il valore predefinito è la priorità normale. Per altre informazioni sui livelli di priorità disponibili, vedere [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) nel SDK di Windows.  
  
- (Facoltativo) La dimensione dello stack desiderata per il thread. Il valore predefinito è il dimensione stack del thread di creazione.  
  
- (Facoltativo) CREATE_SUSPENDED se si desidera che il thread deve essere creato in uno stato sospeso. Il valore predefinito è 0, o avvia normalmente il thread.  
  
- (Facoltativo) Gli attributi di sicurezza desiderato. Il valore predefinito è lo stesso accesso del thread padre. Per altre informazioni sul formato di queste informazioni di sicurezza, vedere [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) nel SDK di Windows.  
  
`AfxBeginThread` esegue la maggior parte del lavoro per l'utente. Viene creato un nuovo oggetto della classe e viene inizializzato con le informazioni fornite e chiama [CWinThread:: CreateThread](../mfc/reference/cwinthread-class.md#createthread) per avviare l'esecuzione del thread. Nel corso della routine vengono effettuati controlli per assicurarsi che tutti gli oggetti vengono deallocati in modo corretto deve avere esito negativo qualsiasi parte della creazione.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
- [Multithreading: terminazione dei thread](multithreading-terminating-threads.md)  
  
- [Multithreading: creazione di thread di lavoro](multithreading-creating-worker-threads.md)  
  
- [Processi e thread](/windows/desktop/ProcThread/processes-and-threads)  
  
## <a name="see-also"></a>Vedere anche  
 
[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)