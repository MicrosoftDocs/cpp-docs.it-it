---
title: "CComObjectRoot Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComObjectRoot"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComObjectRoot class"
ms.assetid: f8797c38-6e73-4f67-85c2-71654cffa8eb
caps.latest.revision: 17
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComObjectRoot Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo typedef [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) templatized il modello di threading predefinito del server.  
  
## Sintassi  
  
```  
  
typedef CComObjectRootEx<CComObjectThreadModel> CComObjectRoot;  
  
```  
  
## Note  
 `CComObjectRoot` è `typedef`[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) templatized il modello di threading predefinito del server.  Pertanto [CComObjectThreadModel](../Topic/CComObjectThreadModel.md) farà riferimento [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md).  
  
 Gestione di conteggio di riferimento oggetto handle di`CComObjectRootEx` sia per non aggregato di oggetti aggregati.  Utilizza il conteggio di riferimento oggetto se l'oggetto non sta eseguendo l'aggregazione e utilizza il puntatore a sconosciuto esterno se l'oggetto sta eseguendo l'aggregazione.  Per gli oggetti aggregati, i metodi `CComObjectRootEx` possono essere utilizzati per gestire l'errore dell'oggetto interno al costrutto e la protezione dell'oggetto esterno da utilizzare quando le interfacce interne vengono eliminate o l'oggetto interno viene eliminato.  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComObjectRootEx Class Members](http://msdn.microsoft.com/it-it/e3ce9c3d-9c8e-4fe5-b682-8e56740a0164)   
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
 [CComAggObject Class](../../atl/reference/ccomaggobject-class.md)   
 [CComObject Class](../../atl/reference/ccomobject-class.md)   
 [CComPolyObject Class](../../atl/reference/ccompolyobject-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)