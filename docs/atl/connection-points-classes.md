---
title: Le classi di punti di connessione (ATL) | Documenti Microsoft
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
ms.openlocfilehash: 8c0d75c101bb23b3e7b788e607e325c18d729c81
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="connection-points-classes"></a>Le classi di punti di connessione
Le classi seguenti offrono il supporto per i punti di connessione:  
  
-   [IConnectionPointContainerImpl](../atl/reference/iconnectionpointcontainerimpl-class.md) implementa un contenitore del punto di connessione.  
  
-   [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) implementa un punto di connessione.  
  
-   [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) implementa un punto di connessione che rappresenta il [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfaccia.  
  
-   [CComDynamicUnkArray](../atl/reference/ccomdynamicunkarray-class.md) gestisce illimitato di connessioni tra un punto di connessione e il relativo sink.  
  
-   [CComUnkArray](../atl/reference/ccomunkarray-class.md) gestisce un numero fisso di connessioni tra un punto di connessione e il relativo sink.  
  
-   [CFirePropNotifyEvent](../atl/reference/cfirepropnotifyevent-class.md) notifica al sink di un client che una proprietà dell'oggetto è stato modificato o sta per essere modificata.  
  
-   [IDispEventImpl](../atl/reference/idispeventimpl-class.md) fornisce il supporto per i punti di connessione per un oggetto COM ATL. I punti di connessione vengono mappati a una mappa del sink di evento, viene fornito dall'oggetto COM.  
  
-   [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) mapping funziona in combinazione con il sink di evento nella classe di eventi della route per la funzione del gestore appropriato.  
  
## <a name="related-articles"></a>Articoli correlati  
 [Punti di connessione](../atl/atl-connection-points.md)  
  
 [Gestione di eventi e ATL](../atl/event-handling-and-atl.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../atl/atl-class-overview.md)   
 [Macro di punto di connessione](../atl/reference/connection-point-macros.md)   
 [Funzioni globali del punto di connessione](../atl/reference/connection-point-global-functions.md)

