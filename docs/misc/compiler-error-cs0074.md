---
title: "Errore del compilatore CS0074 | Microsoft Docs"
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
  - "CS0074"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0074"
ms.assetid: 9395c532-3934-4553-8e41-042bfe3399ce
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0074
'event': l'evento astratto non può avere un inizializzatore  
  
 Se un [evento](../Topic/event%20\(C%23%20Reference\).md) è contrassegnato come **abstract**, non può essere inizializzato. Per altre informazioni, vedere [Eventi](../Topic/Events%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0074:  
  
```  
// CS0074.cs delegate void D(); abstract class Test { public abstract event D e = null;   // CS0074 // try the following line instead // public abstract event D e; public static void Main() { } }  
```