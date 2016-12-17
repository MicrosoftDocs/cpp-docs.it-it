---
title: "Errore del compilatore CS0746 | Microsoft Docs"
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
  - "CS0746"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0746"
ms.assetid: 36baf7f2-b092-422c-ab53-95154bfceb0a
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0746
Dichiaratore di membro di tipo anonimo non valido. I membri di tipo anonimo devono essere dichiarati con una assegnazione membro, nome semplice o accesso ai membri.  
  
 Un membro di tipo anonimo deve essere dichiarato con assegnazione membro, nome semplice o accesso ai membri.  
  
### Per correggere l'errore  
  
1.  Verificare che la dichiarazione usi solo assegnazione membro, nomi semplici o espressioni di accesso ai membri.  
  
## Esempio  
 Il codice seguente genera l'errore CS0746 nella dichiarazione di `incorrect_1` e `incorrect_2`. Le dichiarazioni seguenti mostrano due dei modi corretti per dichiarare un tipo anonimo.  
  
```  
// cs0746.cs public class C { public static int Main() { int i = 100; string s = "Bottles of beer."; var incorrect_1 = new { a.b = 1 }; // CS0746 var incorrect_2 = new {100, "Bottles of beer."}; // CS0746 var correct_1 = new { i, s }; //OK var correct_2 = new {num = i, message = s}; // OK return 1; } }  
  
```  
  
## Vedere anche  
 [Tipi anonimi](../Topic/Anonymous%20Types%20\(C%23%20Programming%20Guide\).md)