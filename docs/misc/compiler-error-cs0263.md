---
title: "Errore del compilatore CS0263 | Microsoft Docs"
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
  - "CS0263"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0263"
ms.assetid: 94fe3eb0-10e9-4602-a993-68fe125c8565
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0263
Le dichiarazioni parziali di 'type' non devono specificare classi base diverse  
  
 Quando si definisce un tipo nelle dichiarazioni parziali, è necessario specificare gli stessi tipi base in tutte le dichiarazioni parziali. Per altre informazioni, vedere [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0263:  
  
```  
  
// CS0263.cs // compile with: /target:library class B1 { } class B2 { } partial class C : B1  // CS0263 – is the base class B1 or B2? { } partial class C : B2 { }  
```