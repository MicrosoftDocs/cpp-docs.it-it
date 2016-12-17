---
title: "Errore del compilatore C3485 | Microsoft Docs"
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
  - "C3485"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3485"
ms.assetid: d67536f9-67a1-4ad9-9a94-d8bbbca3d0dc
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3485
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

una definizione di espressione lambda non può contenere qualificatori di tipo const o volatile  
  
 Non è possibile usare un qualificatore `const` o `volatile` come parte della definizione di un'espressione lambda.  
  
### Per correggere l'errore  
  
-   Rimuovere il qualificatore `const` o `volatile` dalla definizione dell'espressione lambda.  
  
## Esempio  
 L'esempio seguente genera l'errore C3485 perché usa il qualificatore `const` come parte della definizione di un'espressione lambda:  
  
```  
// C3485.cpp int main() { auto x = []() const mutable {}; // C3485 }  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)