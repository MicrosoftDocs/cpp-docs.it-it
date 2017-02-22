---
title: "Classe Context | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::Context"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Context (classe)"
ms.assetid: c0d553f3-961d-4ecd-9a29-4fa4351673b8
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe Context
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Consente di rappresentare un'astrazione per un contesto di esecuzione.  
  
## Sintassi  
  
```  
class Context;  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Context::~Context](../Topic/Context::~Context%20Destructor.md)||  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Context::Block](../Topic/Context::Block%20Method.md)|Blocca la richiesta corrente.|  
|[Metodo Context::CurrentContext](../Topic/Context::CurrentContext%20Method.md)|Consente di restituire un puntatore al contesto corrente.|  
|[Metodo Context::GetId](../Topic/Context::GetId%20Method.md)|Consente di restituire un identificatore per il contesto che è univoco all'interno dell'utilità di pianificazione a cui appartiene il contesto.|  
|[Metodo Context::GetScheduleGroupId](../Topic/Context::GetScheduleGroupId%20Method.md)|Consente di restituire un identificatore per il gruppo di pianificazione su cui sta funzionando attualmente il contesto.|  
|[Metodo Context::GetVirtualProcessorId](../Topic/Context::GetVirtualProcessorId%20Method.md)|Consente di restituire un identificatore per il processore virtuale su cui è attualmente in esecuzione il contesto.|  
|[Metodo Context::Id](../Topic/Context::Id%20Method.md)|Consente di restituire un identificatore per il contesto corrente che è univoco all'interno dell'utilità di pianificazione a cui appartiene il contesto corrente.|  
|[Metodo Context::IsCurrentTaskCollectionCanceling](../Topic/Context::IsCurrentTaskCollectionCanceling%20Method.md)|Consente di restituire un'indicazione se la raccolta di attività attualmente in esecuzione inline sul contesto corrente si trova nel mezzo di un annullamento attivo \(o lo sarà a breve\).|  
|[Metodo Context::IsSynchronouslyBlocked](../Topic/Context::IsSynchronouslyBlocked%20Method.md)|Determina se il contesto è bloccato in modo sincrono o meno.  Si considera che un contesto sia bloccato in modo sincrono se ha eseguito in modo esplicito un'azione che ha condotto al blocco.|  
|[Metodo Context::Oversubscribe](../Topic/Context::Oversubscribe%20Method.md)|Inietta un processore virtuale aggiuntivo in un'utilità di pianificazione per la durata di un blocco di codice in caso di richiamo su un contesto che esegue uno dei processori virtuali in quell'utilità di pianificazione.|  
|[Metodo Context::ScheduleGroupId](../Topic/Context::ScheduleGroupId%20Method.md)|Consente di restituire un identificatore per il gruppo di pianificazione su cui sta funzionando il contesto corrente.|  
|[Metodo Context::Unblock](../Topic/Context::Unblock%20Method.md)|Consente di sbloccare il contesto e determinare che diventi eseguibile.|  
|[Metodo Context::VirtualProcessorId](../Topic/Context::VirtualProcessorId%20Method.md)|Consente di restituire un identificatore per il processore virtuale su cui è in esecuzione il contesto corrente.|  
|[Metodo Context::Yield](../Topic/Context::Yield%20Method.md)|Consente di rilasciare l'esecuzione in modo che sia possibile eseguire un altro contesto.  Se non è disponibile un altro contesto a cui passare, è possibile che l'utilità di pianificazione passi a un altro thread del sistema operativo.|  
  
## Note  
 L'utilità di pianificazione del runtime di concorrenza \(vedere [Utilità di pianificazione](../../../parallel/concrt/reference/scheduler-class.md)\) utilizza contesti di esecuzione per effettuare il lavoro posti in coda dall'applicazione.  Un thread Win32 è un esempio di un contesto di esecuzione in un sistema operativo Windows.  
  
 In qualsiasi momento, il livello di concorrenza di un'utilità di pianificazione è uguale al numero di processori virtuale concessi dal gestore risorse.  Un processore virtuale è un'astrazione per una risorsa di elaborazione e corrisponde a un thread di hardware sul sistema sottostante.  Un singolo contesto dell'utilità di pianificazione può essere eseguito su un processore virtuale a un'ora specificata.  
  
 L'utilità di pianificazione è cooperativa per natura e un contesto in esecuzione può cedere il proprio processore virtuale a un contesto diverso in qualsiasi momento se desidera passare a uno stato di attesa.  Quando viene soddisfatta la relativa attesa, non è possibile ripristinarlo finché un processore virtuale disponibile dell'utilità di pianificazione non ne inizia l'esecuzione.  
  
## Gerarchia di ereditarietà  
 `Context`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe Scheduler](../../../parallel/concrt/reference/scheduler-class.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)