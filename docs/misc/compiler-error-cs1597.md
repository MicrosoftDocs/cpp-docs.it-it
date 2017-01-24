---
title: "Errore del compilatore CS1597 | Microsoft Docs"
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
  - "CS1597"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1597"
ms.assetid: 735e7cde-38de-4e15-96cc-ce75ffe34ff2
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1597
Non è possibile inserire un punto e virgola dopo un blocco di metodo o di funzione di accesso  
  
 Non è necessario o consentito inserire un punto e virgola dopo un blocco di metodo o di funzione di accesso.  
  
 L'esempio seguente genera l'errore CS1597:  
  
```  
// CS1597.cs class TestClass { public static void Main() { };   // CS1597, remove semicolon }  
```