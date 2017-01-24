---
title: "Errore del compilatore CS2005 | Microsoft Docs"
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
  - "CS2005"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2005"
ms.assetid: 03535d2a-ae30-4272-ab45-e277df5ee8e1
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS2005
Manca la specifica del file per l'opzione 'option'  
  
 Un'[opzione del compilatore](../Topic/C%23%20Compiler%20Options.md) è stata specificata solo parzialmente.  
  
 Ad esempio, quando si usa l'opzione [\/recurse](../Topic/-recurse%20\(C%23%20Compiler%20Options\).md) è necessario specificare il file da cercare è necessario specificare il file da cercare: **\/recurse:***nomefile***.cs**.  
  
## Esempio  
 L'esempio seguente genera l'errore CS2005.  
  
```  
// CS2005.cs // compile with: /recurse: // CS2005 expected class x { public static void Main() {} }  
```