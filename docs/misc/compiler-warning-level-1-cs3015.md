---
title: "Avviso del compilatore (livello 1) CS3015 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS3015"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3015"
ms.assetid: 58182215-0c2f-4497-8baf-ffb29f18d6c7
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3015
'method signature' non dispone di costruttori accessibili che utilizzano solo tipi conformi a CLS  
  
 Per garantire la conformità con la specifica CLS \(Common Language Specification\), l'elenco di argomenti di una classe Attribute non può contenere una matrice. Per altre informazioni sulla conformità a CLS, vedere [Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3) e [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3015.  
  
```  
// CS3015.cs // compile with: /target:library using System; [assembly:CLSCompliant(true)] public class MyAttribute : Attribute { public MyAttribute(int[] ai) {}   // CS3015 // try the following line instead // public MyAttribute(int ai) {} }  
```