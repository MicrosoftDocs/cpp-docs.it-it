---
title: "Struttura CriticalSectionTraits | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CriticalSectionTraits (struttura)"
ms.assetid: c515a1b5-4eb0-40bc-9035-c4d9352c9de7
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura CriticalSectionTraits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specializza un oggetto CriticalSection per supportare una sezione critica non valida o una funzione per rilasciare una sezione critica.  
  
## Sintassi  
  
```  
struct CriticalSectionTraits;  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Type`|`typedef` che definisce un puntatore a una sezione critica.  `Type` viene definita come `typedef CRITICAL_SECTION* Type;`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo CriticalSectionTraits::GetInvalidValue](../windows/criticalsectiontraits-getinvalidvalue-method.md)|Specializza un modello di CriticalSection in modo che il modello venga sempre non valido.|  
|[Metodo CriticalSectionTraits::Unlock](../windows/criticalsectiontraits-unlock-method.md)|Specializza un modello di CriticalSection in modo che supporti il rilascio dell'oggetto sezione critica specificato.|  
  
## Gerarchia di ereditarietà  
 `CriticalSectionTraits`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)