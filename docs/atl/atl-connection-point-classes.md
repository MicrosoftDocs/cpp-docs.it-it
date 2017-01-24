---
title: "ATL Connection Point Classes | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, punti di connessione"
  - "CComDynamicUnkArray class, connection point classes"
  - "CComUnkArray class, connection point classes"
  - "CFirePropNotifyEvent class"
  - "CFirePropNotifyEvent class, connection point classes"
  - "punti di connessione [C++], ATL classes"
ms.assetid: 9582ba71-7ace-4df4-9c9b-1b0636953efc
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Connection Point Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

ATL utilizza le classi seguenti per supportare i punti di connessione:  
  
-   [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md) implementa un punto di connessione.  L'iid dell'interfaccia che in uscita rappresenta l'oggetto viene passato come parametro di modello.  
  
-   [IConnectionPointContainerImpl](../atl/reference/iconnectionpointcontainerimpl-class.md) implementa il contenitore del punto di connessione e gestisce l'elenco di oggetti `IConnectionPointImpl`.  
  
-   [IPropertyNotifySinkCP](../atl/reference/ipropertynotifysinkcp-class.md) implementa un punto di connessione che rappresenta l'interfaccia [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638).  
  
-   [CComDynamicUnkArray](../atl/reference/ccomdynamicunkarray-class.md) gestisce un numero arbitrario di connessioni tra il punto di connessione e i sink.  
  
-   [CComUnkArray](../atl/reference/ccomunkarray-class.md) gestisce un numero predefinito delle connessioni come specificato dal parametro di modello.  
  
-   [CFirePropNotifyEvent](../atl/reference/cfirepropnotifyevent-class.md) notifica al sink di un client che la proprietà di un oggetto è stato modificato o sta la modifica.  
  
-   [IDispEventImpl](../atl/reference/idispeventimpl-class.md) fornisce supporto per i punti di connessione per un oggetto COM ATL.  Questi punti di connessione sono mappati a una mappa del sink di eventi, fornita dall'oggetto COM.  
  
-   Funzionamento di[IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) insieme alla mappa del sink di eventi nella classe per rispondere a eventi alla funzione di gestione appropriata.  
  
## Vedere anche  
 [Punto di connessione](../atl/atl-connection-points.md)