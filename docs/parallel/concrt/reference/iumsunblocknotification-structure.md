---
title: "Struttura IUMSUnblockNotification | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::IUMSUnblockNotification"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IUMSUnblockNotification (struttura)"
ms.assetid: eaca9529-c1cc-472b-8ec6-722a1ff0fa2a
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Struttura IUMSUnblockNotification
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Consente di rappresentare una notifica da Gestione risorse che un proxy del thread, che ha bloccato e attivato un valore restituito al contesto di pianificazione definito dell'utilità di pianificazione, ha sbloccato ed è pronto per essere pianificato.  Questa interfaccia non è valida una volta riprogrammato il contesto di esecuzione associato del proxy del thread, restituito dal metodo `GetContext`.  
  
## Sintassi  
  
```  
struct IUMSUnblockNotification;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IUMSUnblockNotification::GetContext](../Topic/IUMSUnblockNotification::GetContext%20Method.md)|Consente di restituire l'interfaccia `IExecutionContext` per il contesto di esecuzione associato al proxy del thread che è stato sbloccato.  Quando il metodo viene restituito e il contesto di esecuzione sottostante è stato riprogrammato tramite una chiamata al metodo `IThreadProxy::SwitchTo`, questa interfaccia non è più valida.|  
|[Metodo IUMSUnblockNotification::GetNextUnblockNotification](../Topic/IUMSUnblockNotification::GetNextUnblockNotification%20Method.md)|Consente di restituire la successiva interfaccia `IUMSUnblockNotification` nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.|  
  
## Gerarchia di ereditarietà  
 `IUMSUnblockNotification`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Struttura IUMSScheduler](../../../parallel/concrt/reference/iumsscheduler-structure.md)   
 [Struttura IUMSCompletionList](../../../parallel/concrt/reference/iumscompletionlist-structure.md)