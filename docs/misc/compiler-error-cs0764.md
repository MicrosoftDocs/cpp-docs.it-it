---
title: "Errore del compilatore CS0764 | Microsoft Docs"
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
  - "CS0764"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0764"
ms.assetid: 76a64149-49d8-40ea-a976-03835d8fb7eb
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0764
Nessuna o entrambe le dichiarazioni di metodi parziali devono essere di tipo unsafe  
  
 Un metodo parziale è costituito da una dichiarazione di definizione \(firma\) e una dichiarazione di implementazione facoltativa \(corpo\). Se la dichiarazione di definizione ha il modificatore `unsafe`, dovrà averlo anche la dichiarazione di implementazione. Viceversa, se la dichiarazione di implementazione ha il modificatore `unsafe`, dovrà averlo anche la dichiarazione di definizione.  
  
### Per correggere l'errore  
  
1.  Supponendo che la dichiarazione di definizione sia corretta, aggiungere o rimuovere il modificatore `unsafe` modificatore dalla dichiarazione di implementazione in modo che corrisponda alla dichiarazione di definizione.  
  
## Esempio  
  
```  
// cs0764.cs //  Compile with: /target:library /unsafe public partial class C { partial void Part(); unsafe partial void Part() //CS0764 { } public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)