---
title: "CComObjectStack Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CComObjectStack"
  - "ATL.CComObjectStack"
  - "ATL::CComObjectStack<Base>"
  - "ATL.CComObjectStack<Base>"
  - "CComObjectStack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComObjectStack class"
ms.assetid: 3da72c40-c834-45f6-bb76-6ac204028d80
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CComObjectStack Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe crea un oggetto COM temporaneo e fornisce a un'implementazione scheletrica **IUnknown**.  
  
## Sintassi  
  
```  
  
      template<  
   class Base   
>  
class CComObjectStack :  
   public Base  
```  
  
#### Parametri  
 `Base`  
 I la classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o da [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)nonché da qualsiasi altra interfaccia si desidera supportare l'oggetto.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectStack::CComObjectStack](../Topic/CComObjectStack::CComObjectStack.md)|Costruttore.|  
|[CComObjectStack::~CComObjectStack](../Topic/CComObjectStack::~CComObjectStack.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectStack::AddRef](../Topic/CComObjectStack::AddRef.md)|Restituisce zero.  In modalità di debug, chiamare `_ASSERTE`.|  
|[CComObjectStack::QueryInterface](../Topic/CComObjectStack::QueryInterface.md)|Restituisce **E\_NOINTERFACE**.  In modalità di debug, chiamare `_ASSERTE`.|  
|[CComObjectStack::Release](../Topic/CComObjectStack::Release.md)|Restituisce zero.  In modalità di debug, chiamare `_ASSERTE`.  ~|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectStack::m\_hResFinalConstruct](../Topic/CComObjectStack::m_hResFinalConstruct.md)|Contiene **HRESULT** restituito durante la costruzione dell'oggetto `CComObjectStack`.|  
  
## Note  
 `CComObjectStack` viene utilizzato per creare un oggetto COM temporaneo e fornire l'oggetto un'implementazione scheletrica **IUnknown**.  In genere, l'oggetto viene utilizzato come una variabile locale in una funzione ovvero inserito nello stack\).  Poiché l'oggetto viene eliminato quando la funzione termina, il conteggio dei riferimenti non viene eseguito per aumentare l'efficienza.  
  
 Di seguito viene illustrato come creare un oggetto COM utilizzato in una funzione:  
  
 [!code-cpp[NVC_ATL_COM#42](../../atl/codesnippet/CPP/ccomobjectstack-class_1.cpp)]  
  
 L'oggetto temporaneo `Tempobj` viene inserito nello stack e automaticamente scompare quando la funzione termina.  
  
## Gerarchia di ereditarietà  
 `Base`  
  
 `CComObjectStack`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComAggObject Class](../../atl/reference/ccomaggobject-class.md)   
 [CComObject Class](../../atl/reference/ccomobject-class.md)   
 [CComObjectGlobal Class](../../atl/reference/ccomobjectglobal-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)