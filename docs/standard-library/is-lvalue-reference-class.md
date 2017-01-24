---
title: "Classe is_lvalue_reference | Microsoft Docs"
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
  - "std.tr1.is_lvalue_reference"
  - "std::tr1::is_lvalue_reference"
  - "is_lvalue_reference"
  - "std.is_lvalue_reference"
  - "std::is_lvalue_reference"
  - "type_traits/std::is_lvalue_reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_lvalue_reference (classe) [TR1]"
  - "is_lvalue_reference"
ms.assetid: 7f11896b-935c-4de1-9c87-9d0127f904e2
caps.latest.revision: 18
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe is_lvalue_reference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se il tipo è un riferimento lvalue.  
  
## Sintassi  
  
```  
template<class Ty>  
    struct is_lvalue_reference;  
```  
  
#### Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## Note  
 Un'istanza del tipo predicato contiene true se il tipo `Ty` è un riferimento a un oggetto o a una funzione; in caso contrario, contiene false.  Si noti che `Ty` potrebbe non essere un riferimento rvalue.  Per altre informazioni sugli rvalue, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## Requisiti  
 **Intestazione:** \<type\_traits\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<type\_traits\>](../standard-library/type-traits.md)   
 [Elementi Lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md)