---
description: 'Ulteriori informazioni su: riepilogo della gestione degli eventi ATL'
title: Riepilogo della gestione eventi ATL
ms.date: 11/04/2016
helpviewer_keywords:
- event handling, implementing
ms.assetid: e8b47ef0-0bdc-47ff-9dd6-34df11dde9a2
ms.openlocfilehash: c041de6cbd0e0852d5ce0e51d892c21c7d9a23d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148655"
---
# <a name="atl-event-handling-summary"></a>Riepilogo della gestione eventi ATL

In generale, la gestione degli eventi COM è un processo relativamente semplice. Sono disponibili tre passaggi principali:

- Implementare l'interfaccia evento nell'oggetto.

- Consigliare all'origine evento che l'oggetto desidera ricevere gli eventi.

- Annullare la notifica all'origine evento quando l'oggetto non deve più ricevere eventi.

## <a name="implementing-the-interface"></a>Implementazione dell'interfaccia

Esistono quattro modi principali per implementare un'interfaccia con ATL.

|Derivare da |Adatto per il tipo di interfaccia|Richiede l'implementazione di tutti i metodi *|Richiede una libreria di tipi in fase di esecuzione|
|-----------------|---------------------------------|---------------------------------------------|-----------------------------------------|
|Interfaccia|Vtable|Sì|No|
|[IDispatchImpl](../atl/reference/idispatchimpl-class.md)|Doppia|Sì|Sì|
|[IDispEventImpl](../atl/reference/idispeventimpl-class.md)|Interfaccia dispatch|No|Sì|
|[IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|Interfaccia dispatch|No|No|

\* Quando si usano le classi di supporto ATL, non è mai necessario `IUnknown` implementare `IDispatch` manualmente i metodi o.

## <a name="advising-and-unadvising-the-event-source"></a>Consigliare e non consigliare l'origine evento

Esistono tre modi principali per consigliare e non consigliare un'origine evento utilizzando ATL.

|Funzione Advise|Unadvise (funzione)|Più adatto per l'uso con|Richiede di tenere traccia di un cookie|Commenti|
|---------------------|-----------------------|--------------------------------|---------------------------------------------|--------------|
|[AtlAdvise](reference/connection-point-global-functions.md#atladvise), [CComPtrBase:: Advise](../atl/reference/ccomptrbase-class.md#advise)|[AtlUnadvise](reference/connection-point-global-functions.md#atlunadvise)|Interfacce vtable o Dual|Sì|`AtlAdvise` è una funzione ATL globale. `CComPtrBase::Advise` viene usato da [CComPtr](../atl/reference/ccomptr-class.md) e [CComQIPtr](../atl/reference/ccomqiptr-class.md).|
|[IDispEventSimpleImpl::D ispEventAdvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventadvise)|[IDispEventSimpleImpl::D ispEventUnadvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventunadvise)|[IDispEventImpl](../atl/reference/idispeventimpl-class.md) o [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|No|Un numero minore di parametri rispetto a `AtlAdvise` quanto la classe base esegue più operazioni.|
|[CComCompositeControl:: AdviseSinkMap (TRUE)](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap)|[CComCompositeControl:: AdviseSinkMap (FALSE)](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap)|Controlli ActiveX nei controlli compositi|No|`CComCompositeControl::AdviseSinkMap` informa tutte le voci nella mappa di sink di evento. La stessa funzione Annulla la notifica delle voci. Questo metodo viene chiamato automaticamente dalla `CComCompositeControl` classe.|
|[CAxDialogImpl:: AdviseSinkMap (TRUE)](../atl/reference/caxdialogimpl-class.md#advisesinkmap)|[CAxDialogImpl:: AdviseSinkMap (FALSE)](../atl/reference/caxdialogimpl-class.md#advisesinkmap)|Controlli ActiveX in una finestra di dialogo|No|`CAxDialogImpl::AdviseSinkMap` consiglia e Annulla la notifica di tutti i controlli ActiveX nella risorsa della finestra di dialogo. Questa operazione viene eseguita automaticamente.|

## <a name="see-also"></a>Vedi anche

[Gestione degli eventi](../atl/event-handling-and-atl.md)<br/>
[Supporto di IDispEventImpl](../atl/supporting-idispeventimpl.md)
