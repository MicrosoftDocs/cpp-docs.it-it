---
title: "Classe uninitialized_object | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::uninitialized_object"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "uninitialized_object (classe)"
ms.assetid: 6ae3c4e8-64a6-4511-a158-03be197b63af
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Classe uninitialized_object
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Eccezione che viene generata quando viene utilizzato un oggetto non inizializzato.  
  
## Sintassi  
  
```  
class uninitialized_object : public runtime_exception;  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore uninitialized\_object::uninitialized\_object](../Topic/uninitialized_object::uninitialized_object%20Constructor.md)|Inizializza una nuova istanza della classe `uninitialized_object`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `uninitialized_object`  
  
## Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)