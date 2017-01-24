---
title: "Errore del compilatore CS0755 | Microsoft Docs"
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
  - "CS0755"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0755"
ms.assetid: 80613029-a009-4bdf-b1c2-1eec1e60c7b4
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0755
Entrambe le dichiarazioni di metodo parziale devono essere metodi di estensione, altrimenti nessuna delle due potrà esserlo.  
  
 Un metodo parziale è costituito da una dichiarazione di definizione \(firma\) e una dichiarazione di implementazione facoltativa \(corpo\). Se la dichiarazione di definizione è un metodo di estensione, la dichiarazione di implementazione, se definita, deve anche essere un metodo di estensione. E se il metodo di definizione non è un metodo di estensione, non lo deve essere neanche l'implementazione.  
  
### Per correggere l'errore  
  
1.  Rimuovere il modificatore `this` da una delle parti o aggiungerlo all'altra.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0755:  
  
```  
// cs0755.cs public static partial class Ext { static partial void Part(this C c); //Extension method // Typically the implementing declaration is in a separate file. static partial void Part(C c) //CS0755 { } } public partial class C { public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)