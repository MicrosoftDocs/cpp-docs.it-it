---
title: "Classe cancellation_token_source | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pplcancellation_token/concurrency::cancellation_token_source"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cancellation_token_source (classe)"
ms.assetid: 3548b1a0-12b0-4334-95db-4bf57141c066
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Classe cancellation_token_source
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `cancellation_token_source` rappresenta la possibilità di annullare una determinata operazione annullabile.  
  
## Sintassi  
  
```  
class cancellation_token_source;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore cancellation\_token\_source::cancellation\_token\_source](../Topic/cancellation_token_source::cancellation_token_source%20Constructor.md)|Di overload.  Costruisce un nuovo `cancellation_token_source`.  L'origine può essere utilizzata per contrassegnare l'annullamento di una determinata operazione annullabile.|  
|[Distruttore cancellation\_token\_source::~cancellation\_token\_source](../Topic/cancellation_token_source::~cancellation_token_source%20Destructor.md)||  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo cancellation\_token\_source::cancel](../Topic/cancellation_token_source::cancel%20Method.md)|Annulla il token.  Qualsiasi `task_group`, `structured_task_group` o `task` che utilizza il token viene annullata al momento di questa chiamata e genera un'eccezione nel punto di interruzione successivo.|  
|[Metodo cancellation\_token\_source::create\_linked\_source](../Topic/cancellation_token_source::create_linked_source%20Method.md)|Di overload.  Crea un `cancellation_token_source` che viene annullato quando il token fornito viene annullato.|  
|[Metodo cancellation\_token\_source::get\_token](../Topic/cancellation_token_source::get_token%20Method.md)|Restituisce un token di annullamento associato a questa origine.  Il token restituito può essere sottoposto a polling per l'annullamento o fornire un callback se e quando si verifica l'annullamento.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore cancellation\_token\_source::operator\!\=](../Topic/cancellation_token_source::operator!=%20Operator.md)||  
|[Operatore cancellation\_token\_source::operator\=](../Topic/cancellation_token_source::operator=%20Operator.md)||  
|[Operatore cancellation\_token\_source::operator\=\=](../Topic/cancellation_token_source::operator==%20Operator.md)||  
  
## Gerarchia di ereditarietà  
 `cancellation_token_source`  
  
## Requisiti  
 **Intestazione:** pplcancellation\_token.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)