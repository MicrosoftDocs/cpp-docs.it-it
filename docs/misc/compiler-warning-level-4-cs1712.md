---
title: "Avviso del compilatore (livello 4) CS1712 | Microsoft Docs"
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
  - "CS1712"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1712"
ms.assetid: d9a8be26-c0ba-41fa-b082-1ce4ba7724b7
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 4) CS1712
Il parametro di tipo, diversamente da altri parametri di tipo, non contiene tag typeparam corrispondenti nel commento XML  
  
 Nella documentazione di un tipo generico manca un tag **typeparam**. Per altre informazioni, vedere [\<typeparam\>](../Topic/%3Ctypeparam%3E%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 Il codice seguente genera l'avviso CS1712. Per risolvere questo errore, aggiungere un tag **typeparam** per il parametro di tipo S.  
  
```  
// CS1712.cs // compile with: /doc:cs1712.xml using System; class Test { public static void Main() {} /// <param name="j"> This is the j parameter.</param> /// <typeparam name="T"> This is the T type parameter.</typeparam> public void bar<T,S>(int j) {}  // CS1712 }  
```