---
title: "Metodo ModuleBase::IncrementObjectCount | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::ModuleBase::IncrementObjectCount"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IncrementObjectCount (metodo)"
ms.assetid: 2d70b472-684c-4bb7-8bab-09505cfcaf28
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo ModuleBase::IncrementObjectCount
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
virtual long IncrementObjectCount() = 0;  
```  
  
## Valore restituito  
 Il conteggio prima dell'operazione di incremento.  
  
## Note  
 Una volta implementata, incrementa il numero di oggetti tracciati dal modulo.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe ModuleBase](../windows/modulebase-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)