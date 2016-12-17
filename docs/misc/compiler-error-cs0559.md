---
title: "Errore del compilatore CS0559 | Microsoft Docs"
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
  - "CS0559"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0559"
ms.assetid: 37122001-8a55-4cf5-873b-68997e196893
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0559
Il tipo di parametro per l'operatore \+\+ o \-\- deve essere il tipo che lo contiene  
  
 La dichiarazione di metodo per un overload degli operatori deve seguire determinate linee guida. Per gli operatori \+ \+ e\-\- è necessario che il tipo del parametro sia uguale al tipo in cui l'operatore è sottoposto a overload.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0559:  
  
```  
// CS0559.cs // compile with: /target:library public class iii { public static implicit operator int(iii x) { return 0; } public static implicit operator iii(int x) { return null; } public static int operator ++(int aa)   // CS0559 // try the following line instead // public static iii operator ++(iii aa) { return (iii)0; } }  
```  
  
## Esempio  
 L'esempio seguente genera l'errore CS0559.  
  
```  
// CS0559_b.cs // compile with: /target:library public struct S { public static S operator ++(S? s) { return new S(); }   // CS0559 public static S operator --(S? s) { return new S(); }   // CS0559 } public struct T { // OK public static T operator --(T t) { return new T(); } public static T operator ++(T t) { return new T(); } public static T? operator --(T? t) { return new T(); } public static T? operator ++(T? t) { return new T(); } }  
```