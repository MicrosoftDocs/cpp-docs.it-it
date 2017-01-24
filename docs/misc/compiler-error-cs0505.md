---
title: "Errore del compilatore CS0505 | Microsoft Docs"
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
  - "CS0505"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0505"
ms.assetid: e3cb9e33-7338-4869-859b-81d7439f0d23
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0505
'member1': non è possibile eseguire l'override. 'member2' non è una funzione  
  
 Una dichiarazione di classe ha tentato di eseguire l'override di un non metodo in una classe base. Gli override devono corrispondere al tipo di membro. Se si vuole un metodo con lo stesso nome del metodo in una classe base, usare [new](../Topic/new%20\(C%23%20Reference\).md) \(e non [override](../Topic/override%20\(C%23%20Reference\).md)\) nella dichiarazione di metodo nella classe base.  
  
 L'esempio seguente genera l'errore CS0505:  
  
```  
// CS0505.cs // compile with: /target:library public class clx { public int i; } public class cly : clx { public override int i() { return 0; }   // CS0505 }  
```