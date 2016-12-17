---
title: "CComContainedObject Class | Microsoft Docs"
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
  - "CComContainedObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggregate objects [C++], in ATL"
  - "aggregation [C++], oggetti ATL"
  - "CComContainedObject class"
ms.assetid: e8616b41-c200-47b8-bf2c-fb9f713ebdad
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComContainedObject Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) delegando **IUnknown**dell'oggetto proprietario.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<  
class Base   
>  
class CComContainedObject :  
public Base  
```  
  
#### Parametri  
 `Base`  
 I la classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o da [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComContainedObject::CComContainedObject](../Topic/CComContainedObject::CComContainedObject.md)|Costruttore.  Inizializza il puntatore membro a `IUnknown`dell'oggetto proprietario.|  
|[CComContainedObject::~CComContainedObject](../Topic/CComContainedObject::~CComContainedObject.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComContainedObject::AddRef](../Topic/CComContainedObject::AddRef.md)|Incrementa il conteggio dei riferimenti all'oggetto proprietario.|  
|[CComContainedObject::GetControllingUnknown](../Topic/CComContainedObject::GetControllingUnknown.md)|Recupera `IUnknown`dell'oggetto proprietario.|  
|[CComContainedObject::QueryInterface](../Topic/CComContainedObject::QueryInterface.md)|Recupera un puntatore a un'interfaccia richiesta sull'oggetto proprietario.|  
|[CComContainedObject::Release](../Topic/CComContainedObject::Release.md)|Decrementa il conteggio dei riferimenti all'oggetto proprietario.|  
  
## Note  
 ATL utilizza `CComContainedObject` nelle classi [CComAggObject](../../atl/reference/ccomaggobject-class.md), [CComPolyObject](../../atl/reference/ccompolyobject-class.md)e [CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md).  `CComContainedObject` implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) delegando **IUnknown**dell'oggetto proprietario.  \(Il proprietario è o l'oggetto esterno di un aggregato, o un oggetto per il quale un un'interfaccia tear\-off sta creando.\) `CComContainedObject` chiama `OuterQueryInterface`, `OuterAddRef`e `OuterRelease`di `CComObjectRootEx`, interamente ereditato con `Base`.  
  
## Gerarchia di ereditarietà  
 `Base`  
  
 `CComContainedObject`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)