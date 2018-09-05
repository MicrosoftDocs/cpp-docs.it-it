---
title: Classi dei punti di connessione (ATL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.atl.connection
dev_langs:
- C++
helpviewer_keywords:
- classes [C++], connection points
- connection points classes
ms.assetid: 076365fa-299a-4dce-84c3-a5dff0e0da1f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e24d6333faee842227edb09ea05aa6a1f8b0d9a0
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43763601"
---
# <a name="connection-points-classes"></a>Classi dei punti di connessione

Le classi seguenti forniscono supporto per i punti di connessione:

- [IConnectionPointContainerImpl](../atl/reference/iconnectionpointcontainerimpl-class.md) implementa un contenitore del punto di connessione.

- [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) implementa un punto di connessione.

- [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) implementa un punto di connessione che rappresenta il [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) interfaccia.

- [CComDynamicUnkArray](../atl/reference/ccomdynamicunkarray-class.md) gestisce le connessioni senza limite tra un punto di connessione e il sink.

- [CComUnkArray](../atl/reference/ccomunkarray-class.md) gestisce un numero fisso di connessioni tra un punto di connessione e il sink.

- [CFirePropNotifyEvent](../atl/reference/cfirepropnotifyevent-class.md) notifica a un sink del client che una proprietà dell'oggetto è stato modificato o sta per essere modificata.

- [IDispEventImpl](../atl/reference/idispeventimpl-class.md) fornisce il supporto per i punti di connessione per un oggetto ATL COM. Vengono eseguito il mapping di questi punti di connessione con una mappa eventi sink, che viene fornita dall'oggetto COM.

- [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) eseguire il mapping funziona in combinazione con il sink di evento nella classe per instradare gli eventi per la funzione del gestore appropriato.

## <a name="related-articles"></a>Articoli correlati

[Punti di connessione](../atl/atl-connection-points.md)

[Gestione di eventi e ATL](../atl/event-handling-and-atl.md)

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../atl/atl-class-overview.md)   
[Macro di punto di connessione](../atl/reference/connection-point-macros.md)   
[Funzioni globali del punto di connessione](../atl/reference/connection-point-global-functions.md)

