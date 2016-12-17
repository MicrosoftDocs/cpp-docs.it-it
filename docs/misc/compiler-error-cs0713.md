---
title: "Errore del compilatore CS0713 | Microsoft Docs"
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
  - "CS0713"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0713"
ms.assetid: 27a46765-d982-43ba-909f-9278e26b80d2
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0713
La classe statica 'static type' non può derivare dal tipo 'type'. Le classi statiche devono derivare dall'oggetto.  
  
 Se questo fosse consentito, la classe statica erediterebbe metodi e membri non statici dalla classe base, quindi non sarebbe statica. Quindi, non è consentito.  
  
 L'esempio seguente genera l'errore CS0713:  
  
```  
// CS0713.cs public class Base { } public static class Derived : Base  // CS0713 { } public class CMain { public static void Main() { } }  
```