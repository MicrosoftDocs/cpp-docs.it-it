---
title: "Errore del compilatore CS1105 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1105"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1105"
ms.assetid: fcbd91ad-a76a-4b22-868d-16824fa96f85
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1105
I metodi di estensione devono essere statici.  
  
 I metodi di estensione devono essere dichiarati come metodi statici in una classe statica non generica.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1105 perché `Test` non è statico:  
  
```  
// cs1105.cs // Compile with: /target:library public class Extensions { // Single type parameter. public void Test<T>(this System.String s) {} //CS1105 }  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [statiche](../Topic/static%20\(C%23%20Reference\).md)