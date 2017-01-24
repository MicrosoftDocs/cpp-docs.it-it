---
title: "Classe scheduler_worker_creation_error | Microsoft Docs"
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
  - "concrt/concurrency::scheduler_worker_creation_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "scheduler_worker_creation_error (classe)"
ms.assetid: 4aec1c3e-c32a-41b2-899d-2d898f23b3c7
caps.latest.revision: 9
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe scheduler_worker_creation_error
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe descrive un'eccezione generata a causa di un errore nella creazione di un contesto di esecuzione del lavoro nel runtime di concorrenza.  
  
## Sintassi  
  
```  
class scheduler_worker_creation_error : public scheduler_resource_allocation_error;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore scheduler\_worker\_creation\_error::scheduler\_worker\_creation\_error](../Topic/scheduler_worker_creation_error::scheduler_worker_creation_error%20Constructor.md)|Di overload.  Costruisce un oggetto `scheduler_worker_creation_error`.|  
  
## Note  
 Questa eccezione viene generata tipicamente nel caso in cui si verifichi un fallimento in una chiamata al sistema operativo per creare contesti di esecuzione dall'interno del runtime di concorrenza.  I contesti di esecuzione sono thread che eseguono attività nel runtime di concorrenza.  Il codice di errore generalmente restituito da una chiamata al metodo Win32 `GetLastError` viene convertito in un valore di tipo `HRESULT` e può essere recuperato utilizzando il metodo della classe base `get_error_code`.  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 [scheduler\_resource\_allocation\_error](../../../parallel/concrt/reference/scheduler-resource-allocation-error-class.md)  
  
 `scheduler_worker_creation_error`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)