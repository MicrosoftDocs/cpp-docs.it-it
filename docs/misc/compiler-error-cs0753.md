---
title: "Errore del compilatore CS0753 | Microsoft Docs"
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
  - "CS0753"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0753"
ms.assetid: 287dd9da-da74-4290-9fa1-21ef1a8150fe
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0753
Solo metodi, classi, strutture o interfacce possono essere parziali.  
  
 Il modificatore [partial](../Topic/partial%20\(Type\)%20\(C%23%20Reference\).md) può essere usato solo con classi, strutture, interfacce e metodi.  
  
### Per correggere l'errore  
  
1.  Rimuovere il modificatore `partial` dalla variabile o dal costrutto di linguaggio.  
  
## Esempio  
 Il codice seguente genera l'errore CS0753:  
  
```  
// cs0753.cs using System; public partial class C { partial int num; // CS0753 public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)