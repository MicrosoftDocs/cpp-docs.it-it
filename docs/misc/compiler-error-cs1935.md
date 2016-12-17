---
title: "Errore del compilatore CS1935 | Microsoft Docs"
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
  - "CS1935"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1935"
ms.assetid: d5dda801-fbf3-4340-bfe1-f9409f2d344d
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1935
Non è stata trovata un'implementazione del modello di query per il tipo di origine 'type'. 'method' non è presente. Probabilmente manca un riferimento a 'System.Core.dll' o una direttiva using per 'System.Linq'.  
  
 Il tipo di origine in una query deve essere `IEnumerable`, `IEnumerable<T>` o un tipo derivato o un tipo per cui qualcuno ha implementato gli operatori query standard. Se il tipo di origine è un `IEnumerable` o `IEnumerable<T>`, è necessario aggiungere un riferimento a system.core.dll e una direttiva `using` per lo spazio dei nomi System.Linq per portare i metodi di estensione degli operatori query standard nell'ambito. Le implementazioni personalizzate degli operatori query standard devono essere incluse nell'ambito nello stesso modo, con una direttiva `using` e, se necessario, un riferimento all'assembly.  
  
### Per correggere l'errore  
  
1.  Aggiungere le direttive using e riferimenti necessari al progetto.  
  
## Esempio  
 Il codice seguente viene generato l'errore CS1935 perché la direttiva `using` per System.Linq è impostata come commento:  
  
```  
// cs1935.cs // CS1935 using System; using System.Collections.Generic; // using System.Linq; class Test { static int Main() { int[] nums = {0,1,2,3,4,5}; IEnumerable<int> e = from n in nums where n > 3 select n; return 0; } }  
```  
  
## Vedere anche  
 [Standard Query Operators Overview](../Topic/Standard%20Query%20Operators%20Overview.md)