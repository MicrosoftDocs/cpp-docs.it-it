---
title: "Classe structured_task_group | Microsoft Docs"
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
  - "ppl/concurrency::structured_task_group"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "structured_task_group (classe)"
ms.assetid: 742afa8c-c7b6-482c-b0ba-04c809927b22
caps.latest.revision: 21
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe structured_task_group
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `structured_task_group` rappresenta una raccolta altamente strutturata di lavoro parallelo.  È possibile mettere in coda attività parallele singole a un `structured_task_group` utilizzando gli oggetti `task_handle` e attenderne il completamento o annullamento del gruppo di attività prima di aver terminato l'esecuzione, che interromperà qualsiasi attività che non ha iniziato l'esecuzione.  
  
## Sintassi  
  
```  
class structured_task_group;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore structured\_task\_group::structured\_task\_group](../Topic/structured_task_group::structured_task_group%20Constructor.md)|Di overload.  Costruisce un nuovo oggetto `structured_task_group`.|  
|[Distruttore structured\_task\_group::~structured\_task\_group](../Topic/structured_task_group::~structured_task_group%20Destructor.md)|Elimina un oggetto `structured_task_group`.  È prevista la chiamata al metodo `wait` o `run_and_wait` sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore sia in esecuzione in seguito alla rimozione dello stack a causa di un'eccezione.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo structured\_task\_group::cancel](../Topic/structured_task_group::cancel%20Method.md)|Consente di eseguire il migliore tentativo per annullare la sottostruttura di lavoro con radice nel gruppo di attività.  Ogni attività pianificata nel gruppo di attività sarà transitivamente annullata, se possibile.|  
|[Metodo structured\_task\_group::is\_canceling](../Topic/structured_task_group::is_canceling%20Method.md)|Consente di informare il chiamante se il gruppo di attività è attualmente nel mezzo di un annullamento.  Non indica necessariamente che il metodo `cancel` è stato chiamato sull'oggetto `structured_task_group` \(anche se in questo modo si qualifica sicuramente questo metodo a restituire `true`\).  È possibile il caso in cui l'oggetto `structured_task_group` è in esecuzione inline e un gruppo di attività più in alto nella struttura ad albero del lavoro viene annullato.  Anche casi come questi dove il runtime può determinare in anticipo che l'annullamento si propagherà tramite questo oggetto `structured_task_group`, sarà restituito `true`.|  
|[Metodo structured\_task\_group::run](../Topic/structured_task_group::run%20Method.md)|Di overload.  Consente di pianificare un'attività sull'oggetto `structured_task_group`.  Il chiamante gestisce la durata dell'oggetto `task_handle` passato nel parametro `_Task_handle`.  La versione che accetta il parametro `_Placement` fa sì che l'attività possa essere influenzata nell'esecuzione nella posizione specificata da quel parametro.|  
|[Metodo structured\_task\_group::run\_and\_wait](../Topic/structured_task_group::run_and_wait%20Method.md)|Di overload.  Consente di pianificare un'attività in esecuzione inline sul contesto di chiamata con l'assistenza dell'oggetto `structured_task_group` per il completo supporto di annullamento.  Se un oggetto `task_handle` viene passato come parametro `run_and_wait`, il chiamante è responsabile della gestione della durata dell'oggetto `task_handle`.  La funzione attende pertanto fino al completamento o all'annullamento di tutto il lavoro sull'oggetto `structured_task_group`.|  
|[Metodo structured\_task\_group::wait](../Topic/structured_task_group::wait%20Method.md)|Consente di attendere il completamento o l'annullamento di tutto il lavoro sul `structured_task_group`.|  
  
## Note  
 Per migliorare le prestazioni, vi sono restrizioni gravi per l'utilizzo di un oggetto `structured_task_group`:  
  
-   Un oggetto `structured_task_group` singolo non può essere utilizzato da più thread.  Tutte le operazioni su un oggetto `structured_task_group` devono essere eseguite dal thread che ha creato l'oggetto.  Le due eccezioni a questa regola sono le funzioni membro `cancel` e `is_canceling`.  L'oggetto può non trovarsi nell'elenco di acquisizione di un'espressione lambda e può non essere utilizzato all'interno di un'attività, a meno che quest'ultima utilizzi una delle operazioni di annullamento.  
  
-   Tutte le attività pianificate a un oggetto `structured_task_group` sono pianificate tramite l'utilizzo degli oggetti `task_handle` di cui è necessario gestire in modo esplicito la durata.  
  
-   Più gruppi possono essere utilizzati solo in ordine annidato in modo assoluto.  Se vengono dichiarati due oggetti `structured_task_group`, il secondo \(l'interno\) dichiarato deve distruggersi prima di qualsiasi metodo eccetto se `cancel` o `is_canceling` viene chiamato sul primo \(l'esterno\).  Questa condizione dà come risultato true in entrambi i casi di semplice dichiarazione di più oggetti `structured_task_group` all'interno degli stessi ambiti o in quelli annidati in modo funzionale, nonché nel caso di un'attività messa in coda a `structured_task_group` tramite i metodi `run` o `run_and_wait`.  
  
-   A differenza della classe generica `task_group`, tutti gli stati nella classe `structured_task_group` sono finali.  Dopo aver messo in coda le attività del gruppo e dopo averne atteso il completamento, non è possibile utilizzare nuovamente lo stesso gruppo.  
  
 Per ulteriori informazioni, vedere [Parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
## Gerarchia di ereditarietà  
 `structured_task_group`  
  
## Requisiti  
 **Header:** ppl.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe task\_group](../Topic/task_group%20Class.md)   
 [Classe task\_handle](../../../parallel/concrt/reference/task-handle-class.md)