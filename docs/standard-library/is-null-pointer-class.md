---
title: "is_null_pointer (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "is_null_pointer"
  - "std.is_null_pointer"
  - "std::is_null_pointer"
  - "type_traits/std::is_null_pointer"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_null_pointer"
ms.assetid: f3b3601b-f162-4803-a6e9-dabf5c3876cc
caps.latest.revision: 12
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_null_pointer (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo è std::nullptr\_t.  
  
## Sintassi  
  
```  
template<class T>  
    struct is_null_pointer;  
```  
  
#### Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del tipo predicato contiene true se il tipo `T` è `std::nullptr_t`, in caso contrario, contiene false.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)