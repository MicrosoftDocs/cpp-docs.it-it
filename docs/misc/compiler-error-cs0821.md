---
title: "Errore del compilatore CS0821 | Microsoft Docs"
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
  - "CS0821"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0821"
ms.assetid: ef449115-93e8-4fa5-848a-d30dc7f68ddf
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0821
Le variabili locali tipizzate in modo implicito non possono essere di tipo fisso  
  
 Le variabili locali tipizzate in modo implicito e i tipi anonimi non sono supportati nel contesto `fixed`.  
  
### Per correggere l'errore  
  
1.  Rimuovere il modificatore `fixed` dalla variabile o assegnare alla variabile un tipo esplicito.  
  
## Esempio  
 Il codice seguente genera l'errore CS0821:  
  
```  
class A { static int x; public static int Main() { unsafe { fixed (var p = &x) { } } return -1; } }  
```  
  
## Vedere anche  
 [Variabili locali tipizzate in modo implicito](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)