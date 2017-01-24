---
title: "Errore del compilatore CS0758 | Microsoft Docs"
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
  - "CS0758"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0758"
ms.assetid: 06ddd548-1311-40db-9078-8a18107b8346
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0758
Entrambe le dichiarazioni di metodo parziale devono usare un parametro params, altrimenti nessuna delle due potrà usarla  
  
 Se una parte di un metodo parziale specifica un parametro `params`, anche l'altra parte deve specificarne uno.  
  
### Per correggere l'errore  
  
1.  Aggiungere il modificatore `params` in una parte del metodo o rimuoverlo nell'altro.  
  
## Esempio  
 Il codice seguente genera l'errore CS0758:  
  
```  
using System; public partial class C { partial void Part(int i, params char[] array); partial void Part(int i, char[] array) // CS0758 { } public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [params](../Topic/params%20\(C%23%20Reference\).md)