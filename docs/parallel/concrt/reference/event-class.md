---
title: "Classe event | Microsoft Docs"
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
  - "concrt/concurrency::event"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event (classe)"
ms.assetid: fba35a53-6568-4bfa-9aaf-07c0928cf73d
caps.latest.revision: 22
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe event
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un evento di reimpostazione manuale che tiene conto in modo esplicito del runtime di concorrenza.  
  
## Sintassi  
  
```  
class event;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Distruttore event::~event](../Topic/event::~event%20Destructor.md)|Distrugge un evento.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo event::reset](../Topic/event::reset%20Method.md)|Consente di reimpostare l'evento su uno stato non segnalato.|  
|[Metodo event::set](../Topic/event::set%20Method.md)|Segnala l'evento.|  
|[Metodo event::wait](../Topic/event::wait%20Method.md)|Attende che l'evento venga segnalato.|  
|[Metodo event::wait\_for\_multiple](../Topic/event::wait_for_multiple%20Method.md)|Attende che più eventi vengano segnalati.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante event::timeout\_infinite](../Topic/event::timeout_infinite%20Constant.md)|Valore indicante un'attesa che non deve terminare mai.|  
  
## Note  
 Per ulteriori informazioni, vedere [Strutture di dati di sincronizzazione](../../../parallel/concrt/synchronization-data-structures.md).  
  
## Gerarchia di ereditarietà  
 `event`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)