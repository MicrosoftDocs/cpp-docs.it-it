---
title: "Errore del compilatore CS1910 | Microsoft Docs"
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
  - "CS1910"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1910"
ms.assetid: 0fef9727-e56f-451c-9255-ca4e5a26d7c6
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1910
L'argomento di tipo 'type' non è applicabile per l'attributo DefaultValue  
  
 Per parametri di tipo oggetto, l'argomento della classe <xref:System.Runtime.InteropServices.DefaultParameterValueAttribute> deve essere `null`, un tipo integrale, una virgola mobile, `bool`, `string`, `enum` o `char`. L'argomento non può essere di tipo <xref:System.Type> o qualsiasi tipo di matrice.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1910.  
  
```  
// CS1910.cs // compile with: /target:library using System.Runtime.InteropServices; public interface MyI { void Test([DefaultParameterValue(typeof(object))] object o);   // CS1910 }  
```