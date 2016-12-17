---
title: "Errore del compilatore CS0729 | Microsoft Docs"
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
  - "CS0729"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0729"
ms.assetid: e0421d06-e818-404f-af97-d101272f4d07
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0729
Il tipo 'type' è definito in questo assembly, ma è specificato un server d'inoltro dei tipi  
  
 Non è possibile usare un server d'inoltro per un tipo definito nello stesso assembly.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0729.  
  
```  
// CS0729.cs // compile with: /target:library using System.Runtime.CompilerServices; [assembly:TypeForwardedTo(typeof(TestClass))]   // CS0729 class TestClass {}  
```