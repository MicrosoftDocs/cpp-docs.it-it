---
title: "CDynamicChain Class | Microsoft Docs"
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
  - "ATL::CDynamicChain"
  - "ATL.CDynamicChain"
  - "CDynamicChain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicChain class"
  - "chaining message maps"
  - "message maps, concatenazione"
ms.assetid: f084b2be-0e77-4836-973d-ae278a1e9da8
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicChain Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi che supportano concatenare dinamico di mappe messaggi.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CDynamicChain  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDynamicChain::CDynamicChain](../Topic/CDynamicChain::CDynamicChain.md)|Costruttore.|  
|[CDynamicChain::~CDynamicChain](../Topic/CDynamicChain::~CDynamicChain.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDynamicChain::CallChain](../Topic/CDynamicChain::CallChain.md)|Esegue un messaggio di Windows alla mappa messaggi di un altro oggetto.|  
|[CDynamicChain::RemoveChainEntry](../Topic/CDynamicChain::RemoveChainEntry.md)|Rimuove una voce della mappa messaggi dalla raccolta.|  
|[CDynamicChain::SetChainEntry](../Topic/CDynamicChain::SetChainEntry.md)|Aggiunge una voce della mappa messaggi alla raccolta o modifica un elemento esistente.|  
  
## Note  
 `CDynamicChain` gestisce una raccolta di mappe messaggi, consentendo a un messaggio di Windows da eseguire, in fase di esecuzione, alla mappa messaggi di un altro oggetto.  
  
 Per aggiungere il supporto per concatenare dinamico delle mappe dei messaggi, effettuare le operazioni seguenti:  
  
-   Derivare la classe da `CDynamicChain`.  Nella mappa messaggi, specificare la macro [CHAIN\_MSG\_MAP\_DYNAMIC](../Topic/CHAIN_MSG_MAP_DYNAMIC.md) per concatenare alla mappa messaggi predefinita di un altro oggetto.  
  
-   Ogni classe derivano da concatenare da [CMessageMap](../../atl/reference/cmessagemap-class.md).  `CMessageMap` consente a un oggetto di esporre le mappe dei messaggi ad altri oggetti.  
  
-   Chiamare `CDynamicChain::SetChainEntry` per identificare a tale oggetto la cui mappa messaggi desiderati per concatenare.  
  
 Ad esempio, si supponga che la classe sia definita come segue:  
  
 [!code-cpp[NVC_ATL_Windowing#88](../../atl/codesnippet/CPP/cdynamicchain-class_1.h)]  
  
 Il client chiama quindi `CMyWindow::SetChainEntry`:  
  
 [!code-cpp[NVC_ATL_Windowing#89](../../atl/codesnippet/CPP/cdynamicchain-class_2.cpp)]  
  
 dove `chainedObj` è l'oggetto concatenato ed è un'istanza di una classe derivata da `CMessageMap`.  Ora, se `myCtl` riceve un messaggio che non viene gestito da `OnPaint` o da `OnSetFocus`, la routine della finestra indirizza il messaggio alla mappa messaggi predefinita di `chainedObj`.  
  
 Per ulteriori informazioni sulla mappa messaggi che concatena, vedere [Mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "classi di finestre di ATL."  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [CWindowImpl Class](../../atl/reference/cwindowimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)