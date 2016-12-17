---
title: "Errore del compilatore C3556 | Microsoft Docs"
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
  - "C3556"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3556"
ms.assetid: 9b002dcc-494e-414f-9587-20c2a0a39333
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3556
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'expression': argomento di 'decltype' non corretto  
  
 Il compilatore non può dedurre il tipo dell'espressione che corrisponde all'argomento dell'identificatore di tipo `decltype(``expression``)`. Nell'esempio di codice seguente il compilatore non può dedurre il tipo dell'argomento `myFunction` perché `myFunction` è in overload.  
  
```  
void myFunction(); void myFunction(int); decltype(myFunction); // C3556  
```