---
title: "Classe multi_link_registry | Microsoft Docs"
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
  - "agents/concurrency::multi_link_registry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "multi_link_registry (classe)"
ms.assetid: b2aa73a8-e8a6-4255-b117-d07530c328b2
caps.latest.revision: 19
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe multi_link_registry
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

L'oggetto `multi_link_registry` è un `network_link_registry` che gestisce più blocchi di origine o più blocchi di destinazione.  
  
## Sintassi  
  
```  
template<  
   class _Block  
>  
class multi_link_registry : public network_link_registry<_Block>;  
```  
  
#### Parametri  
 `_Block`  
 Tipo di dati di blocco memorizzato nell'oggetto `multi_link_registry`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore multi\_link\_registry::multi\_link\_registry](../Topic/multi_link_registry::multi_link_registry%20Constructor.md)|Costruisce un oggetto `multi_link_registry`.|  
|[Distruttore multi\_link\_registry::~multi\_link\_registry](../Topic/multi_link_registry::~multi_link_registry%20Destructor.md)|Elimina l'oggetto `multi_link_registry`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo multi\_link\_registry::add](../Topic/multi_link_registry::add%20Method.md)|Aggiunge un collegamento all'oggetto `multi_link_registry`. \(Esegue l'override di [network\_link\_registry::add](../Topic/network_link_registry::add%20Method.md).\)|  
|[Metodo multi\_link\_registry::begin](../Topic/multi_link_registry::begin%20Method.md)|Consente di restituire un iteratore al primo elemento nell'oggetto `multi_link_registry`. \(Esegue l'override di [network\_link\_registry::begin](../Topic/network_link_registry::begin%20Method.md).\)|  
|[Metodo multi\_link\_registry::contains](../Topic/multi_link_registry::contains%20Method.md)|Consente di cercare l'oggetto `multi_link_registry` per un blocco specificato. \(Esegue l'override di [network\_link\_registry::contains](../Topic/network_link_registry::contains%20Method.md).\)|  
|[Metodo multi\_link\_registry::count](../Topic/multi_link_registry::count%20Method.md)|Conta il numero di elementi nell'oggetto `multi_link_registry`. \(Esegue l'override di [network\_link\_registry::count](../Topic/network_link_registry::count%20Method.md).\)|  
|[Metodo multi\_link\_registry::remove](../Topic/multi_link_registry::remove%20Method.md)|Rimuove un collegamento dall'oggetto `multi_link_registry`. \(Esegue l'override di [network\_link\_registry::remove](../Topic/network_link_registry::remove%20Method.md).\)|  
|[Metodo multi\_link\_registry::set\_bound](../Topic/multi_link_registry::set_bound%20Method.md)|Consente di impostare un limite superiore sul numero di collegamenti che l'oggetto `multi_link_registry` può contenere.|  
  
## Gerarchia di ereditarietà  
 [network\_link\_registry](../../../parallel/concrt/reference/network-link-registry-class.md)  
  
 `multi_link_registry`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe single\_link\_registry](../../../parallel/concrt/reference/single-link-registry-class.md)