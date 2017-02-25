---
title: "Metodo HANDLENullTraits::Close | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close (metodo)"
ms.assetid: 6fb2fa0d-df20-45dc-856f-f78497f8bdf9
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo HANDLENullTraits::Close
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiudere l'handle specificato.  
  
## Sintassi  
  
```  
inline static bool Close(  
   _In_ Type h  
);  
```  
  
#### Parametri  
 `h`  
 L'handle da chiudere.  
  
## Valore restituito  
 **true** se l'handle `h` si chiude correttamente; in caso contrario, **false**.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## Vedere anche  
 [Struttura HANDLENullTraits](../windows/handlenulltraits-structure.md)