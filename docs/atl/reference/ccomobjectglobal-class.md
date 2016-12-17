---
title: "CComObjectGlobal Class | Microsoft Docs"
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
  - "CComObjectGlobal"
  - "ATL::CComObjectGlobal<Base>"
  - "ATL::CComObjectGlobal"
  - "ATL.CComObjectGlobal"
  - "ATL.CComObjectGlobal<Base>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComObjectGlobal class"
ms.assetid: 79bdee55-66e4-4536-b5b3-bdf09f78b9a6
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComObjectGlobal Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe gestisce un conteggio dei riferimenti al modulo contenente l'oggetto `Base`.  
  
## Sintassi  
  
```  
  
      template<  
   class Base   
>  
class CComObjectGlobal :  
   public Base  
```  
  
#### Parametri  
 `Base`  
 I la classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o da [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)nonché da qualsiasi altra interfaccia si desidera supportare l'oggetto.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectGlobal::CComObjectGlobal](../Topic/CComObjectGlobal::CComObjectGlobal.md)|Costruttore.|  
|[CComObjectGlobal::~CComObjectGlobal](../Topic/CComObjectGlobal::~CComObjectGlobal.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectGlobal::AddRef](../Topic/CComObjectGlobal::AddRef.md)|Implementa `AddRef`globale.|  
|[CComObjectGlobal::QueryInterface](../Topic/CComObjectGlobal::QueryInterface.md)|Implementa `QueryInterface`globale.|  
|[CComObjectGlobal::Release](../Topic/CComObjectGlobal::Release.md)|Implementa **Release**globale.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectGlobal::m\_hResFinalConstruct](../Topic/CComObjectGlobal::m_hResFinalConstruct.md)|Contiene **HRESULT** restituito durante la costruzione dell'oggetto `CComObjectGlobal`.|  
  
## Note  
 `CComObjectGlobal` gestisce un conteggio dei riferimenti al modulo contenente l'oggetto `Base`.  `CComObjectGlobal` fornisce l'oggetto non verrà eliminato fino a quando il modulo non viene pubblicato.  L'oggetto verrà rimosso solo quando il conteggio dei riferimenti all'intero form andare a zero.  
  
 Ad esempio, utilizzando `CComObjectGlobal`, una class factory può utilizzare un oggetto complessivo comune condiviso da tutti i relativi client.  
  
## Gerarchia di ereditarietà  
 `Base`  
  
 `CComObjectGlobal`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComObjectStack Class](../../atl/reference/ccomobjectstack-class.md)   
 [CComAggObject Class](../../atl/reference/ccomaggobject-class.md)   
 [CComObject Class](../../atl/reference/ccomobject-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)