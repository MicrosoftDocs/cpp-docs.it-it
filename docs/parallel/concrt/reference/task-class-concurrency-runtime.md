---
title: "Classe task (runtime di concorrenza) | Microsoft Docs"
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
  - "ppltasks/concurrency::task"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "task (classe)"
ms.assetid: cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a
caps.latest.revision: 12
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe task (runtime di concorrenza)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe della libreria `task` Parallel Patterns Library \(PPL\).  Un oggetto `task` rappresenta il lavoro che può essere eseguito in modo asincrono e contemporaneamente ad altre attività e il lavoro parallelo prodotto dagli algoritmi paralleli nel runtime di concorrenza.  Genera un risultato di tipo `_ResultType` a operazione completata.  Le attività di tipo `task<void>` non producono risultati.  Un'attività può essere attesa o annullata indipendentemente dalle altre attività.  Può inoltre essere composta da altre attività utilizzando modelli per continuazioni \(`then`\), join \(`when_all`\) e opzioni \(`when_any`\).  
  
## Sintassi  
  
```  
template <  
   typename _Type  
>  
class task;  
  
template <>  
class task<void>;  
  
template<  
   typename _ReturnType  
>  
class task;  
```  
  
#### Parametri  
 `_Type`  
 `T`  
 `_ReturnType`  
 Il tipo di risultato di questa attività.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`result_type`|Il tipo del risultato che un oggetto di questa classe fornisce.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore task::task](../Topic/task::task%20Constructor.md)|Di overload.  Costruisce un oggetto `task`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo task::get](../Topic/task::get%20Method.md)|Di overload.  Restituisce il risultato generato da questa attività.  Se l'attività non è in uno stato terminale, una chiamata a `get` attenderà il completamento dell'attività.  Questo metodo non restituisce un valore quando viene chiamato a un'attività con un `result_type` `void`.|  
|[Metodo task::is\_apartment\_aware](../Topic/task::is_apartment_aware%20Method.md)|Determina se l'attività annulla il wrapping di un'interfaccia `IAsyncInfo` di Windows Runtime o discende da tale attività.|  
|[Metodo task::is\_done \(runtime di concorrenza\)](../Topic/task::is_done%20Method%20\(Concurrency%20Runtime\).md)|Determina se l'attività è stata completata.|  
|[Metodo task::scheduler \(runtime di concorrenza\)](../Topic/task::scheduler%20Method%20\(Concurrency%20Runtime\).md)|Restituisce l'utilità di pianificazione per questa attività.|  
|[Metodo task::then](../Topic/task::then%20Method.md)|Di overload.  Aggiunge un'attività di continuazione per questa attività.|  
|[Metodo task::wait](../Topic/task::wait%20Method.md)|Attendere l'attività per raggiungere uno stato finale.  È possibile che tramite `wait` l'attività venga eseguita inline, se tutte le dipendenze di attività vengono soddisfatte e non è già stato selezionato per l'esecuzione da un processo di lavoro in background.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore task::operator\!\=](../Topic/task::operator!=%20Operator.md)|Di overload.  Determina se due oggetti `task` rappresentano attività interne diverse.|  
|[Operatore task::operator\=](../Topic/task::operator=%20Operator.md)|Di overload.  Sostituisce il contenuto di un oggetto `task` con un altro.|  
|[Operatore task::operator\=\=](../Topic/task::operator==%20Operator.md)|Di overload.  Determina se due oggetti `task` rappresentano la stessa attività interna.|  
  
## Note  
 Per ulteriori informazioni, vedere [Parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
## Gerarchia di ereditarietà  
 `task`  
  
## Requisiti  
 **Intestazione:** ppltasks.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)