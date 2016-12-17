---
title: "Classe is_nothrow_copy_assignable | Microsoft Docs"
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
  - "is_nothrow_copy_assignable"
  - "std.is_nothrow_copy_assignable"
  - "std::is_nothrow_copy_assignable"
  - "type_traits/std::is_nothrow_copy_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_nothrow_copy_assignable"
ms.assetid: baa8abd6-4f53-489f-abba-8d5d5c53bbbc
caps.latest.revision: 23
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe is_nothrow_copy_assignable
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo dispone di un operatore di assegnazione di copia che è noto al compilatore di non generare.  
  
## Sintassi  
  
```  
template<class T>  
    struct is_nothrow_copy_assignable;  
```  
  
#### Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del tipo predicato contiene true per un tipo di referenza `T` dove `is_nothrow_assignable<T&, const T&>` contiene true; in caso contrario, contiene false.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [is\_nothrow\_assignable \(classe\)](../standard-library/is-nothrow-assignable-class.md)   
 [nothrow](../cpp/nothrow-cpp.md)