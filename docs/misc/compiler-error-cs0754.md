---
title: "Errore del compilatore CS0754 | Microsoft Docs"
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
  - "CS0754"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0754"
ms.assetid: c83e04b5-6ab5-45c2-805e-0ba4f041d506
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0754
Un metodo parziale non può implementare in modo esplicito un metodo di interfaccia.  
  
 Non è possibile dichiarare un metodo parziale come implementazione esplicita di un metodo definito in un'interfaccia.  
  
### Per correggere l'errore  
  
1.  Rimuovere la qualificazione di interfaccia esplicita dalla dichiarazione di metodo.  
  
## Esempio  
 Il codice seguente genera l'errore CS0754:  
  
```  
// cs0754.cs using System; public interface IF { void Part(); } public partial class C : IF { partial void IF.Part(); //CS0754 public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Implementazione esplicita dell'interfaccia](../Topic/Explicit%20Interface%20Implementation%20\(C%23%20Programming%20Guide\).md)   
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)