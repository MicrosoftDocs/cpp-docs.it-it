---
title: "Avviso del compilatore (livello 3) CS1717 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1717"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1717"
ms.assetid: 5b150a2c-5d61-4cd8-b4d4-e6c2b93b52c6
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS1717
Assegnazione fatta alla stessa variabile. Si intendeva assegnare qualcos'altro?  
  
 Questo avviso viene visualizzato quando si assegna una variabile a se stessa, ad esempio `a = a`.  
  
 L'avviso può essere generato da diversi errori comuni:  
  
-   Scrittura di `a = a` come condizione di un'istruzione **if**, ad esempio `if (a = a)`.  È probabile che si volesse scrivere `if (a == a)`, che è sempre vero e può quindi essere indicato più concisamente con `if (true)`.  
  
-   Errori di digitazione. È probabile che si volesse scrivere `a = b`.  
  
-   Omissione della parola chiave **this** in un costruttore in cui il parametro ha lo stesso nome del campo. È probabile che si volesse scrivere `this.a = a`.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1717.  
  
```  
// CS1717.cs // compile with: /W:3 public class Test { public static void Main() { int x = 0; x = x;   // CS1717 } }  
```