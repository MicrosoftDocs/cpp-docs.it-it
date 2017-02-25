---
title: "Struttura duration_values | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "chrono/std::chrono::duration_values"
dev_langs: 
  - "C++"
ms.assetid: 7f66d2e3-1faf-47c3-b47e-08f2a87f20e8
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Struttura duration_values
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce valori specifici per il parametro di template `Rep` [durata](../standard-library/duration-class.md).  
  
## Sintassi  
  
```  
template<class Rep>  
   struct duration_values;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo duration\_values::max](../Topic/duration_values::max%20Method.md)|Statico.  Specifica il limite superiore per un valore di tipo `Rep`.|  
|[Metodo duration\_values::min](../Topic/duration_values::min%20Method.md)|Statico.  Specifica il limite inferiore per un valore di tipo `Rep`.|  
|[Metodo duration\_values::zero](../Topic/duration_values::zero%20Method.md)|Statico.  Restituisca il valore `Rep(0)`.|  
  
## Requisiti  
 **Intestazione:** chrono  
  
 **Spazio dei nomi:** std::chrono  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono\>](../standard-library/chrono.md)