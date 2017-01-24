---
title: "Avviso del compilatore (livello 1) CS3027 | Microsoft Docs"
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
  - "CS3027"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3027"
ms.assetid: c515e623-3f5a-49fa-a878-f1d8e90fdc24
caps.latest.revision: 3
caps.handback.revision: 3
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3027
'type\_1' non è conforme a CLS perché l'interfaccia di base 'type\_2' non è conforme a CLS  
  
 Un tipo non conforme a CLS non può essere un tipo di base per un tipo che è conforme a CLS.  
  
## Esempio  
 L'esempio seguente contiene un'interfaccia con un metodo che usa un tipo non conforme a CLS nella firma, rendendo il tipo non conforme a CLS.  
  
```  
// CS3027.cs // compile with: /target:library public interface IBase { void IMethod(uint i); }  
```  
  
## Esempio  
 L'esempio seguente genera l'errore CS3027.  
  
```  
// CS3027_b.cs // compile with: /reference:CS3027.dll /target:library /W:1 [assembly:System.CLSCompliant(true)] public interface IDerived : IBase {}  
```