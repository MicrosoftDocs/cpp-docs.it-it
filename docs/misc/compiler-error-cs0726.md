---
title: "Errore del compilatore CS0726 | Microsoft Docs"
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
  - "CS0726"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0726"
ms.assetid: 9ea5f004-cf25-4e6e-b9e5-6b53e4a7e1ab
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0726
'format specifier' non è un identificatore di formato valido  
  
 Questo errore si verifica nel debugger. Quando si digita un nome di variabile in una delle finestre del debugger, è possibile farlo seguire da una virgola, quindi da un identificatore di formato, ad esempio `myInt, h` o `myString,nq`. Questo errore si verifica quando il compilatore non riconosce gli [Identificatori di formato in C\#](../Topic/Format%20Specifiers%20in%20C%23.md).