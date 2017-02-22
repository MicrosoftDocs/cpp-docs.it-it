---
title: "Classe Scheduler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::Scheduler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Scheduler (classe)"
ms.assetid: 34cf7961-048d-4852-8a5c-a32f823e3506
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe Scheduler
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Consente di rappresentare un'astrazione per un'utilità di pianificazione del runtime di concorrenza.  
  
## Sintassi  
  
```  
class Scheduler;  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Scheduler::Scheduler](../Topic/Scheduler::Scheduler%20Constructor.md)|Un oggetto della classe `Scheduler` può creato utilizzando solo metodi factory o in modo implicito.|  
|[Distruttore Scheduler::~Scheduler](../Topic/Scheduler::~Scheduler%20Destructor.md)|Un oggetto della classe `Scheduler` è distrutto in modo implicito quando tutti i riferimenti esterni a lui cessano di esistere.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Scheduler::Attach](../Topic/Scheduler::Attach%20Method.md)|Allega l'utilità di pianificazione al contesto di chiamata.  Dopo la restituzione di questo metodo, il contesto di chiamata viene gestito dall'utilità di pianificazione e l'utilità di pianificazione diventa l'utilità di pianificazione corrente.|  
|[Metodo Scheduler::Create](../Topic/Scheduler::Create%20Method.md)|Crea una nuova utilità di pianificazione il cui comportamento viene descritto dal parametro `_Policy`, posiziona un riferimento iniziale nell'utilità di pianificazione e gli restituisce un puntatore.|  
|[Metodo Scheduler::CreateScheduleGroup](../Topic/Scheduler::CreateScheduleGroup%20Method.md)|Di overload.  Crea un nuovo gruppo di pianificazione all'interno dell'utilità di pianificazione.  La versione che accetta il parametro `_Placement` fa sì che l'attività nel gruppo di pianificazione appena creato possa essere influenzata nell'esecuzione nella posizione specificata da quel parametro.|  
|[Metodo Scheduler::GetNumberOfVirtualProcessors](../Topic/Scheduler::GetNumberOfVirtualProcessors%20Method.md)|Consente di restituire il numero corrente di processori virtuali per l'utilità di pianificazione.|  
|[Metodo Scheduler::GetPolicy](../Topic/Scheduler::GetPolicy%20Method.md)|Consente di restituire una copia dei criteri con cui è stata creata l'utilità di pianificazione.|  
|[Metodo Scheduler::Id](../Topic/Scheduler::Id%20Method.md)|Consente di restituire un identificatore univoco per l'utilità di pianificazione.|  
|[Metodo Scheduler::IsAvailableLocation](../Topic/Scheduler::IsAvailableLocation%20Method.md)|Determina se la posizione specificata è disponibile nell'utilità di pianificazione.|  
|[Metodo Scheduler::Reference](../Topic/Scheduler::Reference%20Method.md)|Incrementa il conteggio dei riferimenti dell'utilità di pianificazione.|  
|[Metodo Scheduler::RegisterShutdownEvent](../Topic/Scheduler::RegisterShutdownEvent%20Method.md)|Consente all'handle dell'evento Windows passato nel parametro `_Event` di essere segnalato quando l'utilità di pianificazione si chiude e si distrugge.  Al momento della segnalazione dell'evento, tutto il lavoro che è stato pianificato per l'utilità di pianificazione viene completato.  Questo metodo può registrare più eventi di arresto.|  
|[Metodo Scheduler::Release](../Topic/Scheduler::Release%20Method.md)|Decrementa il conteggio dei riferimenti dell'utilità di pianificazione.|  
|[Metodo Scheduler::ResetDefaultSchedulerPolicy](../Topic/Scheduler::ResetDefaultSchedulerPolicy%20Method.md)|Consente di reimpostare i criteri dell'utilità di pianificazione predefiniti sulle impostazioni predefinite di runtime.  La volta successiva in cui si crea un'utilità di pianificazione predefinita, si utilizzeranno le impostazioni dei criteri predefiniti di runtime.|  
|[Metodo Scheduler::ScheduleTask](../Topic/Scheduler::ScheduleTask%20Method.md)|Di overload.  Consente di pianificare un'attività semplificata all'interno dell'utilità di pianificazione.  L'attività semplificata sarà posizionata in un gruppo di pianificazione determinato dal runtime.  La versione che accetta il parametro `_Placement` fa sì che l'attività possa essere influenzata nell'esecuzione nella posizione specificata.|  
|[Metodo Scheduler::SetDefaultSchedulerPolicy](../Topic/Scheduler::SetDefaultSchedulerPolicy%20Method.md)|Consente che criteri definiti dall'utente siano utilizzati per creare l'utilità di pianificazione predefinita.  Tale metodo può essere chiamato solo quando non esiste alcuna utilità di pianificazione predefinita all'interno del processo.  Dopo che i criteri predefiniti sono stati impostati, questi restano validi fino alla prossima chiamata valida al metodo `SetDefaultSchedulerPolicy` o [ResetDefaultSchedulerPolicy](../Topic/Scheduler::ResetDefaultSchedulerPolicy%20Method.md).|  
  
## Note  
 L'utilità di pianificazione del runtime di concorrenza utilizza contesti di esecuzione che eseguono il mapping ai contesti di esecuzione del sistema operativo, come un thread, per effettuare il lavoro posto in coda dall'applicazione.  In qualsiasi momento, il livello di concorrenza di un'utilità di pianificazione è uguale al numero di processore virtuale concessogli dal gestore risorse.  Un processore virtuale è un'astrazione per una risorsa di elaborazione e corrisponde a un thread di hardware sul sistema sottostante.  Un singolo contesto dell'utilità di pianificazione può essere eseguito su un processore virtuale a un'ora specificata.  
  
 Il runtime di concorrenza creerà un'utilità di pianificazione predefinita per processo per eseguire un lavoro parallelo.  È inoltre possibile creare istanze dell'utilità di pianificazione e modificarle utilizzando questa classe.  
  
## Gerarchia di ereditarietà  
 `Scheduler`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Scheduler Class](../../../parallel/concrt/reference/scheduler-class.md)   
 [Enumerazione PolicyElementKey](../Topic/PolicyElementKey%20Enumeration.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)