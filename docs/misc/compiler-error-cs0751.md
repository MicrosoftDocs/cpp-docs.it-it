---
title: "Errore del compilatore CS0751 | Microsoft Docs"
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
  - "CS0751"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0751"
ms.assetid: 2ebaed5f-d3ca-452f-8fce-f3299b84360a
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0751
Un metodo parziale deve essere dichiarato in una classe o in una struttura parziale  
  
 Non è possibile dichiarare un metodo [parziale](../Topic/partial%20\(Method\)%20\(C%23%20Reference\).md) a meno che non venga incapsulato all'interno di una classe o di uno struct parziale.  
  
### Per correggere l'errore  
  
1.  Rimuovere il modificatore `partial` dal metodo e fornire un'implementazione oppure aggiungere il modificatore `partial` alla classe o allo struct contenitore.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0751:  
  
```  
// cs0751.cs using System; public class C { partial void Part(); // CS0751 public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)