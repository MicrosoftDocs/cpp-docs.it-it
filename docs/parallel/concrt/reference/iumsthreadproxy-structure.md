---
title: "Struttura IUMSThreadProxy | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::IUMSThreadProxy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IUMSThreadProxy (struttura)"
ms.assetid: 61c69b7e-5c37-4048-bcb4-e75c536afd86
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Struttura IUMSThreadProxy
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Astrazione per un thread di esecuzione.  Se si desidera che all'utilità di pianificazione siano concessi thread UMS, impostare il valore per l'elemento dei criteri dell'utilità di pianificazione `SchedulerKind` su `UmsThreadDefault` e implementare l'interfaccia `IUMSScheduler`.  I thread UMS sono supportati solo su sistemi operativi a 64 bit con Windows versione 7 e successive.  
  
## Sintassi  
  
```  
struct IUMSThreadProxy : public IThreadProxy;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IUMSThreadProxy::EnterCriticalRegion](../Topic/IUMSThreadProxy::EnterCriticalRegion%20Method.md)|Chiamato per entrare in un'area critica.  Quando in un'area critica, l'utilità di pianificazione non osserverà operazioni di blocco asincrone che si verificano nell'area.  Significa che l'utilità di pianificazione non sarà nuovamente immessa per errori di pagina, sospensioni del thread, chiamate asincrone di procedura del kernel \(APC, Asynchronous Procedure Calls\) e così via, per un thread UMS.|  
|[Metodo IUMSThreadProxy::EnterHyperCriticalRegion](../Topic/IUMSThreadProxy::EnterHyperCriticalRegion%20Method.md)|Chiamato per entrare in un'area ipercritica.  Quando in un'area ipercritica, l'utilità di pianificazione non rispetterà alcuna operazione di blocco che si verifica nell'area.  Significa che l'utilità di pianificazione non sarà nuovamente immessa per chiamate di funzione di blocco, tentativi di acquisizione di blocchi che bloccano, errori di pagina, sospensioni del thread, chiamate asincrone di procedura del kernel \(APC, Asynchronous Procedure Calls\), e così via, per un thread UMS.|  
|[Metodo IUMSThreadProxy::ExitCriticalRegion](../Topic/IUMSThreadProxy::ExitCriticalRegion%20Method.md)|Chiamato per uscire da un'area critica.|  
|[Metodo IUMSThreadProxy::ExitHyperCriticalRegion](../Topic/IUMSThreadProxy::ExitHyperCriticalRegion%20Method.md)|Chiamato per uscire da un'area ipercritica.|  
|[Metodo IUMSThreadProxy::GetCriticalRegionType](../Topic/IUMSThreadProxy::GetCriticalRegionType%20Method.md)|Consente di restituire il tipo di area critica nel quale si trova il proxy del thread.  Poiché le aree ipercritiche corrispondono a un superset di aree critiche, se il codice ha immesso un'area critica e poi un'area ipercritica, sarà restituito `InsideHyperCriticalRegion`.|  
  
## Gerarchia di ereditarietà  
 [IThreadProxy](../../../parallel/concrt/reference/ithreadproxy-structure.md)  
  
 `IUMSThreadProxy`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Struttura IUMSScheduler](../../../parallel/concrt/reference/iumsscheduler-structure.md)   
 [Enumerazione SchedulerType](../Topic/SchedulerType%20Enumeration.md)