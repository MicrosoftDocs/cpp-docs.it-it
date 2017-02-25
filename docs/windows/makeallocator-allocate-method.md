---
title: "Metodo MakeAllocator::Allocate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::MakeAllocator::Allocate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Allocate (metodo)"
ms.assetid: a01997bc-4ff1-4ed0-9def-e4aaa15b0598
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo MakeAllocator::Allocate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
__forceinline void* Allocate();  
```  
  
## Valore restituito  
 Se l'operazione riesce, un puntatore alla memoria allocata, in caso contrario, `nullptr`.  
  
## Note  
 Alloca memoria e lo associa all'oggetto corrente di MakeAllocator.  
  
 La dimensione della memoria allocata è la dimensione del tipo specificato dal parametro di modello corrente di MakeAllocator.  
  
 Uno sviluppatore deve solo per eseguire l'override del metodo di allocare \(\) per implementare un modello di allocazione della memoria diverso.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe MakeAllocator](../windows/makeallocator-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)