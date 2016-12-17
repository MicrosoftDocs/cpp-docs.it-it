---
title: "Errore del compilatore CS0761 | Microsoft Docs"
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
  - "CS0761"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0761"
ms.assetid: b16ac1df-0ddc-44d2-89f1-8d9c32af87ad
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0761
Le dichiarazioni di metodo parziale di 'method\<T\>' contengono vincoli incoerenti per i parametri di tipo.  
  
 Se un metodo parziale ha un'implementazione, il vincolo di tipo generico deve essere identico al vincolo definito nella firma del metodo.  
  
### Per correggere l'errore  
  
1.  Rendere i vincoli di tipo generico identici in ogni parte del metodo parziale.  
  
## Esempio  
 Il codice seguente genera l'errore CS0761:  
  
```  
// cs0761.cs using System; public partial class C { partial void Part<T>() where T : class; partial void Part<T>() where T : struct // CS0761 { } public static int Main() { return 1; } }  
  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [Vincoli sui parametri di tipo](../Topic/Constraints%20on%20Type%20Parameters%20\(C%23%20Programming%20Guide\).md)