---
title: "CComPolyObject Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComPolyObject"
  - "ATL.CComPolyObject<contained>"
  - "ATL::CComPolyObject"
  - "ATL::CComPolyObject<contained>"
  - "ATL.CComPolyObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggregate objects [C++], in ATL"
  - "aggregation [C++], oggetti ATL"
  - "CComPolyObject class"
ms.assetid: eaf67c18-e855-48ca-9b15-f1df3106121b
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CComPolyObject Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** per un oggetto aggregato o non aggregato.  
  
## Sintassi  
  
```  
  
      template<  
   class contained   
>  
class CComPolyObject : public IUnknown, public CComObjectRootEx  
   < contained::_ThreadModel::ThreadModelNoCS >  
```  
  
#### Parametri  
 `contained`  
 I la classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o da [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)nonché da tutte le altre interfacce si desidera supportare l'oggetto.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPolyObject::CComPolyObject](../Topic/CComPolyObject::CComPolyObject.md)|Costruttore.|  
|[CComPolyObject::~CComPolyObject](../Topic/CComPolyObject::~CComPolyObject.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPolyObject::AddRef](../Topic/CComPolyObject::AddRef.md)|Incrementa il conteggio dei riferimenti dell'oggetto.|  
|[CComPolyObject::CreateInstance](../Topic/CComPolyObject::CreateInstance.md)|\(Proprietà statica\) consente di creare un nuovo oggetto **CComPolyObject\<** `contained`**\>** senza il sovraccarico [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).|  
|[CComPolyObject::FinalConstruct](../Topic/CComPolyObject::FinalConstruct.md)|Esegue un'inizializzazione finale `m_contained`.|  
|[CComPolyObject::FinalRelease](../Topic/CComPolyObject::FinalRelease.md)|Esegue la distruzione finale `m_contained`.|  
|[CComPolyObject::QueryInterface](../Topic/CComPolyObject::QueryInterface.md)|Recupera un puntatore a un'interfaccia richiesta.|  
|[CComPolyObject::Release](../Topic/CComPolyObject::Release.md)|Decrementa il conteggio dei riferimenti dell'oggetto.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPolyObject::m\_contained](../Topic/CComPolyObject::m_contained.md)|Chiamate **IUnknown** di delegati a sconosciuto esterno se l'oggetto è aggregato o a **IUnknown** dell'oggetto se l'oggetto non verranno aggregati.|  
  
## Note  
 `CComPolyObject` implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto aggregato o non aggregato.  
  
 Quando un'istanza `CComPolyObject` viene creata, il valore di sconosciuto esterno sia selezionata.  Se è **NULL**, **IUnknown** viene implementato per un oggetto non aggregato.  Se sconosciuto esterno non è **NULL**, **IUnknown** viene implementato per un oggetto aggregato.  
  
 Il vantaggio di l `CComPolyObject` è di evitare di avere sia [CComAggObject](../../atl/reference/ccomaggobject-class.md) che [CComObject](../../atl/reference/ccomobject-class.md) nel modulo per gestire i casi aggregati e non aggregati.  Singole un oggetto `CComPolyObject` entrambi i casi.  Questo significa che una sola copia di vtable e una copia delle funzioni esistenti nel form.  Se il riferimento è elevata, questo può ridurre notevolmente la dimensione del modulo.  Tuttavia, se il riferimento è ridotto, utilizzando `CComPolyObject` possono comportare una dimensione leggermente più grande del modulo perché non è ottimizzata per un oggetto aggregato o non aggregato, come vengono `CComAggObject` e `CComObject`.  
  
 Se la macro `DECLARE_POLY_AGGREGATABLE` specificata nella definizione di classe dell'oggetto, `CComPolyObject` verrà utilizzato per creare l'oggetto.  `DECLARE_POLY_AGGREGATABLE` verrà automaticamente dichiarato se si utilizza la procedura guidata progetto ATL per creare un controllo completo o un controllo Internet Explorer.  
  
 Se aggregato, l'oggetto `CComPolyObject` dispone di un proprio **IUnknown**, separati da **IUnknown**esterno dell'oggetto e mantiene il relativo conteggio dei riferimenti.  `CComPolyObject` utilizza [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) delegare sconosciuto esterno.  
  
 Per ulteriori informazioni su aggregazione, vedere l'articolo [Principi fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).  
  
## Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IUnknown`  
  
 `CComPolyObject`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
 [DECLARE\_POLY\_AGGREGATABLE](../Topic/DECLARE_POLY_AGGREGATABLE.md)   
 [Class Overview](../../atl/atl-class-overview.md)