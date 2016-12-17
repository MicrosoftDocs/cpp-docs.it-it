---
title: "Errore del compilatore CS0591 | Microsoft Docs"
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
  - "CS0591"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0591"
ms.assetid: b8acbcdb-dc66-4338-9ddd-d606e5a2c57e
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0591
Valore non valido per l'argomento dell'attributo 'attribute'  
  
 A un attributo è stato passato un argomento non valido o due argomenti che si escludono reciprocamente.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0591:  
  
```  
// CS0591.cs using System; [AttributeUsage(0)]   // CS0591 class I: Attribute { } public class a { public static void Main() { } }  
```