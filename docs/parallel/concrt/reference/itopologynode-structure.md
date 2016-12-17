---
title: "Struttura ITopologyNode | Microsoft Docs"
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
  - "concrtrm/concurrency::ITopologyNode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ITopologyNode (struttura)"
ms.assetid: 92e7e032-04f6-4c7c-be36-8f9a35fc4734
caps.latest.revision: 10
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura ITopologyNode
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un'interfaccia a un nodo di topologia come definito da Gestione risorse.  Un nodo contiene una o più risorse di esecuzione.  
  
## Sintassi  
  
```  
struct ITopologyNode;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ITopologyNode::GetExecutionResourceCount](../Topic/ITopologyNode::GetExecutionResourceCount%20Method.md)|Restituisce il numero di risorse di esecuzione raggruppate sotto questo nodo.|  
|[Metodo ITopologyNode::GetFirstExecutionResource](../Topic/ITopologyNode::GetFirstExecutionResource%20Method.md)|Restituisce la prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine di enumerazione.|  
|[Metodo ITopologyNode::GetId](../Topic/ITopologyNode::GetId%20Method.md)|Restituisce l'identificatore univoco di Gestione risorse per questo nodo.|  
|[Metodo ITopologyNode::GetNext](../Topic/ITopologyNode::GetNext%20Method.md)|Restituisce un'interfaccia al successivo nodo di topologia nell'ordine di enumerazione.|  
|[Metodo ITopologyNode::GetNumaNode](../Topic/ITopologyNode::GetNumaNode%20Method.md)|Restituisce il numero di nodo NUMA assegnato Windows a cui questo nodo di Gestore Risorse appartiene.|  
  
## Note  
 Questa interfaccia viene in genere utilizzata per scorrere in ciclo la topologia del sistema come osservata da Gestione risorse.  
  
## Gerarchia di ereditarietà  
 `ITopologyNode`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)