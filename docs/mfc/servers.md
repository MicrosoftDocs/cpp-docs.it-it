---
title: "Server | Microsoft Docs"
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
  - "server completo"
  - "server ridotto"
  - "applicazioni server OLE"
  - "applicazioni server OLE, attivazione"
  - "applicazioni server OLE, tipi di server"
  - "applicazioni server"
  - "server"
ms.assetid: e45172e8-eae3-400a-8139-0fa009a42fdc
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Server
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'applicazione server \(o applicazione del componente\) crea elementi OLE \(o componenti\) che verrà utilizzata dalle applicazioni contenitori.  Un'applicazione server di modifica visiva supporta inoltre la modifica visiva o l'attivazione sul posto.  Un altro form del server OLE è [server di automazione](../mfc/automation-servers.md).  Alcune applicazioni server supportano solo la creazione degli elementi incorporati; altri supportano la creazione di sia incorporato degli elementi collegati.  Alcuni supportano solo il collegamento, sebbene sia comune.  Tutte le applicazioni server devono supportare l'attivazione dalle applicazioni contenitori quando l'utente desidera modificare un elemento.  Un'applicazione può essere sia da un server.  Ovvero può includere sia i dati nei documenti che crea dati che possono essere interpretati come elementi nei documenti di altre applicazioni.  
  
 Un miniserver è un tipo speciale di un'applicazione server che può essere avviato solo da un contenitore.  Microsoft personalizzato e Microsoft Graph sono esempi di miniservers.  Un miniserver non memorizza i documenti come file su disco.  Invece, leggere i documenti da e li scrive agli elementi nei documenti che appartengono ai contenitori.  Pertanto, un miniserver supporta l'incorporazione, non solo il collegamento.  
  
 Un server completo può essere eseguito come applicazione autonoma o essere avviato da un'applicazione contenitore.  Un server completo è possibile archiviare i documenti come file su disco.  Può supportare solo incorporare, sia incorporando che il collegamento, o il collegamento solo.  L'utente di un'applicazione contenitore può creare un elemento incorporato scegliendo taglia o il comando di copia nel server e nel comando Incolla nel contenitore.  Un elemento collegato è creato scegliendo il comando di copia nel server e nel comando link incolla nel contenitore.  In alternativa, è possibile creare un incorporato o un elemento collegato mediante la finestra di dialogo insert new object.  
  
 Nella tabella seguente vengono riepilogate le caratteristiche dei tipi diversi di server:  
  
### Caratteristiche server  
  
|Tipo di server|Supporta più istanze|Elementi di documento|Documenti per istanza|  
|--------------------|--------------------------|---------------------------|---------------------------|  
|Miniserver|Yes|1|1|  
|Server completo SDI|Yes|1 \(se il collegamento è supportato, 1 o più\)|1|  
|Server completo MDI|No \(non obbligatorio\)|1 \(se il collegamento è supportato, 1 o più\)|0 o versioni|  
  
 Un'applicazione server deve supportare contemporaneamente più contenitori, nel caso in cui più di un contenitore verranno utilizzate per modificare un incorporato o un elemento collegato.  Se il server è un'applicazione SDI \(o un miniserver con un'interfaccia della finestra di dialogo, è più istanze del server siano in grado di funzionare simultaneamente.  In questo modo un'istanza separata dell'applicazione di gestire ogni richiesta del contenitore.  
  
 Se il server è un'applicazione MDI, può creare una nuova finestra figlio MDI ogni volta che un contenitore deve modificare un elemento.  In questo modo, una singola istanza dell'applicazione può supportare più contenitori.  
  
 L'applicazione server deve comunicare alle DLL di sistema OLE come procedere nel caso un'istanza del server è già in esecuzione quando un altro contenitore richiede i servizi: se dovrà avviare una nuova istanza di server o indirizzare le richieste di tutti i contenitori a un'istanza del server.  
  
 Per ulteriori informazioni sui server, vedere:  
  
-   [Server: implementazione di un server](../mfc/servers-implementing-a-server.md)  
  
-   [Server: Implementare i documenti server](../mfc/servers-implementing-server-documents.md)  
  
-   [Server: Implementare le finestre cornici sul posto](../mfc/servers-implementing-in-place-frame-windows.md)  
  
-   [Server: Elementi server](../mfc/servers-server-items.md)  
  
-   [Server: Problemi dell'interfaccia utente](../mfc/servers-user-interface-issues.md)  
  
## Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Contenitori](../mfc/containers.md)   
 [Contenitori: funzionalità avanzate](../mfc/containers-advanced-features.md)   
 [Menu e risorse \(OLE\)](../mfc/menus-and-resources-ole.md)   
 [Registrazione](../mfc/registration.md)   
 [Server di automazione](../mfc/automation-servers.md)