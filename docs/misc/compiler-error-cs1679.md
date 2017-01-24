---
title: "Errore del compilatore CS1679 | Microsoft Docs"
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
  - "CS1679"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1679"
ms.assetid: c42e9bca-212a-458e-88f8-b81c812436bb
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1679
L'alias extern non è valido per '\/reference'. 'identifier' non è un identificatore valido  
  
 Quando si usa la funzionalità di alias di assembly esterno dell'opzione **\/reference**, il testo che segue **\/reference:** e che precede '\=' deve essere una parola chiave o un identificatore C\# valido, in base alla specifica del linguaggio C\#.  
  
 Per correggere l'errore, modificare il testo prima di "\=" usando una parola chiave o un identificatore C\# valido.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1679.  
  
```  
// CS1679.cs // compile with: /reference:123$BadIdentifier%=System.dll class TestClass { static void Main() { } }  
```