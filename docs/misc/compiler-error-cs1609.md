---
title: "Errore del compilatore CS1609 | Microsoft Docs"
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
  - "CS1609"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1609"
ms.assetid: 89e112f8-6337-4803-8741-2e38497deb8c
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1609
Impossibile inserire modificatori nelle dichiarazioni delle funzioni di accesso agli eventi  
  
 I modificatori possono essere inseriti solo nelle dichiarazioni di evento e non nelle dichiarazioni della funzione di accesso eventi. Per altre informazioni, vedere [Utilizzo delle proprietà](../Topic/Using%20Properties%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS1609.  
  
```  
// CS1609.cs // compile with: /target:library delegate int Del(); class A { public event Del MyEvent { private add {}   // CS1609 // try the following line instead // add {} remove {} } }  
```