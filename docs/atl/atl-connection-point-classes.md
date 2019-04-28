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
ms.openlocfilehash: f3794b5c9e4f6297cca6611929c75d0b0133557e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62252230"
---
# <a name="atl-connection-point-classes"></a>Classi dei punti di connessione ATL

ATL Usa le classi seguenti per supportare i punti di connessione:

- [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) implementa un punto di connessione. IID dell'interfaccia in uscita che rappresenta viene passato come parametro di modello.

- [IConnectionPointContainerImpl](../atl/reference/iconnectionpointcontainerimpl-class.md) implementa il contenitore del punto di connessione e gestisce l'elenco di `IConnectionPointImpl` oggetti.

- [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) implementa un punto di connessione che rappresenta il [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) interfaccia.

- [CComDynamicUnkArray](../atl/reference/ccomdynamicunkarray-class.md) gestisce un numero arbitrario di connessioni tra il punto di connessione e il sink.

- [CComUnkArray](../atl/reference/ccomunkarray-class.md) gestisce un numero predefinito di connessioni come specificato dal parametro di modello.

- [CFirePropNotifyEvent](../atl/reference/cfirepropnotifyevent-class.md) notifica a un sink del client che una proprietà dell'oggetto è stato modificato o sta per essere modificata.

- [IDispEventImpl](../atl/reference/idispeventimpl-class.md) fornisce il supporto per i punti di connessione per un oggetto ATL COM. Vengono eseguito il mapping di questi punti di connessione con una mappa eventi sink, che viene fornita dall'oggetto COM.

- [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) funziona in combinazione con la mappa di sink di evento nella classe per instradare gli eventi per la funzione del gestore appropriato.

## <a name="see-also"></a>Vedere anche

[Punto di connessione](../atl/atl-connection-points.md)
