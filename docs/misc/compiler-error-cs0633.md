---
title: "Errore del compilatore CS0633 | Microsoft Docs"
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
  - "CS0633"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0633"
ms.assetid: a24d310b-151a-45eb-b150-3407940ec24c
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0633
L'argomento dell'attributo 'attribute' deve essere un identificatore valido  
  
 Qualsiasi argomento passato agli attributi <xref:System.Diagnostics.ConditionalAttribute> o <xref:System.Runtime.CompilerServices.IndexerNameAttribute> deve essere un identificatore valido. Ciò significa che non può contenere caratteri come "\+" che non sono validi all'interno degli identificatori.  
  
## Esempio  
 L'esempio seguente illustra l'errore CS0633 quando si usa l'attributo <xref:System.Diagnostics.ConditionalAttribute>. L'esempio seguente genera l'errore CS0633.  
  
```  
// CS0633a.cs #define DEBUG using System.Diagnostics; public class Test { [Conditional("DEB+UG")]   // CS0633 // try the following line instead // [Conditional("DEBUG")] public static void Main() { } }  
```  
  
## Esempio  
 L'esempio seguente illustra l'errore CS0633 quando si usa l'attributo <xref:System.Runtime.CompilerServices.IndexerNameAttribute>.  
  
```  
// CS0633b.cs // compile with: /target:module #define DEBUG using System.Runtime.CompilerServices; public class Test { [IndexerName("Invalid+Identifier")]   // CS0633 // try the following line instead // [IndexerName("DEBUG")] public int this[int i] { get { return i; } } }  
  
```