---
title: "Errore del compilatore CS1730 | Microsoft Docs"
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
  - "CS1730"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1730"
ms.assetid: 20900ca0-702f-4f35-9a60-2dee9cb11902
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1730
Gli attributi di modulo e assembly devono precedere tutti gli altri elementi definiti in un file ad eccezione delle clausole using e delle dichiarazioni di alias extern.  
  
 Un attributo applicato a livello di assembly non può trovarsi dopo le definizioni dei tipi.  
  
### Per correggere l'errore  
  
1.  Spostare l'attributo all'inizio del file, ma sotto le direttive `using` e le dichiarazioni di alias `extern`.  
  
## Esempio  
 Il codice seguente genera l'errore CS1730:  
  
```  
// cs1730.cs class Test { } [assembly: System.Attribute] // CS1730  
```  
  
## Vedere anche  
 [Attributi](../Topic/Attributes%20\(C%23%20and%20Visual%20Basic\).md)