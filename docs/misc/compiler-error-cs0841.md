---
title: "Errore del compilatore CS0841 | Microsoft Docs"
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
  - "CS0841"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0841"
ms.assetid: eb67c244-a930-4291-ae2a-5832e8916ed7
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0841
Non è possibile usare la variabile locale 'name' prima che sia dichiarata.  
  
 Prima di poter essere usata, una variabile deve essere dichiarata.  
  
### Per correggere l'errore  
  
1.  Spostare la dichiarazione di variabile prima della riga in cui si verifica l'errore.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0841:  
  
```  
// cs0841.cs using System; public class C { public static int Main() { j = 5; // CS0841 int j; // To fix, move this line up. return 1; } }  
```