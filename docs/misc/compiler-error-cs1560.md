---
title: "Errore del compilatore CS1560 | Microsoft Docs"
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
  - "CS1560"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1560"
ms.assetid: 772c4543-6c8d-453f-ae3f-d333528eb8b3
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1560
Il nome file specificato per la direttiva per il preprocessore non è valido. È troppo lungo o non è un nome file valido  
  
 La lunghezza del nome file specificato con [\#line](../Topic/%23line%20\(C%23%20Reference\).md) supera il valore di \_MAX\_PATH \(256 caratteri\) oppure la riga in cui è stato trovato `#line` contiene più di 2.000 caratteri.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1560.  
  
```  
// cs1560.cs using System; class MyClass { public static void Main() { Console.WriteLine("Normal line #1."); #line 21 "MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890MyFile1234567890.txt"   // CS1560 } }  
```