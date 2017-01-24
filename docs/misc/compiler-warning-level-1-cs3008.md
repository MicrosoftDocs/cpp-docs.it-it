---
title: "Avviso del compilatore (livello 1) CS3008 | Microsoft Docs"
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
  - "CS3008"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3008"
ms.assetid: 593f6114-bc7b-4789-958f-97bbf99c1c9f
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3008
L'identificatore 'identifier' che differisce solo per l'uso di caratteri maiuscoli o minuscoli non è conforme a CLS  
  
 Un identificatore [public](../Topic/public%20\(C%23%20Reference\).md), [protected](../Topic/protected%20\(C%23%20Reference\).md) o `protected` `internal` interrompe la conformità alla specifica CLS \(Common Language Specification\) se inizia con un carattere di sottolineatura \(\_\).Per altre informazioni sulla conformità a CLS, vedere [Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3) e [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS3008:  
  
```  
// CS3008.cs using System; [assembly:CLSCompliant(true)] public class a { public static int _a = 0;  // CS3008 // OK, private // private static int _a1 = 0; public static void Main() { } }  
```