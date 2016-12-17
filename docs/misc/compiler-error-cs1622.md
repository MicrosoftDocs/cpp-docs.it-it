---
title: "Errore del compilatore CS1622 | Microsoft Docs"
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
  - "CS1622"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1622"
ms.assetid: 6b53a777-4cd8-423a-84ff-22ff588044d3
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1622
Impossibile restituire un valore da un iteratore. Utilizzare l'istruzione yield return per restituire un valore o l'istruzione yield break per terminare l'iterazione.  
  
 Un iteratore è una funzione speciale che restituisce un valore tramite l'istruzione yield, anziché l'istruzione return. Per altre informazioni, vedere **Iteratori**.  
  
 L'esempio seguente genera l'errore CS1622:  
  
```  
// CS1622.cs // compile with: /target:library using System.Collections; class C : IEnumerable { public IEnumerator GetEnumerator() { return (IEnumerator) this;  // CS1622 yield return this;   // OK } }  
```