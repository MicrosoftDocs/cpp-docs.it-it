---
title: "Errore del compilatore CS0710 | Microsoft Docs"
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
  - "CS0710"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0710"
ms.assetid: 753a1a87-f5e5-4758-a960-515069a6c7b0
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0710
Le classi statiche non possono avere costruttori di istanze  
  
 Non è possibile creare un'istanza di una classe statica, pertanto non è necessario specificare costruttori. Per evitare l'errore, rimuovere qualsiasi costruttore dalle classi statiche. In alternativa, se si vuole poter costruire istanze, impostare la classe come non statica.  
  
 L'esempio seguente genera l'errore CS0710:  
  
```  
// CS0710.cs public static class C { public C()  // CS0710 { } public static void Main() { } }  
```