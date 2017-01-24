---
title: "Metodo MakeAllocator::Detach | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::MakeAllocator::Detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Detach (metodo)"
ms.assetid: 78012634-2dda-4ea2-9ffe-40f105d2fe47
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo MakeAllocator::Detach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
__forceinline void Detach();  
```  
  
## Note  
 Annulla l'associazione di memoria allocata con il metodo [Allocare](../windows/makeallocator-allocate-method.md) dall'oggetto corrente di MakeAllocator.  
  
 Se si chiama Sconnetti\(\), si occupa di eliminare la memoria fornita dal metodo di allocazione.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe MakeAllocator](../windows/makeallocator-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)