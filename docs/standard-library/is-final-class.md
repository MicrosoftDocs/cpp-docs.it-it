---
title: "is_final (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_final"
  - "std.is_final"
  - "std::is_final"
  - "type_traits/std::is_final"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_final"
ms.assetid: 9dbad82f-6685-4909-94e8-98e4a93994b9
caps.latest.revision: 12
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_final (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo è un tipo di classe contrassegnato `final`.  
  
## Sintassi  
  
```  
template<class T>  
    struct is_final;  
```  
  
#### Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del tipo predicato contiene true se il tipo `T` è un tipo di classe contrassegnato `final`, in caso contrario, contiene false. Se `T` è un tipo di classe, deve essere un tipo completo.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Identificatore final](../cpp/final-specifier.md)