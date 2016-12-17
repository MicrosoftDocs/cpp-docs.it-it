---
title: "Avviso del compilatore (livello 1) CS1645 | Microsoft Docs"
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
  - "CS1645"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1645"
ms.assetid: ea45fb20-b696-4d4e-b893-edde9d96bd3a
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1645
La funzionalità 'feature' non fa parte della specifica del linguaggio C\# standard ISO e potrebbe non essere accettata da altri compilatori  
  
 La funzionalità usata non fa parte dello standard ISO. Il codice che usa questa funzionalità potrebbe non essere compilato in altri compilatori.  
  
```  
// CS1645.cs // compile with: /W:1 /t:module /langversion:ISO-1 [assembly:System.CLSCompliant(false)] // To supress the warning use the switch: /nowarn:1645 [module:System.CLSCompliant(false)]   // CS1645 class Test { }  
```