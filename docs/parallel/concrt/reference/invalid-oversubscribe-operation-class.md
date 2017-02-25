---
title: "Classe invalid_oversubscribe_operation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::invalid_oversubscribe_operation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_oversubscribe_operation (classe)"
ms.assetid: 0a9c5f08-d5e6-4ad0-90a9-517472b3ac28
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe invalid_oversubscribe_operation
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando il metodo di `Context::Oversubscribe` viene richiamato con il parametro di `_BeginOversubscription` impostato su `false` senza una chiamata precedente al metodo di `Context::Oversubscribe` con il parametro di `_BeginOversubscription` impostato su `true`.  
  
## Sintassi  
  
```  
class invalid_oversubscribe_operation : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore invalid\_oversubscribe\_operation::invalid\_oversubscribe\_operation](../Topic/invalid_oversubscribe_operation::invalid_oversubscribe_operation%20Constructor.md)|Di overload.  Costruisce un oggetto `invalid_oversubscribe_operation`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_oversubscribe_operation`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Metodo Context::Oversubscribe](../Topic/Context::Oversubscribe%20Method.md)