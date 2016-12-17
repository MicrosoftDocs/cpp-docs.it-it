---
title: "Errore del compilatore CS0763 | Microsoft Docs"
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
  - "CS0763"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0763"
ms.assetid: 940870ba-1250-4365-acaa-7f968ee96c5b
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0763
Entrambe le dichiarazioni di metodo parziale devono essere statiche, altrimenti nessuna delle due potrà esserlo.  
  
 Una dichiarazione di metodo parziale non può avere una parte statica e una parte non statica.  
  
### Per correggere l'errore  
  
1.  Rendere entrambe le parti statiche o non statiche.  
  
## Esempio  
 Il codice seguente genera l'errore CS0763:  
  
```  
// cs0763.cs using System; public partial class C { static partial void Part(); partial void Part() // CS0763 { } public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [statiche](../Topic/static%20\(C%23%20Reference\).md)