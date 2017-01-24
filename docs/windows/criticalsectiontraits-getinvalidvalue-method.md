---
title: "Metodo CriticalSectionTraits::GetInvalidValue | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetInvalidValue (metodo)"
ms.assetid: 665f30a6-ca9c-4968-8c03-8f84e6b2329b
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo CriticalSectionTraits::GetInvalidValue
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specializza un modello di CriticalSection in modo che il modello venga sempre non valido.  
  
## Sintassi  
  
```  
inline static Type GetInvalidValue();  
```  
  
## Valore restituito  
 Restituisce sempre un puntatore a una sezione critica non valida.  
  
## Osservazioni  
 Il modificatore di *Type* viene definito come `typedef CRITICAL_SECTION* Type;`.  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Struttura CriticalSectionTraits](../windows/criticalsectiontraits-structure.md)