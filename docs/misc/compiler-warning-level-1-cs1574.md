---
title: "Avviso del compilatore (livello 1) CS1574 | Microsoft Docs"
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
  - "CS1574"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1574"
ms.assetid: 4cd2b474-ab01-4397-aed7-63e5f0081649
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1574
Il commento XML in 'construct' contiene l'attributo cref 'name' che è sintatticamente errato  
  
 Una stringa passata a un tag cref, ad esempio all'interno di un tag \<exception\>, fa riferimento a un membro che non è disponibile all'interno dell'ambiente di compilazione corrente. La stringa passata a un tag cref deve essere il nome sintatticamente corretto di un membro o campo.  
  
 Per altre informazioni, vedere [Tag consigliati per i commenti relativi alla documentazione](../Topic/Recommended%20Tags%20for%20Documentation%20Comments%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS1574:  
  
```  
// CS1574.cs // compile with: /W:1 /doc:x.xml using System; /// <exception cref="System.Console.WriteLin">An exception class.</exception>   // CS1574 // instead, uncomment and try the following line // /// <exception cref="System.Console.WriteLine">An exception class.</exception> class EClass : Exception { } class TestClass { public static void Main() { try { } catch(EClass) { } } }  
```