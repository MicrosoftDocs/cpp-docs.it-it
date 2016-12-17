---
title: "Struttura HANDLENullTraits | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HANDLENullTraits (struttura)"
ms.assetid: 88a29a14-c516-40cb-a0ca-ee897a668623
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura HANDLENullTraits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le caratteristiche comuni di handle non inizializzati.  
  
## Sintassi  
  
```  
struct HANDLENullTraits;  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Type`|Un sinonimo per HANDLE.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HANDLENullTraits::Close](../windows/handlenulltraits-close-method.md)|Chiudere l'handle specificato.|  
|[Metodo HANDLENullTraits::GetInvalidValue](../windows/handlenulltraits-getinvalidvalue-method.md)|Rappresenta un handle invalido.|  
  
## Gerarchia di ereditarietà  
 `HANDLENullTraits`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)