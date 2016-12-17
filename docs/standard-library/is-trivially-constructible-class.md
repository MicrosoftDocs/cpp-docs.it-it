---
title: "is_trivially_constructible (classe) | Microsoft Docs"
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
  - "is_trivially_constructible"
  - "std.is_trivially_constructible"
  - "std::is_trivially_constructible"
  - "type_traits/std::is_trivially_constructible"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_trivially_constructible"
ms.assetid: 3fa918c1-e66f-4d0e-a11b-be1fb2c02e7b
caps.latest.revision: 12
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_trivially_constructible (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se è un tipo che può essere costruito in modo rigido quando vengono utilizzati i tipi di argomenti specificati.  
  
## Sintassi  
  
```  
template <class T, class... Args>  
    struct is_trivially_constructible;  
```  
  
#### Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
 `Args`  
 I tipi di argomento per trovare la corrispondenza in un costruttore di `T`.  
  
## Note  
 Un'istanza del tipo predicato contiene true se il tipo `T` è possibile costruire in modo semplice utilizzando i tipi di argomento in `Args`, in caso contrario, contiene false. Tipo `T` è possibile costruire in modo semplice se la definizione della variabile `T t(std::declval<Args>()...);` sia corretto e noto per non chiamare operazioni significativi. Entrambi `T` e tutti i tipi in `Args` deve essere di tipi completi, `void`, o matrici di associazione sconosciuto.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)