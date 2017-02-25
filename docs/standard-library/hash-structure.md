---
title: "Struttura hash | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "typeindex/std::hash"
dev_langs: 
  - "C++"
ms.assetid: e5a41202-ef3b-45d0-b3a7-4c2dbdc0487a
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Struttura hash
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello definisce il proprio metodo in modo che restituisca `val.hash_code()`. Il metodo definisce una funzione hash utilizzata per eseguire il mapping di valori di tipo [type\_index](../standard-library/type-index-class.md) in una distribuzione di valori di indice.  
  
## Sintassi  
  
```vb  
template<>  
    struct hash<type_index>  
        : public unary_function<type_index, size_t>  
    { // hashes a typeinfo object  
    size_t operator()(type_index val) const;  
    };  
```  
  
## Vedere anche  
 [\<typeindex\>](../standard-library/typeindex.md)