---
title: "Errore del compilatore CS0681 | Microsoft Docs"
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
  - "CS0681"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0681"
ms.assetid: aa51ad94-df0a-481d-aaea-5b4291ebc41c
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0681
Il modificatore 'abstract' non è valido nei campi. Provare a usare una proprietà  
  
 Non è possibile rendere un campo abstract. È possibile, tuttavia, avere una proprietà astratta che accede al campo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0681:  
  
```  
// CS0681.cs // compile with: /target:library abstract class C { abstract int num;  // CS0681 }  
  
```  
  
## Esempio  
 Provare il codice seguente:  
  
```  
// CS0681b.cs // compile with: /target:library abstract class C { public abstract int num { get; set; } }  
```