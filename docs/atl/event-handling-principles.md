---
title: "Event Handling Principles | Microsoft Docs"
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
  - "interfacce duali, event interfaces"
  - "gestione eventi, advising event sources"
  - "gestione eventi, dual event interfaces"
  - "gestione eventi, implementazione"
  - "interfacce, event and event sink"
ms.assetid: d17ca7cb-54f2-4658-ab8b-b721ac56801d
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Event Handling Principles
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono tre passaggi comuni a qualsiasi gestione degli eventi.  Sarà necessario:  
  
-   Implementare l'interfaccia eventi sull'oggetto.  
  
-   Consigli origine evento che l'oggetto desidera ricevere gli eventi.  
  
-   Unadvise origine evento quando l'oggetto non ha più ricevere eventi.  
  
 La modalità di implementare l'interfaccia eventi dipende dal tipo.  Un'interfaccia eventi può essere vtable, double, o un'interfaccia dispatch.  È compito della finestra di progettazione dell'origine per definire l'interfaccia; è responsabilità per implementare tale interfaccia.  
  
> [!NOTE]
>  Sebbene non siano tecniche motivi per cui un'interfaccia eventi non può essere suddivisa, sono disponibili numerosi buone ragioni di progettazione evitare l'utilizzo di dual.  Tuttavia, questa viene presa una decisione dalla finestra di progettazione\/implementatore dell'origine evento.  Poiché si lavora dal punto di vista dell'evento `sink`, è necessario consentire la possibilità che non può essere una scelta ma implementare un'interfaccia eventi doppia.  Per ulteriori informazioni sulle interfacce duali, vedere [interfacce duali e ATL](../atl/dual-interfaces-and-atl.md).  
  
 Ha origine evento può essere suddiviso in tre passaggi:  
  
-   Eseguire una query l'oggetto di origine per [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857).  
  
-   Chiamare [IConnectionPointContainer::FindConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms692476) che passa l'iid dell'interfaccia eventi di interesse.  Se l'operazione riesce, questo metodo restituirà l'interfaccia [IConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms694318) su un oggetto del punto di connessione.  
  
-   Chiamare [IConnectionPoint::Advise](http://msdn.microsoft.com/library/windows/desktop/ms678815) che passa **IUnknown** del sink di evento.  Se l'operazione riesce, questo metodo restituirà il cookie `DWORD` che rappresentano la connessione.  
  
 Dopo aver registrato il interessati alla ricezione degli eventi, i metodi dell'interfaccia eventi dell'oggetto verranno chiamati come eventi generati dall'oggetto di origine.  Quando non è più necessario ricevere eventi, è possibile passare i cookie del punto di connessione tramite [IConnectionPoint::Unadvise](http://msdn.microsoft.com/library/windows/desktop/ms686608).  Questa operazione arresta la connessione tra l'origine e il sink.  
  
 Prestare attenzione a evitare i cicli di riferimento quando si gestiscono gli eventi.  
  
## Vedere anche  
 [Gestione di eventi](../atl/event-handling-and-atl.md)