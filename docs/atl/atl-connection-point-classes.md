---
title: Classi dei punti di connessione ATL
ms.date: 11/04/2016
helpviewer_keywords:
- CFirePropNotifyEvent class, connection point classes
- connection points [C++], ATL classes
- ATL, connection points
- CComDynamicUnkArray class, connection point classes
- CFirePropNotifyEvent class
- CComUnkArray class, connection point classes
ms.assetid: 9582ba71-7ace-4df4-9c9b-1b0636953efc
ms.openlocfilehash: 8644fc087d7f0a651724c40d2868e96c9b6ec96a
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491815"
---
# <a name="atl-connection-point-classes"></a>Classi dei punti di connessione ATL

ATL utilizza le classi seguenti per supportare i punti di connessione:

- [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) implementa un punto di connessione. L'IID dell'interfaccia in uscita che rappresenta viene passato come parametro di modello.

- [IConnectionPointContainerImpl](../atl/reference/iconnectionpointcontainerimpl-class.md) implementa il contenitore del punto di connessione e gestisce l' `IConnectionPointImpl` elenco di oggetti.

- [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) implementa un punto di connessione che rappresenta l'interfaccia [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) .

- [CComDynamicUnkArray](../atl/reference/ccomdynamicunkarray-class.md) gestisce un numero arbitrario di connessioni tra il punto di connessione e i relativi sink.

- [CComUnkArray](../atl/reference/ccomunkarray-class.md) gestisce un numero predefinito di connessioni come specificato dal parametro di modello.

- [CFirePropNotifyEvent](../atl/reference/cfirepropnotifyevent-class.md) notifica al sink di un client che la proprietà di un oggetto è stata modificata o sta per essere modificata.

- [IDispEventImpl](../atl/reference/idispeventimpl-class.md) fornisce il supporto per i punti di connessione per un oggetto COM ATL. A questi punti di connessione viene eseguito il mapping con una mappa di sink di eventi, fornita dall'oggetto COM.

- [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) funziona insieme alla mappa di sink di evento nella classe per indirizzare gli eventi alla funzione del gestore appropriata.

## <a name="see-also"></a>Vedere anche

[Punto di connessione](../atl/atl-connection-points.md)
