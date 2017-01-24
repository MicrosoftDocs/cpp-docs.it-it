---
title: "Metodo HANDLETraits::Close | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close (metodo)"
ms.assetid: 3c631a7c-ccce-472a-b1da-aab8fa815c13
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo HANDLETraits::Close
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
 [Struttura HANDLETraits](../windows/handletraits-structure.md)