---
title: "Errore del compilatore CS0622 | Microsoft Docs"
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
  - "CS0622"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0622"
ms.assetid: aef77a69-d8b7-41f8-9539-258deaef5cc4
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0622
Solo espressioni di inizializzazione di matrice possono essere utilizzate per assegnare a tipi matrice. Provare a utilizzare un'espressione new.  
  
 Nella dichiarazione di una non matrice è stata usata una sintassi appropriata per l'inizializzazione di una matrice.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0622:  
  
```  
// CS0622.cs using System; public class Test { public static void Main () { Test t = { new Test() };   // CS0622 // Try the following instead: // Test[] t = { new Test() }; } }  
```