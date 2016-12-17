---
title: "Multithreading: creazione di thread dell&#39;interfaccia utente | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CREATE_SUSPENDED"
  - "SECURITY_ATTRIBUTES"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "multithreading [C++], thread di interfaccia utente"
  - "threading [C++], creazione di thread"
  - "threading [C++], thread di interfaccia utente"
  - "threading [MFC], thread di interfaccia utente"
  - "interfaccia utente (thread) [C++]"
ms.assetid: 446925c1-db59-46ea-ae5b-d5ae5d5b91d8
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Multithreading: creazione di thread dell&#39;interfaccia utente
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I thread dell'interfaccia utente vengono in genere utilizzati per gestire gli input dell'utente e per rispondere a eventi utente, in modo indipendente dai thread che eseguono altre parti dell'applicazione.  Il thread principale dell'applicazione, fornito nella classe derivata da `CWinApp`, è già stato creato e avviato automaticamente.  In questo argomento vengono descritti i passaggi necessari per la creazione di thread dell'interfaccia utente aggiuntivi.  
  
 La prima operazione da eseguire durante la creazione di un thread dell'interfaccia utente consiste nel derivare una classe da [CWinThread](../../mfc/reference/cwinthread-class.md).  È necessario dichiarare e implementare questa classe utilizzando le macro [DECLARE\_DYNCREATE](../Topic/DECLARE_DYNCREATE.md) e [IMPLEMENT\_DYNCREATE](../Topic/IMPLEMENT_DYNCREATE.md).  L'override di alcune funzioni da parte della classe è obbligatorio, mentre quello di altre è facoltativo.  Nella tabella che segue sono indicate queste funzioni e il relativo funzionamento.  
  
### Funzioni da sottoporre a override durante la creazione di un thread dell'interfaccia utente  
  
|Funzione|Scopo|  
|--------------|-----------|  
|[ExitInstance](../Topic/CWinThread::ExitInstance.md)|Eseguire le operazioni di pulizia quando il thread termina.  Normalmente sottoposta a override.|  
|[InitInstance](../Topic/CWinThread::InitInstance.md)|Eseguire l'inizializzazione dell'istanza del thread.  Deve essere sottoposta a override.|  
|[OnIdle](../Topic/CWinThread::OnIdle.md)|Eseguire l'elaborazione in fase di inattività specifica del thread.  Generalmente non sottoposta a override.|  
|[PreTranslateMessage](../Topic/CWinThread::PreTranslateMessage.md)|Applicare un filtro ai messaggi prima che siano inviati a **TranslateMessage** e **DispatchMessage**.  Generalmente non sottoposta a override.|  
|[ProcessWndProcException](../Topic/CWinThread::ProcessWndProcException.md)|Intercettare le eccezioni non gestite generate dai gestori di comandi e messaggi del thread.  Generalmente non sottoposta a override.|  
|[Run](../Topic/CWinThread::Run.md)|Funzione di controllo per il thread.  Contiene il message pump.  Raramente sottoposta a override.|  
  
 MFC fornisce due versioni di `AfxBeginThread` tramite l'overload di parametri: una che può creare solo thread di lavoro e una che può creare thread di lavoro o thread di interfaccia utente.  Per avviare il thread dell'interfaccia utente, chiamare il secondo overload di [AfxBeginThread](../Topic/AfxBeginThread.md), specificando le informazioni che seguono:  
  
-   [RUNTIME\_CLASS](../Topic/RUNTIME_CLASS.md) della classe derivata da `CWinThread`.  
  
-   Il livello di priorità desiderato \(facoltativo\).  Il livello di priorità predefinito è normale.  Per ulteriori informazioni sui livelli di priorità disponibili, vedere [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) in [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
-   La dimensione dello stack desiderata per il thread \(facoltativo\).  Il valore predefinito corrisponde alla dimensione dello stack del thread di creazione.  
  
-   **CREATE\_SUSPENDED**, se si desidera che il thread sia creato in uno stato sospeso \(facoltativo\).  Il valore predefinito è 0, che corrisponde all'avvio normale del thread.  
  
-   Gli attributi di sicurezza desiderati \(facoltativo\).  L'accesso predefinito è identico a quello del thread padre.  Per ulteriori informazioni sul formato di queste informazioni sulla sicurezza, vedere [SECURITY\_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) in [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
 `AfxBeginThread` esegue automaticamente la maggior parte delle operazioni necessarie.  Viene creato un nuovo oggetto della classe e inizializzato con le informazioni specificate, quindi viene chiamato [CWinThread::CreateThread](../Topic/CWinThread::CreateThread.md) per avviare l'esecuzione del thread.  Nel corso della routine vengono effettuati controlli per assicurare che tutti gli oggetti siano resi disponibili in modo corretto, nell'eventualità che una parte della creazione non riuscisse.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Multithreading: terminazione dei thread](../../parallel/multithreading-terminating-threads.md)  
  
-   [Multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md)  
  
-   [\<caps:sentence id\="tgt49" sentenceid\="d446961ca833a037f83b141ec4859428" class\="tgtSentence"\>Processi e thread\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms684841)  
  
## Vedere anche  
 [Multithreading con C\+\+ e MFC](../../parallel/multithreading-with-cpp-and-mfc.md)