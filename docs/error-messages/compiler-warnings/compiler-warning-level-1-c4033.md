---
title: "Avviso del compilatore (livello 1) C4033 | Microsoft Docs"
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
  - "C4033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4033"
ms.assetid: 189a9ec3-ff6d-49dd-b9b2-530b28bbb7c9
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4033
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function' deve restituire un valore  
  
 La funzione non restituisce un valore. Viene restituito un valore indefinito.  
  
 Le funzioni che usano `return` senza un valore restituito devono essere dichiarate come tipo `void`.  
  
 Questo errore è relativo al codice del linguaggio C.  
  
 L'esempio seguente genera l'errore C4033:  
  
```  
// C4033.c // compile with: /W1 /LD int test_1(int x)   // C4033 expected { if (x) { return;   // C4033 } }  
```