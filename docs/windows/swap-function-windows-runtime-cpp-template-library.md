---
title: "Funzione swap (Libreria modelli C++ per Windows Runtime) | Microsoft Docs"
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
  - "internal/Microsoft::WRL::Details::Swap"
dev_langs: 
  - "C++"
ms.assetid: ed134a08-ceb7-4279-aa02-a183c3a426ea
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione swap (Libreria modelli C++ per Windows Runtime)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
WRL_NOTHROW inline void Swap(  
   _Inout_ T& left,  
   _Inout_ T& right  
);  
```  
  
#### Parametri  
 `left`  
 Primo argomento.  
  
 `right`  
 Secondo argomento.  
  
## Valore restituito  
  
## Note  
 Scambia i valori dei due argomenti specificati.  
  
## Requisiti  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)