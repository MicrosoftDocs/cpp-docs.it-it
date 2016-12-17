---
title: "Errore del compilatore CS0818 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0818"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0818"
ms.assetid: e4941018-a10a-4636-98ea-aade29e45728
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0818
Le variabili locali tipizzate in modo implicito devono essere inizializzate  
  
 Una variabile locale tipizzata in modo implicito deve essere inizializzata con un valore nello stesso momento in cui viene dichiarata.  
  
### Per correggere l'errore  
  
1.  Assegnare un valore alla variabile oppure specificare un tipo esplicito.  
  
## Esempio  
 Il codice seguente genera l'errore CS0818:  
  
```  
// cs0818.cs class A { public static int Main() { var a; // CS0818 return -1; } }  
```  
  
## Vedere anche  
 [Variabili locali tipizzate in modo implicito](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)