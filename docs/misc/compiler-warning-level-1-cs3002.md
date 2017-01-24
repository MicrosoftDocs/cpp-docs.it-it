---
title: "Avviso del compilatore (livello 1) CS3002 | Microsoft Docs"
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
  - "CS3002"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3002"
ms.assetid: 34f19735-76d2-4d78-bd52-45989a86fca4
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3002
Il tipo restituito di 'method' non è conforme a CLS  
  
 Un metodo [public](../Topic/public%20\(C%23%20Reference\).md), [protected](../Topic/protected%20\(C%23%20Reference\).md) o `protected` `internal` deve restituire un valore di tipo conforme a Common Language Specification \(CLS\). Per altre informazioni sulla conformità a CLS, vedere [Scrittura di codice conforme a CLS](http://msdn.microsoft.com/it-it/4c705105-69a2-4e5e-b24e-0633bc32c7f3) e [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS3002:  
  
```  
// CS3002.cs [assembly:System.CLSCompliant(true)] public class a { public ushort bad()   // CS3002, public method { ushort a; a = ushort.MaxValue; return a; } private ushort OK()   // OK, private method { ushort a; a = ushort.MaxValue; return a; } public static void Main() { } }  
```