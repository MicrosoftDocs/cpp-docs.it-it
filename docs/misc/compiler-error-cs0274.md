---
title: "Errore del compilatore CS0274 | Microsoft Docs"
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
  - "CS0274"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0274"
ms.assetid: bbd2d64e-a756-4713-b9ed-711d50b65e00
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0274
Non è possibile specificare i modificatori di accessibilità per entrambe le funzioni di accesso della proprietà o dell'indicizzatore 'property\/indexer'  
  
 Questo errore si verifica quando si dichiara una proprietà o un indicizzatore con modificatori di accesso in entrambe le funzioni di accesso. Per risolvere l'errore, usare un modificatore di accesso per una sola delle due funzioni di accesso. Per altre informazioni, vedere [Accessibilità delle funzioni di accesso](../Topic/Restricting%20Accessor%20Accessibility%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0274:  
  
```  
// CS0274.cs public class MyClass { public int Property   // CS0274 { public get { return 0; } protected set { } } }  
```