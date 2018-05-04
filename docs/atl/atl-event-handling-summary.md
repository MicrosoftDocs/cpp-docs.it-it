---
title: Riepilogo di gestione dell'evento ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- event handling, implementing
ms.assetid: e8b47ef0-0bdc-47ff-9dd6-34df11dde9a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a938bd072ea8df30e64cce28fbf0709f08547d28
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="atl-event-handling-summary"></a>Riepilogo della gestione degli eventi ATL
In generale, la gestione degli eventi COM è un processo relativamente semplice. Esistono tre passaggi principali:  
  
-   Implementa l'interfaccia eventi sull'oggetto.  
  
-   Informare l'origine eventi che l'oggetto richiede la ricezione di eventi.  
  
-   Annullare gli avvisi per l'origine evento quando l'oggetto non serve più la ricezione di eventi.  
  
## <a name="implementing-the-interface"></a>Implementazione dell'interfaccia  
 Esistono quattro modi per implementare un'interfaccia con ATL.  
  
|Derivare da|Adatto per il tipo di interfaccia|È necessario implementare tutti i metodi *|Richiede una libreria dei tipi in fase di esecuzione|  
|-----------------|---------------------------------|---------------------------------------------|-----------------------------------------|  
|L'interfaccia|Vtable|Yes|No|  
|[IDispatchImpl](../atl/reference/idispatchimpl-class.md)|Doppio|Yes|Yes|  
|[IDispEventImpl](../atl/reference/idispeventimpl-class.md)|Interfaccia dispatch|No|Yes|  
|[IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|Interfaccia dispatch|No|No|  
  
 \* Quando si utilizzano le classi di supporto ATL, è mai necessario implementare la **IUnknown** o `IDispatch` metodi manualmente.  
  
## <a name="advising-and-unadvising-the-event-source"></a>Consigli l'origine evento  
 Esistono tre modi principali per consigli di un'origine eventi mediante ATL.  
  
|Funzione di notifica|Annullare gli avvisi per funzione|Più adatto per l'utilizzo con|È necessario tenere traccia di un cookie|Commenti|  
|---------------------|-----------------------|--------------------------------|---------------------------------------------|--------------|  

|[AtlAdvise](reference/connection-point-global-functions.md#atladvise), [CComPtrBase:: Advise](../atl/reference/ccomptrbase-class.md#advise)|[AtlUnadvise](reference/connection-point-global-functions.md#atlunadvise)| Vtable o interfacce duali | Sì | `AtlAdvise` funzione ATL globale. `CComPtrBase::Advise` viene utilizzato [CComPtr](../atl/reference/ccomptr-class.md) e [CComQIPtr](../atl/reference/ccomqiptr-class.md). |  

|[IDispEventSimpleImpl:: DispEventAdvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventadvise)|[IDispEventSimpleImpl:: DispEventUnadvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventunadvise)|[IDispEventImpl](../atl/reference/idispeventimpl-class.md) o [ IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)| Non | Parametri di un numero inferiore rispetto a `AtlAdvise` poiché la classe di base funziona più. |  
|[CComCompositeControl::AdviseSinkMap(TRUE)](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap)|[CComCompositeControl::AdviseSinkMap(FALSE)](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap)| Controlli ActiveX in controlli compositi | Non | `CComCompositeControl::AdviseSinkMap` informa tutte le voci della mappa del sink dell'evento. La stessa funzione unadvises le voci. Questo metodo viene chiamato automaticamente dalla `CComCompositeControl` classe. |  
|[CAxDialogImpl::AdviseSinkMap(TRUE)](../atl/reference/caxdialogimpl-class.md#advisesinkmap)|[CAxDialogImpl::AdviseSinkMap(FALSE)](../atl/reference/caxdialogimpl-class.md#advisesinkmap)| Controlli ActiveX in una finestra di dialogo | Non | `CAxDialogImpl::AdviseSinkMap` informa e unadvises tutti i controlli ActiveX nella risorsa della finestra di dialogo. Questa operazione viene eseguita automaticamente per l'utente. |  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione degli eventi](../atl/event-handling-and-atl.md)   
 [Supporto di IDispEventImpl](../atl/supporting-idispeventimpl.md)

