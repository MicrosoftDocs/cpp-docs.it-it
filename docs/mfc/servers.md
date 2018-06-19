---
title: Server | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE server applications [MFC]
- OLE server applications [MFC], activation
- full-server
- servers
- mini-server
- OLE server applications [MFC], server types
- server applications [MFC]
ms.assetid: e45172e8-eae3-400a-8139-0fa009a42fdc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7d153d73889520deaff12b64da36567a8b9a4087
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33381779"
---
# <a name="servers"></a>Server
Un'applicazione server (o l'applicazione componente) Crea OLE elementi (o componenti) per l'utilizzo da applicazioni contenitore. Un'applicazione server di modifica visiva supporta anche la modifica visiva o l'attivazione sul posto. Un altro tipo di server OLE è un [server di automazione](../mfc/automation-servers.md). Alcune applicazioni server supportano solo la creazione di elementi incorporati; altri supportano la creazione di elementi collegati e incorporati. Alcuni browser supportano il collegamento solo, sebbene sia raro. Tutte le applicazioni server devono supportare l'attivazione dalle applicazioni contenitore quando l'utente desidera modificare un elemento. Un'applicazione può essere sia un contenitore e un server. In altre parole, possono incorporare i dati all'interno dei documenti e creare dati che possono essere incorporati come elementi in documenti di altre applicazioni.  
  
 Un server ridotto è un tipo speciale di applicazione server che può essere avviata solo da un contenitore. Draw Microsoft e Microsoft Graph sono esempi di server ridotti. Un server ridotto documenti non vengono archiviati come file su disco. Ma legge i documenti da e li scrive in elementi di documenti che appartengono a contenitori. Di conseguenza, un server ridotto supporta solo l'incorporamento, non il collegamento.  
  
 Un server completo può essere eseguito come applicazione autonoma o avviato da un'applicazione contenitore. Un server completo può archiviare i documenti come file su disco. Può supportare solo l'incorporamento, l'incorporamento e di collegamento o solo il collegamento. L'utente di un'applicazione contenitore può creare un elemento incorporato scegliendo il comando Taglia o copia nel server e il comando Incolla nel contenitore. Scegliendo il comando copia nel server e il comando Incolla collegamento nel contenitore, viene creato un elemento collegato. In alternativa, l'utente può creare un elemento incorporato o collegato utilizzando la finestra di dialogo Inserisci oggetto.  
  
 Nella tabella seguente vengono riepilogate le caratteristiche dei diversi tipi di server:  
  
### <a name="server-characteristics"></a>Caratteristiche del server  
  
|Tipo di server|Supporta più istanze|Elementi per ogni documento|Documenti per ogni istanza|  
|--------------------|---------------------------------|------------------------|----------------------------|  
|Server ridotto|Yes|1|1|  
|Server completo SDI|Yes|1 (se è supportato il collegamento, 1 o più)|1|  
|Server completo MDI|No (non obbligatorio)|1 (se è supportato il collegamento, 1 o più)|0 o più|  
  
 Un'applicazione server deve supportare più contenitori contemporaneamente, nel caso in cui verrà utilizzato più di un contenitore per modificare un elemento incorporato o collegato. Se il server è un'applicazione SDI (o un server ridotto con un'interfaccia di casella della finestra di dialogo), è possibile che più istanze del server devono essere in grado di eseguire contemporaneamente. In questo modo un'istanza separata dell'applicazione per gestire ogni richiesta del contenitore.  
  
 Se il server è un'applicazione MDI, è possibile creare una nuova finestra figlio MDI ogni volta che è un contenitore per modificare un elemento. In questo modo, una singola istanza dell'applicazione può supportare più contenitori.  
  
 Necessario indicare le DLL di sistema OLE cosa fare se un'istanza del server è già in esecuzione quando un altro contenitore richiede i servizi: se è necessario avviare una nuova istanza del server o indirizzare le richieste di tutti i contenitori a un'istanza del Server.  
  
 Per ulteriori informazioni sui server, vedere:  
  
-   [Server: implementazione di un server](../mfc/servers-implementing-a-server.md)  
  
-   [Server: implementazione di documenti server](../mfc/servers-implementing-server-documents.md)  
  
-   [Server: implementazione di finestre cornice sul posto](../mfc/servers-implementing-in-place-frame-windows.md)  
  
-   [Server: elementi server](../mfc/servers-server-items.md)  
  
-   [Server: problemi dell'interfaccia utente](../mfc/servers-user-interface-issues.md)  
  
## <a name="see-also"></a>Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Contenitori](../mfc/containers.md)   
 [Contenitori: Funzionalità avanzate](../mfc/containers-advanced-features.md)   
 [Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)   
 [Registrazione](../mfc/registration.md)   
 [Server di automazione](../mfc/automation-servers.md)

