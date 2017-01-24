---
title: "Struttura HANDLETraits | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HANDLETraits (struttura)"
ms.assetid: 22963e88-d857-4624-9182-7c986daff722
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura HANDLETraits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le caratteristiche comuni di un handle.  
  
## Sintassi  
  
```  
struct HANDLETraits;  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Type`|Un sinonimo per HANDLE.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HANDLETraits::Close](../windows/handletraits-close-method.md)|Chiudere l'handle specificato.|  
|[Metodo HANDLETraits::GetInvalidValue](../windows/handletraits-getinvalidvalue-method.md)|Rappresenta un handle invalido.|  
  
## Gerarchia di ereditarietà  
 `HANDLETraits`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)