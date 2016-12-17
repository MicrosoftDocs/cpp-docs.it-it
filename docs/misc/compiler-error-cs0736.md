---
title: "Errore del compilatore CS0736 | Microsoft Docs"
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
  - "CS0736"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0736"
ms.assetid: 06b14feb-81d5-495f-ab2d-6dc3f5e7216f
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0736
'type name' non implementa il membro di interfaccia 'member name'. 'method name' non può implementare un membro di interfaccia perché è di tipo statico.  
  
 Questo errore viene generato quando un metodo statico viene dichiarato in modo implicito o esplicito come implementazione di un membro di interfaccia.  
  
### Per correggere l'errore  
  
-   Rimuovere il modificatore [static](../Topic/static%20\(C%23%20Reference\).md) dalla dichiarazione di metodo.  
  
-   Cambiare il nome del metodo di interfaccia.  
  
-   Ridefinire il tipo contenitore in modo che non erediti dall'interfaccia.  
  
## Esempio  
 Il codice seguente genera l'errore CS0736 perché `Program.testMethod` è dichiarato come statico:  
  
```  
// cs0736.cs namespace CS0736 { interface ITest { int testMethod(int x); } class Program : ITest // CS0736 { public static int testMethod(int x) { return 0; } // Try the following line instead. // public int testMethod(int x) { return 0; } public static void Main() { } } }  
```  
  
## Vedere anche  
 [Interfacce](../Topic/Interfaces%20\(C%23%20Programming%20Guide\).md)