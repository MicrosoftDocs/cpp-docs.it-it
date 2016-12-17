---
title: "Avviso del compilatore (livello 1) C4077 | Microsoft Docs"
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
  - "C4077"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4077"
ms.assetid: c2d28805-b33f-41ad-afba-33b3f788c649
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4077
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

opzione check\_stack sconosciuta  
  
 La forma precedente del pragma **check\_stack** è stata usata con un argomento sconosciuto. L'argomento deve essere `+`, `-`, `(on)`, `(off)` o vuoto.  
  
 Il compilatore ignora i pragma e lascia invariato il controllo dello stack.  
  
## Esempio  
  
```  
// C4077.cpp // compile with: /W1 /LD #pragma check_stack yes // C4077 #pragma check_stack +    // Correct old form #pragma check_stack (on) // Correct new form  
```