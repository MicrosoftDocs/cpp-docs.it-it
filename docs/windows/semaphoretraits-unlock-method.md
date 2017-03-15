---
title: "Metodo SemaphoreTraits::Unlock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits::Unlock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unlock (metodo)"
ms.assetid: 4e0ea808-b70d-43f7-81ef-998c3b34e3a0
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo SemaphoreTraits::Unlock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rilascia il controllo di una risorsa condivisa.  
  
## Sintassi  
  
```  
inline static void Unlock(  
   _In_ Type h  
);  
```  
  
#### Parametri  
 `h`  
 Handle ad un oggetto semaphore.  
  
## Note  
 Se l'operazione di sblocco ha esito negativo, Unlock\(\) genera un errore che indica la causa dell'errore.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Struttura SemaphoreTraits](../windows/semaphoretraits-structure.md)