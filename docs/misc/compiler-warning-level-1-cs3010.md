---
title: "Avviso del compilatore (livello 1) CS3010 | Microsoft Docs"
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
  - "CS3010"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3010"
ms.assetid: d57bd750-df15-4e6a-9579-66de8b276b7e
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3010
'member': le interfacce conformi a CLS devono avere solo membri conformi a CLS  
  
 In un assembly contrassegnato con `[assembly:CLCSompliant(true)]` un'interfaccia contiene un membro contrassegnato con `[CLCSompliant(false)]`. Rimuovere uno degli attributi di conformità a Common Language Specification \(CLS\). Per altre informazioni sulla conformità a CLS, vedere [\<PAVE OVER\> Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3) e [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS3010:  
  
```  
// CS3010.cs using System; [assembly:CLSCompliant(true)] public interface I { [CLSCompliant(false)] int M();   // CS3010 } public class C : I { public int M() { return 1; } public static void Main() { } }  
```