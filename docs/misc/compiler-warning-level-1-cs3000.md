---
title: "Avviso del compilatore (livello 1) CS3000 | Microsoft Docs"
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
  - "CS3000"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3000"
ms.assetid: 37cdd3dc-8481-4e29-b78c-281baeca2d64
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3000
I metodi con argomenti variabili non sono conformi a CLS  
  
 Gli argomenti usati nel metodo espongono funzionalità non incluse nelle specifiche CLS \(Common Language Specification\). Per altre informazioni sulla conformità a CLS, vedere [Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3).  
  
 L'esempio seguente genera l'avviso CS3000.  
  
```  
// CS3000.cs // compile with: /target:library // CS3000 expected [assembly:System.CLSCompliant(true)] public class Test { public void AddABunchOfInts( __arglist ) {}   // CS3000 }  
```