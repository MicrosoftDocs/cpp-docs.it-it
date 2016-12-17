---
title: "Errore del compilatore CS0037 | Microsoft Docs"
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
  - "CS0037"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0037"
ms.assetid: 1d34a71e-10a0-4fa8-9b94-343e69428c61
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0037
Non è possibile convertire Null in 'type' perché è un tipo valore non nullable  
  
 Il compilatore non può assegnare null a un tipo valore. null può essere assegnato solo a un [tipo riferimento](../Topic/Reference%20Types%20\(C%23%20Reference\).md) o a un tipo Nullable.[struct](../Topic/struct%20\(C%23%20Reference\).md) è un tipo valore. Per altre informazioni, vedere [Tipi nullable](../Topic/Nullable%20Types%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0037:  
  
```  
// CS0037.cs public struct s { } class a { public static void Main() { int i = null;   // CS0037 s ss = null;    // CS0037 } }  
```