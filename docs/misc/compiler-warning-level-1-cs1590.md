---
title: "Avviso del compilatore (livello 1) CS1590 | Microsoft Docs"
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
  - "CS1590"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1590"
ms.assetid: 0d6e5594-d6a6-43bf-8aa8-a452fa5748df
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1590
L'elemento di inclusione XML non è valido \-\- Manca l'attributo file  
  
 Un percorso o un attributo della documentazione, passato al tag [\<include\>](../Topic/%3Cinclude%3E%20\(C%23%20Programming%20Guide\).md), è assente o incompleto.  
  
 L'esempio seguente genera l'errore CS1590:  
  
```  
// CS1590.cs // compile with: /W:1 /doc:x.xml /// <include path='MyDocs/MyMembers[@name="test"]/*' />   // CS1590 // try the following line instead // /// <include file='x.doc' path='MyDocs/MyMembers[@name="test"]/*' /> class Test { public static void Main() { } }  
```