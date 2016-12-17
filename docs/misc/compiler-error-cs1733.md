---
title: "Errore del compilatore CS1733 | Microsoft Docs"
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
  - "CS1733"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1733"
ms.assetid: 2188aabe-404d-4a95-a11a-736dbd848508
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1733
È prevista l'espressione.  
  
 Questo errore viene generato ogni volta che il compilatore prevede un'espressione nella riga in cui si è verificato l'errore. Nell'esempio seguente, la virgola finale nell'inizializzatore indica al compilatore che seguirà un'altra espressione.  
  
### Per correggere l'errore  
  
-   Fornire l'espressione mancante.  
  
-   Rimuovere i token che fanno sì che il compilatore preveda un'espressione.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1733 a causa della virgola finale:  
  
```  
// cs1733.cs using System.Collections.Generic; public class Test { public static void Main() { List<int> list = new List<int>() {{ 1, 2, }};// CS1733 } }  
```