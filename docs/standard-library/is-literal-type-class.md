---
title: "is_literal_type (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_literal_type"
  - "std.is_literal_type"
  - "std::is_literal_type"
  - "type_traits/std::is_literal_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_literal_type"
ms.assetid: a03a4ebb-ee66-48d6-91bb-41cf72b2401f
caps.latest.revision: 12
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_literal_type (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se un tipo può essere utilizzato come un `constexpr` variabile o costruito, utilizzati o restituiti da `constexpr` funzioni.  
  
## Sintassi  
  
```  
template <class T>  
    struct is_literal_type;  
```  
  
#### Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del tipo predicato contiene true se il tipo `T` è un *tipo di valore letterale*, in caso contrario, contiene false. Un tipo di valore letterale è `void`, un tipo scalare, un tipo di riferimento, una matrice di tipo letterale o un tipo di classe di valore letterale. Un tipo di classe di valore letterale è un tipo di classe che ha un distruttore semplice, può essere un'aggregazione o dispone di almeno un non\-move, non copia `constexpr` costruttore e tutte le classi di base e i membri dati statici non sono tipi di valore letterali non volatili. Mentre il tipo di un valore letterale è sempre un tipo di valore letterale, il concetto di un tipo di valore letterale include tutto ciò che il compilatore può valutare come un `constexpr` in fase di compilazione.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)