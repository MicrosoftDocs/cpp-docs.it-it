---
title: "Errore del compilatore CS0723 | Microsoft Docs"
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
  - "CS0723"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0723"
ms.assetid: b9f6aebc-e959-407d-8d5c-6a6dcabcfe0f
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0723
Non è possibile dichiarare una variabile di tipo statico 'type'  
  
 Non è possibile creare istanze di tipi statici.  
  
 L'esempio seguente genera l'errore CS0723:  
  
```  
// CS0723.cs public static class SC { } public class CMain { public static void Main() { SC sc = null;  // CS0723 } }  
```