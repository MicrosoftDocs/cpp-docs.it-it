---
title: "Implementing CComObject, CComAggObject, and CComPolyObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CComPolyObject"
  - "CComAggObject"
  - "CComObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComAggObject class"
  - "CComObject class, implementazione"
  - "CComPolyObject class, implementazione"
  - "CreateInstance (metodo)"
ms.assetid: 5aabe938-104d-492e-9c41-9f7fb1c62098
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Implementing CComObject, CComAggObject, and CComPolyObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi modello [CComObject](../atl/reference/ccomobject-class.md), [CComAggObject](../atl/reference/ccomaggobject-class.md)e [CComPolyObject](../atl/reference/ccompolyobject-class.md) sono sempre la maggior parte delle classi derivate nella catena di ereditarietà.  È la responsabilità di gestire tutti i metodi in **IUnknown**: `QueryInterface`, `AddRef`e **Release**.  Inoltre, `CComAggObject` e `CComPolyObject` \(se utilizzato per gli oggetti aggregati\) forniscono il conteggio dei riferimenti e semantica speciali `QueryInterface` necessari per sconosciuto interno.  
  
 Se `CComObject`, `CComAggObject`, o `CComPolyObject` viene utilizzato dipende se non viene dichiarata una \(o\) di macro seguenti:  
  
|Macro|Effetto|  
|-----------|-------------|  
|`DECLARE_NOT_AGGREGATABLE`|Utilizza sempre `CComObject`.|  
|`DECLARE_AGGREGATABLE`|Utilizza `CComAggObject` se l'oggetto verranno aggregati e `CComObject` caso contrario.  `CComCoClass` contiene questa macro se pertanto nessuna delle macro **DECLARE\_\*\_AGGREGATABLE** vengono dichiarate nella classe, questo sarà quello predefinito.|  
|`DECLARE_ONLY_AGGREGATABLE`|Utilizza sempre `CComAggObject`.  Restituisce un errore se l'oggetto non verranno aggregati.|  
|`DECLARE_POLY_AGGREGATABLE`|ATL crea un'istanza **CComPolyObject\<CYourClass\>** quando **IClassFactory::CreateInstance** viene chiamato.  Durante la creazione, il valore di sconosciuto esterno sia selezionata.  Se è **NULL**, **IUnknown** viene implementato per un oggetto non aggregato.  Se sconosciuto esterno non è **NULL**, **IUnknown** viene implementato per un oggetto aggregato.|  
  
 Il vantaggio di l `CComAggObject` e `CComObject` l'implementazione **IUnknown** è ottimizzata per il tipo di oggetto creato.  Ad esempio, un oggetto non aggregato necessita solo di un conteggio, mentre un oggetto aggregato necessita di un conteggio dei riferimenti per sconosciuto interno di un puntatore a sconosciuto esterno.  
  
 Il vantaggio di l `CComPolyObject` è di evitare di avere sia `CComAggObject` che `CComObject` nel modulo per gestire i casi aggregati e non aggregati.  Singole un oggetto `CComPolyObject` entrambi i casi.  Questo significa che una sola copia di vtable e una copia delle funzioni esistenti nel form.  Se il riferimento è elevata, questo può ridurre notevolmente la dimensione del modulo.  Tuttavia, se il riferimento è ridotto, utilizzando `CComPolyObject` possono comportare una dimensione leggermente più grande del modulo perché non è ottimizzata per un oggetto aggregato o non aggregato, come vengono `CComAggObject` e `CComObject`.  
  
## Vedere anche  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)   
 [Aggregation and Class Factory Macros](../atl/reference/aggregation-and-class-factory-macros.md)