---
title: "Errore del compilatore CS0714 | Microsoft Docs"
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
  - "CS0714"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0714"
ms.assetid: fbb5dc55-645c-4980-bf4b-3c2f84a3c6cd
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0714
'static type': le classi statiche non possono implementare interfacce  
  
 Le interfacce possono definire metodi non statici su oggetti e quindi non possono essere implementate da classi statiche. Per risolvere questo errore, verificare che la classe non tenti di implementare le interfacce.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0714:  
  
```  
// CS0714.cs interface I { } public static class C : I  // CS0714 { public static void Main() { } }  
```