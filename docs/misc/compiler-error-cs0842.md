---
title: "Errore del compilatore CS0842 | Microsoft Docs"
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
  - "CS0842"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0842"
ms.assetid: 93a8b333-efc4-40c7-ae53-5264f721a74f
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0842
Impossibile utilizzare proprietà implementate automaticamente in un tipo contrassegnato con StructLayout\(LayoutKind.Explicit\).  
  
 Le proprietà implementate automaticamente hanno propri campi di supporto forniti dal compilatore e il campo non è accessibile al codice sorgente. Quindi, non sono compatibili con <xref:System.Runtime.InteropServices.LayoutKind?displayProperty=fullName>.  
  
### Per correggere l'errore  
  
1.  Impostare la proprietà come proprietà regolare in cui si forniscono i corpi delle funzioni di accesso.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0842:  
  
```  
// cs0842.cs using System; using System.Runtime.InteropServices; namespace TestNamespace { [StructLayout(LayoutKind.Explicit)] struct Str { public int Num // CS0842 { get; set; } static int Main() { return 1; } } }  
```