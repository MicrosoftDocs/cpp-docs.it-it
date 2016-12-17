---
title: "Errore del compilatore CS0430 | Microsoft Docs"
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
  - "CS0430"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0430"
ms.assetid: b63c4f9a-b1cd-41d2-a02e-2ed0f177450f
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0430
L'alias extern 'alias' non è stato specificato in un'opzione \/reference  
  
 Questo errore si verifica quando viene rilevato alias extern ma alias non è stato specificato come riferimento nella riga di comando. Per risolvere l'errore CS0430, compilare con **\/reference**.  
  
## Esempio  
  
```  
// CS0430_a.cs // compile with: /target:library public class MyClass {}  
```  
  
## Esempio  
 La compilazione con **\/reference:MyType\=cs0430\_a.dll** per fare riferimento alla DLL creata nell'esempio precedente consente di risolvere l'errore. L'esempio seguente genera l'errore CS0430.  
  
```  
// CS0430_b.cs extern alias MyType;   // CS0430 public class Test { public static void Main() {} }  
  
```