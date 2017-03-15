---
title: "Metodo MutexTraits::Unlock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits::Unlock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unlock (metodo)"
ms.assetid: 7c4e5664-6d95-498a-95bb-d30b5e866c2c
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo MutexTraits::Unlock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rilascia il controllo esclusivo di una risorsa condivisa.  
  
## Sintassi  
  
```  
inline static void Unlock(  
   _In_ Type h  
);  
```  
  
#### Parametri  
 `h`  
 Handle a un oggetto mutex.  
  
## Valore restituito  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Struttura MutexTraits](../windows/mutextraits-structure.md)