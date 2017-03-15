---
title: "Struttura SemaphoreTraits | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SemaphoreTraits (struttura)"
ms.assetid: eddb8576-d063-409b-9201-cc87ca5d111e
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Struttura SemaphoreTraits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le caratteristiche comuni di un oggetto Semaphore.  
  
## Sintassi  
  
```  
struct SemaphoreTraits : HANDLENullTraits;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SemaphoreTraits::Unlock](../windows/semaphoretraits-unlock-method.md)|Rilascia il controllo di una risorsa condivisa.|  
  
## Gerarchia di ereditarietà  
 `HANDLENullTraits`  
  
 `SemaphoreTraits`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)