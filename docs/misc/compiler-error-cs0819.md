---
title: "Errore del compilatore CS0819 | Microsoft Docs"
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
  - "CS0819"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0819"
ms.assetid: a5369e03-eb7d-4c88-b390-51304bd8d1ae
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0819
Le variabili locali tipizzate in modo implicito non possono avere più dichiaratori.  
  
 L'uso di più dichiaratori è consentito nelle dichiarazioni di tipo esplicito, ma non con le variabili tipizzate in modo implicito.  
  
### Per correggere l'errore  
  
1.  Dichiarare e assegnare un valore a ogni variabile locale tipizzata in modo implicito in una riga separata.  
  
## Esempio  
 Il codice seguente genera l'errore CS0819:  
  
```  
// cs0819.cs class A { public static int Main() { var a = 3, b = 2; // CS0819 return -1; } }  
```  
  
## Vedere anche  
 [Variabili locali tipizzate in modo implicito](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)