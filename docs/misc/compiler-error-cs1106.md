---
title: "Errore del compilatore CS1106 | Microsoft Docs"
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
  - "CS1106"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1106"
ms.assetid: 3585600a-6b2c-47aa-a418-ef049f07c107
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1106
I metodi di estensione devono essere definiti in una classe statica non generica.  
  
 I metodi di estensione devono essere definiti come metodi statici in una classe statica non generica.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1106 perché la classe `Extensions` non è definita come `static`:  
  
```  
// cs1106.cs public class Extensions // CS1106 { public  static void Test<T>(this System.String s) {} }  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [statiche](../Topic/static%20\(C%23%20Reference\).md)