---
title: "Costante IsSame::value | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "internal/Microsoft::WRL::Details::IsSame::value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value (costante)"
ms.assetid: ee72deff-54a2-4482-9967-49a86d07f834
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Costante IsSame::value
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template <typename T1, typename T2>  
    struct IsSame  
    {  
        static const bool value = false;  
    };  
  
    template <typename T1>  
    struct IsSame<T1, T1>  
    {  
        static const bool value = true;  
    };  
  
```  
  
## Note  
 Indica se un tipo equivale ad un altro.  
  
 `value` è **true** se i parametri di modello sono uguali e **false** se i parametri di modello sono diversi.  
  
## Requisiti  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura IsSame](../windows/issame-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)