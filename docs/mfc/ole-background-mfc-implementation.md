---
title: "Sfondo OLE: implementazione MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IMarshall"
  - "IMoniker"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IMarshall (classe)"
  - "IMoniker (interfaccia), MFC"
  - "MFC (librerie), implementazione"
  - "IMarshal (interfaccia) [OLE]"
  - "IMoniker (interfaccia) [OLE]"
  - "IUnknown [OLE]"
  - "OLE MFC (implementazione della libreria)"
  - "OLE, file compositi"
ms.assetid: 2b67016a-d78e-4d60-925f-c28ec8fb6180
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Sfondo OLE: implementazione MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

A causa della dimensione e della complessità delle API OLE non modificate, chiamarle direttamente per scrivere applicazioni OLE può essere molto dispendioso in termini di tempo.  L'obiettivo dell'implementazione di OLE da parte della Microsoft Foundation Class Library è di ridurre la quantità di lavoro necessaria a scrivere applicazioni complete compatibili con OLE.  
  
 Questo articolo illustra le parti delle API OLE che non sono state implementate all'interno di MFC.  La discussione illustra inoltre come avviene la mappatura tra le parti implementate e la sezione OLE di [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="_core_portions_of_ole_not_implemented_by_the_class_library"></a> Parti di OLE non implementate dalla libreria di classi  
 Alcune interfacce e alcune funzionalità OLE non sono fornite direttamente da MFC.  Se si desiderano utilizzare queste funzionalità, è possibile chiamare direttamente le API OLE.  
  
 Interfaccia IMoniker  
 L'interfaccia `IMoniker` viene implementata dalla libreria di classi \(ad esempio la classe di `COleServerItem` \) ma non è stata precedentemente esposta al programmatore.  Per ulteriori informazioni su questa interfaccia, vedere le implementazioni OLE di Moniker nella sezione OLE di [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  Tuttavia, vedere anche le classi [CMonikerFile](../mfc/reference/cmonikerfile-class.md) e [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md).  
  
 Interfacce IUnknown e IMarshal  
 L'interfaccia **IUnknown** viene implementata dalla libreria di classi ma non viene esposta al programmatore.  L'interfaccia **IMarshal** non viene implementata dalla libreria di classi ma è utilizzata internamente.  I server di automazione costruiti utilizzando la libreria di classi includono già le funzionalità di marshalling incorporate.  
  
 Docfiles \(file compositi\)  
 I file compositi sono parzialmente supportati dalla libreria di classi.  Non è supportata nessuna delle funzioni che modificano direttamente i file compositi oltre la creazione.  MFC utilizza la classe **COleFileStream** per supportare la modifica dei flussi con le funzioni di file standard.  Per ulteriori informazioni, vedere l'articolo [Contenitori: File compositi](../mfc/containers-compound-files.md).  
  
 Server in\-process e gestori di oggetti  
 I server in\-process e gestori di oggetti consentono l'implementazione dei dati di modifica visiva o degli oggetti completi Component Object Model \(COM\) in una libreria a collegamento dinamico \(DLL\).  A tale scopo, è possibile implementare la propria DLL chiamando direttamente le API OLE.  Tuttavia, se si scrive un server di automazione che non dispone di interfaccia utente, è possibile utilizzare AppWizard per trasformarlo in un server in\-process e inserirlo completamente in una DLL.  Per ulteriori informazioni su questi argomenti, vedere [Server di automazione](../mfc/automation-servers.md).  
  
> [!TIP]
>  Il modo più semplice per implementare un server di automazione è di inserirlo in una DLL.  MFC supporta questo approccio.  
  
 Per ulteriori informazioni su come le classi OLE Microsoft Foundation implementano le interfacce OLE, vedere le note tecniche MFC [38](../mfc/tn038-mfc-ole-iunknown-implementation.md), [39](../mfc/tn039-mfc-ole-automation-implementation.md) e [40](../mfc/tn040-mfc-ole-in-place-resizing-and-zooming.md).  
  
## Vedere anche  
 [Sfondo OLE](../mfc/ole-background.md)   
 [Sfondo OLE: strategie di implementazione](../mfc/ole-background-implementation-strategies.md)