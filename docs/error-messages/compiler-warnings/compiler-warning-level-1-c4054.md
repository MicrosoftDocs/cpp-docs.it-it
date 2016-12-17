---
title: "Avviso del compilatore (livello 1) C4054 | Microsoft Docs"
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
  - "C4054"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4054"
ms.assetid: bdd7f6d5-f6f2-44a7-a013-39f309de7a29
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4054
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'conversion': da puntatore a funzione 'type1' a puntatore a dati 'type2'  
  
 Viene eseguito il cast \(probabilmente in modo errato\) di un puntatore funzione a un puntatore dati. Si tratta di un avviso di livello 1 in \/Za e di un avviso di livello 4 in \/Ze.  
  
 L'esempio seguente genera l'errore C4054:  
  
```  
// C4054.c // compile with: /W1 /Za /c int (*pfunc)(); int* f() { return (int*)pfunc;   // C4054 }  
```  
  
 In \/Ze questo è un avviso di livello 4.  
  
```  
// C4054b.c // compile with: /W4 /c int (*pfunc)(); int* f() { return (int*)pfunc;   // C4054 }  
```