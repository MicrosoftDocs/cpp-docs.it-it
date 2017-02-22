---
title: "COleTemplateServer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleTemplateServer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Automation servers [C++], implementazione"
  - "COleTemplateServer class"
  - "link containers [C++]"
  - "OLE link containers"
  - "applicazioni server OLE, COleTemplateServer class"
  - "applicazioni server OLE, managing server documents"
  - "server, OLE"
  - "visual editing, server"
ms.assetid: 47a2887d-8162-4993-a842-a784177c7f5c
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# COleTemplateServer Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per i server di modifica visiva OLE, server di automazione e i contenitori di collegamento \(applicazioni che supportano collegamenti dei precedenti\).  
  
## Sintassi  
  
```  
class COleTemplateServer : public COleObjectFactory  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleTemplateServer::COleTemplateServer](../Topic/COleTemplateServer::COleTemplateServer.md)|Costruisce un oggetto `COleTemplateServer`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleTemplateServer::ConnectTemplate](../Topic/COleTemplateServer::ConnectTemplate.md)|Connette un modello di documento all'oggetto sottostante `COleObjectFactory`.|  
|[COleTemplateServer::Unregister](../Topic/COleTemplateServer::Unregister.md)|Annulla la registrazione del modello di documento collegato.|  
|[COleTemplateServer::UpdateRegistry](../Topic/COleTemplateServer::UpdateRegistry.md)|Registra il tipo di documento con Registro di sistema OLE.|  
  
## Note  
 Questa classe è derivata dalla classe [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md); in generale, è possibile utilizzare direttamente `COleTemplateServer` anziché derivando la classe personalizzata.  `COleTemplateServer` utilizza un oggetto [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) per gestire documenti server.  Utilizzare `COleTemplateServer` quando si distribuisce un server completo, ovvero, un server che può essere eseguito come applicazione autonoma.  I server vengono in genere applicazioni \(MDI\) dell'interfaccia a documenti multipli, sebbene le applicazioni di \(SDI\) di interfaccia a documento singolo sono supportate.  Di un oggetto `COleTemplateServer` è necessario per ogni tipo di documento server supportate da un'applicazione, ovvero se l'applicazione server supporta entrambi i fogli di lavoro e grafici, è necessario disporre di due oggetti `COleTemplateServer`.  
  
 `COleTemplateServer` esegue l'override della funzione membro `OnCreateInstance` definita da `COleObjectFactory`.  Questa funzione membro viene chiamata dal framework per creare l'oggetto C\+\+ del tipo appropriato.  
  
 Per ulteriori informazioni sui server, vedere l'articolo [server: Implementazione di un server](../../mfc/servers-implementing-a-server.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [COleObjectFactory](../../mfc/reference/coleobjectfactory-class.md)  
  
 `COleTemplateServer`  
  
## Requisiti  
 **Header:** afxdisp.h  
  
## Vedere anche  
 [Esempio HIERSVR MFC](../../top/visual-cpp-samples.md)   
 [COleObjectFactory Class](../../mfc/reference/coleobjectfactory-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleServerDoc Class](../../mfc/reference/coleserverdoc-class.md)   
 [COleServerItem Class](../../mfc/reference/coleserveritem-class.md)