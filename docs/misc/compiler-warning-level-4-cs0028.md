---
title: "Avviso del compilatore (livello 4) CS0028 | Microsoft Docs"
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
  - "CS0028"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0028"
ms.assetid: 47df919f-01fa-45ae-a4b7-912445e679e2
caps.latest.revision: 15
caps.handback.revision: 15
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 4) CS0028
'function declaration' non può essere un punto di ingresso perché la firma è errata  
  
 La dichiarazione del metodo per `Main` non era valida: è stato dichiarato con una firma non valida.`Main` deve essere dichiarato come statico e deve restituire [int](../Topic/int%20\(C%23%20Reference\).md) o [void](../Topic/void%20\(C%23%20Reference\).md). Per altre informazioni, vedere [Main\(\) e argomenti della riga di comando](../Topic/Main\(\)%20and%20Command-Line%20Arguments%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0028:  
  
```  
// CS0028.cs // compile with: /W:4 /warnaserror public class a { public static double Main(int i)   // CS0028 // Try the following line instead: // public static void Main() { } }  
```