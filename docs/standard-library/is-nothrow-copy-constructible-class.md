---
title: "Classe is_nothrow_copy_constructible | Microsoft Docs"
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
  - "is_nothrow_copy_constructible"
  - "std.is_nothrow_copy_constructible"
  - "std::is_nothrow_copy_constructible"
  - "type_traits/std::is_nothrow_copy_constructible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_nothrow_copy_constructible"
ms.assetid: f13a0bea-63b1-492a-9a45-d445df35c282
caps.latest.revision: 22
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe is_nothrow_copy_constructible
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo ha un costruttore di copia [nothrow](../cpp/nothrow-cpp.md).  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_nothrow_copy_constructible;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del tipo predicato contiene true se il tipo `Ty` ha un costruttore di copia nothrow; in caso contrario, contiene false.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)