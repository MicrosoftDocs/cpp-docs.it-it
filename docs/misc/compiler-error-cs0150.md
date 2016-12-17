---
title: "Errore del compilatore CS0150 | Microsoft Docs"
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
  - "CS0150"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0150"
ms.assetid: 1fd08ca5-e1a9-42f5-93de-2916a3bdcad1
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0150
È previsto un valore costante  
  
 È stata trovata una variabile in cui è prevista una costante. Per altre informazioni, vedere [switch](../Topic/switch%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0150:  
  
```  
// CS0150.cs namespace MyNamespace { public class MyClass { public static void Main() { int i = 0; int j = 0; switch(i) { case j:   // CS0150, j is a variable int, not a constant int // try the following line instead // case 1: } } } }  
```  
  
 Questo errore viene generato anche quando una dimensione di matrice viene specificata con un valore della variabile e inizializzata con un inizializzatore di matrice. Per rimuovere l'errore, inizializzare la matrice in una o più istruzioni separate.  
  
```  
// CS0150.cs namespace MyNamespace { public class MyClass { public static void Main() { int size = 2; double[] nums = new double[size] { 46.9, 89.4 }; //CS0150 // Try the following lines instead // double[] nums = new double[size]; // nums[0] = 46.9; // nums[1] = 89.4; } } }  
  
```