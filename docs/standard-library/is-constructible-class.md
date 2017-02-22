---
title: "is_constructible (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_constructible"
  - "std.is_constructible"
  - "std::is_constructible"
  - "type_traits/std::is_constructible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_constructible"
ms.assetid: 7cdec5ff-73cf-4f78-a9db-ced2e9c0fd7f
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# is_constructible (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se è possibile costruire un tipo quando vengono utilizzati i tipi di argomenti specificati.  
  
## Sintassi  
  
```  
template <class T, class... Args>  
    struct is_constructible;  
```  
  
#### Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
 `Args`  
 I tipi di argomento per trovare la corrispondenza in un costruttore di `T`.  
  
## Note  
 Un'istanza del tipo predicato contiene true se il tipo `T` è possibile costruire utilizzando i tipi di argomento in `Args`, in caso contrario, contiene false. Tipo `T` è possibile costruire se la definizione della variabile `T t(std::declval<Args>()...);` è corretto. Entrambi `T` e tutti i tipi in `Args` deve essere di tipi completi, `void`, o matrici di associazione sconosciuto.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)