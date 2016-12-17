---
title: "Metodo SRWLockSharedTraits::Unlock | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::Unlock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Unlock (metodo)"
ms.assetid: 33cdead9-1900-4094-b18e-38fcf1a0bd28
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo SRWLockSharedTraits::Unlock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esclusivo il controllo esclusivo dell'oggetto SRWlock specificato.  
  
## Sintassi  
  
```  
inline static void Unlock(  
   _In_ Type srwlock  
);  
```  
  
#### Parametri  
 `srwlock`  
 Un handle ad un oggetto SRWLock.  
  
## Valore restituito  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Struttura SRWLockSharedTraits](../windows/srwlocksharedtraits-structure.md)