---
title: "Avviso del compilatore (livello 3) CS0659 | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0659"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0659"
ms.assetid: 63435ee6-c92f-4124-95d4-d8f4e5f0af80
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0659
'class' esegue l'override di Object.Equals\(object o\) ma non esegue l'override di Object.GetHashCode\(\)  
  
 Il compilatore ha rilevato un override della funzione **Equals** ma non esegue alcun override per **GetHashCode**. Un override di **Equals** implica che si vuole anche eseguire l'override di **GetHashCode**.  
  
 Per altre informazioni, vedere  
  
-   <xref:System.Collections.Hashtable>.  
  
-   [Operatori di uguaglianza](../Topic/Equality%20Operators.md)  
  
-   [NIB: Implementazione del metodo Equals](http://msdn.microsoft.com/it-it/30f28aaf-8b9e-46cd-a746-58a12473af2c)  
  
-   <xref:System.Object.GetHashCode%2A>  
  
 L'esempio seguente genera l'errore CS0659:  
  
```  
// CS0659.cs // compile with: /W:3 /target:library class Test { public override bool Equals(object o) { return true; }   // CS0659 } // OK class Test2 { public override bool Equals(object o) { return true; } public override int GetHashCode() { return 0; } }  
```