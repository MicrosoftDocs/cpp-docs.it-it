---
title: "Errore del compilatore CS0059 | Microsoft Docs"
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
  - "CS0059"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0059"
ms.assetid: 25a8624b-7f7b-4487-ba80-413d57f9132b
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0059
Accessibilità incoerente: il tipo parametro 'type' è meno accessibile del delegato 'delegate'  
  
 Il tipo restituito e ciascuno dei tipi a cui viene fatto riferimento nell'elenco di parametri formali di un metodo deve essere accessibile almeno quanto il metodo stesso. Per altre informazioni, vedere [Modificatori di accesso](../Topic/Access%20Modifiers%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0059:  
  
```  
// CS0059.cs class MyClass //defaults to private accessibility // try the following line instead // public class MyClass { } public delegate void MyClassDel( MyClass myClass);   // CS0059 public class Program { public static void Main() { } }  
```