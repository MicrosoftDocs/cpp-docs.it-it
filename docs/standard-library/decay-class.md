---
title: "Classe decay | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "decay"
  - "std.tr1.decay"
  - "std::tr1::decay"
  - "std.decay"
  - "std::decay"
  - "type_traits/std::decay"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "decay (classe) [TR1]"
ms.assetid: 96baa2fd-c8e0-49af-be91-ba375ba7f9dc
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe decay
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera il tipo come passati per valore. Rende il tipo non\-riferimento, non const, non volatile oppure crea un puntatore al tipo da una funzione o un tipo di matrice.  
  
## Sintassi  
  
```  
template<class T>  
    struct decay;  
  
template<class T> using decay_t = typename decay<T>::type;  
```  
  
#### Parametri  
 `T`  
 Tipo da modificare.  
  
## Note  
 Utilizzare il modello di decadimento per produrre il tipo risultante come se il tipo passato per valore come argomento. Il typedef di membro di classe modello `type` contiene un tipo modificato definito nelle seguenti fasi:  
  
-   Il tipo `U` viene definito come `remove_reference<T>::type`.  
  
-   Se `is_array<U>::value` è true, il tipo modificato `type` è `remove_extent<U>::type *`.  
  
-   In caso contrario, se `is_function<U>::value` è true, il tipo modificato `type` è `add_pointer<U>::type`.  
  
-   In caso contrario, il tipo modificato `type` è `remove_cv<U>::type`.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)