---
description: "Altre informazioni su: implementazione dell'interfaccia di gestione degli eventi"
title: Implementazione dell'interfaccia di gestione degli eventi
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, event handling
- event handling, ATL
- interfaces, event and event sink
ms.assetid: eb2a5b33-88dc-4ce3-bee0-c5c38ea050d7
ms.openlocfilehash: 109fbb1fbdd4f18d0eb4c295fbc08de2b7cc3a35
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152763"
---
# <a name="implementing-the-event-handling-interface"></a>Implementazione dell'interfaccia di gestione degli eventi

ATL semplifica l'esecuzione di tutti e tre gli elementi necessari per la gestione degli eventi, ovvero l'implementazione dell'interfaccia eventi, la notifica dell'origine evento e la denotifica dell'origine evento. I passaggi precisi che è necessario eseguire dipendono dal tipo di interfaccia eventi e dai requisiti di prestazioni dell'applicazione.

I modi più comuni per implementare un'interfaccia con ATL sono:

- Derivazione direttamente da un'interfaccia personalizzata.

- Derivazione da [IDispatchImpl](../atl/reference/idispatchimpl-class.md) per interfacce duali descritte in una libreria dei tipi.

- Derivazione da [IDispEventImpl](../atl/reference/idispeventimpl-class.md) per dispinterfaces descritta in una libreria dei tipi.

- La derivazione da [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) per dispinterfaces non è descritta in una libreria dei tipi o quando si desidera migliorare l'efficienza non caricando le informazioni sul tipo in fase di esecuzione.

Se si implementa un'interfaccia personalizzata o duale, è consigliabile consigliare l'origine evento chiamando [AtlAdvise](reference/connection-point-global-functions.md#atladvise) o [CComPtrBase:: Advise](../atl/reference/ccomptrbase-class.md#advise). Sarà necessario tenere traccia del cookie restituito dalla chiamata. Chiamare [AtlUnadvise](reference/connection-point-global-functions.md#atlunadvise) per interrompere la connessione.

Se si sta implementando un'interfaccia dispatch usando `IDispEventImpl` o `IDispEventSimpleImpl` , è consigliabile consigliare l'origine evento chiamando [IDispEventSimpleImpl::D ispeventadvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventadvise). Chiamare [IDispEventSimpleImpl::D ispeventunadvise](../atl/reference/idispeventsimpleimpl-class.md#dispeventunadvise) per interrompere la connessione.

Se si usa `IDispEventImpl` come classe di base di un controllo composito, le origini evento elencate nella mappa di sink verranno consigliate e non verranno consigliate automaticamente usando [CComCompositeControl:: AdviseSinkMap](../atl/reference/ccomcompositecontrol-class.md#advisesinkmap).

Le `IDispEventImpl` `IDispEventSimpleImpl` classi e gestiscono il cookie.

## <a name="see-also"></a>Vedi anche

[Gestione degli eventi](../atl/event-handling-and-atl.md)
