---
title: "Classe cancellation_token_registration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pplcancellation_token/concurrency::cancellation_token_registration"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cancellation_token_registration (classe)"
ms.assetid: 823d63f4-7233-4d65-8976-6152ccf12d0e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe cancellation_token_registration
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `cancellation_token_registration` rappresenta una notifica di callback da `cancellation_token`.  Quando il metodo `register` in `cancellation_token` viene utilizzato per ricevere la notifica di quando si verifica l'annullamento, un oggetto `cancellation_token_registration` viene restituito come handle al callback in modo che il chiamante può richiedere che un callback specifico non venga eseguito tramite l'utilizzo del metodo `deregister`.  
  
## Sintassi  
  
```  
class cancellation_token_registration;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore cancellation\_token\_registration::cancellation\_token\_registration](../Topic/cancellation_token_registration::cancellation_token_registration%20Constructor.md)||  
|[Distruttore cancellation\_token\_registration::~cancellation\_token\_registration](../Topic/cancellation_token_registration::~cancellation_token_registration%20Destructor.md)||  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore cancellation\_token\_registration::operator\!\=](../Topic/cancellation_token_registration::operator!=%20Operator.md)||  
|[Operatore cancellation\_token\_registration::operator\=](../Topic/cancellation_token_registration::operator=%20Operator.md)||  
|[Operatore cancellation\_token\_registration::operator\=\=](../Topic/cancellation_token_registration::operator==%20Operator.md)||  
  
## Gerarchia di ereditarietà  
 `cancellation_token_registration`  
  
## Requisiti  
 **Intestazione:** pplcancellation\_token.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)