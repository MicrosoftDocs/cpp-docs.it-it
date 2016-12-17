---
title: "Errore del compilatore CS0261 | Microsoft Docs"
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
  - "CS0261"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0261"
ms.assetid: c2af7b31-4a48-457a-8d9b-0956dd0d46f9
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0261
Le dichiarazioni parziali di 'type' devono essere costituite solo da classi, strutture o interfacce  
  
 Questo errore si verifica quando un tipo parziale viene dichiarato come tipo di costrutto differente in varie posizioni. Per altre informazioni, vedere [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0261:  
  
```  
// CS0261.cs partial class A  // CS0261 – A declared as a class here, but as a struct below { } partial struct A { }  
```