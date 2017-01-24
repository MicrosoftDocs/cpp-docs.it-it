---
title: "Errore del compilatore CS0573 | Microsoft Docs"
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
  - "CS0573"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0573"
ms.assetid: 10ef9625-44f1-4936-ada3-56938357aa01
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0573
'field declaration': impossibile inizializzare il campo di un'istanza negli struct  
  
 Non è possibile inizializzare un campo di istanza di uno [struct](../Topic/struct%20\(C%23%20Reference\).md). I campi di tipi valore verranno inizializzati sui relativi valori predefiniti e i campi di tipo riferimento verranno inizializzati su `null`.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0573:  
  
```  
// CS0573.cs namespace x { public class clx { public static void Main() { } } public struct cly { clx a = new clx();   // CS0573 // clx a;            // OK int i = 7;           // CS0573 // int i;            // OK } }  
```