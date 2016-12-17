---
title: "Errore del compilatore CS0828 | Microsoft Docs"
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
  - "CS0828"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0828"
ms.assetid: e18ffe72-2fcc-436d-be7f-8c8365b86129
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0828
Non è possibile assegnare 'expression' a una proprietà di tipo anonimo.  
  
 Un tipo anonimo non può essere inizializzato con un valore Null o un tipo unsafe oppure con un gruppo di metodi o una funzione anonima.  
  
### Per correggere l'errore  
  
1.  Aggiungere una dichiarazione di tipo sul lato sinistro dell'assegnazione o modificare l'espressione sul lato destro in modo che abbia un tipo accettabile.  
  
## Esempio  
 Il codice seguente genera l'errore CS0828 perché un membro di un tipo anonimo non può essere inizializzato con un valore null.  
  
```  
// cs0828.cs using System; public class C { public static int Main() { var a = 1; var c = new { p1 = null }; // CS0828 return 1; } }  
```  
  
## Vedere anche  
 [Variabili locali tipizzate in modo implicito](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)