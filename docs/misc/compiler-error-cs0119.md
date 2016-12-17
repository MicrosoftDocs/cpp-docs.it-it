---
title: "Errore del compilatore CS0119 | Microsoft Docs"
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
  - "CS0119"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0119"
ms.assetid: 048924f1-378f-4021-bd20-299d3218f810
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0119
'construct1\_name' è un 'construct1', che non è un costrutto valido nel contesto specificato.  
  
 Il compilatore ha rilevato un costrutto imprevisto, ad esempio:  
  
-   Il costruttore di una classe non è un'espressione di test valida in un'istruzione condizionale.  
  
-   È stato usato un nome della classe anziché un nome di istanza per fare riferimento a un elemento di matrice.  
  
-   Un identificatore di metodo viene usato come se fosse uno struct o una classe  
  
## Esempio  
 L'esempio seguente genera l'errore CS0119.  
  
```  
// CS0119.cs using System; public class MyClass { public static void Test() {} public static void Main() { Console.WriteLine(Test.x);   // CS0119 } }  
```