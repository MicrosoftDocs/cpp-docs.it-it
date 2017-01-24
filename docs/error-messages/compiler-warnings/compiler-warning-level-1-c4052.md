---
title: "Avviso del compilatore (livello 1) C4052 | Microsoft Docs"
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
  - "C4052"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4052"
ms.assetid: f9955421-16ab-46e5-8f9d-bf1639a519ef
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4052
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

dichiarazioni di funzione differenti. Una delle due contiene argomenti variabili  
  
 Una dichiarazione delle funzione non contiene gli argomenti della variabile. Ignorato.  
  
 L'esempio seguente genera l'errore C4052:  
  
```  
// C4052.c // compile with: /W4 /c int f(); int f(int i, ...);   // C4052  
```