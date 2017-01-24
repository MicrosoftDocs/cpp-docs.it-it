---
title: "Struttura MutexTraits | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MutexTraits (struttura)"
ms.assetid: 6582df80-b9ba-4892-948f-d572a3b23d54
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura MutexTraits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le caratteristiche comuni della classe [Mutex](../windows/mutex-class1.md).  
  
## Sintassi  
  
```  
struct MutexTraits : HANDLENullTraits;  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo MutexTraits::Unlock](../windows/mutextraits-unlock-method.md)|Rilascia il controllo esclusivo di una risorsa condivisa.|  
  
## Gerarchia di ereditarietà  
 `HANDLENullTraits`  
  
 `MutexTraits`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)