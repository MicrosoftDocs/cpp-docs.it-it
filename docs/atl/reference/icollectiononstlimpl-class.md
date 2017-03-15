---
title: "ICollectionOnSTLImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.ICollectionOnSTLImpl"
  - "ATL::ICollectionOnSTLImpl"
  - "ICollectionOnSTLImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ICollectionOnSTLImpl class"
ms.assetid: 683c88b0-0d97-4779-a762-e493334ba7f9
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# ICollectionOnSTLImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi utilizzati da una classe di raccolte.  
  
## Sintassi  
  
```  
  
      template <  
   class T,  
   class CollType,  
   class ItemType,  
   class CopyItem,  
   class EnumType  
>  
class ICollectionOnSTLImpl :  
   public T  
```  
  
#### Parametri  
 `T`  
 Un'interfaccia di libreria COM.  
  
 `CollType`  
 Una classe di contenitori STL.  
  
 *ItemType*  
 Il tipo di elemento esposto dall'interfaccia del contenitore.  
  
 *CopyItem*  
 [classe criteri di copia](../../atl/atl-copy-policy-classes.md).  
  
 *EnumType*  
 [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md)la classe compatibile dell'enumeratore.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ICollectionOnSTLImpl::get\_\_NewEnum](../Topic/ICollectionOnSTLImpl::get__NewEnum.md)|Restituisce un oggetto enumeratore per la raccolta.|  
|[ICollectionOnSTLImpl::get\_Count](../Topic/ICollectionOnSTLImpl::get_Count.md)|Restituisce il numero di elementi nella raccolta.|  
|[ICollectionOnSTLImpl::get\_Item](../Topic/ICollectionOnSTLImpl::get_Item.md)|Restituisce l'elemento richiesto dalla raccolta.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ICollectionOnSTLImpl::m\_coll](../Topic/ICollectionOnSTLImpl::m_coll.md)|Raccolta.|  
  
## Note  
 Questa classe fornisce l'implementazione per tre metodi di interfaccia di raccolta: [get\_Count](../Topic/ICollectionOnSTLImpl::get_Count.md), [get\_Item](../Topic/ICollectionOnSTLImpl::get_Item.md)e [get\_\_NewEnum](../Topic/ICollectionOnSTLImpl::get__NewEnum.md).  
  
 Per utilizzare questa classe:  
  
-   Definire o loan\) un'interfaccia di raccolta che si desidera distribuire.  
  
-   Derivare la classe da una specializzazione `ICollectionOnSTLImpl` in base a questa interfaccia della raccolta.  
  
-   Utilizzare la classe derivata per implementare tutti i metodi dell'interfaccia di libreria non gestita da `ICollectionOnSTLImpl`.  
  
> [!NOTE]
>  Se l'interfaccia di raccolta è un'interfaccia duale, derivare la classe da [IDispatchImpl](../../atl/reference/idispatchimpl-class.md), passando la specializzazione `ICollectionOnSTLImpl` come primo parametro di modello se si desidera ATL per fornire l'implementazione dei metodi `IDispatch`.  
  
-   Aggiungere elementi al membro [m\_coll](../Topic/ICollectionOnSTLImpl::m_coll.md) per popolare la raccolta.  
  
 Per ulteriori informazioni ed esempi, vedere [Raccolte e enumeratori ATL](../../atl/atl-collections-and-enumerators.md).  
  
## Gerarchia di ereditarietà  
 `T`  
  
 `ICollectionOnSTLImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Esempio ATLCollections](../../top/visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)