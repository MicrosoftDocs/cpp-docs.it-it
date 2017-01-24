---
title: "CAutoVectorPtr Class | Microsoft Docs"
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
  - "ATL::CAutoVectorPtr"
  - "ATL.CAutoVectorPtr"
  - "ATL.CAutoVectorPtr<T>"
  - "CAutoVectorPtr"
  - "ATL::CAutoVectorPtr<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAutoVectorPtr class"
ms.assetid: 0030362b-6bc4-4a47-9b5b-3c3899dceab4
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAutoVectorPtr Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un oggetto del puntatore intelligente utilizzando il nuovo vettore e operatori delete.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<  
typename T  
> class CAutoVectorPtr  
```  
  
#### Parametri  
 `T`  
 Il tipo puntatore.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoVectorPtr::CAutoVectorPtr](../Topic/CAutoVectorPtr::CAutoVectorPtr.md)|Costruttore.|  
|[CAutoVectorPtr::~CAutoVectorPtr](../Topic/CAutoVectorPtr::~CAutoVectorPtr.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoVectorPtr::Allocate](../Topic/CAutoVectorPtr::Allocate.md)|Chiamare questo metodo per allocare memoria richiesta dalla matrice di oggetti puntati da `CAutoVectorPtr`.|  
|[CAutoVectorPtr::Attach](../Topic/CAutoVectorPtr::Attach.md)|Chiamare questo metodo per eseguire la proprietà di un puntatore esistente.|  
|[CAutoVectorPtr::Detach](../Topic/CAutoVectorPtr::Detach.md)|Chiamare questo metodo per liberare la proprietà di un puntatore.|  
|[CAutoVectorPtr::Free](../Topic/CAutoVectorPtr::Free.md)|Chiamare questo metodo per eliminare un oggetto fa riferimento a `CAutoVectorPtr`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoVectorPtr::operator T \*](../Topic/CAutoVectorPtr::operator%20T%20*.md)|l'operatore di cast.|  
|[CAutoVectorPtr::operator \=](../Topic/CAutoVectorPtr::operator%20=.md)|l'operatore di assegnazione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoVectorPtr::m\_p](../Topic/CAutoVectorPtr::m_p.md)|La variabile membro dati puntatore.|  
  
## Note  
 Questa classe fornisce metodi per creare e gestire un puntatore intelligente, che consente di proteggere dalle perdite di memoria automaticamente liberando risorse quando esegue il fallback all'ambito.  `CAutoVectorPtr` è simile a `CAutoPtr`, l'unica differenza è che utilizza [nuovo vettore &#91;&#93;](../Topic/operator%20new\(%3Cnew%3E\).md) e [delete vettoriale &#91;&#93;](../Topic/operator%20delete\(%3Cnew%3E\).md)`CAutoVectorPtr` allocare e liberare memoria anziché C\+\+ **new** e operatori **delete**.  Vedere [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) se le classi di raccolte `CAutoVectorPtr` richieste.  
  
 Vedere [CAutoPtr](../../atl/reference/cautoptr-class.md) per un esempio di utilizzo di una classe del puntatore intelligente.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [CAutoPtr Class](../../atl/reference/cautoptr-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)