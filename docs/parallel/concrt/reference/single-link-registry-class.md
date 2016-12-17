---
title: "Classe single_link_registry | Microsoft Docs"
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
  - "agents/concurrency::single_link_registry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "single_link_registry (classe)"
ms.assetid: 09540a4e-c34e-4ff9-af49-21b8612b6ab3
caps.latest.revision: 19
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe single_link_registry
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

L'oggetto `single_link_registry` è un `network_link_registry` che gestisce solo un singolo blocco di origine o di destinazione.  
  
## Sintassi  
  
```  
template<  
   class _Block  
>  
class single_link_registry : public network_link_registry<_Block>;  
```  
  
#### Parametri  
 `_Block`  
 Tipo di dati di blocco memorizzato nell'oggetto `single_link_registry`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore single\_link\_registry::single\_link\_registry](../Topic/single_link_registry::single_link_registry%20Constructor.md)|Costruisce un oggetto `single_link_registry`.|  
|[Distruttore single\_link\_registry::~single\_link\_registry](../Topic/single_link_registry::~single_link_registry%20Destructor.md)|Elimina l'oggetto `single_link_registry`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo single\_link\_registry::add](../Topic/single_link_registry::add%20Method.md)|Aggiunge un collegamento all'oggetto `single_link_registry`. \(Esegue l'override di [network\_link\_registry::add](../Topic/network_link_registry::add%20Method.md).\)|  
|[Metodo single\_link\_registry::begin](../Topic/single_link_registry::begin%20Method.md)|Consente di restituire un iteratore al primo elemento nell'oggetto `single_link_registry`. \(Esegue l'override di [network\_link\_registry::begin](../Topic/network_link_registry::begin%20Method.md).\)|  
|[Metodo single\_link\_registry::contains](../Topic/single_link_registry::contains%20Method.md)|Consente di cercare l'oggetto `single_link_registry` per un blocco specificato. \(Esegue l'override di [network\_link\_registry::contains](../Topic/network_link_registry::contains%20Method.md).\)|  
|[Metodo single\_link\_registry::count](../Topic/single_link_registry::count%20Method.md)|Conta il numero di elementi nell'oggetto `single_link_registry`. \(Esegue l'override di [network\_link\_registry::count](../Topic/network_link_registry::count%20Method.md).\)|  
|[Metodo single\_link\_registry::remove](../Topic/single_link_registry::remove%20Method.md)|Rimuove un collegamento dall'oggetto `single_link_registry`. \(Esegue l'override di [network\_link\_registry::remove](../Topic/network_link_registry::remove%20Method.md).\)|  
  
## Gerarchia di ereditarietà  
 [network\_link\_registry](../../../parallel/concrt/reference/network-link-registry-class.md)  
  
 `single_link_registry`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe multi\_link\_registry](../../../parallel/concrt/reference/multi-link-registry-class.md)