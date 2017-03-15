---
title: "IUnknown Implementation Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.atl.Iunknown"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IUnknown implementation classes"
ms.assetid: 47b69bb5-69d8-4a9c-84a8-329bdde2bb3f
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# IUnknown Implementation Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi di seguito riportate implementano **IUnknown** e i metodi correlati:  
  
-   [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) gestisce il conteggio dei riferimenti per gli oggetti aggregati non aggregati.  Consente di specificare un modello di threading.  
  
-   [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) gestisce il conteggio dei riferimenti per gli oggetti aggregati non aggregati.  Utilizza il modello di threading predefinito del server.  
  
-   Implementa **IUnknown** di[CComAggObject](../atl/reference/ccomaggobject-class.md) per un oggetto aggregato.  
  
-   Implementa **IUnknown** di[CComObject](../atl/reference/ccomobject-class.md) per un oggetto non aggregato.  
  
-   [CComPolyObject](../atl/reference/ccompolyobject-class.md) implementa **IUnknown** per gli oggetti aggregati e non aggregati.  Utilizzando `CComPolyObject` evitare di avere sia `CComAggObject` che `CComObject` nel modulo.  Singole un oggetto `CComPolyObject` sono inclusi i casi non aggregati.  
  
-   [CComObjectNoLock](../atl/reference/ccomobjectnolock-class.md) implementa **IUnknown** per un oggetto non aggregato, senza modificare il conteggio dei blocchi di modulo.  
  
-   Implementa **IUnknown** di[CComTearOffObject](../atl/reference/ccomtearoffobject-class.md) per un un'interfaccia tear\-off.  
  
-   Implementa **IUnknown** di[CComCachedTearOffObject](../atl/reference/ccomcachedtearoffobject-class.md) per un un'interfaccia tear\-off "memorizzato nella cache".  
  
-   [CComContainedObject](../atl/reference/ccomcontainedobject-class.md) implementa **IUnknown** per l'oggetto interno di un aggregato o di un'interfaccia tear\-off.  
  
-   [CComObjectGlobal](../atl/reference/ccomobjectglobal-class.md) gestisce un conteggio dei riferimenti al form per fornire l'oggetto non verrà eliminato.  
  
-   [CComObjectStack](../atl/reference/ccomobjectstack-class.md) crea un oggetto COM temporaneo, tramite un'implementazione scheletrica **IUnknown**.  
  
## Articoli correlati  
 [Principi fondamentali di oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)  
  
## Vedere anche  
 [Class Overview](../atl/atl-class-overview.md)   
 [Aggregation and Class Factory Macros](../atl/reference/aggregation-and-class-factory-macros.md)   
 [COM Map Macros](../atl/reference/com-map-macros.md)   
 [COM Map Global Functions](../atl/reference/com-map-global-functions.md)