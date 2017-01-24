---
title: "Errore del compilatore CS0685 | Microsoft Docs"
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
  - "CS0685"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0685"
ms.assetid: 20d7c6cf-a388-430f-b22b-232536912491
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0685
Il membro condizionale 'member' non può avere un parametro out  
  
 Quando si usa l'attributo <xref:System.Diagnostics.ConditionalAttribute> in un metodo, è possibile che quest'ultimo non abbia un parametro out. Quando la chiamata al metodo è compilata a vuoto, infatti, il valore della variabile usata per il parametro out non viene definito. Per evitare questo errore, rimuovere il parametro out dalla dichiarazione di metodo condizionale oppure non usare l'attributo condizionale.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0685:  
  
```  
// CS0685.cs using System.Diagnostics; class C { [Conditional("DEBUG")] void trace(out int i)  // CS0685 { i = 1; } }  
```