---
title: "Struttura scheduler_ptr (runtime di concorrenza) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pplinterface/concurrency::scheduler_ptr"
dev_langs: 
  - "C++"
ms.assetid: e88c84af-c306-476d-aef1-f42a0fa0a80f
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Struttura scheduler_ptr (runtime di concorrenza)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un puntatore a un'utilità di pianificazione.  Questa classe esiste per consentire la specifica di una durata condivisa utilizzando shared\_ptr o semplicemente un riferimento normale utilizzando il puntatore non elaborato.  
  
## Sintassi  
  
```  
struct scheduler_ptr;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore scheduler\_ptr::scheduler\_ptr \(runtime di concorrenza\)](../Topic/scheduler_ptr::scheduler_ptr%20Constructor%20\(Concurrency%20Runtime\).md)|Di overload.  Crea un puntatore dell'utilità di pianificazione da shared\_ptr all'utilità di pianificazione|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo scheduler\_ptr::get \(runtime di concorrenza\)](../Topic/scheduler_ptr::get%20Method%20\(Concurrency%20Runtime\).md)|Restituisce il puntatore non elaborato all'utilità di pianificazione|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore scheduler\_ptr::operator bool \(runtime di concorrenza\)](../Topic/scheduler_ptr::operator%20bool%20Operator%20\(Concurrency%20Runtime\).md)|Verificare se il puntatore dell'utilità di pianificazione è diverso da Null|  
|[Operatore scheduler\_ptr::operator\-\> \(runtime di concorrenza\)](../Topic/scheduler_ptr::operator-%3E%20Operator%20\(Concurrency%20Runtime\).md)|Comportarsi come un puntatore|  
  
## Gerarchia di ereditarietà  
 `scheduler_ptr`  
  
## Requisiti  
 **Intestazione:** pplinterface.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)