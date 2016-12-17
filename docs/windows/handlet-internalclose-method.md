---
title: "Metodo HandleT::InternalClose | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleT::InternalClose"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InternalClose (metodo)"
ms.assetid: fe693c02-aa1f-4e00-8bdd-a0d7d736da0b
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo HandleT::InternalClose
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiude l'oggetto HandleT corrente.  
  
## Sintassi  
  
```  
virtual bool InternalClose();  
```  
  
## Valore restituito  
 `true` se l'HandleT corrente viene chiuso correttamente; in caso contrario, `false`.  
  
## Note  
 InternalClose\(\) è protetto.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)