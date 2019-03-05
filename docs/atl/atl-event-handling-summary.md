---
title: Riepilogo della gestione degli eventi ATL
ms.date: 11/04/2016
helpviewer_keywords:
- event handling, implementing
ms.assetid: e8b47ef0-0bdc-47ff-9dd6-34df11dde9a2
ms.openlocfilehash: 0e3a47719e3160170ed1bfa64b315415ddc7a1c8
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265353"
---
# <a name="atl-event-handling-summary"></a>Riepilogo della gestione degli eventi ATL

In generale, la gestione degli eventi COM è un processo relativamente semplice. Esistono tre passaggi principali:

- Implementare l'interfaccia evento sull'oggetto.

- Informare l'origine eventi che l'oggetto richiede la ricezione di eventi.

- Annullare l'origine dell'evento quando l'oggetto non serve più la ricezione di eventi.

## <a name="implementing-the-interface"></a>Implementazione dell'interfaccia

Esistono sostanzialmente in quattro modi per implementare un'interfaccia mediante ATL.

|Derivare da|Idoneo per il tipo di interfaccia|È necessario implementare tutti i metodi *|Richiede una libreria dei tipi in fase di esecuzione|
|-----------------|---------------------------------|---------------------------------------------|-----------------------------------------|
|L'interfaccia|Vtable|Sì|No|
|[IDispatchImpl](../atl/reference/idispatchimpl-class.md)|Dual|Sì|Sì|
|[IDispEventImpl](../atl/reference/idispeventimpl-class.md)|Interfaccia dispatch|No|Sì|
|[IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|Interfaccia dispatch|No|No|

\* Quando si utilizzano classi di supporto ATL, è mai necessario per implementare il `IUnknown` o `IDispatch` metodi manualmente.

## <a name="advising-and-unadvising-the-event-source"></a>Consigli l'origine evento

Esistono tre modi principali di consigli di un'origine evento mediante ATL.

|Funzione di notifica|Annullare (funzione)|Più adatto per l'utilizzo con|È necessario tenere traccia di un cookie|Commenti|
|---------------------|-----------------------|--------------------------------|---------------------------------------------|--------------|
|[AtlAdvise](reference/connection-point-global-functions.md#atladvise), [CComPtrBase::Advise](../atl/reference/ccomptrbase-class.md#advise)|[AtlUnadvise](reference/connection-point-global-functions.md#atlunadvise)|Interfacce duali o vtable|Sì|`AtlAdvise` è una funzione globale ATL. `CComPtrBase::Advise` viene utilizzato dagli [CComPtr](../atl/reference/ccomptr-class.md) e [CComQIPtr](../atl/reference/ccomqiptr-class.md).|
|[IDispEventSimpleImpl::DispEventAdvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventadvise)|[IDispEventSimpleImpl::DispEventUnadvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventunadvise)|[IDispEventImpl](../atl/reference/idispeventimpl-class.md) o [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md)|No|Parametri di un numero minore rispetto a `AtlAdvise` poiché la classe di base esegue più operazioni.|
|[CComCompositeControl::AdviseSinkMap(TRUE)](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap)|[CComCompositeControl::AdviseSinkMap(FALSE)](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap)|Controlli ActiveX in controlli compositi|No|`CComCompositeControl::AdviseSinkMap` indica che tutte le voci di sink di eventi della mappa. La stessa funzione esegue l'Unadvise delle voci. Questo metodo viene chiamato automaticamente dal `CComCompositeControl` classe.|
|[CAxDialogImpl::AdviseSinkMap(TRUE)](../atl/reference/caxdialogimpl-class.md#advisesinkmap)|[CAxDialogImpl::AdviseSinkMap(FALSE)](../atl/reference/caxdialogimpl-class.md#advisesinkmap)|Controlli ActiveX in una finestra di dialogo|No|`CAxDialogImpl::AdviseSinkMap` Avvisa e Annulla l'avviso di tutti i controlli ActiveX nella risorsa finestra di dialogo. Questa operazione viene eseguita automaticamente per l'utente.|

## <a name="see-also"></a>Vedere anche

[Gestione di eventi](../atl/event-handling-and-atl.md)<br/>
[Supporto di IDispEventImpl](../atl/supporting-idispeventimpl.md)
