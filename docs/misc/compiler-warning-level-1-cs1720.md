---
title: "Avviso del compilatore (livello 1) CS1720 | Microsoft Docs"
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
  - "CS1720"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1720"
ms.assetid: 97adc294-3a4c-4418-a4ed-ccff43125b62
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1720
L'espressione determinerà sempre un'eccezione System.NullReferenceException perché il valore predefinito di 'generic type' è null  
  
 Se si scrive un'espressione che include il valore predefinito di una variabile di tipo generico che è un tipo riferimento, ad esempio una classe, si verificherà questo errore. Si consideri la seguente espressione:  
  
```  
default(T).ToString()  
```  
  
 Poiché `T` è un tipo riferimento, il suo valore predefinito è null e se si tenta di applicarvi il metodo <xref:System.Object.ToString%2A> viene generata un'eccezione <xref:System.NullReferenceException>.  
  
## Esempio  
 Il vincolo del riferimento di classe sul tipo `T` assicura che `T` sia un tipo riferimento.  
  
 L'esempio seguente genera l'errore CS1720.  
  
```  
// CS1720.cs using System; public class Tester { public static void GenericClass<T>(T t1) where T : class { Console.WriteLine(default(T).ToString());  // CS1720 } public static void Main() {} }  
```