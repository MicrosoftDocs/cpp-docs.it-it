---
title: "Avviso del compilatore (livello 1) CS3016 | Microsoft Docs"
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
  - "CS3016"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3016"
ms.assetid: b2ae721d-13ab-4e9d-a288-741d7825defe
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3016
L'utilizzo di matrici come argomenti di attributi non è conforme a CLS  
  
 Passare una matrice a un attributo è un'operazione non conforme a Common Language Specification \(CLS\). Per altre informazioni sulla conformità a CLS, vedere [Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3) e [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS3016:  
  
```  
// CS3016.cs using System; [assembly : CLSCompliant(true)] [C(new int[] {1, 2})]   // CS3016 // try the following line instead // [C()] class C : Attribute { public C() { } public C(int[] a) { } public static void Main () { } }  
```