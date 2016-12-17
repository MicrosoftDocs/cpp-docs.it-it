---
title: "Classe SyncLockT | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SyncLockT (classe)"
ms.assetid: a967f6f7-3555-43d1-b210-2bb65d63d15e
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe SyncLockT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template <  
   typename SyncTraits  
>  
class SyncLockT;  
```  
  
#### Parametri  
 `SyncTraits`  
 Il tipo che può utilizzare la proprietà di una risorsa.  
  
## Note  
 Rappresenta un tipo che può accettare solo proprietà in esclusiva o condivise di una risorsa.  
  
 La classe di SyncLockT viene utilizzata, ad esempio, per facilitare l'implementazione della classe [SRWLock](../windows/srwlock-class.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore SyncLockT::SyncLockT](../windows/synclockt-synclockt-constructor.md)|Inizializza una nuova istanza della classe SyncLockT.|  
|[Distruttore SyncLockT::~SyncLockT](../windows/synclockt-tilde-synclockt-destructor.md)|De\-inizializza un'istanza della classe SyncLockT.|  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore SyncLockT::SyncLockT](../windows/synclockt-synclockt-constructor.md)|Inizializza una nuova istanza della classe SyncLockT.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SyncLockT::IsLocked](../windows/synclockt-islocked-method.md)|Indica se l'oggetto SynckLockT corrente possiede una risorsa; ovvero, l'oggetto SyncLockT è *locked*.|  
|[Metodo SyncLockT::Unlock](../windows/synclockt-unlock-method.md)|Lascia il controllo delle risorse utilizzatate dall'oggetto corrente di SyncLockT, se disponibile.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati SyncLockT::sync\_](../windows/synclockt-sync-data-member.md)|Contiene la risorsa sottostante rappresentata dalla classe di SyncLockT.|  
  
## Gerarchia di ereditarietà  
 `SyncLockT`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)   
 [Classe SRWLock](../windows/srwlock-class.md)