---
title: "underlying_type (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "underlying_type"
  - "std.underlying_type"
  - "std::underlying_type"
  - "type_traits/std::underlying_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "underlying_type"
ms.assetid: 691ddce3-2677-4480-bd35-d933fab85d3e
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# underlying_type (classe)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera il tipo integrale sottostante per un tipo di enumerazione.  
  
## Sintassi  
  
```  
template <class T>  
    struct underlying_type;  
```  
  
#### Parametri  
 `T`  
 Tipo da modificare.  
  
## Note  
 Il `type` typedef membro della classe modello nomi di tipo integrale sottostante `T`, quando `T` è un tipo di enumerazione, in caso contrario non è presente alcun typedef membro `type`.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)