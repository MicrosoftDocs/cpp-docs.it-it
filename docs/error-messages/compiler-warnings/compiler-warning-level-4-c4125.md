---
title: "Avviso del compilatore (livello 4) C4125 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4125"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4125"
ms.assetid: a081d1f4-0789-4915-91df-7ff0b28ca245
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4125
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

sequenza di escape ottale terminata con una cifra decimale  
  
 Il numero ottale viene valutato senza la cifra decimale e viene interpretato come un carattere.  
  
## Esempio  
  
```  
// C4125a.cpp // compile with: /W4 char array1[] = "\709"; // C4125 int main() { }  
```  
  
 Se si intende usare la cifra 9 come carattere, correggere l'esempio nel modo seguente:  
  
```  
// C4125b.cpp // compile with: /W4 char array[] = "\0709";  // C4125 String containing "89" int main() { }  
```