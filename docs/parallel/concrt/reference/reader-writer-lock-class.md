---
title: "Classe reader_writer_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::reader_writer_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reader_writer_lock (classe)"
ms.assetid: 91a59cd2-ca05-4b74-8398-d826d9f86736
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe reader_writer_lock
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un blocco reader\-writer basato sulla coda di preferenza writer con solo spin locale.  Il blocco concede l'accesso FIFO \(first in \- first out\) a writer e può essere dannoso per i reader in condizioni di continuo caricamento di writer.  
  
## Sintassi  
  
```  
class reader_writer_lock;  
```  
  
## Membri  
  
### Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe reader\_writer\_lock::scoped\_lock](../Topic/reader_writer_lock::scoped_lock%20Class.md)|Un'eccezione wrapper RAII sicuro che può essere utilizzata per acquisire oggetti di blocco `reader_writer_lock` come writer.|  
|[Classe reader\_writer\_lock::scoped\_lock\_read](../Topic/reader_writer_lock::scoped_lock_read%20Class.md)|Un'eccezione wrapper RAII sicuro che può essere utilizzata per acquisire oggetti di blocco `reader_writer_lock` come reader.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore reader\_writer\_lock::reader\_writer\_lock](../Topic/reader_writer_lock::reader_writer_lock%20Constructor.md)|Costruisce un nuovo oggetto `reader_writer_lock`.|  
|[Distruttore reader\_writer\_lock::~reader\_writer\_lock](../Topic/reader_writer_lock::~reader_writer_lock%20Destructor.md)|Elimina l'oggetto `reader_writer_lock`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo reader\_writer\_lock::lock](../Topic/reader_writer_lock::lock%20Method.md)|Acquisisce il blocco reader\-writer come writer.|  
|[Metodo reader\_writer\_lock::lock\_read](../Topic/reader_writer_lock::lock_read%20Method.md)|Acquisisce il blocco reader\-writer come reader.  Se ci sono writer, i lettori attivi devono attendere fino a quando non sono stati completati.  Il reader registra semplicemente un interesse nel blocco e attende che i writer lo rilascino.|  
|[Metodo reader\_writer\_lock::try\_lock](../Topic/reader_writer_lock::try_lock%20Method.md)|Tenta di acquisire il blocco reader\-writer come writer senza il blocco.|  
|[Metodo reader\_writer\_lock::try\_lock\_read](../Topic/reader_writer_lock::try_lock_read%20Method.md)|Tenta di acquisire il blocco reader\-writer come reader senza il blocco.|  
|[Metodo reader\_writer\_lock::unlock](../Topic/reader_writer_lock::unlock%20Method.md)|Consente di sbloccare il blocco in lettura\/scrittura in base a chi lo ha bloccato, ovvero reader o writer.|  
  
## Note  
 Per ulteriori informazioni, vedere [Strutture di dati di sincronizzazione](../../../parallel/concrt/synchronization-data-structures.md).  
  
## Gerarchia di ereditarietà  
 `reader_writer_lock`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe critical\_section](../../../parallel/concrt/reference/critical-section-class.md)