---
title: "Costante ArgTraitsHelper::args | Microsoft Docs"
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
  - "event/Microsoft::WRL::Details::ArgTraitsHelper::args"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "args (costante)"
ms.assetid: 1c0efa32-c072-43e3-bbd9-a3f6aec069a2
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costante ArgTraitsHelper::args
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
static const int args = Traits::args;  
```  
  
## Note  
 Le guide [ArgTraitsHelper::args](../windows/argtraitshelper-args-constant.md) mantengono il conteggio del numero di parametri nel metodo di richiamata dell'interfaccia delegata.  
  
## Requisiti  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura ArgTraitsHelper](../windows/argtraitshelper-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)