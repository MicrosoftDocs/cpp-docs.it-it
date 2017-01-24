---
title: "Errore del compilatore CS0450 | Microsoft Docs"
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
  - "CS0450"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0450"
ms.assetid: 8eb0e98b-d7a1-49a7-8e55-36e2eb0057ff
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0450
'Type Parameter Name': non è possibile specificare sia una classe constraint che il vincolo 'class' o 'struct'  
  
 Se un parametro di tipo è soggetto a un vincolo di tipo struct, è logicamente contraddittorio che sia vincolato anche da un determinato tipo di classe perché struct e class sono categorie che si escludono a vicenda. Se un parametro di tipo è vincolato da un determinato tipo di classe, per definizione è soggetto al vincolo di tipo classe, quindi è ridondante specificare il vincolo di tipo classe.  
  
## Esempio  
  
```  
// CS0450.cs // compile with: /t:library public class GenericsErrors { public class B { } public class G3<T> where T : struct, B { } // CS0450 // To resolve, use the following line instead: // public class G3<T> where T : B { } }  
```