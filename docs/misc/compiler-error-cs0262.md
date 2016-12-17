---
title: "Errore del compilatore CS0262 | Microsoft Docs"
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
  - "CS0262"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0262"
ms.assetid: 44f8661f-c934-483f-84cd-00ca8257e50a
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0262
Le dichiarazioni parziali di 'type' contengono modificatori di accessibilità in conflitto  
  
 Questo errore si verifica se un tipo parziale contiene modificatori incoerenti come public, private, protected, internal o abstract. Questi modificatori devono essere coerenti in tutte le dichiarazioni parziali per il tipo specificato. Per altre informazioni, vedere [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0262:  
  
```  
// CS0262.cs class A { public partial class C  // CS0262 { } private partial class C { } }  
```