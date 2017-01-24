---
title: "Errore del compilatore CS0448 | Microsoft Docs"
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
  - "CS0448"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0448"
ms.assetid: f577ab4c-1c8c-4a10-80a8-9ba9f66c3d25
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0448
Il tipo restituito per l'operatore \+\+ o \-\- deve essere o derivare dal tipo che lo contiene  
  
 Quando si esegue l'override dell'operatore `++` o `--`, deve essere restituito un tipo identico a quello del tipo contenitore oppure un tipo derivato da quest'ultimo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0448.  
  
```  
// CS0448.cs class C5 { public static int operator ++(C5 c) { return null; }   // CS0448 public static C5 operator --(C5 c) { return null; }   // OK public static void Main() {} }  
```  
  
## Esempio  
 L'esempio seguente genera l'errore CS0448.  
  
```  
// CS0448_b.cs public struct S { public static S? operator ++(S s) { return new S(); }   // CS0448 public static S? operator --(S s) { return new S(); }   // CS0448 } public struct T { // OK public static T operator --(T t) { return new T(); } public static T operator ++(T t) { return new T(); } public static T? operator --(T? t) { return new T(); } public static T? operator ++(T? t) { return new T(); } public static void Main() {} }  
```