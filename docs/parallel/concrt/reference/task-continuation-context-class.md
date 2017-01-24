---
title: "Classe task_continuation_context | Microsoft Docs"
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
  - "ppltasks/concurrency::task_continuation_context"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "task_continuation_context (classe)"
ms.assetid: 1fb5a76a-3682-45c2-a615-8b6b527741f0
caps.latest.revision: 15
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe task_continuation_context
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `task_continuation_context` consente di specificare dove si desidera eseguire una continuazione.  L'utilizzo di questa classe è utile solo da un'applicazione Windows Store.  Per le applicazioni non Windows Store, il contesto di esecuzione della continuazione di attività è determinato dal runtime e non è configurabile.  
  
## Sintassi  
  
```  
class task_continuation_context : public details::_ContextCallback;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo task\_continuation\_context::use\_arbitrary](../Topic/task_continuation_context::use_arbitrary%20Method.md)|Crea un contesto di continuazione di attività che consente al runtime di scegliere il contesto di esecuzione per una continuazione.|  
|[Metodo task\_continuation\_context::use\_current](../Topic/task_continuation_context::use_current%20Method.md)|Restituisce un oggetto di contesto di continuazione di attività che rappresenta il contesto di esecuzione corrente.|  
|[Metodo task\_continuation\_context::use\_default](../Topic/task_continuation_context::use_default%20Method.md)|Crea il contesto di continuazione dell'attività predefinita.|  
  
## Gerarchia di ereditarietà  
 `_ContextCallback`  
  
 `task_continuation_context`  
  
## Requisiti  
 **Intestazione:** ppltasks.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [task Class](http://msdn.microsoft.com/it-it/5389e8a5-5038-40b6-844a-55e9b58ad35f)