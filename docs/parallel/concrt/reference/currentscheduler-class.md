---
title: "Classe CurrentScheduler | Microsoft Docs"
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
  - "concrt/concurrency::CurrentScheduler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CurrentScheduler (classe)"
ms.assetid: 31c20e0e-4cdf-49b4-8220-d726130aad2b
caps.latest.revision: 20
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CurrentScheduler
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Consente di rappresentare un'astrazione per l'utilità di pianificazione corrente associata al contesto di chiamata.  
  
## Sintassi  
  
```  
class CurrentScheduler;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo CurrentScheduler::Create](../Topic/CurrentScheduler::Create%20Method.md)|Crea una nuova utilità di pianificazione il cui comportamento è descritto dal parametro `_Policy` e lo collega al contesto di chiamata.  L'utilità di pianificazione appena creata diventerà l'utilità di pianificazione corrente per il contesto di chiamata.|  
|[Metodo CurrentScheduler::CreateScheduleGroup](../Topic/CurrentScheduler::CreateScheduleGroup%20Method.md)|Di overload.  Crea un nuovo gruppo di pianificazione all'interno dell'utilità di pianificazione associata al contesto di chiamata.  La versione che accetta il parametro `_Placement` fa sì che l'attività nel gruppo di pianificazione appena creato possa essere influenzata nell'esecuzione nella posizione specificata da quel parametro.|  
|[Metodo CurrentScheduler::Detach](../Topic/CurrentScheduler::Detach%20Method.md)|Disconnette l'utilità di pianificazione corrente dal contesto di chiamata e ripristina l'utilità di pianificazione precedentemente collegata come utilità di pianificazione corrente, se esistente.  Quando termina, il contesto di chiamata viene gestito dall'utilità di pianificazione che è stata precedentemente collegata al contesto utilizzando il metodo `CurrentScheduler::Create` o `Scheduler::Attach`.|  
|[Metodo CurrentScheduler::Get](../Topic/CurrentScheduler::Get%20Method.md)|Consente di restituire un puntatore all'utilità di pianificazione associata al contesto di chiamata, a cui ci si riferisce anche come l'utilità di pianificazione corrente.|  
|[Metodo CurrentScheduler::GetNumberOfVirtualProcessors](../Topic/CurrentScheduler::GetNumberOfVirtualProcessors%20Method.md)|Consente di restituire il numero corrente di processori virtuali per l'utilità di pianificazione associata al contesto di chiamata.|  
|[Metodo CurrentScheduler::GetPolicy](../Topic/CurrentScheduler::GetPolicy%20Method.md)|Consente di restituire una copia dei criteri con cui è stata creata l'utilità di pianificazione corrente.|  
|[Metodo CurrentScheduler::Id](../Topic/CurrentScheduler::Id%20Method.md)|Consente di restituire un identificatore univoco per l'utilità di pianificazione corrente.|  
|[Metodo CurrentScheduler::IsAvailableLocation](../Topic/CurrentScheduler::IsAvailableLocation%20Method.md)|Determina se la posizione specificata è disponibile nell'utilità di pianificazione corrente.|  
|[Metodo CurrentScheduler::RegisterShutdownEvent](../Topic/CurrentScheduler::RegisterShutdownEvent%20Method.md)|Consente all'handle dell'evento Windows passato nel parametro `_ShutdownEvent` di essere segnalato quando l'utilità di pianificazione associata al contesto corrente si chiude e si distrugge.  Al momento della segnalazione dell'evento, tutto il lavoro che è stato pianificato per l'utilità di pianificazione viene completato.  Questo metodo può registrare più eventi di arresto.|  
|[Metodo CurrentScheduler::ScheduleTask](../Topic/CurrentScheduler::ScheduleTask%20Method.md)|Di overload.  Consente di pianificare un'attività semplificata all'interno dell'utilità di pianificazione associata al contesto di chiamata.  L'attività semplificata sarà posizionata in un gruppo di pianificazione determinato dal runtime.  La versione che accetta il parametro `_Placement` fa sì che l'attività possa essere influenzata nell'esecuzione nella posizione specificata.|  
  
## Note  
 Se non c'è alcuna utilità di pianificazione \(vedere [Utilità di pianificazione](../../../parallel/concrt/reference/scheduler-class.md)\) associata al contesto di chiamata, molti metodi all'interno della classe `CurrentScheduler` risulteranno in un allegato dell'utilità di pianificazione predefinita del processo.  Potrebbe implicare anche che l'utilità di pianificazione predefinita del processo sia creata durante tale chiamata.  
  
## Gerarchia di ereditarietà  
 `CurrentScheduler`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe Scheduler](../../../parallel/concrt/reference/scheduler-class.md)   
 [Enumerazione PolicyElementKey](../Topic/PolicyElementKey%20Enumeration.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)