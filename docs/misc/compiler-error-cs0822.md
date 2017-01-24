---
title: "Errore del compilatore CS0822 | Microsoft Docs"
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
  - "CS0822"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0822"
ms.assetid: 519091be-2332-4df4-acd9-e3b633966b3d
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0822
Le variabili locali tipizzate in modo implicito non possono essere costanti  
  
 Le variabili locali tipizzate in modo implicito sono necessarie solo per l'archiviazione di tipi anonimi. In tutti gli altri casi rappresentano solo una comodità. Se il valore della variabile non cambia mai, assegnarle un tipo esplicito. Se si tenta di usare il modificatore `readonly` con una variabile locale tipizzata in modo implicito, viene generato l'errore CS0106.  
  
### Per correggere l'errore  
  
1.  Se è necessario che la variabile sia costante o `readonly`, assegnarle un tipo esplicito.  
  
## Esempio  
 Il codice seguente genera l'errore CS0822:  
  
```  
// cs0822.cs class A { public static int Main() { const var x = 0; // CS0822.cs return -1; } }  
```  
  
## Vedere anche  
 [Variabili locali tipizzate in modo implicito](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)