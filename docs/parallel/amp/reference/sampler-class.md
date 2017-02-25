---
title: "Classe sampler | Microsoft Docs"
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
ms.assetid: 9a6a9807-497d-402d-b092-8c4d86275b80
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Classe sampler
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe del campionatore aggrega le informazioni di configurazione del campionamento da utilizzare per il campionamento della trama.  
  
## Sintassi  
  
```  
class sampler;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore sampler::sampler](../Topic/sampler::sampler%20Constructor.md)|Di overload.  Costruisce un'istanza del campionatore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo sampler::get\_address\_mode](../Topic/sampler::get_address_mode%20Method.md)|Restituisce l' `address_mode` associato all'oggetto campionatore.|  
|[Metodo sampler::get\_border\_color](../Topic/sampler::get_border_color%20Method.md)|Restituisce il colore del bordo associato all'oggetto campionatore.|  
|[Metodo sampler::get\_filter\_mode](../Topic/sampler::get_filter_mode%20Method.md)|Restituisce l' `filter_mode` associato all'oggetto campionatore.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore sampler::operator\=](../Topic/sampler::operator=%20Operator.md)|Di overload.  Operatore di assegnazione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati sampler::address\_mode](../Topic/sampler::address_mode%20Data%20Member.md)|Ottiene la modalità di indirizzamento dell'oggetto `sampler`.|  
|[Membro dati sampler::border\_color](../Topic/sampler::border_color%20Data%20Member.md)|Ottiene il colore del bordo dell'oggetto `sampler`.|  
|[Membro dati sampler::filter\_mode](../Topic/sampler::filter_mode%20Data%20Member.md)|Ottiene la modalità di filtro dell'oggetto `sampler`.|  
  
## Gerarchia di ereditarietà  
 `sampler`  
  
## Requisiti  
 **Intestazione:** amp\_graphics.h  
  
 **Spazio dei nomi** concurrency::graphics  
  
## Vedere anche  
 [Spazio dei nomi Concurrency::graphics](../../../parallel/amp/reference/concurrency-graphics-namespace.md)