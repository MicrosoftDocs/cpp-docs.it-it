---
title: "Costanti carattere C | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "(') (virgoletta singola)"
  - "caratteri, costanti"
  - "costanti, carattere"
  - "virgoletta singola"
ms.assetid: 388ae7d7-2c3a-44d6-a507-63f541ecd2da
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Costanti carattere C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una "costante carattere" è formata racchiudendo un carattere singolo dal set di caratteri rappresentabile tra virgolette singole \(**' '**\).  Le costanti carattere vengono utilizzate per rappresentare i caratteri nel [set di caratteri di esecuzione](../c-language/execution-character-set.md).  
  
## Sintassi  
 *character\-constant*:  
 **'** *c\-char\-sequence* **'**  
  
 **L'** *c\-char\-sequence* **'**  
  
 *c\-char\-sequence*:  
 *c\-char*  
  
 *c\-char\-sequence c\-char*  
  
 *c\-char*:  
 Qualsiasi membro del set di caratteri di origine eccetto le virgolette singole \(**'**\), la barra rovesciata \(**\\**\) o il carattere di nuova riga  
  
 *escape\-sequence*  
  
 *escape\-sequence*:  
 *simple\-escape\-sequence*  
  
 *octal\-escape\-sequence*  
  
 *hexadecimal\-escape\-sequence*  
  
 *simple\-escape\-sequence*: uno tra  
 **\\a \\b \\f \\n \\r \\t \\v**  
  
 **\\' \\" \\\\ \\?**  
  
 *octal\-escape\-sequence*:  
 **\\**  *octal\-digit*  
  
 **\\**  *octal\-digit octal\-digit*  
  
 **\\**  *octal\-digit octal\-digit octal\-digit*  
  
 *hexadecimal\-escape\-sequence*:  
 **\\x**  *hexadecimal\-digit*  
  
 *hexadecimal\-escape\-sequence hexadecimal\-digit*  
  
## Vedere anche  
 [Costanti C](../c-language/c-constants.md)