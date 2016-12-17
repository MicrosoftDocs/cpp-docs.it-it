---
title: "Errore del compilatore CS0017 | Microsoft Docs"
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
  - "CS0017"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0017"
ms.assetid: 5e2a3eb3-6f6e-485d-8293-ceabea4d6905
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0017
Nel programma 'output file name' è definito più di un punto di ingresso. Compilare con \/main per specificare il tipo contenente il punto di ingresso.  
  
 Un programma può avere solo un metodo [Main](../Topic/Main\(\)%20and%20Command-Line%20Arguments%20\(C%23%20Programming%20Guide\).md).  
  
 Per risolvere questo errore, è possibile eliminare tutti i metodi Main nel codice, tranne uno, oppure usare l'opzione del compilatore [\/main](../Topic/-main%20\(C%23%20Compiler%20Options\).md) per specificare il metodo Main da usare.  
  
 L'esempio seguente genera l'errore CS0017:  
  
```  
// CS0017.cs // compile with: /target:exe public class clx { static public void Main() { } } public class cly { public static void Main()   // CS0017, delete one Main or use /main { } }  
```