---
title: "Struct char_traits&lt;char32_t&gt; | Microsoft Docs"
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
  - "string/std::char_traits<char_32t>"
  - "char_traits<char32_t>"
  - "std.char_traits<char_32t>"
  - "std::char_traits<char_32t>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "char_traits<char32_t> (classe)"
ms.assetid: c0315466-45d0-4a99-b83e-3b1dbfbfbbc3
caps.latest.revision: 14
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct char_traits&lt;char32_t&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una struttura che è una specializzazione della struttura **char\_traits\<CharType\>** del modello a un elemento di tipo `char32_t`.  
  
## Sintassi  
  
```  
template<> struct char_traits<char32_t>;  
```  
  
## Note  
 La specializzazione consente che la struttura approfitti delle funzioni della libreria la modifica degli oggetti di questo tipo `char32_t`.  
  
## Requisiti  
 **Intestazione:** \<string\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<string\>](../standard-library/string.md)   
 [Struct char\_traits](../standard-library/char-traits-struct.md)