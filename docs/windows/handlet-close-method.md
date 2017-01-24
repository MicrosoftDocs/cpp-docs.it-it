---
title: "Metodo HandleT::Close | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleT::Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close (metodo)"
ms.assetid: 1b9d597c-abcf-4028-a068-0344560009f6
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo HandleT::Close
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiude l'oggetto HandleT corrente.  
  
## Sintassi  
  
```  
void Close();  
```  
  
## Note  
 L'handle alla base dell'HandleT viene chiuso, e l'HandleT viene impostato su stato non valido.  
  
 Se l'handle non si chiude correttamente, viene generata un'eccezione nel thread chiamante.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)