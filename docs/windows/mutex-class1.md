---
title: "Classe Mutex | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Mutex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Mutex (classe)"
ms.assetid: 682a0963-721c-46a2-8871-000e9997505b
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Classe Mutex
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un oggetto di sincronizzazione che controlla esclusivamente una risorsa condivisa.  
  
## Sintassi  
  
```  
class Mutex : public HandleT<HandleTraits::MutexTraits>  
  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|**SyncLock**|Sinonimo di una classe che supporta i blocchi sincroni.|  
  
### Costruttore pubblico  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Mutex::Mutex](../windows/mutex-mutex-constructor.md)|Inizializza una nuova istanza della classe Mutex.|  
  
### Membri pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Mutex::Lock](../windows/mutex-lock-method.md)|Attende che l'oggetto corrente o il Mutex associato con l'handle specificato, rilasci il mutex o l'intervallo di timeout specificato sia trascorso.|  
  
### Operatore pubblico  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore Mutex::operator\=](../windows/mutex-operator-assign-operator.md)|Assegna \(sposta\) l'oggetto Mutex specificato all'oggetto Mutex corrente.|  
  
## Gerarchia di ereditarietà  
 `Mutex`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Metodo Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)