---
title: "Avviso del compilatore (livello 3) CS0419 | Microsoft Docs"
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
  - "CS0419"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0419"
ms.assetid: de439ad5-422f-4ed6-96d6-69dade29c7b2
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0419
Riferimento ambiguo nell'attributo cref: 'Method Name1'.  Verrà usato 'Method Name2', ma è anche possibile che corrisponda ad altri overload, tra cui 'Method Name3'.  
  
 Non è stato possibile risolvere un riferimento in un commento della documentazione XML nel codice. Questa situazione può verificarsi se il metodo viene sottoposto a overload o se vengono trovati due identificatori diversi con lo stesso nome. Per risolvere il problema, usare un nome completo per evitare ambiguità nel riferimento oppure racchiudere l'overload specifico tra parentesi.  
  
 L'esempio seguente genera l'errore CS0419.  
  
```  
// cs0419.cs // compile with: /doc:x.xml /W:3 interface I { /// text for F(void) void F(); /// text for F(int) void F(int i); } /// text for class MyClass public class MyClass { /// <see cref="I.F"/> public static void MyMethod(int i) { } /* Try this instead: /// <see cref="I.F(int)"/> public static void MyMethod(int i) { } */ /// text for Main public static void Main () { } }  
```