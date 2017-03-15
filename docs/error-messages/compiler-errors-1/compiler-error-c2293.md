---
title: "Errore del compilatore C2293 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2293"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2293"
ms.assetid: 17e7b4e2-368b-4dd7-a01b-d82be60f8e56
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2293
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': non è consentito avere una variabile membro come identificatore \_\_based  
  
 Gli identificatori per il modificatore `__based` devono essere puntatori non membro.  
  
 L'esempio seguente genera l'errore C2293:  
  
```  
// C2293.cpp // compile with: /c class A { static int *i; void __based(i) *bp;   // C2293 void *bp2;   // OK };  
```