---
title: "Classe SRWLock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::SRWLock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SRWLock (classe)"
ms.assetid: 4fa250e3-5f29-4b06-ac24-61b6c04ade93
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classe SRWLock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un blocco reader\/writer sottile.  
  
## Sintassi  
  
```  
class SRWLock;  
```  
  
## Note  
 Un blocco reader\/writer sottile consente di sincronizzare l'accesso fra i thread ad un oggetto o ad una risorsa.  Per ulteriori informazioni, vedere [Synchronization Functions](http://msdn.microsoft.com/it-it/9b6359c2-0113-49b6-83d0-316ad95aba1b) nella Libreria MSDN.  
  
## Membri  
  
### Typedef pubblici  
  
|||  
|-|-|  
|**SyncLockExclusive**|Sinonimo di un oggetto SRWLock che viene acquisito in modalità esclusiva.|  
|**SyncLockShared**|Sinonimo di un oggetto SRWLock che viene acquisito in modalità condivisa.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore SRWLock::~SRWLock](../windows/srwlock-srwlock-constructor.md)|Inizializza una nuova istanza della classe SRWLock.|  
|[Distruttore SRWLock::~SRWLock](../windows/srwlock-tilde-srwlock-destructor.md)|De\-inizializza un'istanza della classe SRWLock.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SRWLock::LockExclusive](../windows/srwlock-lockexclusive-method.md)|Acquisisce un oggetto SRWLock in modalità esclusiva.|  
|[Metodo SRWLock::LockShared](../windows/srwlock-lockshared-method.md)|Acquisisce un oggetto SRWLock in modalità condivisa.|  
|[Metodo SRWLock::TryLockExclusive](../windows/srwlock-trylockexclusive-method.md)|Tenta di acquisire un oggetto SRWLock in modalità esclusiva per l'oggetto SRWLock corrente o specificato.|  
|[Metodo SRWLock::TryLockShared](../windows/srwlock-trylockshared-method.md)|Tenta di acquisire un oggetto SRWLock in modalità condivisa per l'oggetto SRWLock corrente o specificato.|  
  
### Membro dati Protected  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati SRWLock::SRWLock\_](../windows/srwlock-srwlock-data-member.md)|Contiene la variabile sottostante di blocco per l'oggetto SRWLock corrente.|  
  
## Gerarchia di ereditarietà  
 `SRWLock`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Metodo Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)