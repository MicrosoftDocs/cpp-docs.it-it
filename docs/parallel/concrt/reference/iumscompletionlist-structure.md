---
title: "Struttura IUMSCompletionList | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::IUMSCompletionList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IUMSCompletionList (struttura)"
ms.assetid: 81b5250e-3065-492c-b20d-2cdabf12271a
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Struttura IUMSCompletionList
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Consente di rappresentare un elenco di completamento UMS.  Quando si blocca il thread UMS, il contesto di pianificazione definito dell'utilità di pianificazione viene inviato per decidere cosa pianificare sulla radice del processore virtuale sottostante mentre il thread originale è bloccato.  Quando il thread originale si sblocca, il sistema operativo lo mette in coda nell'elenco di completamento accessibile tramite l'interfaccia.  L'utilità di pianificazione può eseguire una query nell'elenco di completamento sul contesto di pianificazione designato o in qualsiasi altra posizione alla ricerca di lavoro.  
  
## Sintassi  
  
```  
struct IUMSCompletionList;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IUMSCompletionList::GetUnblockNotifications](../Topic/IUMSCompletionList::GetUnblockNotifications%20Method.md)|Consente di recuperare una catena di interfacce `IUMSUnblockNotification` che rappresentano contesti di esecuzione i cui proxy del thread associati sono stati sbloccati dall'ultimo richiamo al metodo.|  
  
## Note  
 Un'utilità di pianificazione deve essere straordinariamente accurata sulle azioni da eseguire dopo avere utilizzato questa interfaccia agli elementi da rimuovere dalla coda dell'elenco di completamento.  Gli elementi devono essere posizionati nell'elenco dell'utilità di pianificazione di contesti eseguibili e devono essere accessibili in genere il prima possibile.  È del tutto possibile che uno degli elementi rimossi dalla coda sia stato fornito in proprietà a un blocco arbitrario.  L'utilità di pianificazione non può eseguire alcuna chiamata di funzione arbitraria che possa bloccarsi tra la chiamata per l'eliminazione della coda degli elementi e il posizionamento di questi ultimi in un elenco in genere accessibile dall'interno dell'utilità di pianificazione.  
  
## Gerarchia di ereditarietà  
 `IUMSCompletionList`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Struttura IUMSScheduler](../../../parallel/concrt/reference/iumsscheduler-structure.md)   
 [Struttura IUMSUnblockNotification](../../../parallel/concrt/reference/iumsunblocknotification-structure.md)