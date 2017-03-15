---
title: "Metodo AsyncBase::TryTransitionToCompleted | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::TryTransitionToCompleted"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TryTransitionToCompleted (metodo)"
ms.assetid: 8d038e0a-47ec-4cfc-8aeb-6821282df67a
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo AsyncBase::TryTransitionToCompleted
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica se la corrente operazione asincrona ha finito.  
  
## Sintassi  
  
```  
bool TryTransitionToCompleted(  
   void  
);  
```  
  
## Valore restituito  
 `true` se l'operazione asincrona è stata completata, in caso contrario `false`.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)