---
title: "Struttura SRWLockSharedTraits | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SRWLockSharedTraits (struttura)"
ms.assetid: 709cb51e-d70c-40b6-bdb4-d8eacf3af495
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura SRWLockSharedTraits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Vengono descritte le funzionalità comuni della classe SRWLock in modalità di blocco condivisa.  
  
## Sintassi  
  
```  
struct SRWLockSharedTraits;  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Type`|Sinonimo per un puntatore alla classe [SRWLOCK](../windows/srwlock-class.md).|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SRWLockSharedTraits::GetInvalidValue](../windows/srwlocksharedtraits-getinvalidvalue-method.md)|Recupera un oggetto SRWLockExclusiveTraits che è sempre invalido.|  
|[Metodo SRWLockSharedTraits::Unlock](../windows/srwlocksharedtraits-unlock-method.md)|Rilascia il controllo esclusivo dell'oggetto SRWlock specificato.|  
  
## Gerarchia di ereditarietà  
 `SRWLockSharedTraits`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)