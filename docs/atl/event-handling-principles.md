---
description: 'Altre informazioni su: principi di gestione degli eventi'
title: Principi di gestione degli eventi (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- event handling, implementing
- event handling, advising event sources
- interfaces, event and event sink
- dual interfaces, event interfaces
- event handling, dual event interfaces
ms.assetid: d17ca7cb-54f2-4658-ab8b-b721ac56801d
ms.openlocfilehash: 29b9542b4e026d320857990a0ef6253f310535e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147979"
---
# <a name="event-handling-principles"></a>Principi di gestione degli eventi

Sono disponibili tre passaggi comuni a tutte le operazioni di gestione degli eventi. Sarà necessario:

- Implementare l'interfaccia evento nell'oggetto.

- Consigliare all'origine evento che l'oggetto desidera ricevere gli eventi.

- Annullare la notifica all'origine evento quando l'oggetto non deve più ricevere eventi.

Il modo in cui l'interfaccia evento verrà implementata dipende dal tipo. Un'interfaccia evento può essere vtable, dual o un'interfaccia dispatch. Spetta alla finestra di progettazione dell'origine evento definire l'interfaccia; è necessario implementare tale interfaccia.

> [!NOTE]
> Sebbene non esistano motivi tecnici per cui un'interfaccia eventi non può essere doppia, esistono diversi motivi di progettazione per evitare l'utilizzo di doppi. Tuttavia, si tratta di una decisione presa dalla finestra di progettazione o dall'implementatore dell' *origine* evento. Poiché si sta lavorando dal punto di vista dell'evento `sink` , è necessario consentire la possibilità di non avere alcuna scelta, ma di implementare una doppia interfaccia evento. Per ulteriori informazioni sulle interfacce duali, vedere [interfacce duali e ATL](../atl/dual-interfaces-and-atl.md).

La possibilità di suddividere l'origine eventi in tre passaggi:

- Eseguire una query sull'oggetto di origine per [IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer).

- Chiamare [IConnectionPointContainer:: FindConnectionPoint](/windows/win32/api/ocidl/nf-ocidl-iconnectionpointcontainer-findconnectionpoint) passando l'IID dell'interfaccia evento che interessa. In caso di esito positivo, verrà restituita l'interfaccia [IConnectionPoint](/windows/win32/api/ocidl/nn-ocidl-iconnectionpoint) su un oggetto punto di connessione.

- Chiamare [IConnectionPoint:: Advise](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-advise) passando l'oggetto `IUnknown` del sink di evento. Se ha esito positivo, verrà restituito un `DWORD` cookie che rappresenta la connessione.

Dopo aver registrato l'interesse nella ricezione degli eventi, i metodi dell'interfaccia eventi dell'oggetto verranno chiamati in base agli eventi generati dall'oggetto di origine. Quando non è più necessario ricevere eventi, è possibile passare di nuovo il cookie al punto di connessione tramite [IConnectionPoint:: Unadvise](/windows/win32/api/ocidl/nf-ocidl-iconnectionpoint-unadvise). La connessione tra l'origine e il sink verrà interrotta.

Prestare attenzione a evitare i cicli di riferimento durante la gestione degli eventi.

## <a name="see-also"></a>Vedi anche

[Gestione degli eventi](../atl/event-handling-and-atl.md)
