---
title: "Errore del compilatore CS0226 | Microsoft Docs"
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
  - "CS0226"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0226"
ms.assetid: 9f8c74c4-de21-41fb-84e1-ef32a4b23ced
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0226
Un'espressione \_\_arglist può trovarsi solo all'interno di una chiamata o di un'espressione new.  
  
 La parola chiave non supportata `__arglist` può essere presente solo in una chiamata al metodo o in una nuova espressione.  
  
## Esempio  
 Il codice seguente genera l'errore CS0226:  
  
```  
// cs0226.cs using System; public class C { public static int Main () { __arglist(1,"This is a string"); // CS0226 return 0; } }  
```