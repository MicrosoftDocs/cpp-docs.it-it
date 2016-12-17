---
title: "Errore del compilatore CS0273 | Microsoft Docs"
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
  - "CS0273"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0273"
ms.assetid: 851ad056-feee-48fd-834c-578a1a13e926
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0273
Il modificatore di accessibilità della funzione di accesso 'property\_accessor' deve essere più restrittivo della proprietà o dell'indicizzatore 'property'  
  
 Il modificatore di accessibilità della funzione di accesso set\/get deve essere più restrittivo della proprietà o dell'indicizzatore 'property\/indexer'  
  
 Questo errore si verifica quando si dichiara una proprietà o un indicizzatore con un modificatore di accesso meno restrittivo di quello specificato in una delle relative funzioni di accesso. Per correggere l'errore, usare il modificatore di accesso appropriato nella proprietà o nella funzione di accesso set. Per altre informazioni, vedere [Accessibilità delle funzioni di accesso](../Topic/Restricting%20Accessor%20Accessibility%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 Questo esempio contiene una proprietà interna con un metodo set interno. L'esempio seguente genera l'errore CS0273.  
  
```  
// CS0273.cs // compile with: /target:library public class MyClass { internal int Property { get { return 0; } internal set {}   // CS0273 // try the following line instead // private set {} } }  
```