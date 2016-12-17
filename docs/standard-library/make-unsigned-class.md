---
title: "Classe make_unsigned | Microsoft Docs"
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
  - "std.tr1.make_unsigned"
  - "make_unsigned"
  - "std::tr1::make_unsigned"
  - "std.make_unsigned"
  - "std::make_unsigned"
  - "type_traits/std::make_unsigned"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "make_unsigned (classe) [TR1]"
  - "make_unsigned"
ms.assetid: 7a6a3c4f-1a4c-47e8-9ee2-ac1f7b669353
caps.latest.revision: 18
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe make_unsigned
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rende la dimensione del tipo o del tipo non firmato più piccolo superiore o uguale a quella del tipo.  
  
## Sintassi  
  
```  
template<class T>  
    struct make_unsigned;  
  
template<class T>  
    using make_unsigned_t = typename make_unsigned<T>::type;  
  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`T`|Tipo da modificare.|  
  
## Note  
 Un’istanza del modificatore di tipo contiene un tipo modificato che è `T` se `is_unsigned<T>` include true.  In caso contrario è il tipo con segno più piccolo `ST` per il quale `sizeof (T) <= sizeof (ST)`.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)