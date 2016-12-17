---
title: "CComEnumImpl Class | Microsoft Docs"
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
  - "ATL.CComEnumImpl"
  - "ATL::CComEnumImpl"
  - "CComEnumImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComEnumImpl class"
ms.assetid: cc0d8e76-e608-46db-87cd-4c7161fe32d2
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComEnumImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce l'implementazione di un'interfaccia dell'enumeratore COM in cui gli elementi che vengono enumerati vengono memorizzati in una matrice.  
  
## Sintassi  
  
```  
  
      template <  
   class Base,  
   const IID* piid,  
   class T,  
   class Copy  
>  
class ATL_NO_VTABLE CComEnumImpl :   
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
 [classe criteri di copia](../../atl/atl-copy-policy-classes.md)omogeneo.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComEnumImpl::CComEnumImpl](../Topic/CComEnumImpl::CComEnumImpl.md)|Costruttore.|  
|[CComEnumImpl::~CComEnumImpl](../Topic/CComEnumImpl::~CComEnumImpl.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComEnumImpl::Clone](../Topic/CComEnumImpl::Clone.md)|l'implementazione di.|  
|[CComEnumImpl::Init](../Topic/CComEnumImpl::Init.md)|Inizializza enumeratore.|  
|[CComEnumImpl::Next](../Topic/CComEnumImpl::Next.md)|l'implementazione di.|  
|[CComEnumImpl::Reset](../Topic/CComEnumImpl::Reset.md)|l'implementazione di.|  
|[CComEnumImpl::Skip](../Topic/CComEnumImpl::Skip.md)|l'implementazione di.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComEnumImpl::m\_begin](../Topic/CComEnumImpl::m_begin.md)|Un puntatore al primo elemento della matrice.|  
|[CComEnumImpl::m\_dwFlags](../Topic/CComEnumImpl::m_dwFlags.md)|Flag di copia passati a `Init`.|  
|[CComEnumImpl::m\_end](../Topic/CComEnumImpl::m_end.md)|Un puntatore alla posizione immediatamente oltre l'ultimo elemento della matrice.|  
|[CComEnumImpl::m\_iter](../Topic/CComEnumImpl::m_iter.md)|Un puntatore all'elemento corrente nella matrice.|  
|[CComEnumImpl::m\_spUnk](../Topic/CComEnumImpl::m_spUnk.md)|Il puntatore **IUnknown** dell'oggetto che fornisce la raccolta che è enumerata.|  
  
## Note  
 `CComEnumImpl` fornisce l'implementazione di un'interfaccia dell'enumeratore COM in cui gli elementi che vengono enumerati vengono memorizzati in una matrice.  Questa classe è analoga alla classe `IEnumOnSTLImpl`, che fornisce l'implementazione di un'interfaccia dell'enumeratore basata su un contenitore STL.  
  
> [!NOTE]
>  Per informazioni su ulteriori differenze tra `CComEnumImpl` e `IEnumOnSTLImpl`, vedere [CComEnumImpl::Init](../Topic/CComEnumImpl::Init.md).  
  
 In genere, non è necessario creare una classe dell'enumeratore la derivazione da questa implementazione dell'interfaccia.  Se si desidera utilizzare un enumeratore ATL\- fornito basato su una matrice, è più comune per creare un'istanza [CComEnum](../../atl/reference/ccomenum-class.md).  
  
 Tuttavia, se è necessario fornire un enumeratore personalizzato \(ad esempio, uno che espone le interfacce oltre all'enumeratore\), è possibile derivare dalla classe.  In questa situazione, potrebbe essere necessario eseguire l'override del metodo [CComEnumImpl::Clone](../Topic/CComEnumImpl::Clone.md) per fornire un'implementazione personalizzata.  
  
 Per ulteriori informazioni, vedere [Raccolte e enumeratori ATL](../../atl/atl-collections-and-enumerators.md).  
  
## Gerarchia di ereditarietà  
 `Base`  
  
 `CComEnumImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [IEnumOnSTLImpl Class](../../atl/reference/ienumonstlimpl-class.md)   
 [CComEnum Class](../../atl/reference/ccomenum-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)