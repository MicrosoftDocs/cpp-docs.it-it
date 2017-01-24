---
title: "Errore del compilatore CS0756 | Microsoft Docs"
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
  - "CS0756"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0756"
ms.assetid: 847b20b0-bbf0-43a2-8728-4b54cb3d9cd6
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0756
Un metodo parziale non può avere più dichiarazioni di definizione.  
  
 La dichiarazione di definizione di un metodo parziale è la parte che specifica la firma del metodo, ma non l'implementazione \(corpo del metodo\). Un metodo parziale deve avere esattamente una dichiarazione di definizione per ogni firma univoca. Ogni versione di overload di un metodo parziale deve essere una propria dichiarazione di definizione.  
  
### Per correggere l'errore  
  
1.  Rimuovere tutte le dichiarazioni di definizione tranne una per il metodo parziale.  
  
## Esempio  
  
```  
// cs0756.cs using System; public partial class C { partial void Part(); partial void Part(); // CS0756 public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)