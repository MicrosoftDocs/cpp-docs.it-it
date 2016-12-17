---
title: "Classe task_options (runtime di concorrenza) | Microsoft Docs"
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
  - "ppltasks/concurrency::task_options"
dev_langs: 
  - "C++"
ms.assetid: f93d146b-70f7-46ec-8c2f-c33b8bb0af69
caps.latest.revision: 7
caps.handback.revision: 1
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe task_options (runtime di concorrenza)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Rappresenta le opzioni consentite per la creazione di un'attività  
  
## Sintassi  
  
```  
class task_options;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore task\_options::task\_options \(runtime di concorrenza\)](../Topic/task_options::task_options%20Constructor%20\(Concurrency%20Runtime\).md)|Di overload.  Elenco predefinito delle opzioni di creazione di attività|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo task\_options::get\_cancellation\_token \(runtime di concorrenza\)](../Topic/task_options::get_cancellation_token%20Method%20\(Concurrency%20Runtime\).md)|Restituisce il token di cancellazione|  
|[Metodo task\_options::get\_continuation\_context \(runtime di concorrenza\)](../Topic/task_options::get_continuation_context%20Method%20\(Concurrency%20Runtime\).md)|Restituisce il contesto di continuazione|  
|[Metodo task\_options::get\_scheduler \(runtime di concorrenza\)](../Topic/task_options::get_scheduler%20Method%20\(Concurrency%20Runtime\).md)|Restituisce l'utilità di pianificazione.|  
|[Metodo task\_options::has\_cancellation\_token \(runtime di concorrenza\)](../Topic/task_options::has_cancellation_token%20Method%20\(Concurrency%20Runtime\).md)|Indica se un token di annullamento è stato specificato dall'utente|  
|[Metodo task\_options::has\_scheduler \(runtime di concorrenza\)](../Topic/task_options::has_scheduler%20Method%20\(Concurrency%20Runtime\).md)|Indica se un'unità di pianificazione n è stata specificata dall'utente|  
|[Metodo task\_options::set\_cancellation\_token \(runtime di concorrenza\)](../Topic/task_options::set_cancellation_token%20Method%20\(Concurrency%20Runtime\).md)|Imposta il token specificato nelle opzioni|  
|[Metodo task\_options::set\_continuation\_context \(runtime di concorrenza\)](../Topic/task_options::set_continuation_context%20Method%20\(Concurrency%20Runtime\).md)|Imposta il contesto di continuazione specificato nelle opzioni|  
  
## Gerarchia di ereditarietà  
 `task_options`  
  
## Requisiti  
 **Intestazione:** ppltasks.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)