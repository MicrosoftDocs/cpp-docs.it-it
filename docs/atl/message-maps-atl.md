---
title: "Message Maps (ATL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, gestori messaggi"
  - "message maps, ATL"
ms.assetid: 9e100400-65c7-4a85-8857-4e6cb6dd7340
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Message Maps (ATL)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una mappa messaggi associa una funzione di gestione con un messaggio specifico, un comando, o una notifica.  Utilizzando [macro della mappa messaggi](../atl/reference/message-map-macros-atl.md)ATL, è possibile specificare una mappa messaggi per una finestra.  Le procedure finestra `CWindowImpl`, in `CDialogImpl`e in `CContainedWindowT` i messaggi di una finestra alla mappa messaggi.  
  
 [funzioni di gestore messaggi](../atl/message-handler-functions.md) accetta un argomento aggiuntivo di tipo `BOOL&`.  In questo argomento indica se il messaggio è stato elaborato e su `TRUE` per impostazione predefinita.  Una funzione di gestione può quindi impostare l'argomento su `FALSE` per indicare che non è stato gestito un messaggio.  In questo caso, ATL continuerà a trovare una funzione di gestione ulteriormente nella mappa messaggi.  Impostando questo argomento a `FALSE`, è innanzitutto necessario eseguire un'azione in risposta a un messaggio e quindi consentire l'elaborazione predefinita o un'altra funzione di gestione per il completamento di gestire il messaggio.  
  
## Mappe messaggi concatenate  
 ALT consente anche alle mappe messaggi a catena, che indirizza la gestione dei messaggi a una mappa messaggi definita in un'altra classe.  Ad esempio, è possibile implementare la gestione dei messaggi comune in una classe separata per fornire il comportamento uniforme per tutte le finestre che concatenate in quella classe.  È possibile concatenare a una classe base o a un membro dati della classe.  
  
 ATL è inoltre possibile concatenare dinamico, che consente di concatenare alla mappa messaggi di un altro oggetto in fase di esecuzione.  Per distribuire concatenare dinamico, è necessario derivare la classe da [CDynamicChain](../atl/reference/cdynamicchain-class.md).  Quindi dichiarare la macro [CHAIN\_MSG\_MAP\_DYNAMIC](../Topic/CHAIN_MSG_MAP_DYNAMIC.md) nella mappa messaggi.  `CHAIN_MSG_MAP_DYNAMIC` richiede un numero univoco che identifica l'oggetto e la mappa messaggi che si concatenano.  È necessario definire questo valore univoco con una chiamata a `CDynamicChain::SetChainEntry`.  
  
 È possibile concatenare qualsiasi classe che dichiara una mappa messaggi, se la classe deriva da [CMessageMap](../atl/reference/cmessagemap-class.md).  `CMessageMap` consente a un oggetto di esporre le mappe dei messaggi ad altri oggetti.  Si noti che `CWindowImpl` già deriva da `CMessageMap`.  
  
## Alternare le mappe dei messaggi  
 Infine, mappe messaggi alternate il supporto ATL, dichiarate con la macro [ALT\_MSG\_MAP](../Topic/ALT_MSG_MAP.md).  Ciascuna mappa messaggi alternativa è identificata da un numero univoco, che viene passato a `ALT_MSG_MAP`.  Utilizzando le mappe messaggi alternate, è possibile gestire i messaggi di windows in un mapping.  Notare che per impostazione predefinita, `CWindowImpl` non utilizza le mappe messaggi alternate.  Per aggiungere il supporto, eseguire l'override del metodo `WindowProc` nel `CWindowImpl`classe derivata da e chiamare `ProcessWindowMessage` con l'identificatore della mappa messaggi.  
  
## Vedere anche  
 [Implementing a Window](../atl/implementing-a-window.md)