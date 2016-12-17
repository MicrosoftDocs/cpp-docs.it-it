---
title: "Struttura treat_as_floating_point | Microsoft Docs"
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
  - "chrono/std::chrono::treat_as_floating_point"
dev_langs: 
  - "C++"
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
caps.latest.revision: 13
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struttura treat_as_floating_point
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica se `Rep` può essere considerato come un tipo a virgola mobile.  
  
## Sintassi  
  
```  
template<class Rep>  
struct treat_as_floating_point : is_floating_point<Rep>;  
```  
  
## Note  
 `Rep` può essere considerato come un tipo a virgola mobile solo quando la specializzazione `treat_as_floating_point<Rep>` è derivata da [true\_type](../Topic/true_type%20Typedef.md).  La classe modello può essere specializzata per un tipo definito dall'utente.  
  
## Requisiti  
 **Intestazione:** chrono  
  
 **Spazio dei nomi:** std::chrono  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono\>](../standard-library/chrono.md)