---
title: "Errore del compilatore CS0727 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0727"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0727"
ms.assetid: 54bfb87e-d759-4310-a8ab-02dccd06337c
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0727
Identificatore di formato non valido  
  
 Questo errore si verifica nel debugger. Quando si digita un nome di variabile in una delle finestre del debugger, è possibile farlo seguire da una virgola, quindi da un identificatore di formato, ad esempio myInt, h; o myString,nq. Questo errore si verifica quando il compilatore non può assolutamente analizzare il contenuto digitato. Per risolvere l'errore, digitare nuovamente il nome della variabile, seguito facoltativamente da una virgola e da un [identificatore di formato valido](../Topic/Format%20Specifiers%20in%20C%23.md).