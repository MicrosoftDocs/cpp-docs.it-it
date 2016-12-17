---
title: "IObjectWithSiteImpl Class | Microsoft Docs"
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
  - "ATL::IObjectWithSiteImpl"
  - "ATL.IObjectWithSiteImpl<T>"
  - "IObjectWithSiteImpl"
  - "ATL.IObjectWithSiteImpl"
  - "ATL::IObjectWithSiteImpl<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IObjectWithSiteImpl class"
ms.assetid: 4e1f774f-bc3d-45ee-9a1c-c3533a511588
caps.latest.revision: 18
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IObjectWithSiteImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi che consentono a un oggetto e il relativo sito.  
  
## Sintassi  
  
```  
  
      template<  
   class T   
>  
class ATL_NO_VTABLE IObjectWithSiteImpl :  
   public IObjectWithSite  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IObjectWithSiteImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IObjectWithSiteImpl::GetSite](../Topic/IObjectWithSiteImpl::GetSite.md)|Eseguire una query sul sito per un puntatore a interfaccia.|  
|[IObjectWithSiteImpl::SetChildSite](../Topic/IObjectWithSiteImpl::SetChildSite.md)|Fornisce l'oggetto con il puntatore **IUnknown** del sito.|  
|[IObjectWithSiteImpl::SetSite](../Topic/IObjectWithSiteImpl::SetSite.md)|Fornisce l'oggetto con il puntatore **IUnknown** del sito.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IObjectWithSiteImpl::m\_spUnkSite](../Topic/IObjectWithSiteImpl::m_spUnkSite.md)|Mantiene il puntatore **IUnknown** del sito.|  
  
## Note  
 L'interfaccia [IObjectWithSite](http://msdn.microsoft.com/library/windows/desktop/ms693765) consente a un oggetto e il relativo sito.  La classe `IObjectWithSiteImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 `IObjectWithSiteImpl` specifica due metodi.  Le prime chiamate client `SetSite`, passando il puntatore **IUnknown** del sito.  Questo puntatore viene archiviato nell'oggetto e successivamente può essere recuperato tramite una chiamata a `GetSite`.  
  
 In genere, derivare la classe da `IObjectWithSiteImpl` quando si crea un oggetto che non sia un controllo.  Per i controlli, derivare la classe da [IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md), che fornisce inoltre un puntatore di sito.  Non derivare la classe da `IObjectWithSiteImpl` che da `IOleObjectImpl`.  
  
## Gerarchia di ereditarietà  
 `IObjectWithSite`  
  
 `IObjectWithSiteImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)