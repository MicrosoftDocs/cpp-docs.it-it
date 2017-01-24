---
title: "Struttura ITopologyExecutionResource | Microsoft Docs"
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
  - "concrtrm/concurrency::ITopologyExecutionResource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ITopologyExecutionResource (struttura)"
ms.assetid: e36756f7-4cd9-4fa6-ba60-23fea58ef2bf
caps.latest.revision: 10
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura ITopologyExecutionResource
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un'interfaccia ad una risorsa di esecuzione come definita dal Gestione risorse.  
  
## Sintassi  
  
```  
struct ITopologyExecutionResource;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ITopologyExecutionResource::GetId](../Topic/ITopologyExecutionResource::GetId%20Method.md)|Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.|  
|[Metodo ITopologyExecutionResource::GetNext](../Topic/ITopologyExecutionResource::GetNext%20Method.md)|Restituisce un'interfaccia alla prossima risorsa di esecuzione nell'ordine dell'enumerazione.|  
  
## Note  
 Questa interfaccia viene in genere utilizzata per scorrere in ciclo la topologia del sistema come osservata da Gestione risorse.  
  
## Gerarchia di ereditarietà  
 `ITopologyExecutionResource`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)