---
title: "Errore del compilatore CS1959 | Microsoft Docs"
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
  - "CS1959"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1959"
ms.assetid: 20a31619-3e30-446a-becc-a7f8cfcec66d
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1959
'name' è di tipo 'type'. Il tipo specificato in una dichiarazione di costante deve essere sbyte, byte, short, ushort, int, uint, long, ulong, char, float, double, decimal, bool, string, enum\-type o reference\-type.  
  
 I tipi consentiti in una dichiarazione const sono limitati a quelli descritti in questo messaggio.  
  
### Per correggere l'errore  
  
1.  Dichiarare la costante con un tipo consentito.  
  
## Esempio  
 Il codice seguente genera l'errore CS1959 perché `null` non è un tipo.  
  
```  
// cs1959.cs class Program { static void Test<T>() where T : class { const T x = null; // CS1959 } }  
```  
  
## Vedere anche  
 [Costanti](../Topic/Constants%20\(C%23%20Programming%20Guide\).md)   
 [null](../Topic/null%20\(C%23%20Reference\).md)