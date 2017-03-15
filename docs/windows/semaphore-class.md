---
title: "Classe Semaphore | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Semaphore"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Semaphore (classe)"
ms.assetid: ded53526-17b4-4381-9c60-ea5e77363db6
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classe Semaphore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa che può supportare un numero limitato di utenti.  
  
## Sintassi  
  
```  
class Semaphore : public HandleT<HandleTraits::SemaphoreTraits>  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`SyncLock`|Sinonimo di una classe che supporta i blocchi sincroni.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Semaphore::Semaphore](../windows/semaphore-semaphore-constructor.md)|Inizializza una nuova istanza della classe Semaforo.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo InvokeHelper::Invoke](../windows/invokehelper-invoke-method.md)|Chiama il gestore eventi la cui firma contiene il numero specificato di argomenti.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Semaphore::Lock](../windows/semaphore-lock-method.md)|Attende che l'oggetto corrente o, l'oggetto associato con l'handle specificato, non sia stato segnalato o l'intervallo di timeout specificato sia trascorso.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore Semaphore::operator\=](../windows/semaphore-operator-assign-operator.md)|Sposta l'handle specificato da un oggetto semaforo all'oggetto corrente del semaforo.|  
  
## Gerarchia di ereditarietà  
 `Semaphore`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Metodo Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)