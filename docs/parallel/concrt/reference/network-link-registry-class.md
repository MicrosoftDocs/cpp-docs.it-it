---
title: "Classe network_link_registry | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::network_link_registry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "network_link_registry (classe)"
ms.assetid: 3e7b4097-09f1-4252-964e-b15b8f7f7fc6
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe network_link_registry
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe base astratta `network_link_registry` gestisce i collegamenti tra i blocchi di origine e quelli di destinazione.  
  
## Sintassi  
  
```  
template<  
   class _Block  
>  
class network_link_registry;  
```  
  
#### Parametri  
 `_Block`  
 Tipo di dati di blocco memorizzato in `network_link_registry`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`const_pointer`|Un tipo che fornisce un puntatore a un elemento `const` in un oggetto `network_link_registry`.|  
|`const_reference`|Un tipo che fornisce un riferimento all'elemento `const` archiviato in un oggetto `network_link_registry` per la lettura e l'esecuzione di operazioni const.|  
|`iterator`|Un tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in un oggetto `network_link_registry`.|  
|`type`|Un tipo che rappresenta il tipo di blocco archiviato nell'oggetto `network_link_registry`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo network\_link\_registry::add](../Topic/network_link_registry::add%20Method.md)|Quando è sottoposto a override in una classe derivata, aggiunge un collegamento all'oggetto `network_link_registry`.|  
|[Metodo network\_link\_registry::begin](../Topic/network_link_registry::begin%20Method.md)|Quando sottoposto a override in una classe derivata, restituisce un iteratore al primo elemento nell'oggetto `network_link_registry`.|  
|[Metodo network\_link\_registry::contains](../Topic/network_link_registry::contains%20Method.md)|Quando sottoposto a override in una classe derivata , cerca l'oggetto `network_link_registry` per un blocco specificato.|  
|[Metodo network\_link\_registry::count](../Topic/network_link_registry::count%20Method.md)|Quando sottoposto a override in una classe derivata, restituisce il numero di elementi nell'oggetto `network_link_registry`.|  
|[Metodo network\_link\_registry::remove](../Topic/network_link_registry::remove%20Method.md)|Quando è sottoposto a override in una classe derivata, rimuove un blocco specificato dall'oggetto `network_link_registry`.|  
  
## Note  
 Il `network link registry` non è sicuro per l'accesso simultaneo.  
  
## Gerarchia di ereditarietà  
 `network_link_registry`  
  
## Requisiti  
 **Header:** agents.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe single\_link\_registry](../../../parallel/concrt/reference/single-link-registry-class.md)   
 [Classe multi\_link\_registry](../../../parallel/concrt/reference/multi-link-registry-class.md)