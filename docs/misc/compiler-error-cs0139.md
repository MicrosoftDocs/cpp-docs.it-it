---
title: "Errore del compilatore CS0139 | Microsoft Docs"
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
  - "CS0139"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0139"
ms.assetid: 235ba3d4-566c-4ef6-801a-a338f4f2a12d
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0139
Non esiste alcun ciclo di inclusione all'esterno del quale interrompere o continuare  
  
 Un'istruzione break o continue è stata rilevata al di fuori di un ciclo.  
  
 Per altre informazioni, vedere [Istruzioni di salto](../Topic/Jump%20Statements%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0139 due volte:  
  
```  
// CS0139.cs namespace x { public class a { public static void Main() { continue;  // CS0139 break;     // CS0139 } } }  
```