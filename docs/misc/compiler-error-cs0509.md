---
title: "Errore del compilatore CS0509 | Microsoft Docs"
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
  - "CS0509"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0509"
ms.assetid: dc113e03-7a01-489b-b886-51ee056fc96a
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0509
'class1': non può derivare dal tipo sealed 'class2'  
  
 Una classe [sealed](../Topic/sealed%20\(C%23%20Reference\).md) non può essere usata come classe [base](../Topic/base%20\(C%23%20Reference\).md). Gli struct sono sealed per impostazione predefinita.  
  
 L'esempio seguente genera l'errore CS0509:  
  
```  
// CS0509.cs // compile with: /target:library sealed public class clx {} public class cly : clx {}   // CS0509  
```