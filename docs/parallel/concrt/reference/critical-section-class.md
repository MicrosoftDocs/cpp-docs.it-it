---
title: "Classe critical_section | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::critical_section"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "critical_section (classe)"
ms.assetid: fa3c89d6-be5d-4d1b-bddb-8232814e6cf6
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe critical_section
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un'esclusione reciproca non rientrante che tiene conto in modo esplicito del runtime di concorrenza.  
  
## Sintassi  
  
```  
class critical_section;  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`native_handle_type`|Riferimento a un oggetto `critical_section`.|  
  
### Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe critical\_section::scoped\_lock](../Topic/critical_section::scoped_lock%20Class.md)|Un'eccezione wrapper RAII sicuro per l'oggetto `critical_section`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore critical\_section::critical\_section](../Topic/critical_section::critical_section%20Constructor.md)|Costruisce una nuova sezione critica.|  
|[Distruttore critical\_section::~critical\_section](../Topic/critical_section::~critical_section%20Destructor.md)|Distrugge una sezione critica.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo critical\_section::lock](../Topic/critical_section::lock%20Method.md)|Acquisisce questa sezione critica.|  
|[Metodo critical\_section::native\_handle](../Topic/critical_section::native_handle%20Method.md)|Consente di restituire un eventuale handle nativo specifico per piattaforma.|  
|[Metodo critical\_section::try\_lock](../Topic/critical_section::try_lock%20Method.md)|Consente di tentare di acquisire il blocco senza interromperlo.|  
|[Metodo critical\_section::try\_lock\_for](../Topic/critical_section::try_lock_for%20Method.md)|Tenta di acquisire un blocco senza bloccarsi per uno specifico numero di millisecondi.|  
|[Metodo critical\_section::unlock](../Topic/critical_section::unlock%20Method.md)|Consente di sbloccare la sezione critica.|  
  
## Note  
 Per ulteriori informazioni, vedere [Strutture di dati di sincronizzazione](../../../parallel/concrt/synchronization-data-structures.md).  
  
## Gerarchia di ereditarietà  
 `critical_section`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe reader\_writer\_lock](../../../parallel/concrt/reference/reader-writer-lock-class.md)