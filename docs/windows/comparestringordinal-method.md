---
title: "Metodo CompareStringOrdinal | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Details::CompareStringOrdinal"
dev_langs: 
  - "C++"
ms.assetid: ffa997fd-8cd7-40a5-b9e7-f55d40b072f4
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo CompareStringOrdinal
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```cpp  
  
inline INT32 CompareStringOrdinal(  
   HSTRING lhs,   
   HSTRING rhs)  
```  
  
#### Parametri  
 `lhs`  
 Primo HSTRING da confrontare.  
  
 `rhs`  
 Secondo HSTRING da confrontare.  
  
## Valore restituito  
  
|Valore|Condizione|  
|------------|----------------|  
|\-1|`lhs` è minore di `rhs`.|  
|0|`lhs` è uguale a `rhs`.|  
|1|`lhs` è maggiore di `rhs`.|  
  
## Note  
 Confronta due oggetti HSTRING specificati e restituisce un intero che ne indica la posizione relativa nei criteri di ordinamento.  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)