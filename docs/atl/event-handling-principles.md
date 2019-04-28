---
title: I principi (ATL) di gestione degli eventi
ms.date: 11/04/2016
helpviewer_keywords:
- event handling, implementing
- event handling, advising event sources
- interfaces, event and event sink
- dual interfaces, event interfaces
- event handling, dual event interfaces
ms.assetid: d17ca7cb-54f2-4658-ab8b-b721ac56801d
ms.openlocfilehash: b882a1d356a431f75be1feb6e7bd997abed41c33
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62234771"
---
# <a name="event-handling-principles"></a>Principi di gestione degli eventi

Esistono tre passaggi comuni a tutti la gestione degli eventi. È necessario:

- Implementare l'interfaccia evento sull'oggetto.

- Informare l'origine eventi che l'oggetto richiede la ricezione di eventi.

- Annullare l'origine dell'evento quando l'oggetto non serve più la ricezione di eventi.

La modalità che è possibile implementare l'interfaccia evento dipenderà dal relativo tipo. Un'interfaccia di eventi può essere vtable, dual o un'interfaccia dispatch. Spetta alla finestra di progettazione dell'origine evento per definire l'interfaccia. Spetta all'utente per implementare tale interfaccia.

> [!NOTE]
>  Anche se non esistono Nessun motivi tecnici che un'interfaccia eventi non può essere duale, esistono una serie di motivi una buona progettazione per evitare l'uso di queste interfacce. Tuttavia, si tratta di una decisione presa dalla funzione di progettazione/implementazione dell'evento *origine*. Poiché si sta lavorando dal punto di vista dell'evento `sink`, è necessario per consentire la possibilità che si potrebbe non avere qualsiasi scelta, per implementare un'interfaccia duale evento. Per altre informazioni sulle interfacce duali, vedere [interfacce duali e ATL](../atl/dual-interfaces-and-atl.md).

Notifica all'origine eventi può essere suddivisi in tre passaggi:

- L'oggetto di origine per eseguire una query [IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer).

- Chiamare [IConnectionPointContainer:: FindConnectionPoint](/windows/desktop/api/ocidl/nf-ocidl-iconnectionpointcontainer-findconnectionpoint) passando l'IID dell'interfaccia eventi che interessa. Se ha esito positivo, verrà restituito il [IConnectionPoint](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpoint) interfaccia su un oggetto punto di connessione.

- Chiamare [IConnectionPoint:: Advise](/windows/desktop/api/ocidl/nf-ocidl-iconnectionpoint-advise) passando la `IUnknown` del sink di evento. Se ha esito positivo, restituirà un `DWORD` cookie che rappresenta la connessione.

Dopo aver registrato correttamente l'interesse dimostrato nella ricezione di eventi, metodi nell'interfaccia eventi dell'oggetto verranno chiamati in base agli eventi generati dall'oggetto di origine. Quando è non necessario non è più la ricezione di eventi, è possibile passare il cookie di tornare al punto di connessione tramite [IConnectionPoint:: Unadvise](/windows/desktop/api/ocidl/nf-ocidl-iconnectionpoint-unadvise). Questo verrà interrotta la connessione tra origine e sink.

Prestare attenzione a evitare riferimento i cicli di gestione degli eventi.

## <a name="see-also"></a>Vedere anche

[Gestione di eventi](../atl/event-handling-and-atl.md)
