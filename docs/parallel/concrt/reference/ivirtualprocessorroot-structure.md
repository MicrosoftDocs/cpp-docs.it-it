---
title: "Struttura IVirtualProcessorRoot | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::IVirtualProcessorRoot"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IVirtualProcessorRoot (struttura)"
ms.assetid: 5ef371b8-9e4f-4fef-bb0d-49099693dd2b
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Struttura IVirtualProcessorRoot
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un'astrazione per un thread di hardware sulla quale può eseguire un proxy del thread.  
  
## Sintassi  
  
```  
struct IVirtualProcessorRoot : public IExecutionResource;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IVirtualProcessorRoot::Activate](../Topic/IVirtualProcessorRoot::Activate%20Method.md)|Provoca il proxy del thread associato all'interfaccia del contesto di esecuzione `pContext` per iniziare l'esecuzione su questa radice del processore virtuale.|  
|[Metodo IVirtualProcessorRoot::Deactivate](../Topic/IVirtualProcessorRoot::Deactivate%20Method.md)|Provoca il proxy del thread attualmente in esecuzione sulla radice del processore virtuale per interrompere la distribuzione del contesto di esecuzione.  Il proxy del thread riprenderà l'esecuzione su una chiamata al metodo `Activate`.|  
|[Metodo IVirtualProcessorRoot::EnsureAllTasksVisible](../Topic/IVirtualProcessorRoot::EnsureAllTasksVisible%20Method.md)|Provoca dati archiviati nella gerarchia della memoria di processori singoli per diventare visibile a tutti i processori sul sistema.  Si assicura che un recinto della memoria completo sia stato eseguito su tutti i processori prima della restituzione del metodo.|  
|[Metodo IVirtualProcessorRoot::GetId](../Topic/IVirtualProcessorRoot::GetId%20Method.md)|Consente di restituire un identificatore univoco per la radice di un processore virtuale.|  
  
## Note  
 Ogni radice del processore virtuale dispone di una risorsa di esecuzione associata.  L'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia [IExecutionResource](../../../parallel/concrt/reference/iexecutionresource-structure.md).  È possibile che più radici del processore virtuale corrispondano allo stesso thread di hardware sottostante.  
  
 Gestione risorse concede radici del processore virtuali alle utilità di pianificazione in risposta alle richieste di risorse.  Un'utilità di pianificazione può utilizzare un processore virtuale radice per eseguire lavoro attivandolo con un contesto di esecuzione.  
  
## Gerarchia di ereditarietà  
 [IExecutionResource](../../../parallel/concrt/reference/iexecutionresource-structure.md)  
  
 `IVirtualProcessorRoot`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)