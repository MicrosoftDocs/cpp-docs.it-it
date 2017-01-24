---
title: "Struct char_traits&lt;char&gt; | Microsoft Docs"
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
  - "string/std::char_traits<char>"
  - "std::char_traits<char >"
  - "char_traits<char >"
  - "std.char_traits<char >"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "char_traits<char> (classe)"
ms.assetid: abd9373a-77db-4031-bf4b-f8ac15087581
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struct char_traits&lt;char&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una struttura che è una specializzazione della struttura **char\_traits\<CharType\>** del modello a un elemento di tipo `char`.  
  
## Sintassi  
  
```  
template<> struct char_traits<char>;  
```  
  
## Note  
 La specializzazione consente che la struttura approfitti delle funzioni della libreria la modifica degli oggetti di questo tipo `char`.  
  
## Esempio  
 Vedere i typedef e le funzioni membro di classi modello [classe di char\_traits](../standard-library/char-traits-struct.md)\<**CharType**\> per alcuni esempi relativi agli elementi di tipo `char`.  
  
## Requisiti  
 **Intestazione:** \<string\>  
  
 **Spazio dei nomi:** std