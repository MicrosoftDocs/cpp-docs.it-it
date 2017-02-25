---
title: "Classe scheduler_resource_allocation_error | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::scheduler_resource_allocation_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "scheduler_resource_allocation_error (classe)"
ms.assetid: 8b40449a-7abb-4d0a-bb85-c0e9a495ae97
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe scheduler_resource_allocation_error
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe descrive un'eccezione generata a causa dell'errore per acquisire una risorsa critica nel runtime di concorrenza.  
  
## Sintassi  
  
```  
class scheduler_resource_allocation_error : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore scheduler\_resource\_allocation\_error::scheduler\_resource\_allocation\_error](../Topic/scheduler_resource_allocation_error::scheduler_resource_allocation_error%20Constructor.md)|Di overload.  Costruisce un oggetto `scheduler_resource_allocation_error`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo scheduler\_resource\_allocation\_error::get\_error\_code](../Topic/scheduler_resource_allocation_error::get_error_code%20Method.md)|Consente di restituire il codice di errore che ha provocato l'eccezione.|  
  
## Note  
 Questa eccezione viene generata in genere in caso di errore di una chiamata al sistema operativo dall'interno del runtime di concorrenza.  Il codice di errore generalmente restituito da una chiamata al metodo Win32 `GetLastError` viene convertito a un valore di tipo `HRESULT` e può essere recuperato utilizzando il metodo `get_error_code`.  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `scheduler_resource_allocation_error`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)