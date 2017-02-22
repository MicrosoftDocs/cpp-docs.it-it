---
title: "Classe task_handle | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppl/concurrency::task_handle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "task_handle (classe)"
ms.assetid: 74a34b15-708b-4231-a509-947874292b13
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe task_handle
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `task_handle` rappresenta un elemento di lavoro parallelo individuale.  Incapsula le istruzioni e i dati richiesti per eseguire un lavoro.  
  
## Sintassi  
  
```  
template<  
   typename _Function  
>  
class task_handle : public ::Concurrency::details::_UnrealizedChore;  
```  
  
#### Parametri  
 `_Function`  
 Tipo dell'oggetto funzione che sarà richiamato per eseguire il lavoro rappresentato dall'oggetto `task_handle`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore task\_handle::task\_handle](../Topic/task_handle::task_handle%20Constructor.md)|Costruisce un nuovo oggetto `task_handle`.  Il lavoro dell'attività viene eseguito richiamando la funzione specificata come parametro per il costruttore.|  
|[Distruttore task\_handle::~task\_handle](../Topic/task_handle::~task_handle%20Destructor.md)|Elimina l'oggetto `task_handle`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore task\_handle::operator\(\)](../Topic/task_handle::operator\(\)%20Operator.md)|Operatore della chiamata di funzione che il runtime richiama per eseguire il lavoro dell'handle delle attività.|  
  
## Note  
 Gli oggetti `task_handle` possono essere utilizzati insieme a `structured_task_group` o a un oggetto `task_group` più generico, per decomporre un lavoro in attività parallele.  Per ulteriori informazioni, vedere [Parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
 Notare che l'autore di un oggetto `task_handle` è responsabile per la gestione della durata dell'oggetto `task_handle` creato fino a quando non è più richiesto dal runtime di concorrenza.  In genere, significa che l'oggetto `task_handle` non deve distruggere finché non è stato chiamato il metodo `wait` o `run_and_wait` del `task_group` o `structured_task_group` per cui è messo in coda.  
  
 Gli oggetti `task_handle` vengono utilizzati in genere con lambda C\+\+.  Poiché non si conosce il vero tipo del lambda, la funzione [make\_task](../Topic/make_task%20Function.md) viene generalmente utilizzata per creare l'oggetto `task_handle`.  
  
 Il runtime crea una copia della funzione lavoro passata all'oggetto `task_handle`.  Le modifiche di stato che si verificano in un oggetto funzione passato a un oggetto `task_handle` non saranno visualizzati nella copia dell'oggetto funzione.  
  
## Gerarchia di ereditarietà  
 `task_handle`  
  
## Requisiti  
 **Header:** ppl.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe task\_group](../Topic/task_group%20Class.md)   
 [Classe structured\_task\_group](../../../parallel/concrt/reference/structured-task-group-class.md)   
 [Funzione make\_task](../Topic/make_task%20Function.md)   
 [Metodo task\_group::run](../Topic/task_group::run%20Method.md)   
 [Metodo task\_group::wait](../Topic/task_group::wait%20Method.md)   
 [Metodo task\_group::run\_and\_wait](../Topic/task_group::run_and_wait%20Method.md)   
 [Metodo structured\_task\_group::run](../Topic/structured_task_group::run%20Method.md)   
 [Metodo structured\_task\_group::wait](../Topic/structured_task_group::wait%20Method.md)   
 [Metodo structured\_task\_group::run\_and\_wait](../Topic/structured_task_group::run_and_wait%20Method.md)