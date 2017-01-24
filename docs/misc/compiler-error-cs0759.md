---
title: "Errore del compilatore CS0759 | Microsoft Docs"
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
  - "CS0759"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0759"
ms.assetid: 96f0e178-adbf-4327-8934-ac282c428184
caps.latest.revision: 4
caps.handback.revision: 4
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0759
Non sono state trovate dichiarazioni di definizione per la dichiarazione di implementazione del metodo parziale 'method'.  
  
 Un metodo parziale deve avere una dichiarazione di definizione che definisce la firma \(nome, tipo restituito e parametri\) del metodo. Il corpo dell'implementazione o del metodo è facoltativo.  
  
### Per correggere l'errore  
  
1.  Fornire una dichiarazione di definizione per il metodo parziale nell'altra parte di una classe parziale o struct.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0759:  
  
```  
// cs0759.cs using System; public partial class C { partial void Part() // CS0759 { } public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)