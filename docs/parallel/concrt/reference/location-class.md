---
title: "Classe location | Microsoft Docs"
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
  - "concrt/concurrency::location"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "location (classe)"
ms.assetid: c3289f51-5bf1-4dff-a18d-d0dab8e5d9c7
caps.latest.revision: 10
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe location
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un'astrazione di una locazione fisica sull'hardware.  
  
## Sintassi  
  
```  
class location;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore location::location](../Topic/location::location%20Constructor.md)|Di overload.  Costruisce un oggetto `location`.|  
|[Distruttore location::~location](../Topic/location::~location%20Destructor.md)|Elimina un oggetto `location`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo location::current](../Topic/location::current%20Method.md)|Restituisce un oggetto `location` che rappresenta il punto più specifico in cui il thread chiamante è in esecuzione.|  
|[Metodo location::from\_numa\_node](../Topic/location::from_numa_node%20Method.md)|Restituisce un oggetto `location` che rappresenta un dato nodo NUMA.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore location::operator\!\=](../Topic/location::operator!=%20Operator.md)|Determina se due oggetti `location` rappresentano posizioni diverse.|  
|[Operatore location::operator\=](../Topic/location::operator=%20Operator.md)|Assegna il contenuto di un oggetto `location` differente a questo oggetto.|  
|[Operatore location::operator\=\=](../Topic/location::operator==%20Operator.md)|Determina se due oggetti `location` rappresentano la stessa posizione.|  
  
## Gerarchia di ereditarietà  
 `location`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)