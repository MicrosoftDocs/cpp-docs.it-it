---
title: "Avviso del compilatore (livello 2) CS0652 | Microsoft Docs"
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
  - "CS0652"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0652"
ms.assetid: 1ec1cee6-858a-4104-aa15-2668723c6331
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0652
Il confronto con la costante integrale è inutile. La costante non è inclusa nell'intervallo del tipo 'type'  
  
 Il compilatore ha rilevato un confronto tra una costante e una variabile in cui la costante non è compresa nell'intervallo della variabile.  
  
 L'esempio seguente genera l'errore CS0652:  
  
```  
// CS0652.cs // compile with: /W:2 public class Class1 { private static byte i = 0; public static void Main() { short j = 256; if (i == 256)   // CS0652, 256 is out of range for byte i = 0; } }  
```