---
title: "Errore del compilatore CS0594 | Microsoft Docs"
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
  - "CS0594"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0594"
ms.assetid: a3d6bde1-db63-4c5c-a425-8c6a39e00999
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0594
La costante a virgola mobile non è inclusa nell'intervallo di tipo 'type'  
  
 È stato assegnato un valore a una variabile a virgola mobile che è troppo grande per le variabili di questo tipo di dati. Vedere [Tabella dei tipi integrali](../Topic/Integral%20Types%20Table%20\(C%23%20Reference\).md) per informazioni sull'intervallo di valori consentiti nei tipi di dati.  
  
 L'esempio seguente genera l'errore CS0594:  
  
```  
// CS0594.cs namespace MyNamespace { public class MyClass { public static void Main() { float f = 6.77777777777E400;   // CS0594, value too large } } }  
```