---
title: "Avviso del compilatore (livello 1) C4180 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4180"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4180"
ms.assetid: 40c91bd4-37f1-4d59-a4f3-d5ddab68239b
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 1) C4180
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il qualificatore applicato al tipo della funzione è privo di significato. È stato ignorato.  
  
 Un qualificatore, ad esempio **const**, è applicato a un tipo di funzione definito da `typedef`.  
  
## Esempio  
  
```  
// C4180.cpp // compile with: /W1 /c typedef int FuncType(void); // the const qualifier cannot be applied to the // function type FuncType const FuncType f;   // C4180  
```