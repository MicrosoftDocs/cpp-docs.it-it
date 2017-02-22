---
title: "Classe improper_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::improper_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "improper_lock (classe)"
ms.assetid: 8f494942-7748-4a2a-8de2-23414bfe6346
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe improper_lock
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando un blocco viene acquisito correttamente.  
  
## Sintassi  
  
```  
class improper_lock : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore improper\_lock::improper\_lock](../Topic/improper_lock::improper_lock%20Constructor.md)|Di overload.  Costruisce un oggetto `improper_lock exception`.|  
  
## Note  
 In genere, tale eccezione viene generata quando si esegue un tentativo per acquisire in modo ricorsivo un blocco non rientrante sullo stesso contesto.  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `improper_lock`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe critical\_section](../../../parallel/concrt/reference/critical-section-class.md)   
 [Classe reader\_writer\_lock](../../../parallel/concrt/reference/reader-writer-lock-class.md)