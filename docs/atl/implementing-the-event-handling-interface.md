---
title: Implementazione di interfaccia di gestione degli eventi
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, event handling
- event handling, ATL
- interfaces, event and event sink
ms.assetid: eb2a5b33-88dc-4ce3-bee0-c5c38ea050d7
ms.openlocfilehash: d977b59907266a2e0141defa8c496b1e7bc66a6c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62262073"
---
# <a name="implementing-the-event-handling-interface"></a>Implementazione di interfaccia di gestione degli eventi

ATL è più semplice con tutti i tre elementi necessari per la gestione degli eventi: implementazione dell'interfaccia di eventi, che informa l'origine evento e l'origine dell'evento di annullamento della notifica. I passaggi precisi, devi eseguire dipendono dal tipo di interfaccia eventi e i requisiti delle prestazioni dell'applicazione.

I modi più comuni di implementazione di un'interfaccia tramite ATL sono:

- Che deriva direttamente da un'interfaccia personalizzata.

- Che deriva da [IDispatchImpl](../atl/reference/idispatchimpl-class.md) per interfacce duali descritte in una libreria dei tipi.

- Che deriva da [IDispEventImpl](../atl/reference/idispeventimpl-class.md) per le interfacce dispatch descritta in una libreria dei tipi.

- Che deriva da [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) per dispinterfaces non descritte in una libreria dei tipi o quando si vuole migliorare l'efficienza evitando di caricare le informazioni sul tipo in fase di esecuzione.

Se si implementa un'interfaccia personalizzata o doppia, è opportuno consigliare l'origine evento chiamando [AtlAdvise](reference/connection-point-global-functions.md#atladvise) oppure [CComPtrBase:: Advise](../atl/reference/ccomptrbase-class.md#advise). È necessario tenere traccia dei cookie restituito dalla chiamata. Chiamare [AtlUnadvise](reference/connection-point-global-functions.md#atlunadvise) per interrompere la connessione.

Se si implementa un'interfaccia dispatch tramite `IDispEventImpl` oppure `IDispEventSimpleImpl`, è opportuno consigliare l'origine evento chiamando [IDispEventSimpleImpl:: DispEventAdvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventadvise). Chiamare [IDispEventSimpleImpl:: DispEventUnadvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventunadvise) per interrompere la connessione.

Se si usa `IDispEventImpl` come classe di base di un controllo composito, le origini evento elencate nella mappa sink sarà consigliabile e annullare automaticamente utilizzando [CComCompositeControl](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap).

Il `IDispEventImpl` e `IDispEventSimpleImpl` classi gestiscono il cookie per l'utente.

## <a name="see-also"></a>Vedere anche

[Gestione di eventi](../atl/event-handling-and-atl.md)
