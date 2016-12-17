---
title: "Errore del compilatore CS1017 | Microsoft Docs"
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
  - "CS1017"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1017"
ms.assetid: e0902e8a-b042-4711-a8a6-83456a3f88cb
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1017
Le clausole catch non possono seguire la clausola catch generale di un'istruzione try  
  
 Un blocco `catch` che non accetta parametri deve essere l'ultimo in una serie di blocchi `catch`. Per altre informazioni sulle eccezioni, vedere [Istruzioni di gestione delle eccezioni](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS1017:  
  
```  
// CS1017.cs using System; namespace x { public class b : Exception { } public class a { public static void Main() { try { } catch   // CS1017, must be last catch { } catch(b) { throw; } } } }  
```