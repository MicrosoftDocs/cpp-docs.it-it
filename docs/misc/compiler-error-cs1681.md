---
title: "Errore del compilatore CS1681 | Microsoft Docs"
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
  - "CS1681"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1681"
ms.assetid: 99934e15-1db8-4b71-9da8-a681a1d47407
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1681
Non è possibile ridefinire l'alias extern globale  
  
 L'alias globale è già definito in modo da includere tutti i riferimenti privi di alias e quindi non può essere ridefinito.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1681.  
  
```  
// CS1681.cs // compile with: /reference:global=System.dll // CS1681 expected // try this instead: /reference:System.dll class A { static void Main() {} }  
```