---
title: "Errore del compilatore CS0750 | Microsoft Docs"
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
  - "CS0750"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0750"
ms.assetid: 84fb6841-7f47-405a-ae05-95567692f73d
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0750
Un metodo parziale non può avere modificatori di accesso o il modificatore virtual, abstract, override, new, sealed o extern.  
  
 A causa del comportamento speciale, i metodi parziali sono soggetti a restrizioni per quanto riguarda i modificatori che possono accettare.  
  
### Per correggere l'errore  
  
1.  Rimuovere il modificatore non autorizzato dalla dichiarazione di metodo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0750:  
  
```  
// cs0750.cs using System; public class Base { protected virtual void PartG() { } protected void PartH() { } protected virtual void PartI() { } } public partial class C:Base { // All these partial method declarations // will generate CS0750. public partial void PartA(); private partial void PartB(); protected partial void PartC(); internal partial void PartD(); virtual partial void PartE(); abstract partial void PartF(); override partial void PartG(); new partial void PartH(); sealed override partial void PartI(); extern partial void PartJ(); public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)