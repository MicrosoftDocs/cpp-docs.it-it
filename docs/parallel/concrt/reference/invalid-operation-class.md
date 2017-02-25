---
title: "Classe invalid_operation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::invalid_operation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_operation (classe)"
ms.assetid: 26ba07dc-fcdf-44cb-b748-a31d35205b52
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe invalid_operation
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando un'operazione non valida viene eseguita che con maggiore precisione non è descritta da un altro tipo di eccezione generata nel runtime di concorrenza.  
  
## Sintassi  
  
```  
class invalid_operation : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore invalid\_operation::invalid\_operation](../Topic/invalid_operation::invalid_operation%20Constructor.md)|Di overload.  Costruisce un oggetto `invalid_operation`.|  
  
## Note  
 I vari metodi che generano tale eccezione documenteranno di solito in quali circostanze ne eseguiranno la generazione.  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_operation`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)