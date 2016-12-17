---
title: "Errore del compilatore CS1585 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1585"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1585"
ms.assetid: 429268c3-2dae-4c71-9e0d-be1badb3ca68
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1585
Il modificatore del membro 'keyword' deve precedere il tipo e il nome del membro  
  
 L'identificatore di accesso in una firma del metodo non si trova nella posizione corretta.  
  
 L'esempio seguente genera l'errore CS1585:  
  
```  
// CS1585.cs public class Class1 { public void static Main(string[] args)   // CS1585 // try the following line instead // public static void Main(string[] args) { } }  
```