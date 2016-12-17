---
title: "Classe thread | Microsoft Docs"
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
  - "thread/std::thread"
dev_langs: 
  - "C++"
ms.assetid: df249bc7-ff81-4ff9-a6d6-5e3d9a8f56a1
caps.latest.revision: 16
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe thread
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce un oggetto utilizzato per osservare e gestire un thread di esecuzione all'interno di un'applicazione.  
  
## Sintassi  
  
```  
class thread;  
```  
  
## Note  
 È possibile utilizzare un oggetto `thread` per osservare e gestire un thread di esecuzione all'interno di un'applicazione.  Un oggetto thread creato utilizzando il costruttore predefinito non è associato ad alcun thread di esecuzione.  Un oggetto thread che è stato generato utilizzando un oggetto richiamabile crea un nuovo thread di esecuzione e richiama l'oggetto richiamabile in quel thread.  Gli oggetti thread possono essere spostati ma non copiati.  Pertanto, un thread di esecuzione può essere associato a un solo oggetto thread.  
  
 Ogni thread di esecuzione è un identificatore univoco di tipo `thread::id`.  La funzione `this_thread::get_id` restituisce l'identificatore del thread chiamante.  La funzione membro `thread::get_id` restituisce l'identificatore del thread che viene gestito da un oggetto thread.  Per un oggetto thread predefinito, il metodo `thread::get_id` restituisce un oggetto il cui valore è uguale per tutti gli oggetti thread predefiniti e diverso dal valore restituito da `this_thread::get_id` per tutti thread di esecuzione che potrebbero essere stati creati al momento della chiamata.  
  
## Membri  
  
### Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe thread::id](../Topic/thread::id%20Class.md)|Identifica l'associazione in modo univoco.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore thread::thread](../Topic/thread::thread%20Constructor.md)|Costruisce un oggetto `thread`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo thread::detach](../Topic/thread::detach%20Method.md)|Rimuove il thread associato dall'oggetto `thread`.|  
|[Metodo thread::get\_id](../Topic/thread::get_id%20Method.md)|Restituisce l'identificatore univoco del thread associato.|  
|[Metodo thread::hardware\_concurrency](../Topic/thread::hardware_concurrency%20Method.md)|Statico.  Restituisce una stima del numero dei contesti del thread hardware.|  
|[Metodo thread::join](../Topic/thread::join%20Method.md)|Blocca finché il thread associato non completa.|  
|[Metodo thread::joinable](../Topic/thread::joinable%20Method.md)|Specifica se il thread associato è avviabile.|  
|[Metodo thread::native\_handle](../Topic/thread::native_handle%20Method.md)|Restituisce il tipo specifico dell'implementazione che rappresenta il gestore del thread.|  
|[Metodo thread::swap](../Topic/thread::swap%20Method.md)|Scambia lo stato dell'oggetto con un oggetto `thread` specificato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore thread::operator\=](../Topic/thread::operator=%20Operator.md)|Associa un thread all'oggetto `thread` corrente.|  
  
## Requisiti  
 **Intestazione:** thread  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<thread\>](../standard-library/thread.md)