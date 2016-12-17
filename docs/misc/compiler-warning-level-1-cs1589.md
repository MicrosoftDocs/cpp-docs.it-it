---
title: "Avviso del compilatore (livello 1) CS1589 | Microsoft Docs"
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
  - "CS1589"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1589"
ms.assetid: bdc47124-93ae-4c6a-81b2-dde8ec4d0ab1
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1589
Non è possibile includere il frammento XML 'fragment' del file 'file'. Motivo  
  
 La sintassi \(*frammento*\) di un tag [\<inclusione\>](../Topic/%3Cinclude%3E%20\(C%23%20Programming%20Guide\).md), che ha fatto riferimento a un file \(`file`\), non è corretta per il ***motivo*** specificato.  
  
 Verrà inserita una riga in formato non valido nel file XML generato.  
  
 L'esempio seguente genera l'errore CS1589:  
  
```  
// CS1589.cs // compile with: /W:1 /doc:CS1589_out.xml /// <include file='CS1589.doc' path='MyDocs/MyMembers[@name="test"]/' />   // CS1589 // try the following line instead // /// <include file='CS1589.doc' path='MyDocs/MyMembers[@name="test"]/*' /> class Test { public static void Main() { } }  
```