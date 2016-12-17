---
title: "Classe invalid_compute_domain | Microsoft Docs"
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
  - "amprt/Concurrency::invalid_compute_domain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_compute_domain (classe)"
ms.assetid: ac7a7166-8bdb-4db1-8caf-ea129ab5117e
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe invalid_compute_domain
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Eccezione generata quando il runtime non può iniziare il kernel utilizzando il dominio di calcolo specificato nel sito di chiamata [parallel\_for\_each](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md).  
  
## Sintassi  
  
```  
class invalid_compute_domain : public runtime_exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore invalid\_compute\_domain::invalid\_compute\_domain](../Topic/invalid_compute_domain::invalid_compute_domain%20Constructor.md)|Inizializza una nuova istanza della classe `invalid_compute_domain`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `invalid_compute_domain`  
  
## Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)