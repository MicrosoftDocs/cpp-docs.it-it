---
title: "IEnumOnSTLImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IEnumOnSTLImpl"
  - "ATL.IEnumOnSTLImpl"
  - "ATL::IEnumOnSTLImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IEnumOnSTLImpl class"
ms.assetid: 1789e77b-88b8-447d-a490-806b918912ce
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# IEnumOnSTLImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe definisce un'interfaccia dell'enumeratore basata su una raccolta STL.  
  
## Sintassi  
  
```  
  
      template <  
   class Base,  
   const IID* piid,  
   class T,  
   class Copy,  
   class CollType  
>  
class ATL_NO_VTABLE IEnumOnSTLImpl :  
   public Base  
```  
  
#### Parametri  
 `Base`  
 Un'interfaccia dell'enumeratore COM \(\).  
  
 `piid`  
 Un puntatore all'ID dell'interfaccia dell'enumeratore.  
  
 `T`  
 Il tipo di elemento esposto dall'enumeratore.  
  
 `Copy`  
 [classe criteri di copia](../../atl/atl-copy-policy-classes.md).  
  
 `CollType`  
 Una classe di contenitori STL.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IEnumOnSTLImpl::Clone](../Topic/IEnumOnSTLImpl::Clone.md)|l'implementazione di.|  
|[IEnumOnSTLImpl::Init](../Topic/IEnumOnSTLImpl::Init.md)|Inizializza enumeratore.|  
|[IEnumOnSTLImpl::Next](../Topic/IEnumOnSTLImpl::Next.md)|l'implementazione di.|  
|[IEnumOnSTLImpl::Reset](../Topic/IEnumOnSTLImpl::Reset.md)|l'implementazione di.|  
|[IEnumOnSTLImpl::Skip](../Topic/IEnumOnSTLImpl::Skip.md)|l'implementazione di.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IEnumOnSTLImpl::m\_iter](../Topic/IEnumOnSTLImpl::m_iter.md)|Un iteratore che rappresenta la posizione corrente dell'enumeratore all'interno della raccolta.|  
|[IEnumOnSTLImpl::m\_pcollection](../Topic/IEnumOnSTLImpl::m_pcollection.md)|Un puntatore al contenitore STL che utilizza elementi da enumerare.|  
|[IEnumOnSTLImpl::m\_spUnk](../Topic/IEnumOnSTLImpl::m_spUnk.md)|Il puntatore **IUnknown** dell'oggetto che fornisce la raccolta.|  
  
## Note  
 `IEnumOnSTLImpl` fornisce l'implementazione di un'interfaccia dell'enumeratore COM in cui gli elementi che vengono enumerati vengono archiviati in un contenitore STL\- compatibile.  Questa classe è analoga alla classe [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md), che fornisce un'implementazione per un'interfaccia dell'enumeratore basata su una matrice.  
  
> [!NOTE]
>  Vedere [CComEnumImpl::Init](../Topic/CComEnumImpl::Init.md) per informazioni su ulteriori differenze tra `CComEnumImpl` e `IEnumOnSTLImpl`.  
  
 In genere, non è necessario creare una classe dell'enumeratore la derivazione da questa implementazione dell'interfaccia.  Se si desidera utilizzare un enumeratore ATL\- fornito basato su un contenitore STL, è più comune per creare un'istanza [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md), o per creare una classe di raccolte che restituisce un enumeratore derivazione da [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md).  
  
 Tuttavia, se è necessario fornire un enumeratore personalizzato \(ad esempio, uno che espone le interfacce oltre all'enumeratore\), è possibile derivare dalla classe.  In questa situazione è probabile che sarà necessario eseguire l'override del metodo [clone](../Topic/IEnumOnSTLImpl::Clone.md) per fornire un'implementazione personalizzata.  
  
## Gerarchia di ereditarietà  
 `Base`  
  
 `IEnumOnSTLImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)