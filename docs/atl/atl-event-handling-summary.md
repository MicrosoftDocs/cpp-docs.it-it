---
title: "ATL Event Handling Summary | Microsoft Docs"
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
  - "gestione eventi, implementazione"
ms.assetid: e8b47ef0-0bdc-47ff-9dd6-34df11dde9a2
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Event Handling Summary
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In genere la gestione eventi COM è un processo relativamente semplice.  Esistono tre passaggi principali:  
  
-   Implementare l'interfaccia eventi sull'oggetto.  
  
-   Consigli origine evento che l'oggetto desidera ricevere gli eventi.  
  
-   Unadvise origine evento quando l'oggetto non ha più ricevere eventi.  
  
## Implementazione dell'interfaccia  
 Esistono quattro modi principali di implementare un'interfaccia utilizzando ATL.  
  
|Derivare da|Appropriato per il tipo di interfaccia|È necessario implementare qualsiasi methods\*|Richiede una libreria dei tipi in fase di esecuzione|  
|-----------------|--------------------------------------------|---------------------------------------------------|----------------------------------------------------------|  
|l'interfaccia|Vtable|Sì|No|  
|[IDispatchImpl](../atl/reference/idispatchimpl-class.md)|Duale|Sì|Sì|  
|[IDispEventImpl](../atl/reference/idispeventimpl-class.md)|Interfaccia dispatch|No|Sì|  
|[IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|Interfaccia dispatch|No|No|  
  
 \* In utilizzando le classi di supporto ATL, non è necessario mai di implementare metodi `IDispatch` o **IUnknown** manualmente.  
  
## Consigliare e Unadvising origine evento  
 Sono disponibili tre metodi principali di e consigliare di unadvising un'origine eventi mediante ATL.  
  
|Consigli la funzione|Funzione di Unadvise|Il più appropriato per l'utilizzo con|È necessario tenere traccia dei cookie?|Commenti|  
|--------------------------|--------------------------|-------------------------------------------|---------------------------------------------|--------------|  
|[AtlAdvise](../Topic/AtlAdvise.md), [CComPtrBase::Advise](../Topic/CComPtrBase::Advise.md)|[AtlUnadvise](../Topic/AtlUnadvise.md)|Vtable o interfacce duali|Sì|`AtlAdvise` è una funzione globale ATL.  `CComPtrBase::Advise` viene utilizzato da [CComPtr](../atl/reference/ccomptr-class.md) e da [CComQIPtr](../atl/reference/ccomqiptr-class.md).|  
|[IDispEventSimpleImpl::DispEventAdvise](../Topic/IDispEventSimpleImpl::DispEventAdvise.md)|[IDispEventSimpleImpl::DispEventUnadvise](../Topic/IDispEventSimpleImpl::DispEventUnadvise.md)|[IDispEventImpl](../atl/reference/idispeventimpl-class.md) o [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|No|Meno parametri che `AtlAdvise` poiché la classe base rende più lavoro.|  
|[CComCompositeControl::AdviseSinkMap \(TRUE\)](../Topic/CComCompositeControl::AdviseSinkMap.md)|[CComCompositeControl::AdviseSinkMap \(FALSE\)](../Topic/CComCompositeControl::AdviseSinkMap.md)|Controlli ActiveX in controlli compositi|No|`CComCompositeControl::AdviseSinkMap` consigliabile qualsiasi mapping del sink delle voci nel caso.  Lo stesso unadvises di funzione voci.  Questo metodo viene chiamato automaticamente dalla classe `CComCompositeControl`.|  
|[CAxDialogImpl::AdviseSinkMap \(TRUE\)](../Topic/CAxDialogImpl::AdviseSinkMap.md)|[CAxDialogImpl::AdviseSinkMap \(FALSE\)](../Topic/CAxDialogImpl::AdviseSinkMap.md)|Controlli ActiveX in una finestra di dialogo|No|`CAxDialogImpl::AdviseSinkMap` consigliata e unadvises tutti i controlli ActiveX nella finestra di dialogo.  Questa operazione viene eseguita automaticamente automaticamente.|  
  
## Vedere anche  
 [Gestione di eventi](../atl/event-handling-and-atl.md)   
 [Supporting IDispEventImpl](../atl/supporting-idispeventimpl.md)