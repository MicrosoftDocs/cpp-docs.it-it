---
title: "Avviso del compilatore (livello 1) C4055 | Microsoft Docs"
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
  - "C4055"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4055"
ms.assetid: f04b13ca-88a7-4f2b-8065-42e73e5ac353
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4055
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'conversion': da puntatore a dati 'type1' a puntatore a funzione 'type2'  
  
 Viene eseguito il cast \(probabilmente in modo errato\) di un puntatore a dati a un puntatore a funzione. Si tratta di un avviso di livello 1 in \/Za e di un avviso di livello 4 in \/Ze.  
  
 L'esempio seguente genera l'errore C4055:  
  
```  
// C4055.c // compile with: /Za /W1 /c typedef int (*PFUNC)(); int *pi; PFUNC f() { return (PFUNC)pi;   // C4055 }  
```  
  
 In \/Ze questo è un avviso di livello 4.  
  
```  
// C4055b.c // compile with: /W4 /c typedef int (*PFUNC)(); int *pi; PFUNC f() { return (PFUNC)pi;   // C4055 }  
```