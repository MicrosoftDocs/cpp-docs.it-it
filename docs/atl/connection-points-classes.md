---
description: 'Altre informazioni su: classi dei punti di connessione'
title: Classi di punti di connessione (ATL)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- classes [C++], connection points
- connection points classes
ms.assetid: 076365fa-299a-4dce-84c3-a5dff0e0da1f
ms.openlocfilehash: 28d41f15aeafd98c8c9bcac27fde25d0b2037765
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148239"
---
# <a name="connection-points-classes"></a>Classi di punti di connessione

Le classi seguenti forniscono supporto per i punti di connessione:

- [IConnectionPointContainerImpl](../atl/reference/iconnectionpointcontainerimpl-class.md) Implementa un contenitore del punto di connessione.

- [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) Implementa un punto di connessione.

- [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) Implementa un punto di connessione che rappresenta l'interfaccia [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) .

- [CComDynamicUnkArray](../atl/reference/ccomdynamicunkarray-class.md) Gestisce connessioni illimitate tra un punto di connessione e i relativi sink.

- [CComUnkArray](../atl/reference/ccomunkarray-class.md) Gestisce un numero fisso di connessioni tra un punto di connessione e i relativi sink.

- [CFirePropNotifyEvent](../atl/reference/cfirepropnotifyevent-class.md) Notifica al sink di un client che la proprietà di un oggetto è stata modificata o sta per essere modificata.

- [IDispEventImpl](../atl/reference/idispeventimpl-class.md) Fornisce supporto per i punti di connessione per un oggetto COM ATL. A questi punti di connessione viene eseguito il mapping con una mappa di sink di eventi, fornita dall'oggetto COM.

- [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) Funziona insieme alla mappa di sink di evento nella classe per indirizzare gli eventi alla funzione del gestore appropriata.

## <a name="related-articles"></a>Articoli correlati

[Punti di connessione](../atl/atl-connection-points.md)

[Gestione degli eventi e ATL](../atl/event-handling-and-atl.md)

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../atl/atl-class-overview.md)<br/>
[Macro del punto di connessione](../atl/reference/connection-point-macros.md)<br/>
[Funzioni globali del punto di connessione](../atl/reference/connection-point-global-functions.md)
