---
title: "Avviso del compilatore (livello 1) C4602 | Microsoft Docs"
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
  - "C4602"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4602"
ms.assetid: c1f0300f-e2a2-4c9e-a7c3-4c7318d10509
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4602
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#pragma pop\_macro: 'macro name'. Nessuna istruzione \#pragma push\_macro per questo identificatore  
  
 Se si usa [pop\_macro](../../preprocessor/pop-macro.md) per una determinata macro, è necessario aver prima passato il nome della macro a [push\_macro](../../preprocessor/push-macro.md). Ad esempio, l'esempio seguente genera l'errore C4602:  
  
```  
// C4602.cpp // compile with: /W1 int main() { #pragma pop_macro("x")   // C4602 x is not on the stack }  
```