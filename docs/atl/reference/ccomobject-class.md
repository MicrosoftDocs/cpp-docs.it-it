---
title: "CComObject Class | Microsoft Docs"
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
  - "ATL.CComObject<Base>"
  - "ATL::CComObject"
  - "ATL::CComObject<Base>"
  - "ATL.CComObject"
  - "CComObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComObject class"
ms.assetid: e2b6433b-6349-4749-b4bc-acbd7a22c8b0
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComObject Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** per un oggetto non aggregato.  
  
## Sintassi  
  
```  
  
      template<  
   class Base   
>  
class CComObject :  
   public Base  
```  
  
#### Parametri  
 `Base`  
 I la classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o da [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)nonché da tutte le altre interfacce si desidera supportare l'oggetto.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObject::CComObject](../Topic/CComObject::CComObject.md)|Costruttore.|  
|[CComObject::~CComObject](../Topic/CComObject::~CComObject.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObject::AddRef](../Topic/CComObject::AddRef.md)|Incrementa il conteggio dei riferimenti all'oggetto.|  
|[CComObject::CreateInstance](../Topic/CComObject::CreateInstance.md)|\(Proprietà statica\) crea un nuovo oggetto `CComObject`.|  
|[CComObject::QueryInterface](../Topic/CComObject::QueryInterface.md)|Recupera un puntatore a un'interfaccia richiesta.|  
|[CComObject::Release](../Topic/CComObject::Release.md)|Decrementa il conteggio dei riferimenti all'oggetto.|  
  
## Note  
 Implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) di`CComObject` per un oggetto non aggregato.  Tuttavia, le chiamate a `QueryInterface`, a `AddRef`e a **Release** sono delegate `CComObjectRootEx`.  
  
 Per ulteriori informazioni su l `CComObject`, vedere l'articolo [Principi fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).  
  
## Gerarchia di ereditarietà  
 `Base`  
  
 `CComObject`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComAggObject Class](../../atl/reference/ccomaggobject-class.md)   
 [CComPolyObject Class](../../atl/reference/ccompolyobject-class.md)   
 [DECLARE\_AGGREGATABLE](../Topic/DECLARE_AGGREGATABLE.md)   
 [DECLARE\_NOT\_AGGREGATABLE](../Topic/DECLARE_NOT_AGGREGATABLE.md)   
 [Class Overview](../../atl/atl-class-overview.md)