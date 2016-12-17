---
title: "Classe unique_lock | Microsoft Docs"
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
  - "mutex/std::unique_lock"
dev_langs: 
  - "C++"
ms.assetid: f4ed8ba9-c8af-446f-8ef0-0b356bad14bd
caps.latest.revision: 10
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe unique_lock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un modello che è possibile creare un'istanza per creare oggetti che gestiscono il blocco e sblocco di `mutex`.  
  
## Sintassi  
  
```  
template<class Mutex>  
class unique_lock;  
```  
  
## Note  
 Un argomento di template `Mutex` deve assegnare *un nome a un tipo di mutex*.  
  
 Internamente, `unique_lock` include un puntatore a un oggetto collegato di `mutex` e a `bool` che indica se il thread corrente appartiene `mutex`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`unique_lock::mutex_type`|Sinonimo di un argomento di template `Mutex`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore unique\_lock::unique\_lock](../Topic/unique_lock::unique_lock%20Constructor.md)|Costruisce un oggetto `unique_lock`.|  
|[Distruttore unique\_lock::~unique\_lock](../Topic/unique_lock::~unique_lock%20Destructor.md)|Libera tutte le risorse associate all'oggetto di `unique_lock`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo unique\_lock::lock](../Topic/unique_lock::lock%20Method.md)|Blocca il thread chiamante finché il thread non ottenere la proprietà di `mutex`collegato.|  
|[Metodo unique\_lock::mutex](../Topic/unique_lock::mutex%20Method.md)|Recupera il puntatore archiviato in `mutex`collegato.|  
|[Metodo unique\_lock::owns\_lock](../Topic/unique_lock::owns_lock%20Method.md)|Specifica se il thread chiamante possiede `mutex`collegato.|  
|[Metodo unique\_lock::release](../Topic/unique_lock::release%20Method.md)|Annulla e l'oggetto di `unique_lock` dall'oggetto collegato di `mutex`.|  
|[Metodo unique\_lock::swap](../Topic/unique_lock::swap%20Method.md)|Scambia `mutex` e lo stato collegati di proprietà con quella di un oggetto specificato.|  
|[Metodo unique\_lock::try\_lock](../Topic/unique_lock::try_lock%20Method.md)|Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.|  
|[Metodo unique\_lock::try\_lock\_for](../Topic/unique_lock::try_lock_for%20Method.md)|Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.|  
|[Metodo unique\_lock::try\_lock\_until](../Topic/unique_lock::try_lock_until%20Method.md)|Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.|  
|[Metodo unique\_lock::unlock](../Topic/unique_lock::unlock%20Method.md)|Elimina la proprietà di `mutex`collegato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore unique\_lock::operator bool](../Topic/unique_lock::operator%20bool%20Operator.md)|Specifica se il thread chiamante dispone di proprietà di `mutex`collegato.|  
|[Operatore unique\_lock::operator\=](../Topic/unique_lock::operator=%20Operator.md)|Copiare il puntatore di `mutex` archiviato e lo stato collegato di proprietà di un oggetto specificato.|  
  
## Gerarchia di ereditarietà  
 `unique_lock`  
  
## Requisiti  
 **Intestazione:** mutex  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex\>](../standard-library/mutex.md)