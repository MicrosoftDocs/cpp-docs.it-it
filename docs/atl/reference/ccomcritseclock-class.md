---
title: "CComCritSecLock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CComCritSecLock"
  - "ATL.CComCritSecLock<TLock>"
  - "ATL::CComCritSecLock<TLock>"
  - "ATL.CComCritSecLock"
  - "CComCritSecLock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComCritSecLock class"
ms.assetid: 223152a1-86c3-4ef9-89a7-f455fe791b0e
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CComCritSecLock Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per bloccare e sbloccare un oggetto sezione critica.  
  
## Sintassi  
  
```  
  
      template<  
   class TLock  
> class CComCritSecLock  
```  
  
#### Parametri  
 *TLock*  
 l'oggetto da bloccare e sbloccare.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCritSecLock::CComCritSecLock](../Topic/CComCritSecLock::CComCritSecLock.md)|Costruttore.|  
|[CComCritSecLock::~CComCritSecLock](../Topic/CComCritSecLock::~CComCritSecLock.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCritSecLock::Lock](../Topic/CComCritSecLock::Lock.md)|Chiamare questo metodo per bloccare l'oggetto sezione critica.|  
|[CComCritSecLock::Unlock](../Topic/CComCritSecLock::Unlock.md)|Chiamare questo metodo per sbloccare un oggetto sezione critica.|  
  
## Note  
 Utilizzare questa classe per bloccare e sbloccare gli oggetti in modo più sicuro rispetto a [classe di CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) o [classe di CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md).  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)   
 [CComAutoCriticalSection Class](../../atl/reference/ccomautocriticalsection-class.md)