---
title: "Classe cancellation_token | Microsoft Docs"
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
  - "pplcancellation_token/concurrency::cancellation_token"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cancellation_token (classe)"
ms.assetid: 2787df2b-e9d3-440e-bfd0-841a46a9835f
caps.latest.revision: 10
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe cancellation_token
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `cancellation_token` rappresenta la possibilità di determinare se è stato richiesto l'annullamento di una determinata operazione.  Un token specificato può essere associato a `task_group`, `structured_task_group` o a `task` per consentire l'annullamento implicito.  Può inoltre essere sottoposto a polling per l'annullamento o disporre di un callback registrato se e quando l'oggetto `cancellation_token_source` associato viene annullato.  
  
## Sintassi  
  
```  
class cancellation_token;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore cancellation\_token::cancellation\_token](../Topic/cancellation_token::cancellation_token%20Constructor.md)||  
|[Distruttore cancellation\_token::~cancellation\_token](../Topic/cancellation_token::~cancellation_token%20Destructor.md)||  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo cancellation\_token::deregister\_callback](../Topic/cancellation_token::deregister_callback%20Method.md)|Rimuove un callback registrato in precedenza tramite il metodo `register` in base all'oggetto `cancellation_token_registration` restituito al momento della registrazione.|  
|[Metodo cancellation\_token::is\_cancelable](../Topic/cancellation_token::is_cancelable%20Method.md)|Restituisce un'indicazione sull'eventuale possibilità di annullamento di questo token.|  
|[Metodo cancellation\_token::is\_canceled](../Topic/cancellation_token::is_canceled%20Method.md)|Restituisce `true` se il token è stato annullato.|  
|[Metodo cancellation\_token::none](../Topic/cancellation_token::none%20Method.md)|Restituisce un token di annullamento che non può mai essere soggetto all'annullamento.|  
|[Metodo cancellation\_token::register\_callback](../Topic/cancellation_token::register_callback%20Method.md)|Registra una funzione di callback con il token.  Se e quando il token viene annullato, verrà eseguito il callback.  Si noti che se il token è già stato annullato nel punto in cui questo metodo viene chiamato, verrà eseguito immediatamente e in modo sincrono il callback.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore cancellation\_token::operator\!\=](../Topic/cancellation_token::operator!=%20Operator.md)||  
|[Operatore cancellation\_token::operator\=](../Topic/cancellation_token::operator=%20Operator.md)||  
|[Operatore cancellation\_token::operator\=\=](../Topic/cancellation_token::operator==%20Operator.md)||  
  
## Gerarchia di ereditarietà  
 `cancellation_token`  
  
## Requisiti  
 **Intestazione:** pplcancellation\_token.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)