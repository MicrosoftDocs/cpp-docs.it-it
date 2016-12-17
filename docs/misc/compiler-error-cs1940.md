---
title: "Errore del compilatore CS1940 | Microsoft Docs"
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
  - "CS1940"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1940"
ms.assetid: 546e9bba-725d-4ea9-826f-37ec9d832add
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1940
Sono state trovate più implementazioni del modello di query per il tipo di origine 'type'. Chiamata ambigua a 'method'.  
  
 Questo errore viene generato quando vengono definite più implementazioni di un metodo di query e il compilatore non è in grado di distinguere quale sia quella più adatta per la query. Nell'esempio seguente le due versioni di `Select` hanno la stessa firma perché entrambe accettano `int` come parametro di input e hanno `int` come valore restituito.  
  
### Per correggere l'errore  
  
1.  Fornire solo un'implementazione per ogni metodo.  
  
## Esempio  
 Il codice seguente genera l'errore CS1940:  
  
```  
// cs1940.cs using System; //must include explicitly for types defined in 3.5 class Test { public delegate int Dele(int x); int num = 0; public int Select(Func<int, int> d) { return d(this.num); } public int Select(Dele d) // CS1940 { return d(this.num) + 1; } public static void Main() { var q = from x in new Test() select x; } }  
```  
  
## Vedere anche  
 [Standard Query Operators Overview](../Topic/Standard%20Query%20Operators%20Overview.md)