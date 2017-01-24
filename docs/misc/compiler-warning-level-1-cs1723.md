---
title: "Avviso del compilatore (livello 1) CS1723 | Microsoft Docs"
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
  - "CS1723"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1723"
ms.assetid: d359be86-7daf-4b59-99a3-10b072336bca
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1723
Il commento XML in 'param' contiene l'attributo cref 'attribute' che fa riferimento a un parametro di tipo  
  
 Questo errore viene generato da un commento XML che fa riferimento a un parametro di tipo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1723.  
  
```  
// CS1723.cs // compile with: /t:library /doc:filename.XML ///<summary>A generic list class.</summary> ///<see cref="T" />   // CS1723 // To resolve comment the previous line. public class List<T> { }  
```