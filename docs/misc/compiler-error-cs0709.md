---
title: "Errore del compilatore CS0709 | Microsoft Docs"
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
  - "CS0709"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0709"
ms.assetid: 91040f55-a060-4cc3-b830-f6b771af28d7
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0709
'derived class' non può derivare dalla classe statica 'base class'  
  
 Non è possibile creare un'istanza o derivare da una classe statica, ovvero una classe statica non può essere una classe base di un'altra classe.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0709.  
  
```  
// CS0709.cs // compile with: /target:library public static class Base {} public class Derived : Base {}   // CS0709  
```