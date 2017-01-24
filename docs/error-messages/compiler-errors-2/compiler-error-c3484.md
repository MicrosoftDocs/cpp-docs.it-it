---
title: "Errore del compilatore C3484 | Microsoft Docs"
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
  - "C3484"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3484"
ms.assetid: 2fe847fa-f6ee-4978-bc1d-b6dc6ae906ac
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3484
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

previsto '\-\>' prima del tipo restituito  
  
 È necessario fornire `->` prima del tipo restituito di un'espressione lambda.  
  
### Per correggere l'errore  
  
-   Fornire `->` prima del tipo restituito.  
  
## Esempio  
 L'esempio seguente genera l'errore C3484:  
  
```  
// C3484a.cpp int main() { return []() . int { return 42; }(); // C3484 }  
```  
  
## Esempio  
 L'esempio seguente consente di risolvere l'errore C3484 fornendo `->` prima del tipo restituito dell'espressione lambda:  
  
```  
// C3484b.cpp int main() { return []() -> int { return 42; }(); }  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)