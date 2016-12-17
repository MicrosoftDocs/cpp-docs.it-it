---
title: "is_nothrow_constructible (classe) | Microsoft Docs"
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
  - "is_nothrow_constructible"
  - "std.is_nothrow_constructible"
  - "std::is_nothrow_constructible"
  - "type_traits/std::is_nothrow_constructible"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_nothrow_constructible"
ms.assetid: 8be3f927-283e-4d67-95a5-8bf5dc4e7a3d
caps.latest.revision: 12
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_nothrow_constructible (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se un tipo è possibile costruire e noto per non generare quando vengono utilizzati i tipi di argomenti specificati.  
  
## Sintassi  
  
```  
template <class T, class... Args>  
    struct is_nothrow_constructible;  
```  
  
#### Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
 `Args`  
 I tipi di argomento per trovare la corrispondenza in un costruttore di `T`.  
  
## Note  
 Un'istanza del tipo predicato contiene true se il tipo `T` è possibile costruire utilizzando i tipi di argomento in `Args`, e il costruttore è noto con il compilatore non generi; in caso contrario, contiene false. Tipo `T` è possibile costruire se la definizione della variabile `T t(std::declval<Args>()...);` è corretto. Entrambi `T` e tutti i tipi in `Args` deve essere di tipi completi, `void`, o matrici di associazione sconosciuto.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)