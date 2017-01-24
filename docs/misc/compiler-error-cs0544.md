---
title: "Errore del compilatore CS0544 | Microsoft Docs"
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
  - "CS0544"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0544"
ms.assetid: f8230a02-a666-4a1a-94cb-46f87463206a
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0544
'property override': non è possibile eseguire l'override. 'non\-property' non è una proprietà  
  
 Si è provato a eseguire l'override di un tipo di dati non di proprietà come [proprietà](../Topic/Properties%20\(C%23%20Programming%20Guide\).md), ma questa operazione non è consentita.  
  
 L'esempio seguente genera l'errore CS0544:  
  
```  
// CS0544.cs // compile with: /target:library public class a { public int i; } public class b : a { public override int i {   // CS0544 // try the following line instead // public new int i { get { return 0; } } }  
```