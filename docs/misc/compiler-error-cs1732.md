---
title: "Errore del compilatore CS1732 | Microsoft Docs"
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
  - "CS1732"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1732"
ms.assetid: 72c7f7fc-d5f2-4538-9b02-50dda54d3b1e
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1732
Previsto parametro.  
  
 Questo errore viene generato quando un'espressione lambda contiene una virgola che segue un parametro di input ma non specifica il parametro seguente.  
  
### Per correggere l'errore  
  
1.  Rimuovere la virgola o aggiungere il parametro di input che il compilatore prevede di trovare dopo la virgola.  
  
## Esempio  
 L'esempio seguente produce l'errore CS1732:  
  
```  
// cs1732.cs // compile with: /target:library class Test { delegate void D(int x, int y); static void Main() { D d = (x,) => { }; // CS1732 } }  
```