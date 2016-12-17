---
title: "Errore del compilatore CS0463 | Microsoft Docs"
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
  - "CS0463"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0463"
ms.assetid: 0cb4be4e-86ea-4ade-8817-b17d4cacd4d5
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0463
Valutazione dell'espressione costante decimale non riuscita. Errore: 'error'  
  
 Questo errore è determinato dall'overflow di un'espressione costante decimale in fase di compilazione.  
  
 In genere, gli errori di overflow si verificano in fase di esecuzione. In questo caso, l'espressione costante è stata definita in modo che il compilatore fosse in grado di valutarne il risultato e prevederne l'overflow.  
  
## Esempio  
 Il codice seguente genera l'errore CS0463.  
  
```  
// CS0463.cs using System; class MyClass { public static void Main() { const decimal myDec = 79000000000000000000000000000.0m + 79000000000000000000000000000.0m; // CS0463 Console.WriteLine(myDec.ToString()); } }  
```