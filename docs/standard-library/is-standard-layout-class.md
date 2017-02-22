---
title: "Classe is_standard_layout | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.is_standard_layout"
  - "std::tr1::is_standard_layout"
  - "is_standard_layout"
  - "std.is_standard_layout"
  - "std::is_standard_layout"
  - "type_traits/std::is_standard_layout"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_standard_layout (classe) [TR1]"
  - "is_standard_layout"
ms.assetid: 15ccf111-f537-45ef-b552-59152a7ba312
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Classe is_standard_layout
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo è un layout standard.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_standard_layout;  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Ty`|Tipo su cui eseguire una query|  
  
## Note  
 Un'istanza di questo predicato di tipo contiene true se il tipo `Ty` è una classe che ha un layout standard di oggetti membro in memoria; in caso contrario, contiene false.  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)