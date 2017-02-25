---
title: "Classe runtime_exception | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::direct3d_abort"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "runtime_exception (classe)"
ms.assetid: 8fe3ce2c-3d4c-4b9c-95e8-e592f37adefd
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Classe runtime_exception
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Il tipo base per le eccezioni nella libreria C\+\+ Accelerated Massive Parallelism \(AMP\).  
  
## Sintassi  
  
```  
class runtime_exception : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore runtime\_exception::runtime\_exception](../Topic/runtime_exception::runtime_exception%20Constructor.md)|Inizializza una nuova istanza della classe `runtime_exception`.|  
|[Distruttore runtime\_exception::~runtime\_exception](../Topic/runtime_exception::~runtime_exception%20Destructor.md)|Elimina l'oggetto `runtime_exception`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo runtime\_exception::get\_error\_code](../Topic/runtime_exception::get_error_code%20Method.md)|Consente di restituire il codice di errore che ha provocato l'eccezione.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore runtime\_exception::operator\=](../Topic/runtime_exception::operator=%20Operator.md)|Copia il contenuto dell'oggetto `runtime_exception` specificato in questo oggetto.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
## Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)