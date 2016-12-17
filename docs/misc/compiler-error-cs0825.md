---
title: "Errore del compilatore CS0825 | Microsoft Docs"
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
  - "CS0825"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0825"
ms.assetid: 49393d23-ec5f-4b44-a3fd-7e0a95ac0edd
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0825
La parola chiave contestuale 'var' può trovarsi solo all'interno di una dichiarazione di variabile locale.  
  
 La tipizzazione implicita con la parola chiave `var` può essere applicata solo alle variabili nell'ambito del metodo locale.  
  
### Per correggere l'errore  
  
1.  Se la variabile appartiene all'ambito di classe, assegnarle un tipo esplicito.  In caso contrario, spostarla all'interno del metodo in cui verrà usata.  
  
## Esempio  
 Il codice seguente genera l'errore CS0825 perché `var` viene usato in un campo di classe:  
  
```  
// cs0825.cs class Test { private var myField; //CS0825 static int Main() { var a = 1; // var is OK here return -1; } }  
```  
  
## Vedere anche  
 [Variabili locali tipizzate in modo implicito](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)