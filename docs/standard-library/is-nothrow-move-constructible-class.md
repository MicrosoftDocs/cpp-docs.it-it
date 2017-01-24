---
title: "Classe is_nothrow_move_constructible | Microsoft Docs"
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
  - "is_nothrow_move_constructible"
  - "std.is_nothrow_move_constructible"
  - "std::is_nothrow_move_constructible"
  - "type_traits/std::is_nothrow_move_constructible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_nothrow_move_constructible"
ms.assetid: d186d97b-7b89-470a-8d30-993046a83379
caps.latest.revision: 12
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe is_nothrow_move_constructible
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo ha un costruttore di spostamento [nothrow](../cpp/nothrow-cpp.md).  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_nothrow_move_constructible;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` ha un costruttore di spostamento nothrow; in caso contrario, contiene false.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)