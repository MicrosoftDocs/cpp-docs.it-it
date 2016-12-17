---
title: "Errore del compilatore CS0126 | Microsoft Docs"
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
  - "CS0126"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0126"
ms.assetid: 15fb0f38-ac9d-4c09-a69f-398a4903d790
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0126
È necessario un oggetto di un tipo convertibile in 'type'  
  
 Un'istruzione return è presente, ma non restituisce un valore del tipo previsto. Per altre informazioni, vedere [Proprietà](../Topic/Properties%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0126:  
  
```  
// CS0126.cs public class a { public int i { set { } get { return;   // CS0126, specify a value to return } } }  
```