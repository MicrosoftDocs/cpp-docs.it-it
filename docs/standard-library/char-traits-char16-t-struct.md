---
title: "Struct char_traits&lt;char16_t&gt; | Microsoft Docs"
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
  - "std::char_traits<char16_t>"
  - "std.char_traits<char16_t>"
  - "char_traits<char16_t>"
  - "string/std::char_traits<char16_t>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "char_traits<char16_t> (classe)"
ms.assetid: 5daf3b62-dd6e-451f-b189-0350a04ff966
caps.latest.revision: 15
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct char_traits&lt;char16_t&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una struttura che è una specializzazione della struttura **char\_traits\<CharType\>** del modello a un elemento di tipo `char16_t`.  
  
## Sintassi  
  
```  
template<> struct char_traits<char16_t>;  
```  
  
## Note  
 La specializzazione consente che la struttura approfitti delle funzioni di libreria che modificano gli oggetti del tipo `char16_t`.  
  
## Requisiti  
 **Intestazione:** \<string\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<string\>](../standard-library/string.md)   
 [Struct char\_traits](../standard-library/char-traits-struct.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)