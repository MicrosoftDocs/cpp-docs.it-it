---
title: "is_trivially_move_assignable (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_trivially_move_assignable"
  - "std.is_trivially_move_assignable"
  - "std::is_trivially_move_assignable"
  - "type_traits/std::is_trivially_move_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_trivially_move_assignable"
ms.assetid: 374f7322-0706-4bc1-a1a5-4191d0315e28
caps.latest.revision: 11
caps.handback.revision: 1
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_trivially_move_assignable (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo ha un operatore di assegnazione di spostamento semplice.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_trivially_move_assignable;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe che ha un operatore di assegnazione di spostamento semplice; in caso contrario, contiene false.  
  
 Un operatore di assegnazione di spostamento per una classe `Ty` è semplice se:  
  
 viene fornito in modo implicito  
  
 la classe `Ty` non ha funzioni virtuali  
  
 la classe `Ty` non ha basi virtuali  
  
 le classi di tutti i membri dati non statici del tipo di classe hanno operatori di assegnazione di spostamento semplici  
  
 le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione di spostamento semplici  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)