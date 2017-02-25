---
title: "Classe out_of_memory | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::out_of_memory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "out_of_memory (classe)"
ms.assetid: 3aa7e682-8f13-4ae6-9188-31fb423956e4
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Classe out_of_memory
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

L'eccezione che è generata quando un metodo ha esito negativo a causa della mancanza di memoria del sistema o del dispositivo.  
  
## Sintassi  
  
```  
class out_of_memory : public runtime_exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore out\_of\_memory::out\_of\_memory](../Topic/out_of_memory::out_of_memory%20Constructor.md)|Inizializza una nuova istanza della classe `out_of_memory`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## Requisiti  
 **File di intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)