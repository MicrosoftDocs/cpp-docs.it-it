---
title: "Struct char_traits&lt;wchar_t&gt; | Microsoft Docs"
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
  - "std.char_traits<wchar_t>"
  - "char_traits<wchar_t>"
  - "string/std::char_traits<wchar_t>"
  - "std::char_traits<wchar_t>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "char_traits<wchar_t> (classe)"
ms.assetid: 31f34072-04d6-4871-88fe-48e17d473484
caps.latest.revision: 21
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct char_traits&lt;wchar_t&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe che è una specializzazione della struttura **char\_traits\<CharType\>** del modello a un elemento di tipo `wchar_t`.  
  
## Sintassi  
  
```  
template<> struct char_traits<wchar_t>;  
```  
  
## Note  
 La specializzazione consente che la struttura approfitti delle funzioni della libreria la modifica degli oggetti di questo tipo `wchar_t`.  
  
## Requisiti  
 **Intestazione:** \<string\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Struct char\_traits](../standard-library/char-traits-struct.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)