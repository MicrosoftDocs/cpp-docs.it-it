---
title: "Avviso del compilatore (livello 1) CS1682 | Microsoft Docs"
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
  - "CS1682"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1682"
ms.assetid: 6f3b19ba-29f3-4472-941d-57f6fda6dc3a
caps.latest.revision: 15
caps.handback.revision: 15
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1682
Il riferimento al tipo 'type' dichiara di essere annidato in 'nested type', ma non è stato possibile trovarlo  
  
 Questo errore si verifica quando si importano riferimenti che non concordano con altri riferimenti o con il codice scritto dall'utente. Questo errore viene generato spesso quando si scrive codice che fa riferimento a una classe nei metadati e quindi si elimina quella classe o se ne modifica la definizione.  
  
## Esempio  
  
```  
// CS1682.cs // compile with: /target:library /keyfile:mykey.snk public class A { public class N1 {} }  
```  
  
## Esempio  
  
```  
// CS1682_b.cs // compile with: /target:library /reference:CS1682.dll using System; public class Ref { public static A A1() { return new A(); } public static A.N1 N1() { return new A.N1(); } }  
```  
  
## Esempio  
  
```  
// CS1682_c.cs // compile with: /target:library /keyfile:mykey.snk /out:CS1682.dll public class A { public void M1() {} }  
```  
  
## Esempio  
 L'esempio seguente genera l'errore CS1682.  
  
```  
// CS1682_d.cs // compile with: /reference:CS1682.dll /reference:CS1682_b.dll /W:1 // CS1682 expected class Tester { static void Main() { Ref.A1().M1(); } }  
```