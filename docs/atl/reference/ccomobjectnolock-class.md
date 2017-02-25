---
title: "CComObjectNoLock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComObjectNoLock"
  - "ATL::CComObjectNoLock"
  - "ATL.CComObjectNoLock<Base>"
  - "CComObjectNoLock"
  - "ATL::CComObjectNoLock<Base>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComObjectNoLock class"
ms.assetid: 288c6506-7da8-4127-8d58-7f4bd779539a
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CComObjectNoLock Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** per un oggetto non aggregato, ma non incrementa il conteggio dei blocchi del modulo nel costruttore.  
  
## Sintassi  
  
```  
  
      template<  
   class Base   
>  
class CComObjectNoLock :  
   public Base  
```  
  
#### Parametri  
 `Base`  
 I la classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o da [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)nonché da qualsiasi altra interfaccia si desidera supportare l'oggetto.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectNoLock::CComObjectNoLock](../Topic/CComObjectNoLock::CComObjectNoLock.md)|Costruttore.|  
|[CComObjectNoLock::~CComObjectNoLock](../Topic/CComObjectNoLock::~CComObjectNoLock.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectNoLock::AddRef](../Topic/CComObjectNoLock::AddRef.md)|Incrementa il conteggio dei riferimenti all'oggetto.|  
|[CComObjectNoLock::QueryInterface](../Topic/CComObjectNoLock::QueryInterface.md)|Restituisce un puntatore a un'interfaccia richiesta.|  
|[CComObjectNoLock::Release](../Topic/CComObjectNoLock::Release.md)|Decrementa il conteggio dei riferimenti all'oggetto.|  
  
## Note  
 `CComObjectNoLock` è simile a [CComObject](../../atl/reference/ccomobject-class.md) in che implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto non aggregato; tuttavia, `CComObjectNoLock` non incrementa il conteggio dei blocchi del modulo nel costruttore.  
  
 ATL utilizza `CComObjectNoLock` internamente per i class factory.  Non si utilizzerà in genere direttamente la classe.  
  
## Gerarchia di ereditarietà  
 `Base`  
  
 `CComObjectNoLock`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)