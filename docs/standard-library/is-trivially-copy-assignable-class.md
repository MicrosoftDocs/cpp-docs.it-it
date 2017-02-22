---
title: "is_trivially_copy_assignable (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_trivially_copy_assignable"
  - "std.is_trivially_copy_assignable"
  - "std::is_trivially_copy_assignable"
  - "type_traits/std::is_trivially_copy_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_trivially_copy_assignable"
ms.assetid: 7410133e-f367-493f-92a7-e34e3ec5e879
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# is_trivially_copy_assignable
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo ha un operatore di assegnazione di copia semplice.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_trivially_copy_constructible;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe che ha un operatore di assegnazione di copia semplice; in caso contrario, contiene false.  
  
 Un costruttore di assegnazione per una classe `Ty` è piuttosto semplice se:  
  
 viene fornito in modo implicito  
  
 la classe `Ty` non ha funzioni virtuali  
  
 la classe `Ty` non ha basi virtuali  
  
 le classi di tutti i membri dati non statici del tipo di classe hanno operatori di assegnazione semplice  
  
 le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione semplice  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)