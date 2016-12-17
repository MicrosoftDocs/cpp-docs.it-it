---
title: "Struttura DispatchState | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::DispatchState"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DispatchState (struttura)"
ms.assetid: 8c52546e-1650-48a0-985f-7e4a0fc26a90
caps.latest.revision: 17
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura DispatchState
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La struttura `DispatchState` è utilizzata per trasferire lo stato al metodo `IExecutionContext::Dispatch`.  Descrive le circostanze in cui il metodo `Dispatch` viene richiamato su un'interfaccia `IExecutionContext`.  
  
## Sintassi  
  
```  
struct DispatchState;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore DispatchState::DispatchState](../Topic/DispatchState::DispatchState%20Constructor.md)|Costruisce un nuovo oggetto `DispatchState`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati DispatchState::m\_dispatchStateSize](../Topic/DispatchState::m_dispatchStateSize%20Data%20Member.md)|Dimensione della struttura utilizzata per il controllo delle versioni.|  
|[Membro dati DispatchState::m\_fIsPreviousContextAsynchronouslyBlocked](../Topic/DispatchState::m_fIsPreviousContextAsynchronouslyBlocked%20Data%20Member.md)|Consente di indicare se questo contesto ha inserito il metodo `Dispatch` perché quello precedente è bloccato in modo asincrono.  Viene utilizzato solo sul contesto di pianificazione UMS e viene impostato sul valore `0` per tutti gli altri contesti di esecuzione.|  
|[Membro dati DispatchState::m\_reserved](../Topic/DispatchState::m_reserved%20Data%20Member.md)|Bit riservati per il passaggio di informazioni future.|  
  
## Gerarchia di ereditarietà  
 `DispatchState`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Metodo IExecutionContext::Dispatch](../Topic/IExecutionContext::Dispatch%20Method.md)