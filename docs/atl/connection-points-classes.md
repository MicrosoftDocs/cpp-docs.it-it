---
title: "Connection Points Classes | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.atl.connection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi [C++], punti di connessione"
  - "connection points classes"
ms.assetid: 076365fa-299a-4dce-84c3-a5dff0e0da1f
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Connection Points Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi forniscono il supporto per i punti di connessione:  
  
-   [IConnectionPointContainerImpl](../atl/reference/iconnectionpointcontainerimpl-class.md) implementa un contenitore del punto di connessione.  
  
-   [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) implementa un punto di connessione.  
  
-   [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) implementa un punto di connessione che rappresenta l'interfaccia [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638).  
  
-   [CComDynamicUnkArray](../atl/reference/ccomdynamicunkarray-class.md) gestisce le connessioni illimitate tra un punto di connessione e i sink.  
  
-   [CComUnkArray](../atl/reference/ccomunkarray-class.md) gestisce un numero fisso di connessioni tra un punto di connessione e i sink.  
  
-   [CFirePropNotifyEvent](../atl/reference/cfirepropnotifyevent-class.md) notifica al sink di un client che la proprietà di un oggetto è stato modificato o sta la modifica.  
  
-   [IDispEventImpl](../atl/reference/idispeventimpl-class.md) fornisce supporto per i punti di connessione per un oggetto COM ATL.  Questi punti di connessione sono mappati a una mappa del sink di eventi, fornita dall'oggetto COM.  
  
-   [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) Funzionamento con la mappa del sink di eventi nella classe per rispondere a eventi alla funzione di gestione appropriata.  
  
## Articoli correlati  
 [Punti di connessione](../atl/atl-connection-points.md)  
  
 [Gestione degli eventi e ATL](../atl/event-handling-and-atl.md)  
  
## Vedere anche  
 [Class Overview](../atl/atl-class-overview.md)   
 [Connection Point Macros](../atl/reference/connection-point-macros.md)   
 [Connection Point Global Functions](../atl/reference/connection-point-global-functions.md)