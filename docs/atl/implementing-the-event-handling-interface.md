---
title: "Implementing the Event Handling Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, gestione eventi"
  - "gestione eventi, ATL"
  - "interfacce, event and event sink"
ms.assetid: eb2a5b33-88dc-4ce3-bee0-c5c38ea050d7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Implementing the Event Handling Interface
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

ALT consente a tutti e tre gli elementi necessari per gestire gli eventi: implementando l'interfaccia eventi, consigliando origine eventi e unadvising origine eventi.  Le misure di express è necessario prendere dipendono dal tipo di interfaccia eventi e requisiti di prestazioni dell'applicazione.  
  
 Le tecniche più comuni di implementare un'interfaccia utilizzando ATL sono:  
  
-   Derivazione da un'interfaccia direttamente.  
  
-   Derivazione da [IDispatchImpl](../atl/reference/idispatchimpl-class.md) per le interfacce duali descritte in una libreria dei tipi.  
  
-   Derivazione da [IDispEventImpl](../atl/reference/idispeventimpl-class.md) per le interfacce dispatch descritte in una libreria dei tipi.  
  
-   Derivazione da [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) per le interfacce dispatch non descritte in una libreria dei tipi o quando si desidera migliorare l'efficienza non caricando informazioni sul tipo in fase di esecuzione.  
  
 Se si sviluppa un oggetto personalizzato o un'interfaccia duale, è necessario ha origine evento chiamando [AtlAdvise](../Topic/AtlAdvise.md) o [CComPtrBase::Advise](../Topic/CComPtrBase::Advise.md).  È necessario tenere traccia dei cookie restituito dalla chiamata manualmente.  Chiamata [AtlUnadvise](../Topic/AtlUnadvise.md) per interrompere la connessione.  
  
 Se si implementa un'interfaccia dispatch utilizzando `IDispEventImpl` o `IDispEventSimpleImpl`, è necessario ha origine evento chiamando [IDispEventSimpleImpl::DispEventAdvise](../Topic/IDispEventSimpleImpl::DispEventAdvise.md).  Chiamata [IDispEventSimpleImpl::DispEventUnadvise](../Topic/IDispEventSimpleImpl::DispEventUnadvise.md) per interrompere la connessione.  
  
 Se si utilizza `IDispEventImpl` come classe base di controllo composito, le origini evento elencate nella mappa del sink saranno consigliate e imprudenti automaticamente utilizzando [CComCompositeControl::AdviseSinkMap](../Topic/CComCompositeControl::AdviseSinkMap.md).  
  
 Le classi `IDispEventSimpleImpl` e `IDispEventImpl` gestiscono i cookie automaticamente.  
  
## Vedere anche  
 [Gestione di eventi](../atl/event-handling-and-atl.md)