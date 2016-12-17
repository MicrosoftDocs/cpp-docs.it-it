---
title: "CComAggObject Class | Microsoft Docs"
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
  - "ATL::CComAggObject<contained>"
  - "ATL.CComAggObject"
  - "ATL.CComAggObject<contained>"
  - "CComAggObject"
  - "ATL::CComAggObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggregate objects [C++], in ATL"
  - "aggregation [C++], oggetti ATL"
  - "CComAggObject class"
ms.assetid: 7aa90d69-d399-477b-880d-e2cdf0ef7881
caps.latest.revision: 29
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComAggObject Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa l'interfaccia [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto aggregato.  Per definizione, un oggetto aggregato è contenuto in un oggetto esterno.  La classe `CComAggObject` è simile a [CComObject Class](../../atl/reference/ccomobject-class.md), con la differenza che espone un'interfaccia che accessibili direttamente ai client esterni.  
  
## Sintassi  
  
```  
  
      template<  
   class contained  
>  
class CComAggObject :  
   public IUnknown, public CComObjectRootEx  
   < contained::_ThreadModel::ThreadModelNoCS >  
```  
  
#### Parametri  
 `contained`  
 I la classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o da [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)nonché da tutte le altre interfacce si desidera supportare l'oggetto.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAggObject::CComAggObject](../Topic/CComAggObject::CComAggObject.md)|Costruttore.|  
|[CComAggObject::~CComAggObject](../Topic/CComAggObject::~CComAggObject.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAggObject::AddRef](../Topic/CComAggObject::AddRef.md)|Incrementa il conteggio dei riferimenti all'oggetto aggregato.|  
|[CComAggObject::CreateInstance](../Topic/CComAggObject::CreateInstance.md)|Questa funzione statica consente di creare un nuovo oggetto **CComAggObject\<** `contained`**\>** senza il sovraccarico [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).|  
|[CComAggObject::FinalConstruct](../Topic/CComAggObject::FinalConstruct.md)|Esegue un'inizializzazione finale `m_contained`.|  
|[CComAggObject::FinalRelease](../Topic/CComAggObject::FinalRelease.md)|Esegue la distruzione finale `m_contained`.|  
|[CComAggObject::QueryInterface](../Topic/CComAggObject::QueryInterface.md)|Recupera un puntatore a un'interfaccia richiesta.|  
|[CComAggObject::Release](../Topic/CComAggObject::Release.md)|Decrementa il conteggio dei riferimenti all'oggetto aggregato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAggObject::m\_contained](../Topic/CComAggObject::m_contained.md)|Chiamate `IUnknown` di delegati a sconosciuto esterno.|  
  
## Note  
 Implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) di`CComAggObject` per un oggetto aggregato.  `CComAggObject` dispone della propria interfaccia **IUnknown**, esclusi dall'esterno **IUnknown** dell'oggetto e mantiene il relativo conteggio dei riferimenti.  
  
 Per ulteriori informazioni su aggregazione, vedere l'articolo [Principi fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).  
  
## Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IUnknown`  
  
 `CComAggObject`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComObject Class](../../atl/reference/ccomobject-class.md)   
 [CComPolyObject Class](../../atl/reference/ccompolyobject-class.md)   
 [DECLARE\_AGGREGATABLE](../Topic/DECLARE_AGGREGATABLE.md)   
 [DECLARE\_ONLY\_AGGREGATABLE](../Topic/DECLARE_ONLY_AGGREGATABLE.md)   
 [DECLARE\_NOT\_AGGREGATABLE](../Topic/DECLARE_NOT_AGGREGATABLE.md)   
 [Class Overview](../../atl/atl-class-overview.md)