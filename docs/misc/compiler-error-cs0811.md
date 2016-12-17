---
title: "Errore del compilatore CS0811 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0811"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0811"
ms.assetid: 99f81ad3-684f-47aa-adb8-360e24901454
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0811
Il nome completo per 'name' è troppo lungo per le informazioni di debug. Compilare senza l'opzione '\/debug'.  
  
 Le informazioni di debug presentano vincoli di dimensioni per i nomi di variabile e di tipo.  
  
### Per correggere l'errore  
  
1.  Se non è possibile modificare il nome, l'unica alternativa è quella di compilare senza l'opzione [\/debug](../Topic/-debug%20\(C%23%20Compiler%20Options\).md).  
  
## Esempio  
 Il codice seguente genera l'errore CS0811:  
  
```  
// cs0811.cs //Compile with: /debug using System; using System.Collections.Generic; namespace TestNamespace { using Long = List<List<List<List<List<List<List<List<List<List<List<List<List <List<List<List<List<List<List<List<List<List<List<List<List<List<List<List<int>>>>>>>>>>>>>>>>>>>>>>>>>>>>; // CS0811 class Test { static int Main() { return 1; } } }  
```