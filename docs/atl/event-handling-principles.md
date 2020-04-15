---
title: Principi di gestione degli eventi (ATL,Event Handling Principles)
ms.date: 11/04/2016
helpviewer_keywords:
- event handling, implementing
- event handling, advising event sources
- interfaces, event and event sink
- dual interfaces, event interfaces
- event handling, dual event interfaces
ms.assetid: d17ca7cb-54f2-4658-ab8b-b721ac56801d
ms.openlocfilehash: 2e810853e7c81f279039e0b3dfda5199d38deee2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319574"
---
# <a name="event-handling-principles"></a>Principi di gestione degli eventiEvent Handling Principles

Esistono tre passaggi comuni a tutte le gestione degli eventi. È necessario:

- Implementare l'interfaccia eventi sull'oggetto.

- Avvisare l'origine eventi che l'oggetto desidera ricevere eventi.

- Annullare la visualizzazione dell'origine eventi quando l'oggetto non ha più bisogno di ricevere eventi.

Il modo in cui verrà implementata l'interfaccia eventi dipenderà dal tipo. Un'interfaccia eventi può essere vtable, dual o un'interfaccia dispatch. Spetta alla finestra di progettazione dell'origine eventi definire l'interfaccia; spetta a voi per implementare tale interfaccia.

> [!NOTE]
> Anche se non ci sono motivi tecnici che un'interfaccia di eventi non può essere duale, ci sono una serie di buoni motivi di progettazione per evitare l'uso di duali. Tuttavia, si tratta di una decisione presa dal progettista/implementatore *dell'origine*eventi. Poiché si lavora dal punto `sink`di vista dell'evento , è necessario consentire la possibilità che non si abbia altra scelta che implementare un'interfaccia a doppio evento. Per ulteriori informazioni sulle interfacce [duali, vedere Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md).

La consulenza per l'origine eventi può essere suddivisa in tre passaggi:Consiglising the event source can be broken down into three steps:

- Eseguire una query sull'oggetto di origine per [IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer).

- Chiamare [IConnectionPointContainer::FindConnectionPoint](/windows/win32/api/ocidl/nf-ocidl-iconnectionpointcontainer-findconnectionpoint) passando l'IID dell'interfaccia eventi che interessa. Se ha esito positivo, verrà restituita l'interfaccia [IConnectionPoint](/windows/win32/api/ocidl/nn-ocidl-iconnectionpoint) su un oggetto punto di connessione.

- Chiamare [IConnectionPoint::Advise](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-advise) `IUnknown` passando il sink di evento. In caso di esito positivo, verrà restituito un `DWORD` cookie che rappresenta la connessione.

Una volta registrato correttamente l'interesse per la ricezione di eventi, i metodi sull'interfaccia eventi dell'oggetto verranno chiamati in base agli eventi generati dall'oggetto di origine. Quando non è più necessario ricevere eventi, è possibile passare nuovamente il cookie al punto di connessione tramite [IConnectionPoint::Unadvise](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-unadvise). In questo modo si interromperà la connessione tra origine e sink.

Prestare attenzione a evitare cicli di riferimento durante la gestione degli eventi.

## <a name="see-also"></a>Vedere anche

[Gestione degli eventiEvent Handling](../atl/event-handling-and-atl.md)
