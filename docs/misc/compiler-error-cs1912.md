---
title: "Errore del compilatore CS1912 | Microsoft Docs"
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
  - "CS1912"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1912"
ms.assetid: 6205420e-01b9-4470-89f9-5924f1e49108
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1912
Inizializzazione del membro 'name' duplicata.  
  
 Un inizializzatore di oggetto può inizializzare ogni membro una sola volta.  
  
### Per correggere l'errore  
  
1.  Rimuovere la seconda inizializzazione del membro nell'inizializzatore di oggetto.  
  
## Esempio  
 Il codice seguente genera l'errore CS1912 perché `memberA` viene inizializzato due volte:  
  
```  
// cs1912.cs using System.Linq; public class TestClass { public int memberA { get; set; } public int memberB { get; set; } } public class Test { static void Main() { TestClass tc = new TestClass() { memberA = 5, memberA = 6, memberB = 2}; // CS1912 } }  
```  
  
## Vedere anche  
 [Inizializzatori di oggetto e di raccolta](../Topic/Object%20and%20Collection%20Initializers%20\(C%23%20Programming%20Guide\).md)