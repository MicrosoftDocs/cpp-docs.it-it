---
title: "Errore del compilatore CS0730 | Microsoft Docs"
ms.custom: ""
ms.date: "10/01/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0730"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0730"
ms.assetid: bf291285-dc1e-4c8d-a449-119004adc088
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0730
Non è possibile inoltrare il tipo 'type' perché è un tipo annidato di 'type'  
  
 Questo errore viene generato quando si tenta di inoltrare una classe annidata.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0730. È costituito da due file di origine. Compilare prima di tutto il file di libreria `CS0730a.cs`, quindi compilare il file `CS0730.cs` che fa riferimento al file di libreria.  
  
```  
// CS0730a.cs // compile with: /t:library public class Outer { public class Nested {} }  
```  
  
```  
// CS0730.cs // compile with: /t:library /r:CS0730a.dll using System.Runtime.CompilerServices; [assembly:TypeForwardedToAttribute(typeof(Outer.Nested))]   // CS0730 [assembly:TypeForwardedToAttribute(typeof(Outer))]   // OK  
```