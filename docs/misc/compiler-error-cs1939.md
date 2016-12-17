---
title: "Errore del compilatore CS1939 | Microsoft Docs"
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
  - "CS1939"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1939"
ms.assetid: 9a7cdd48-3d45-473a-a799-c7771ef8158d
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1939
Non è possibile passare la variabile di intervallo 'name' come parametro out o ref.  
  
 Una variabile di intervallo è una variabile di sola lettura che viene introdotta in un'espressione di query e agisce da identificatore per ogni elemento successivo in una sequenza di origine. Non può essere modificata in alcun modo, quindi è inutile passarla mediante `ref` o `out`. Di conseguenza, entrambe le operazioni non sono valide.  
  
### Per correggere l'errore  
  
1.  Passare la variabile di intervallo in base al valore.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1939:  
  
```  
// cs1939.cs using System.Linq; class Test { public static void F(ref int i) { } public static void Main() { var list = new int[] { 0, 1, 2, 3, 4, 5 }; var q = from x in list let k = x select Test.F(ref x); // CS1939 } }  
```