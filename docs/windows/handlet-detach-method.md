---
title: "Metodo HandleT::Detach | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleT::Detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Detach (metodo)"
ms.assetid: f7df0f90-fafb-4d1b-a215-a6c62941f6b0
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo HandleT::Detach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Annulla l'associazione dell'oggetto HandleT corrente con l'handle sottostante.  
  
## Sintassi  
  
```  
typename HandleTraits::Type Detach();  
```  
  
## Valore restituito  
 Handle sottostante.  
  
## Note  
 Quando l'operazione viene completata, il HandleT corrente è impostato sullo stato non valido.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)